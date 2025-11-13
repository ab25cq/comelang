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
enum   anonymous_typeY1 { P_ALL 
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

enum { RE_UNUSED 
,RE_DOT 
,RE_BEGIN 
,RE_END 
,RE_QUESTIONMARK 
,RE_STAR 
,RE_PLUS 
,RE_CHAR 
,RE_CHAR_CLASS 
,RE_INV_CHAR_CLASS 
,RE_DIGIT 
,RE_NOT_DIGIT 
,RE_ALPHA 
,RE_NOT_ALPHA 
,RE_WHITESPACE 
,RE_NOT_WHITESPACE 
,RE_GROUP 
,RE_GROUP_END 
};

struct anonymous_typeX12
{
    struct regex_t* first;
    struct regex_t* last;
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
    struct regex_t* last;
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
enum   anonymous_typeY16 { _CLOCK_REALTIME=(0),
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
extern _Bool gComeC;
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
    _Bool mComplex;
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
    _Bool mDefferRightValue;
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
    char* end;
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
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
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

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
void come_heap_init(int come_debug);
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
_Bool xisspace(char c);
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
const char* matchgroup(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
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
int charp_index_regex(char* self, char* reg, int default_value);
int charp_rindex_regex(char* self, char* reg, int default_value);
int string_rindex_regex(char* self, char* reg, int default_value);
int string_index_regex(char* self, char* reg, int default_value);
_Bool charp_match(char* self, char* reg);
struct list$1char$ph* charp_scan(char* self, char* reg);
struct list$1char$ph* charp_split(char* self, char* reg);
char* string_sub(char* self, char* reg, char* replace);
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
int* __builtin_wstring(char* str);
int wchar_tp_length(int* str);
int wstring_length(int* str);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr);
int* charp_to_wstring(char* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int charp_index(char* str, char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wstring_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
char* wchar_t_to_string(int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr);
int* wstring_substring(int* str, int head, int tail);
int string_index_count(char* str, char* search_str, int count, int default_value);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_count(char* str, char* search_str, int count, int default_value);
char* string_strip(char* self);
char* wstring_to_string(int* wstr);
int* int_to_wstring(int self);
int* wstring_delete(int* str, int head, int tail);
int wstring_index(int* str, int* search_str, int default_value);
int wstring_rindex(int* str, int* search_str, int default_value);
int* wstring_reverse(int* str);
int* wstring_multiply(int* str, int n);
int* wstring_printable(int* str);
unsigned int wstring_get_hash_key(int* value);
int string_index(char* str, char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
struct list$1char$ph* string_split_str(char* self, char* str);
int* string_to_wstring(char* str);
char* charp_chomp(char* str);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
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
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, struct sInfo* info, _Bool no_static, _Bool cast_type);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_define_var(struct sType* type, char* name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
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
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, struct sInfo* info, _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
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
struct sNode* parse_union(char* type_name, char* union_attribute, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, char* attribute, struct sInfo* info);
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
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
void parse_function_attribute_skip_paren(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
static struct sVar* sVar_clone(struct sVar* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSemicolonNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__1 = (struct sSemicolonNode*)come_increment_ref_count(self);
    come_call_finalizer(sSemicolonNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sSemicolonNode_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__1;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSemicolonNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__2;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sLambdaNode* __result_obj__3;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    self->mFun=fun;
    __result_obj__3 = (struct sLambdaNode*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sLambdaNode_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__3;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__4;
    __result_obj__4 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLambdaNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__4 = come_decrement_ref_count(__result_obj__4, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__4;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun;
int right_value_max;
int right_value_num;
int block_level;
int max_conditional;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj1;
struct sType* __dec_obj27;
_Bool __result_obj__22;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    block_level=info->block_level;
    info->block_level=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    if(    self->mFun->mBlock    ) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 60, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj1=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj27=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
    __result_obj__22 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__22;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__5;
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
struct sType* __result_obj__20;
    if(    self==(void*)0    ) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__5;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(    self!=((void*)0)    ) {
        result->mComplex=self->mComplex;
    }
    if(    self!=((void*)0)    ) {
        result->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)    ) {
        result->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 41, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 52, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__20;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__6;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
struct list$1sType$ph* __result_obj__9;
    if(    self==((void*)0)    ) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__6, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__6;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6142, "struct list$1sType$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__7;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj5;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6161, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6171, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6181, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__8 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__10;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__11;
    if(    self==(void*)0    ) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__10;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__12;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6142, "struct list$1sNode$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj15;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj16;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6161, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6171, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj16=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6181, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj17=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__16;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__16;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6142, "struct list$1char$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 6147, "char*")));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 6150, "char*")));
        }
        it=it->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj21;
struct list_item$1char$ph* litem_4;
char* __dec_obj22;
struct list_item$1char$ph* litem_5;
char* __dec_obj23;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 6161, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj21=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 6171, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj22=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 6181, "struct list_item$1char$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj23=litem_5->item,
        litem_5->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj28;
struct list_item$1CVALUE$ph* litem_6;
struct CVALUE* __dec_obj29;
struct list_item$1CVALUE$ph* litem_7;
struct CVALUE* __dec_obj30;
struct list$1CVALUE$ph* __result_obj__21;
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 6239, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 6249, "struct list_item$1CVALUE$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 6259, "struct list_item$1CVALUE$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__21 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__21;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sFun* __dec_obj31;
struct sFunNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj31=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer(sFun_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__23 = (struct sFunNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFunNode_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__23;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFunNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__24;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun;
int right_value_num;
int right_value_max;
int max_conditional;
int block_level;
void* __right_value0 = (void*)0;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    if(    self->mFun->mBlock    ) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            add_come_code(info,"    come_heap_init(%d);\n",gComeDebug);
        }
        block_level=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        info->block_level=block_level;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAllVar!=((void*)0)    ) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool return_self_at_last, _Bool in_function){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sBlock* result;
int sline_top;
int block_level;
char* p_saved;
int sline_saved;
char* sname_saved;
char* __dec_obj32;
char* __dec_obj33;
struct map$2char$phchar$ph* __dec_obj34;
char* p;
int sline;
char* sname;
char* module_name;
struct list$1char$ph* params;
char* word;
char* __dec_obj35;
char* __dec_obj36;
void* __right_value2 = (void*)0;
_Bool _conditional_value_X0;
struct sBlock* __result_obj__33;
struct sClassModule* module;
struct sBlock* __result_obj__34;
struct map$2char$phchar$ph* __dec_obj38;
int i;
struct list$1char$ph* o2_saved;
char* it;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj42;
struct sNode* node;
char* __dec_obj43;
struct sBlock* __result_obj__62;
_Bool omit_semicolon;
char* __dec_obj47;
char* head;
struct sNode* value;
char* tail;
struct sNode* __dec_obj48;
struct sNode* node_31;
char* __dec_obj49;
struct sNode* node_32;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
struct sNode* __dec_obj51;
struct sNode* __dec_obj52;
struct sBlock* __result_obj__69;
_Bool omit_semicolon_33;
char* p_34;
char* head_35;
char* source;
struct sNode* node_36;
struct sBlock* __result_obj__70;
struct sBlock* __result_obj__71;
node_32 = (void*)0;
    result=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 140, "struct sBlock*"))));
    sline_top=info->sline_top;
    info->sline_top=info->sline;
    block_level=info->block_level;
    info->block_level++;
    if(    *info->p==123    ) {
        p_saved=((void*)0);
        sline_saved=0;
        sname_saved=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            p_saved            ) {
                if(                *info->p==0                ) {
                    info->p=p_saved;
                    info->sline=sline_saved;
                    __right_value0 = (void*)0;
                    __dec_obj32=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
                    p_saved=((void*)0);
                    sline_saved=0;
                    __dec_obj33=sname_saved,
                    sname_saved=((void*)0);
                    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0);
                    __dec_obj34=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p=info->p;
            sline=info->sline;
            __right_value0 = (void*)0;
            sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123            ) {
                info->sline_top=sline;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0            ) {
                __right_value0 = (void*)0;
                ((char*)(__right_value0=parse_word(info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                __right_value0 = (void*)0;
                module_name=(char*)come_increment_ref_count(parse_word(info));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                params=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 194, "struct list$1char$ph*"))));
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        __right_value0 = (void*)0;
                        word=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params,(char*)come_increment_ref_count(word));
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0                        ) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                if(                *info->p==59                ) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved=info->p;
                sline_saved=info->sline;
                __right_value0 = (void*)0;
                __dec_obj35=sname_saved,
                sname_saved=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj36=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name));
                __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
                info->sline=0;
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X0=(((struct sClassModule*)(__right_value2=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value1=__builtin_string(module_name))))))==((void*)0)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X0;})                ) {
                    err_msg(info,"module not found");
                    __result_obj__33 = (void*)come_increment_ref_count(((void*)0));
                    (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__33;
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                module=((struct sClassModule*)(__right_value2=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value1=__builtin_string(module_name))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                list$1char$ph_length(module->mParams)!=list$1char$ph_length(params)                ) {
                    err_msg(info,"invalid parametor number");
                    __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
                    (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__34, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__34;
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj38=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 248, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                i=0;
                for(                o2_saved=(struct list$1char$ph*)come_increment_ref_count(module->mParams),it=list$1char$ph_begin(o2_saved)                ;                !list$1char$ph_end(o2_saved)                ;                it=list$1char$ph_next(o2_saved)                ){
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value4=list$1char$ph_operator_load_element(params,i))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                    i++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=module->mText;
                info->sline=module->mSLine;
                __right_value0 = (void*)0;
                __dec_obj42=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module->mSName));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
                (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(statment(info));
            __right_value0 = (void*)0;
            __dec_obj43=info->sname,
            info->sname=(char*)come_increment_ref_count(node->sname(node->_protocol_obj));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
            info->sline=node->sline(node->_protocol_obj);
            if(            node==((void*)0)            ) {
                err_msg(info,"Invalid expression");
                __result_obj__62 = (void*)come_increment_ref_count(((void*)0));
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__62;
            }
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node));
            parse_sharp_v5(info);
            if(            node->terminated(node->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon=(_Bool)1;
            if(            node->terminated(node->_protocol_obj)            ) {
                omit_semicolon=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                result->mOmitSemicolon=omit_semicolon;
                if(                omit_semicolon&&in_function                ) {
                    list$1sNode$ph_delete(result->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p;
                    info->sline=sline;
                    __right_value0 = (void*)0;
                    __dec_obj47=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
                    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
                    head=info->p;
                    __right_value0 = (void*)0;
                    value=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail=info->p;
                    __right_value0 = (void*)0;
                    __dec_obj48=value,
                    value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
                    (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0, (void*)0) :0);
                    char buf[tail-head+1];
                    memset(&buf, 0, sizeof(char)                    *(tail-head+1)                    );
                    memcpy(buf,head,tail-head);
                    buf[tail-head]=0;
                    expected_next_character(125,info);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    node_31=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(__builtin_string(buf)),info));
                    list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_31));
                    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                }
            }
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(        p_saved        ) {
            if(            info->p==0            ) {
                info->p=p_saved;
                info->sline=sline_saved;
                __right_value0 = (void*)0;
                __dec_obj49=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
                p_saved=((void*)0);
                sline_saved=0;
            }
        }
        (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 351, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value1=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 351, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __dec_obj51=node_32,
            node_32=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_32));
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj52=node_32,
            node_32=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_32==((void*)0)            ) {
                err_msg(info,"Invalid expression");
                __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
                ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__69, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__69;
            }
            parse_sharp_v5(info);
            if(            node_32->terminated(node_32->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_33=(_Bool)1;
            if(            node_32->terminated(node_32->_protocol_obj)            ) {
                omit_semicolon_33=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_33=(_Bool)0;
            }
            parse_sharp_v5(info);
            result->mOmitSemicolon=omit_semicolon_33;
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_32));
        }
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    return_self_at_last    ) {
        p_34=info->p;
        head_35=info->head;
        __right_value0 = (void*)0;
        source=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source;
        info->head=source;
        __right_value0 = (void*)0;
        node_36=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_36==((void*)0)        ) {
            err_msg(info,"Invalid expression");
            __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
            (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, __result_obj__70, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__70;
        }
        list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_36));
        info->p=p_34;
        info->head=head_35;
        (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    info->block_level=block_level;
    __result_obj__71 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__71, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__71;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i;
int i_8;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_8=0    ;    i_8<self->size    ;    i_8++    ){
        if(        self->item_existance[i_8]        ) {
            if(            1            ) {
                (self->keys[i_8] = come_decrement_ref_count(self->keys[i_8], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value;
unsigned int hash;
unsigned int it;
struct sClassModule* __result_obj__25;
struct sClassModule* __result_obj__26;
struct sClassModule* __result_obj__27;
struct sClassModule* __result_obj__28;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClassModule*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__25 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__25;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__26 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__28, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__28;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)    ) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)    ) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value;
unsigned int hash;
unsigned int it;
struct sClassModule* __result_obj__29;
struct sClassModule* __result_obj__30;
struct sClassModule* __result_obj__31;
struct sClassModule* __result_obj__32;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClassModule*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__29 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__29, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__29;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__30 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__30, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__32;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value0 = (void*)0;
int i;
void* __right_value1 = (void*)0;
struct list$1char$ph* __dec_obj37;
struct map$2char$phchar$ph* __result_obj__35;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 7066, "char**"))));
    __right_value0 = (void*)0;
    self->items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 7067, "char**"))));
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 7068, "_Bool*"))));
    for(    i=0    ;    i<128    ;    i++    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj37=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 7078, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__35 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__35;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i;
int i_9;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_9=0    ;    i_9<self->size    ;    i_9++    ){
        if(        self->item_existance[i_9]        ) {
            if(            1            ) {
                (self->keys[i_9] = come_decrement_ref_count(self->keys[i_9], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result;
char* __result_obj__36;
char* __result_obj__37;
char* result_10;
char* __result_obj__38;
result = (void*)0;
result_10 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__36 = result;
        return __result_obj__36;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__37 = self->it->item;
        return __result_obj__37;
    }
    memset(&result_10,0,sizeof(char*));
    __result_obj__38 = result_10;
    return __result_obj__38;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result;
char* __result_obj__39;
char* __result_obj__40;
char* result_11;
char* __result_obj__41;
result = (void*)0;
result_11 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__39 = result;
        return __result_obj__39;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_11,0,sizeof(char*));
    __result_obj__41 = result_11;
    return __result_obj__41;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash;
unsigned int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phchar$ph* __result_obj__57;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
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
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=(_Bool)1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__57 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__57;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
char** items;
_Bool* item_existance;
int len;
char* it;
char* default_value;
char* it2;
unsigned int hash;
int n;
char* default_value_14;
default_value = (void*)0;
default_value_14 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 7346, "char**"))));
    __right_value0 = (void*)0;
    items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 7347, "char**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 7348, "_Bool*"))));
    len=0;
    for(    it=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it=map$2char$phchar$ph_next(self)    ){
        memset(&default_value,0,sizeof(char*));
        __right_value0 = (void*)0;
        it2=((char*)(__right_value0=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        (_Bool)1        ) {
            if(            item_existance[n]            ) {
                n++;
                if(                n>=size                ) {
                    n=0;
                }
                else if(                n==hash                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                __right_value0 = (void*)0;
                items[n]=((char*)(__right_value0=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_14))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                len++;
                (default_value_14 = come_decrement_ref_count(default_value_14, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (default_value_14 = come_decrement_ref_count(default_value_14, (void*)0, (void*)0, 0, 0, (void*)0));
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
char* result;
char* __result_obj__42;
char* __result_obj__43;
char* result_12;
char* __result_obj__44;
result = (void*)0;
result_12 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__42 = result;
        return __result_obj__42;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__43 = self->key_list->it->item;
        return __result_obj__43;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__44 = result_12;
    return __result_obj__44;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result;
char* __result_obj__45;
char* __result_obj__46;
char* result_13;
char* __result_obj__47;
result = (void*)0;
result_13 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__45 = result;
        return __result_obj__45;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__46 = self->key_list->it->item;
        return __result_obj__46;
    }
    memset(&result_13,0,sizeof(char*));
    __result_obj__47 = result_13;
    return __result_obj__47;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash;
unsigned int it;
char* __result_obj__48;
char* __result_obj__49;
char* __result_obj__50;
char* __result_obj__51;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__48 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__48;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__49 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__49;
            }
        }
        else {
            __result_obj__50 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__50;
        }
    }
    __result_obj__51 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__51;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__55;
    it2=0;
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        string_equals(it->item,item)        ) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp;
struct list$1char$ph* __result_obj__52;
struct list_item$1char$ph* it;
int i;
struct list_item$1char$ph* prev_it;
struct list_item$1char$ph* it_15;
int i_16;
struct list_item$1char$ph* prev_it_17;
struct list_item$1char$ph* it_18;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_19;
struct list_item$1char$ph* prev_it_20;
struct list$1char$ph* __result_obj__54;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__52 = self;
        return __result_obj__52;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it=self->head;
        i=0;
        while(        it!=((void*)0)        ) {
            if(            i<tail            ) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i==tail            ) {
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
    else if(    tail==self->len    ) {
        it_15=self->head;
        i_16=0;
        while(        it_15!=((void*)0)        ) {
            if(            i_16==head            ) {
                self->tail=it_15->prev;
                self->tail->next=((void*)0);
            }
            if(            i_16>=head            ) {
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
        while(        it_18!=((void*)0)        ) {
            if(            i_19==head            ) {
                head_prev_it=it_18->prev;
            }
            if(            i_19==tail            ) {
                tail_it=it_18;
            }
            if(            i_19>=head&&i_19<tail            ) {
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
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__54 = self;
    return __result_obj__54;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__53;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj39;
struct list_item$1char$ph* litem_21;
char* __dec_obj40;
struct list_item$1char$ph* litem_22;
char* __dec_obj41;
struct list$1char$ph* __result_obj__56;
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 6239, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj39=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 6249, "struct list_item$1char$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj40=litem_21->item,
        litem_21->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 6259, "struct list_item$1char$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj41=litem_22->item,
        litem_22->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__56 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__56;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it;
int i;
char* __result_obj__58;
char* default_value;
char* __result_obj__59;
default_value = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__58 = (char*)come_increment_ref_count(it->item);
            (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__58;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__59 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__59;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it;
int i;
char* __result_obj__60;
char* default_value;
char* __result_obj__61;
default_value = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__60 = (char*)come_increment_ref_count(it->item);
            (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__60;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__61 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__61;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj44;
struct list_item$1sNode$ph* litem_23;
struct sNode* __dec_obj45;
struct list_item$1sNode$ph* litem_24;
struct sNode* __dec_obj46;
struct list$1sNode$ph* __result_obj__63;
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6239, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6249, "struct list_item$1sNode$ph*"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        __dec_obj45=litem_23->item,
        litem_23->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 6259, "struct list_item$1sNode$ph*"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        __dec_obj46=litem_24->item,
        litem_24->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result_obj__63 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__63;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp;
struct list$1sNode$ph* __result_obj__64;
struct list_item$1sNode$ph* it;
int i;
struct list_item$1sNode$ph* prev_it;
struct list_item$1sNode$ph* it_25;
int i_26;
struct list_item$1sNode$ph* prev_it_27;
struct list_item$1sNode$ph* it_28;
struct list_item$1sNode$ph* head_prev_it;
struct list_item$1sNode$ph* tail_it;
int i_29;
struct list_item$1sNode$ph* prev_it_30;
struct list$1sNode$ph* __result_obj__66;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it=self->head;
        i=0;
        while(        it!=((void*)0)        ) {
            if(            i<tail            ) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i==tail            ) {
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
    else if(    tail==self->len    ) {
        it_25=self->head;
        i_26=0;
        while(        it_25!=((void*)0)        ) {
            if(            i_26==head            ) {
                self->tail=it_25->prev;
                self->tail->next=((void*)0);
            }
            if(            i_26>=head            ) {
                prev_it_27=it_25;
                it_25=it_25->next;
                i_26++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_25=it_25->next;
                i_26++;
            }
        }
    }
    else {
        it_28=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_29=0;
        while(        it_28!=((void*)0)        ) {
            if(            i_29==head            ) {
                head_prev_it=it_28->prev;
            }
            if(            i_29==tail            ) {
                tail_it=it_28;
            }
            if(            i_29>=head&&i_29<tail            ) {
                prev_it_30=it_28;
                it_28=it_28->next;
                i_29++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_28=it_28->next;
                i_29++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__66 = self;
    return __result_obj__66;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__65;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__67;
void* __right_value0 = (void*)0;
struct sSemicolonNode* result;
char* __dec_obj50;
struct sSemicolonNode* __result_obj__68;
    if(    self==(void*)0    ) {
        __result_obj__67 = (void*)0;
        return __result_obj__67;
    }
    result=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj50=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__68 = result;
    come_call_finalizer(sSemicolonNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__68;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
_Bool inhibits_output_code;
struct sVarTable* old_table;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sVarTable* __dec_obj53;
struct sVarTable* current_loop_vtable;
int i;
struct list$1char$ph* o2_saved;
char* name;
struct sType* type;
int block_level;
int i_37;
struct list$1sNode$ph* o2_saved_38;
struct sNode* node;
int num_conditional;
struct list$1sRightValueObject$ph* right_value_objects;
struct list$1sRightValueObject$ph* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
int stack_num_before;
int sline;
char* sname;
char* __dec_obj57;
_Bool Value;
char* __dec_obj58;
struct list$1sRightValueObject$ph* __dec_obj59;
struct list$1sVar$ph* o2_saved_41;
struct sVar* it;
struct list$1sVar$ph* __dec_obj60;
memset(&i, 0, sizeof(int));
memset(&i_37, 0, sizeof(int));
    inhibits_output_code=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table=info->lv_table;
    if(    !no_var_table    ) {
        __dec_obj53=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 421, "struct sVarTable*")),(_Bool)0,old_table));
        come_call_finalizer(sVarTable_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable=info->current_loop_vtable;
    if(    loop_block    ) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names    ) {
        for(        o2_saved=param_names,name=list$1char$ph_begin(o2_saved)        ;        !list$1char$ph_end(o2_saved)        ;        name=list$1char$ph_next(o2_saved)        ){
            __right_value0 = (void*)0;
            type=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i));
            type->mAllocaValue=(_Bool)0;
            __right_value0 = (void*)0;
            add_variable_to_table(name,(struct sType*)come_increment_ref_count(sType_clone(type)),info,(_Bool)1,(_Bool)0);
            i++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    block_level=info->block_level;
    if(    !no_var_table    ) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0    ) {
    }
    else {
        for(        o2_saved_38=(struct list$1sNode$ph*)come_increment_ref_count(block->mNodes),node=list$1sNode$ph_begin(o2_saved_38)        ;        !list$1sNode$ph_end(o2_saved_38)        ;        node=list$1sNode$ph_next(o2_saved_38)        ){
            num_conditional=info->num_conditional;
            if(            info->block_level==1            ) {
                info->num_conditional=0;
            }
            right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj54=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 454, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __dec_obj55=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj56=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            stack_num_before=list$1CVALUE$ph_length(info->stack);
            sline=info->sline;
            __right_value0 = (void*)0;
            sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node->sline(node->_protocol_obj);
            __right_value0 = (void*)0;
            __dec_obj57=info->sname,
            info->sname=(char*)come_increment_ref_count(node->sname(node->_protocol_obj));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                __right_value0 = (void*)0;
                puts(((char*)(__right_value0=node->kind(node->_protocol_obj))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
            info->sline=sline;
            __right_value0 = (void*)0;
            __dec_obj58=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before);
            free_right_value_objects(info);
            if(            info->right_value_objects            ) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj59=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            i_37++;
            if(            info->block_level==1            ) {
                info->num_conditional=num_conditional;
            }
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code    ) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level==0        ) {
            for(            o2_saved_41=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),it=list$1sVar$ph_begin(o2_saved_41)            ;            !list$1sVar$ph_end(o2_saved_41)            ;            it=list$1sVar$ph_next(o2_saved_41)            ){
                __right_value0 = (void*)0;
                free_object((struct sType*)come_increment_ref_count(sType_clone(it->mType)),it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __dec_obj60=info->match_it_var,
            info->match_it_var=((void*)0);
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    info->lv_table=old_table;
    info->block_level=block_level;
    if(    string_operator_equals(info->come_fun->mName,"main")    ) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable;
    info->inhibits_output_code=inhibits_output_code;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__72;
struct sType* default_value;
struct sType* __result_obj__73;
default_value = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__72 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__72, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__72;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__73 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__73;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__74;
struct sType* default_value;
struct sType* __result_obj__75;
default_value = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__74 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__74, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__74;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__75 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__75, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__75;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result;
struct sNode* __result_obj__76;
struct sNode* __result_obj__77;
struct sNode* result_39;
struct sNode* __result_obj__78;
result = (void*)0;
result_39 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__76 = result;
        return __result_obj__76;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__77 = self->it->item;
        return __result_obj__77;
    }
    memset(&result_39,0,sizeof(struct sNode*));
    __result_obj__78 = result_39;
    return __result_obj__78;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result;
struct sNode* __result_obj__79;
struct sNode* __result_obj__80;
struct sNode* result_40;
struct sNode* __result_obj__81;
result = (void*)0;
result_40 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__79 = result;
        return __result_obj__79;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__80 = self->it->item;
        return __result_obj__80;
    }
    memset(&result_40,0,sizeof(struct sNode*));
    __result_obj__81 = result_40;
    return __result_obj__81;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__82 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__82, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__82;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
struct list_item$1sRightValueObject$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)    ) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mObjType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mObjValue!=((void*)0)    ) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
struct list_item$1sRightValueObject$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
struct list_item$1sRightValueObject$ph* prev_it;
struct list$1sRightValueObject$ph* __result_obj__83;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__84;
struct sVar* __result_obj__85;
struct sVar* result_42;
struct sVar* __result_obj__86;
result = (void*)0;
result_42 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__84 = result;
        return __result_obj__84;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__85 = self->it->item;
        return __result_obj__85;
    }
    memset(&result_42,0,sizeof(struct sVar*));
    __result_obj__86 = result_42;
    return __result_obj__86;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__87;
struct sVar* __result_obj__88;
struct sVar* result_43;
struct sVar* __result_obj__89;
result = (void*)0;
result_43 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__87 = result;
        return __result_obj__87;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_43,0,sizeof(struct sVar*));
    __result_obj__89 = result_43;
    return __result_obj__89;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top    ) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top    ) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info, _Bool return_self_at_last){
char* head;
_Bool dquort;
_Bool squort;
int sline;
int nest;
char* tail;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __result_obj__90;
    head=info->p;
    if(    *info->p==123    ) {
        info->p++;
        dquort=(_Bool)0;
        squort=(_Bool)0;
        sline=0;
        nest=0;
        while(        1        ) {
            if(            dquort            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34                ) {
                    info->p++;
                    dquort=!dquort;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(            squort            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39                ) {
                    info->p++;
                    squort=!squort;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39            ) {
                sline=info->sline;
                info->p++;
                squort=!squort;
            }
            else if(            *info->p==34            ) {
                sline=info->sline;
                info->p++;
                dquort=!dquort;
            }
            else if(            *info->p==35            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123            ) {
                info->p++;
                nest++;
            }
            else if(            *info->p==125            ) {
                info->p++;
                if(                nest==0                ) {
                    break;
                }
                nest--;
            }
            else if(            *info->p==0            ) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
        exit(1);
    }
    tail=info->p;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 658, "struct buffer*"))));
    buffer_append(buf,head,tail-head-1);
    if(    return_self_at_last    ) {
        buffer_append_str(buf,"return self; }");
    }
    else {
        buffer_append_str(buf,"}");
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__90;
}

void parse_function_attribute_skip_paren(struct sInfo* info){
int nest;
    skip_spaces_and_lf(info);
    if(    *info->p==40    ) {
        nest=0;
        while(        1        ) {
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(                nest==0                ) {
                    break;
                }
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* asm_fun_name;
struct buffer* result;
char* head;
char* tail;
char* head_44;
char* tail_45;
char* head_46;
char* tail_47;
char* head_48;
char* tail_49;
int len;
_Bool in_dquort;
int brace_num;
char* head_50;
char* tail_51;
char* head_52;
char* tail_53;
char* head_54;
char* tail_55;
char* head_56;
char* tail_57;
char* head_58;
char* tail_59;
char* head_60;
char* tail_61;
char* head_62;
char* tail_63;
char* head_64;
char* tail_65;
char* head_66;
char* tail_67;
char* head_68;
char* tail_69;
char* head_70;
char* tail_71;
char* head_72;
char* tail_73;
char* head_74;
char* tail_75;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__92;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 707, "struct buffer*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 708, "struct buffer*"))));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute__",info)        ) {
            head=info->p;
            info->p+=strlen("__attribute__");
            parse_function_attribute_skip_paren(info);
            tail=info->p;
            buffer_append(result,head,tail-head);
        }
        else if(        parsecmp("_Noreturn",info)        ) {
            head_44=info->p;
            info->p+=strlen("_Noreturn");
            parse_function_attribute_skip_paren(info);
            tail_45=info->p;
            buffer_append(result,head_44,tail_45-head_44);
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            head_46=info->p;
            info->p+=strlen("_Nonnull");
            parse_function_attribute_skip_paren(info);
            tail_47=info->p;
            buffer_append(result,head_46,tail_47-head_46);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            head_48=info->p;
            info->p+=strlen("__noreturn");
            parse_function_attribute_skip_paren(info);
            tail_49=info->p;
            buffer_append(result,head_48,tail_49-head_48);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            ((info->end-info->p)>=strlen("__ASMNAME"))&&memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(            *info->p==40            ) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(                    in_dquort                    ) {
                        buffer_append_char(asm_fun_name,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num--;
                        if(                        brace_num==0                        ) {
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
        else if(        parsecmp("__attribute_pure__",info)        ) {
            head_50=info->p;
            info->p+=strlen("__attribute_pure__");
            parse_function_attribute_skip_paren(info);
            tail_51=info->p;
            buffer_append(result,head_50,tail_51-head_50);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            head_52=info->p;
            info->p+=strlen("__malloc_like");
            parse_function_attribute_skip_paren(info);
            tail_53=info->p;
            buffer_append(result,head_52,tail_53-head_52);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            head_54=info->p;
            info->p+=strlen("__result_use_check");
            parse_function_attribute_skip_paren(info);
            tail_55=info->p;
            buffer_append(result,head_54,tail_55-head_54);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            head_56=info->p;
            info->p+=strlen("__alloc_size2");
            parse_function_attribute_skip_paren(info);
            tail_57=info->p;
            buffer_append(result,head_56,tail_57-head_56);
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            head_58=info->p;
            info->p+=strlen("__alloc_size");
            parse_function_attribute_skip_paren(info);
            tail_59=info->p;
            buffer_append(result,head_58,tail_59-head_58);
        }
        else if(        parsecmp("__nonnull",info)        ) {
            head_60=info->p;
            info->p+=strlen("__nonnull");
            parse_function_attribute_skip_paren(info);
            tail_61=info->p;
            buffer_append(result,head_60,tail_61-head_60);
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            head_62=info->p;
            info->p+=strlen("__alloc_align");
            parse_function_attribute_skip_paren(info);
            tail_63=info->p;
            buffer_append(result,head_62,tail_63-head_62);
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            head_64=info->p;
            info->p+=strlen("__attribute_malloc__");
            parse_function_attribute_skip_paren(info);
            tail_65=info->p;
            buffer_append(result,head_64,tail_65-head_64);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            head_66=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            parse_function_attribute_skip_paren(info);
            tail_67=info->p;
            buffer_append(result,head_66,tail_67-head_66);
        }
        else if(        parsecmp("__wur",info)        ) {
            head_68=info->p;
            info->p+=strlen("__wur");
            parse_function_attribute_skip_paren(info);
            tail_69=info->p;
            buffer_append(result,head_68,tail_69-head_68);
        }
        else if(        parsecmp("__pure2",info)        ) {
            head_70=info->p;
            info->p+=strlen("__pure2");
            parse_function_attribute_skip_paren(info);
            tail_71=info->p;
            buffer_append(result,head_70,tail_71-head_70);
        }
        else if(        parsecmp("__pure",info)        ) {
            head_72=info->p;
            info->p+=strlen("__pure");
            parse_function_attribute_skip_paren(info);
            tail_73=info->p;
            buffer_append(result,head_72,tail_73-head_72);
        }
        else if(        parsecmp("__asm",info)        ) {
            head_74=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            parse_function_attribute_skip_paren(info);
            tail_75=info->p;
            buffer_append(result,head_74,tail_75-head_74);
        }
        else {
            break;
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__92 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value3=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 931, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(buffer_to_string(result))))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__92, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__92;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj61;
char* __dec_obj62;
struct tuple2$2char$phchar$ph* __result_obj__91;
    __dec_obj61=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj62=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__91 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__91;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj63;
char* head;
int head_sline;
char* buf;
struct sNode* node;
_Bool Value;
    while(    *info->p    ) {
        __dec_obj63=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 938, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
        parse_sharp_v5(info);
        head=info->p;
        head_sline=info->sline;
        __right_value0 = (void*)0;
        buf=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(top_level_v99(buf,head,head_sline,info));
        parse_sharp_v5(info);
        while(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node!=((void*)0)        ) {
            Value=node_compile(node,info);
            if(            !Value            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value0 = (void*)0;
char* name;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sType* result_type;
struct list$1sType$ph* param_types;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
void* __right_value3 = (void*)0;
struct sFun* fun;
char* name_79;
struct sType* result_type_80;
struct list$1sType$ph* param_types_81;
struct list$1char$ph* param_names_82;
struct list$1char$ph* param_default_parametors_83;
struct sFun* fun_84;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        __right_value0 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 988, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 989, "struct list$1sType$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 990, "struct list$1char$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 991, "struct list$1char$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 992, "struct sFun*")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name)),(struct sFun*)come_increment_ref_count(fun));
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    {
        __right_value0 = (void*)0;
        name_79=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        result_type_80=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1001, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types_81=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1002, "struct list$1sType$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names_82=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1003, "struct list$1char$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors_83=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1004, "struct list$1char$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        fun_84=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1005, "struct sFun*")),(char*)come_increment_ref_count(name_79),(struct sType*)come_increment_ref_count(result_type_80),(struct list$1sType$ph*)come_increment_ref_count(param_types_81),(struct list$1char$ph*)come_increment_ref_count(param_names_82),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_83),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_79)),(struct sFun*)come_increment_ref_count(fun_84));
        (name_79 = come_decrement_ref_count(name_79, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash;
unsigned int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsFun$ph* __result_obj__103;
    if(    self->len*10>=self->size    ) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
                self->items[it]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=(_Bool)1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__103 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__103;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sFun** items;
_Bool* item_existance;
int len;
char* it;
struct sFun* default_value;
struct sFun* it2;
unsigned int hash;
int n;
struct sFun* default_value_78;
default_value = (void*)0;
default_value_78 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 7346, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value0=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size)), "/usr/local/include/neo-c.h", 7347, "struct sFun**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 7348, "_Bool*"))));
    len=0;
    for(    it=map$2char$phsFun$ph_begin(self)    ;    !map$2char$phsFun$ph_end(self)    ;    it=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sFun*));
        __right_value0 = (void*)0;
        it2=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value))));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        (_Bool)1        ) {
            if(            item_existance[n]            ) {
                n++;
                if(                n>=size                ) {
                    n=0;
                }
                else if(                n==hash                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                __right_value0 = (void*)0;
                items[n]=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value_78))));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sFun_finalize, default_value_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result;
char* __result_obj__93;
char* __result_obj__94;
char* result_76;
char* __result_obj__95;
result = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__93 = result;
        return __result_obj__93;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__94 = self->key_list->it->item;
        return __result_obj__94;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__95 = result_76;
    return __result_obj__95;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result;
char* __result_obj__96;
char* __result_obj__97;
char* result_77;
char* __result_obj__98;
result = (void*)0;
result_77 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__96 = result;
        return __result_obj__96;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__97 = self->key_list->it->item;
        return __result_obj__97;
    }
    memset(&result_77,0,sizeof(char*));
    __result_obj__98 = result_77;
    return __result_obj__98;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__99;
struct sFun* __result_obj__100;
struct sFun* __result_obj__101;
struct sFun* __result_obj__102;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__99 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__99, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__99;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__100 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__100, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__100;
            }
        }
        else {
            __result_obj__101 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__101, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__101;
        }
    }
    __result_obj__102 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__102, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__102;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head;
_Bool is_type_name_flag;
int sline;
_Bool define_struct_nobody;
char* p;
int sline_85;
void* __right_value0 = (void*)0;
char* word;
_Bool uniq_class;
char* p_86;
char* buf2;
_Bool define_function_pointer_result_function;
_Bool define_variable_between_brace;
char* p_87;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type=0;
char* fun_name=0;
_Bool err=0;
char* word_88;
_Bool define_function_flag;
char* p_89;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_90=0;
char* fun_name_91=0;
_Bool err_92=0;
char* word_93;
char* __dec_obj64;
char* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
_Bool define_variable;
char* p_94;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_95=0;
char* fun_name_96=0;
_Bool err_97=0;
char* word_98;
char* word_99;
char* p_100;
char* word_101;
char* __dec_obj68;
char* buf2_102;
struct sNode* __result_obj__104;
char* word_103;
char* word_104;
struct sNode* node;
struct sNode* __result_obj__105;
struct sNode* __result_obj__106;
char* header_head;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_105=0;
char* fun_name_106=0;
_Bool err_107=0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1char$ph* param_names;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type=0;
char* param_name=0;
_Bool err_108=0;
struct list$1sType$ph* param_types2;
struct list$1char$ph* param_names2;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_111=0;
char* param_name_112=0;
_Bool err_113=0;
char* header_tail;
void* __right_value2 = (void*)0;
struct sType* result_type2;
struct sType* __dec_obj72;
struct list$1sType$ph* __dec_obj73;
struct list$1char$ph* __dec_obj74;
_Bool var_args;
struct list$1char$ph* param_default_parametors;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
struct sNode* result;
struct sNode* __result_obj__136;
char* struct_attribute0;
char* word_121;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
char* struct_attribute;
char* __dec_obj105;
struct sNode* __result_obj__137;
char* struct_attribute_122;
char* __dec_obj106;
struct sNode* __result_obj__138;
char* struct_attribute_123;
char* __dec_obj107;
struct sNode* __result_obj__139;
struct sNode* node_124;
struct sNode* __result_obj__140;
struct sNode* __result_obj__141;
struct sNode* __result_obj__142;
struct sNode* node_125;
struct sNode* __result_obj__143;
struct sNode* node_126;
char* source_tail;
struct buffer* header;
struct sNode* __result_obj__144;
char* buf2_127;
struct sNode* __result_obj__145;
    info->in_top_level=(_Bool)1;
    source_head=info->p;
    is_type_name_flag=is_type_name(buf,info);
    sline=info->sline;
    define_struct_nobody=(_Bool)0;
    {
        p=info->p;
        sline_85=info->sline;
        if(        charp_operator_equals(buf,"struct")        ) {
            if(            isalpha(*info->p)||*info->p==95            ) {
                word=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59                ) {
                    define_struct_nobody=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_85;
    }
    uniq_class=(_Bool)0;
    if(    charp_operator_equals(buf,"uniq")    ) {
        p_86=info->p;
        info->p=head;
        __right_value0 = (void*)0;
        (void)((char*)(__right_value0=parse_word(info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            buf2=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(buf2,"class")            ) {
                uniq_class=(_Bool)1;
            }
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p_86;
        info->sline=sline;
    }
    define_function_pointer_result_function=(_Bool)0;
    define_variable_between_brace=(_Bool)0;
    if(    is_type_name_flag&&!uniq_class    ) {
        p_87=info->p;
        info->p=head;
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42                ) {
                    define_function_pointer_result_function=(_Bool)1;
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        word_88=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_88,info)&&*info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                            }
                            else {
                                define_variable_between_brace=(_Bool)1;
                            }
                        }
                        (word_88 = come_decrement_ref_count(word_88, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=head;
        info->sline=sline;
    }
    define_function_flag=(_Bool)0;
    if(    is_type_name_flag&&!define_function_pointer_result_function&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class    ) {
        p_89=info->p;
        info->p=head;
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type_90=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_91=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_92=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name_91 = come_decrement_ref_count(fun_name_91, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        !info->define_struct        ) {
            info->define_struct=(_Bool)0;
            word_93=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj64=word_93,
                word_93=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
                if(                string_operator_equals(word_93,"extern")                ) {
                    __right_value0 = (void*)0;
                    __dec_obj65=word_93,
                    word_93=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            else {
                __dec_obj66=word_93,
                word_93=((void*)0);
                __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_93            ) {
                if(                is_type_name(word_93,info)                ) {
                    while(                    *info->p==42                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93                    ) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj67=word_93,
                        word_93=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                }
                if(                strlen(word_93)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))                ) {
                    if(                    is_type_name_flag                    ) {
                        define_function_flag=(_Bool)1;
                    }
                }
            }
            (word_93 = come_decrement_ref_count(word_93, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p_89;
        info->sline=sline;
    }
    define_variable=(_Bool)1;
    if(    is_type_name_flag&&!define_function_pointer_result_function&&!uniq_class    ) {
        p_94=info->p;
        info->p=head;
        if(        !is_type_name_flag        ) {
            define_variable=(_Bool)0;
        }
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type_95=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_97=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        word_98=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                                define_variable=(_Bool)1;
                            }
                        }
                        (word_98 = come_decrement_ref_count(word_98, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                else if(                isalpha(*info->p)||*info->p==95                ) {
                    __right_value0 = (void*)0;
                    word_99=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_99,info)&&*info->p!=40                        ) {
                            define_variable=(_Bool)1;
                        }
                    }
                    (word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name_96 = come_decrement_ref_count(fun_name_96, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable=(_Bool)0;
        }
        else if(        define_variable        ) {
        }
        else {
            if(            !(isalpha(*info->p)||*info->p==95)            ) {
                define_variable=(_Bool)0;
            }
            while(            isalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable=(_Bool)0;
            }
        }
        info->p=p_94;
        info->sline=sline;
    }
    else {
        define_variable=(_Bool)0;
    }
    if(    !define_function_pointer_result_function    ) {
        p_100=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")        ) {
            __right_value0 = (void*)0;
            ((char*)(__right_value0=parse_struct_attribute(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                ((char*)(__right_value0=parse_word(info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                isalpha(*info->p)||*info->p==95                ) {
                    __right_value0 = (void*)0;
                    word_101=(char*)come_increment_ref_count(parse_word(info));
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj68=word_101,
                        word_101=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        string_operator_equals(word_101,"extends")                        ) {
                            define_variable=(_Bool)0;
                        }
                    }
                    (word_101 = come_decrement_ref_count(word_101, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable=(_Bool)0;
        }
        else if(        define_variable        ) {
        }
        else {
            if(            !(isalpha(*info->p)||*info->p==95)            ) {
                define_variable=(_Bool)0;
            }
            while(            isalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable=(_Bool)0;
            }
        }
        info->p=p_100;
        info->sline=sline;
    }
    if(    uniq_class    ) {
        info->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        buf2_102=(char*)come_increment_ref_count(parse_word(info));
        __right_value0 = (void*)0;
        __result_obj__104 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v98(buf2_102,head,head_sline,info))));
        (buf2_102 = come_decrement_ref_count(buf2_102, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__104) ? __result_obj__104 = come_decrement_ref_count(__result_obj__104, ((struct sNode*)__result_obj__104)->finalize, ((struct sNode*)__result_obj__104)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__104;
        (buf2_102 = come_decrement_ref_count(buf2_102, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    charp_operator_equals(buf,"template")    ) {
        __right_value0 = (void*)0;
        word_103=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(            (_Bool)1            ) {
                if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0                ) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    __right_value0 = (void*)0;
                    word_104=(char*)come_increment_ref_count(parse_word(info));
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_104, "05function.c", 1326, "char*")));
                    (word_104 = come_decrement_ref_count(word_104, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__105 = (struct sNode*)come_increment_ref_count(node);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (word_103 = come_decrement_ref_count(word_103, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__105) ? __result_obj__105 = come_decrement_ref_count(__result_obj__105, ((struct sNode*)__result_obj__105)->finalize, ((struct sNode*)__result_obj__105)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__105;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (word_103 = come_decrement_ref_count(word_103, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123    ) {
    }
    else if(    define_struct_nobody    ) {
    }
    else if(    define_variable_between_brace    ) {
        info->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        __result_obj__106 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_global_variable(info))));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__106) ? __result_obj__106 = come_decrement_ref_count(__result_obj__106, ((struct sNode*)__result_obj__106)->finalize, ((struct sNode*)__result_obj__106)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__106;
    }
    else if(    define_function_pointer_result_function    ) {
        header_head=info->p;
        __right_value0 = (void*)0;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_105=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_106=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_107=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1355, "struct list$1sType$ph*"))));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1356, "struct list$1char$ph*"))));
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(                (_Bool)1                ) {
                    __right_value0 = (void*)0;
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_108=multiple_assign_var5->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(                    !err_108                    ) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(param_type));
                    static int num_function_pointer_result_var_name_a=0;
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(param_names,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a)));
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        (void)((char*)(__right_value0=parse_word(info)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                    if(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                param_types2=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1402, "struct list$1sType$ph*"))));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                param_names2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1403, "struct list$1char$ph*"))));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(                    (_Bool)1                    ) {
                        __right_value0 = (void*)0;
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_111=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_112=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_113=multiple_assign_var6->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(                        !err_113                        ) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2,(struct sType*)come_increment_ref_count(param_type_111));
                        static int num_function_pointer_result_var_name_b=0;
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(param_names2,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b)));
                        if(                        isalpha(*info->p)||*info->p==95                        ) {
                            __right_value0 = (void*)0;
                            (void)((char*)(__right_value0=parse_word(info)));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        }
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            (param_name_112 = come_decrement_ref_count(param_name_112, (void*)0, (void*)0, 0, 0, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (param_name_112 = come_decrement_ref_count(param_name_112, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                header_tail=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1445, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj72=result_type2->mResultType,
                result_type2->mResultType=(struct sType*)come_increment_ref_count(result_type_105);
                come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj73=result_type2->mParamTypes,
                result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2));
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj74=result_type2->mParamNames,
                result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2));
                come_call_finalizer(list$1char$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type2->mVarArgs=(_Bool)0;
                result_type2->mStatic=(_Bool)0;
                var_args=(_Bool)0;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1455, "struct list$1char$ph*"))));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1457, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_106)),(struct sType*)come_increment_ref_count(result_type2),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_106)),(struct sFun*)come_increment_ref_count(fun));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1466, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1466, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
                __right_value2 = (void*)0;
                result=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                __result_obj__136 = (struct sNode*)come_increment_ref_count(result);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name_106 = come_decrement_ref_count(fun_name_106, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__136;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(sType_finalize, result_type_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name_106 = come_decrement_ref_count(fun_name_106, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")    ) {
        info->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        struct_attribute0=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            word_121=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_121,"struct")            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                __right_value4 = (void*)0;
                struct_attribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value5=string_operator_add(((char*)(__right_value4=parse_struct_attribute(info)))," "))),struct_attribute0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                __right_value0 = (void*)0;
                __dec_obj105=word_121,
                word_121=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __result_obj__137 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_struct((char*)come_increment_ref_count(word_121),(char*)come_increment_ref_count(struct_attribute),info))));
                (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__137) ? __result_obj__137 = come_decrement_ref_count(__result_obj__137, ((struct sNode*)__result_obj__137)->finalize, ((struct sNode*)__result_obj__137)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__137;
                (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(            string_operator_equals(word_121,"union")            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                __right_value4 = (void*)0;
                __right_value5 = (void*)0;
                __right_value6 = (void*)0;
                struct_attribute_122=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value5=string_operator_add(((char*)(__right_value4=parse_struct_attribute(info)))," "))),struct_attribute0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                __right_value0 = (void*)0;
                __dec_obj106=word_121,
                word_121=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __result_obj__138 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_union((char*)come_increment_ref_count(word_121),(char*)come_increment_ref_count(struct_attribute_122),info))));
                (struct_attribute_122 = come_decrement_ref_count(struct_attribute_122, (void*)0, (void*)0, 0, 0, (void*)0));
                (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__138) ? __result_obj__138 = come_decrement_ref_count(__result_obj__138, ((struct sNode*)__result_obj__138)->finalize, ((struct sNode*)__result_obj__138)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__138;
                (struct_attribute_122 = come_decrement_ref_count(struct_attribute_122, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(            string_operator_equals(word_121,"enum")            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                __right_value4 = (void*)0;
                __right_value5 = (void*)0;
                __right_value6 = (void*)0;
                struct_attribute_123=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value5=string_operator_add(((char*)(__right_value4=parse_struct_attribute(info)))," "))),struct_attribute0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                __right_value0 = (void*)0;
                __dec_obj107=word_121,
                word_121=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __result_obj__139 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_enum((char*)come_increment_ref_count(word_121),(char*)come_increment_ref_count(struct_attribute_123),info))));
                (struct_attribute_123 = come_decrement_ref_count(struct_attribute_123, (void*)0, (void*)0, 0, 0, (void*)0));
                (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__139;
                (struct_attribute_123 = come_decrement_ref_count(struct_attribute_123, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(            is_type_name(word_121,info)            ) {
                info->p=head;
                info->sline=sline;
                __right_value0 = (void*)0;
                node_124=(struct sNode*)come_increment_ref_count(parse_function(info));
                __result_obj__140 = (struct sNode*)come_increment_ref_count(node_124);
                ((node_124) ? node_124 = come_decrement_ref_count(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__140;
                ((node_124) ? node_124 = come_decrement_ref_count(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                err_msg(info,"invalid __attribute__");
                __result_obj__141 = (void*)come_increment_ref_count(((void*)0));
                (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__141;
            }
            (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            err_msg(info,"invalid __attribute__");
            __result_obj__142 = (void*)come_increment_ref_count(((void*)0));
            (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__142;
        }
        (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    define_function_flag    ) {
        info->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        node_125=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__143 = (struct sNode*)come_increment_ref_count(node_125);
        ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__143;
        ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(    define_variable    ) {
        info->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        node_126=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1534, "struct buffer*"))));
        buffer_append(header,source_head,source_tail-source_head);
        __result_obj__144 = (struct sNode*)come_increment_ref_count(node_126);
        ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__144;
        ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline;
    __right_value0 = (void*)0;
    buf2_127=(char*)come_increment_ref_count(parse_word(info));
    __right_value0 = (void*)0;
    __result_obj__145 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v98(buf2_127,head,head_sline,info))));
    (buf2_127 = come_decrement_ref_count(buf2_127, (void*)0, (void*)0, 0, 0, (void*)0));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__145;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj69;
struct list_item$1sType$ph* litem_109;
struct sType* __dec_obj70;
struct list_item$1sType$ph* litem_110;
struct sType* __dec_obj71;
struct list$1sType$ph* __result_obj__107;
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6239, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj69=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_109=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6249, "struct list_item$1sType$ph*"))));
        litem_109->prev=self->head;
        litem_109->next=((void*)0);
        __dec_obj70=litem_109->item,
        litem_109->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_109;
        self->head->next=litem_109;
    }
    else {
        __right_value0 = (void*)0;
        litem_110=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 6259, "struct list_item$1sType$ph*"))));
        litem_110->prev=self->tail;
        litem_110->next=((void*)0);
        __dec_obj71=litem_110->item,
        litem_110->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_110;
        self->tail=litem_110;
    }
    self->len++;
    __result_obj__107 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__107;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__108;
void* __right_value0 = (void*)0;
struct sFunNode* result;
char* __dec_obj75;
struct sFun* __dec_obj104;
struct sFunNode* __result_obj__135;
    if(    self==(void*)0    ) {
        __result_obj__108 = (void*)0;
        return __result_obj__108;
    }
    result=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj75=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj104=result->mFun,
        result->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer(sFun_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__135 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__135;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__109;
void* __right_value0 = (void*)0;
struct sFun* result;
char* __dec_obj76;
struct sType* __dec_obj77;
struct list$1sType$ph* __dec_obj78;
struct list$1char$ph* __dec_obj79;
struct list$1char$ph* __dec_obj80;
struct sType* __dec_obj81;
struct list$1sVar$ph* __dec_obj89;
struct sBlock* __dec_obj95;
char* __dec_obj96;
char* __dec_obj97;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
struct sFun* __result_obj__134;
    if(    self==(void*)0    ) {
        __result_obj__109 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__109, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__109;
    }
    result=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj76=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj77=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj78=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj79=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj80=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj81=result->mLambdaType,
        result->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAllVar!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj89=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar));
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj95=result->mBlock,
        result->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj96=result->mTextBlock,
        result->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 12, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj97=result->mTextBlockSName,
        result->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 13, "char*"));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mTextBlockSline=self->mTextBlockSline;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj98=result->mSource,
        result->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer(buffer_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj99=result->mSourceHead,
        result->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer(buffer_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj100=result->mSourceHead2,
        result->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer(buffer_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj101=result->mSourceDefer,
        result->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)    ) {
        result->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)    ) {
        result->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)    ) {
        result->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj102=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 27, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj103=result->mFunAttribute,
        result->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 28, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGenericsFun=self->mGenericsFun;
    }
    if(    self!=((void*)0)    ) {
        result->mImmutable=self->mImmutable;
    }
    __result_obj__134 = (struct sFun*)come_increment_ref_count(result);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__134, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__134;
}

static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__110;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sVar$ph* result;
struct list_item$1sVar$ph* it;
struct list$1sVar$ph* __result_obj__115;
    if(    self==((void*)0)    ) {
        __result_obj__110 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__110, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__110;
    }
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 6142, "struct list$1sVar$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar*)come_increment_ref_count(sVar_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar*)come_increment_ref_count(sVar_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__115 = (struct list$1sVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__115, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__115;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__111, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__111;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value0 = (void*)0;
struct list_item$1sVar$ph* litem;
struct sVar* __dec_obj82;
struct list_item$1sVar$ph* litem_114;
struct sVar* __dec_obj83;
struct list_item$1sVar$ph* litem_115;
struct sVar* __dec_obj84;
struct list$1sVar$ph* __result_obj__112;
    if(    self->len==0    ) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 6161, "struct list_item$1sVar$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj82=litem->item,
        litem->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_114=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 6171, "struct list_item$1sVar$ph*"))));
        litem_114->prev=self->head;
        litem_114->next=((void*)0);
        __dec_obj83=litem_114->item,
        litem_114->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_114;
        self->head->next=litem_114;
    }
    else {
        __right_value0 = (void*)0;
        litem_115=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 6181, "struct list_item$1sVar$ph*"))));
        litem_115->prev=self->tail;
        litem_115->next=((void*)0);
        __dec_obj84=litem_115->item,
        litem_115->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_115;
        self->tail=litem_115;
    }
    self->len++;
    __result_obj__112 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__112;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__113;
void* __right_value0 = (void*)0;
struct sVar* result;
char* __dec_obj85;
char* __dec_obj86;
struct sType* __dec_obj87;
char* __dec_obj88;
struct sVar* __result_obj__114;
    if(    self==(void*)0    ) {
        __result_obj__113 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__113, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__113;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj85=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj86=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj87=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj88=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__114 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__114, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__114;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__116;
void* __right_value0 = (void*)0;
struct sBlock* result;
struct list$1sNode$ph* __dec_obj90;
struct sVarTable* __dec_obj94;
struct sBlock* __result_obj__133;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__116, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__116;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj90=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj94=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__133 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__133, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__133;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__117;
void* __right_value0 = (void*)0;
struct sVarTable* result;
struct map$2char$phsVar$ph* __dec_obj93;
struct sVarTable* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__117 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__117, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__117;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj93=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result->mParent=self->mParent;
    }
    __result_obj__132 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__132, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__132;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__118;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct map$2char$phsVar$ph* result;
struct list$1char$ph* __dec_obj92;
char* it;
struct sVar* default_value;
struct sVar* it2;
struct map$2char$phsVar$ph* __result_obj__131;
default_value = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__118, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__118;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 7137, "struct map$2char$phsVar$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj92=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 7139, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    it=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(        1&&1        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/neo-c.h", 7148, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(        1        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/neo-c.h", 7151, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(        1        ) {
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
    __result_obj__131 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__131, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__131;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
int i_116;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_116=0    ;    i_116<self->size    ;    i_116++    ){
        if(        self->item_existance[i_116]        ) {
            if(            1            ) {
                (self->keys[i_116] = come_decrement_ref_count(self->keys[i_116], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value0 = (void*)0;
int i;
void* __right_value1 = (void*)0;
struct list$1char$ph* __dec_obj91;
struct map$2char$phsVar$ph* __result_obj__119;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 7066, "char**"))));
    __right_value0 = (void*)0;
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/neo-c.h", 7067, "struct sVar**"))));
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 7068, "_Bool*"))));
    for(    i=0    ;    i<128    ;    i++    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj91=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 7078, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__119 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__119, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__119;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__120;
char* __result_obj__121;
char* result_117;
char* __result_obj__122;
result = (void*)0;
result_117 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__120 = result;
        return __result_obj__120;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__121 = self->key_list->it->item;
        return __result_obj__121;
    }
    memset(&result_117,0,sizeof(char*));
    __result_obj__122 = result_117;
    return __result_obj__122;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__123;
char* __result_obj__124;
char* result_118;
char* __result_obj__125;
result = (void*)0;
result_118 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__123 = result;
        return __result_obj__123;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__124 = self->key_list->it->item;
        return __result_obj__124;
    }
    memset(&result_118,0,sizeof(char*));
    __result_obj__125 = result_118;
    return __result_obj__125;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__126;
struct sVar* __result_obj__127;
struct sVar* __result_obj__128;
struct sVar* __result_obj__129;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__126 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__126, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__126;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__127 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__127, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__127;
            }
        }
        else {
            __result_obj__128 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__128, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__128;
        }
    }
    __result_obj__129 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__129, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__129;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash;
int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsVar$ph* __result_obj__130;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
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
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=(_Bool)1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__130 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__130;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sVar** items;
_Bool* item_existance;
int len;
char* it;
struct sVar* default_value;
struct sVar* it2;
unsigned int hash;
int n;
struct sVar* default_value_119;
default_value = (void*)0;
default_value_119 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 7346, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/neo-c.h", 7347, "struct sVar**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 7348, "_Bool*"))));
    len=0;
    for(    it=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        (_Bool)1        ) {
            if(            item_existance[n]            ) {
                n++;
                if(                n>=size                ) {
                    n=0;
                }
                else if(                n==hash                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                __right_value0 = (void*)0;
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_119))));
                come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
int i_120;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_120=0    ;    i_120<self->size    ;    i_120++    ){
        if(        self->item_existance[i_120]        ) {
            if(            1            ) {
                (self->keys[i_120] = come_decrement_ref_count(self->keys[i_120], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun;
int caller_line;
char* caller_sname;
int right_value_max;
int right_value_num;
int max_conditional;
int num_conditional;
char* last_code;
char* __dec_obj108;
char* last_code2;
char* __dec_obj109;
void* __right_value0 = (void*)0;
char* sname_top;
int sline_top;
struct sType* __dec_obj110;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sFun* funX;
char* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
struct tuple2$2char$phbool$* __result_obj__155;
struct sType* result_type;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved;
struct sType* it;
struct sType* param_type;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source;
struct buffer* __dec_obj115;
struct sType* generics_type_saved;
struct sType* __dec_obj116;
struct sType* __dec_obj117;
struct list$1char$ph* method_generics_type_names;
struct list$1char$ph* __dec_obj118;
struct list$1char$ph* o2_saved_130;
char* it_131;
struct list$1char$ph* __dec_obj119;
char* __dec_obj120;
struct sBlock* block;
struct buffer* __dec_obj121;
char* __dec_obj122;
_Bool const_fun;
_Bool var_args;
void* __right_value3 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
struct sNode* node;
_Bool in_generics_fun;
_Bool Value;
struct tuple2$2char$phbool$* __result_obj__162;
struct sType* __dec_obj123;
struct list$1char$ph* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
char* __dec_obj127;
struct tuple2$2char$phbool$* __result_obj__163;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    right_value_max=info->right_value_max;
    right_value_num=info->right_value_num;
    max_conditional=info->max_conditional;
    num_conditional=info->num_conditional;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj108=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj109=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj110=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    funX=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(fun_name)))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    if(    funX    ) {
        __right_value0 = (void*)0;
        __dec_obj111=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline_top;
        __dec_obj112=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj113=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
        info->caller_fun=caller_fun;
        info->caller_line=caller_line;
        info->caller_sname=caller_sname;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__155 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value1=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1585, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__155, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__155;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(generics_fun->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1590, "struct list$1sType$ph*"))));
    for(    o2_saved=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it=list$1sType$ph_begin(o2_saved)    ;    !list$1sType$ph_end(o2_saved)    ;    it=list$1sType$ph_next(o2_saved)    ){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it)),(struct sType*)come_increment_ref_count(generics_type),info));
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __right_value0 = (void*)0;
    __dec_obj115=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj116=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __dec_obj117=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj118=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1618, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    o2_saved_130=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames),it_131=list$1char$ph_begin(o2_saved_130)    ;    !list$1char$ph_end(o2_saved_130)    ;    it_131=list$1char$ph_next(o2_saved_130)    ){
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_131, "05function.c", 1620, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __right_value0 = (void*)0;
    __dec_obj119=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj120=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj121=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj122=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    const_fun=generics_fun->mConstFun;
    var_args=generics_fun->mVarArgs;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1644, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
    fun->mGenericsFun=(_Bool)1;
    __right_value0 = (void*)0;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1653, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1653, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __right_value2 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    in_generics_fun=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value=node_compile(node,info);
    if(    !Value    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __result_obj__162 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value2=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1658, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__162;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun;
    __dec_obj123=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved);
    come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj124=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __right_value0 = (void*)0;
    __dec_obj125=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline_top;
    __dec_obj126=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj127=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->num_conditional=num_conditional;
    info->max_conditional=max_conditional;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__163 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value2=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1682, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__163;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__146;
struct sFun* __result_obj__147;
struct sFun* __result_obj__148;
struct sFun* __result_obj__149;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__146 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__146, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__146;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__147 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__147, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__147;
            }
        }
        else {
            __result_obj__148 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__148, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__148;
        }
    }
    __result_obj__149 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__149, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__149;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__150;
struct sFun* __result_obj__151;
struct sFun* __result_obj__152;
struct sFun* __result_obj__153;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__150 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__150, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__150;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__151 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__151, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__151;
            }
        }
        else {
            __result_obj__152 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__152, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__152;
        }
    }
    __result_obj__153 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__153, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__153;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj114;
struct tuple2$2char$phbool$* __result_obj__154;
    __dec_obj114=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    self->v2=v2;
    __result_obj__154 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__154, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__154;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__156;
struct sType* __result_obj__157;
struct sType* result_128;
struct sType* __result_obj__158;
result = (void*)0;
result_128 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__156 = result;
        return __result_obj__156;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__157 = self->it->item;
        return __result_obj__157;
    }
    memset(&result_128,0,sizeof(struct sType*));
    __result_obj__158 = result_128;
    return __result_obj__158;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__159;
struct sType* __result_obj__160;
struct sType* result_129;
struct sType* __result_obj__161;
result = (void*)0;
result_129 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__159 = result;
        return __result_obj__159;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__160 = self->it->item;
        return __result_obj__160;
    }
    memset(&result_129,0,sizeof(struct sType*));
    __result_obj__161 = result_129;
    return __result_obj__161;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun;
int caller_line;
char* caller_sname;
char* last_code;
char* __dec_obj128;
char* last_code2;
char* __dec_obj129;
void* __right_value0 = (void*)0;
char* sname_top;
int sline_top;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sFun* funX;
char* __dec_obj130;
char* __dec_obj131;
char* __dec_obj132;
_Bool __result_obj__164;
struct sType* result_type;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved;
struct sType* it;
struct sType* param_type;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source;
struct buffer* __dec_obj133;
struct list$1char$ph* method_generics_type_names;
struct list$1char$ph* __dec_obj134;
struct list$1char$ph* o2_saved_132;
char* it_133;
struct list$1char$ph* __dec_obj135;
char* __dec_obj136;
struct sBlock* block;
struct buffer* __dec_obj137;
char* __dec_obj138;
_Bool var_args;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
struct sNode* node;
_Bool Value;
_Bool __result_obj__165;
struct list$1char$ph* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
char* __dec_obj142;
_Bool __result_obj__166;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj128=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj129=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    __right_value0 = (void*)0;
    funX=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(fun_name))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    funX    ) {
        __right_value0 = (void*)0;
        __dec_obj130=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline_top;
        __dec_obj131=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj132=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
        info->caller_fun=caller_fun;
        info->caller_line=caller_line;
        info->caller_sname=caller_sname;
        __result_obj__164 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__164;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1718, "struct list$1sType$ph*"))));
    for(    o2_saved=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it=list$1sType$ph_begin(o2_saved)    ;    !list$1sType$ph_end(o2_saved)    ;    it=list$1sType$ph_next(o2_saved)    ){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_type=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value0=sType_clone(it))),info));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __right_value0 = (void*)0;
    __dec_obj133=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj134=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1740, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    o2_saved_132=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames),it_133=list$1char$ph_begin(o2_saved_132)    ;    !list$1char$ph_end(o2_saved_132)    ;    it_133=list$1char$ph_next(o2_saved_132)    ){
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_133, "05function.c", 1742, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __right_value0 = (void*)0;
    __dec_obj135=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj136=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj137=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj138=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    var_args=generics_fun->mVarArgs;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1764, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types)),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun->mGenericsFun=(_Bool)1;
    __right_value0 = (void*)0;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1772, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1772, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    __right_value2 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__165 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__165;
    }
    else {
    }
    __dec_obj139=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __right_value0 = (void*)0;
    __dec_obj140=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline_top;
    __dec_obj141=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj142=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    __result_obj__166 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__166;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head;
char* source_head;
void* __right_value0 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var7 = (void*)0;
char* asm_fun=0;
char* fun_attribute=0;
struct sType* result_type;
char* var_name;
_Bool constructor_;
struct sType* __dec_obj143;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* result_type2=0;
char* var_name2=0;
_Bool err=0;
struct sType* __dec_obj144;
char* __dec_obj145;
_Bool method_definition;
char* p;
int sline;
void* __right_value1 = (void*)0;
struct buffer* buf2;
char* fun_name;
char* base_fun_name;
struct sType* obj_type2;
char* __dec_obj146;
char* __dec_obj147;
struct sType* __dec_obj148;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* obj_type=0;
char* name=0;
_Bool err_134=0;
char* __dec_obj149;
char* __dec_obj150;
struct sType* __dec_obj151;
char* __dec_obj152;
char* __dec_obj153;
struct sType* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
struct sType* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var10 = (void*)0;
struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
char* header_tail;
_Bool const_fun;
int version;
int n;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun2=0;
char* fun_attribute2=0;
void* __right_value2 = (void*)0;
char* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
_Bool in_top_level;
struct sBlock* block;
char* fun_name_135;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sFun* fun;
struct sFun* fun2;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
struct sNode* __result_obj__169;
char* none_generics_name;
char* generics_sname;
int generics_sline;
char* block_136;
void* __right_value5 = (void*)0;
struct sGenericsFun* fun_137;
char* fun_name3;
struct sNode* __result_obj__181;
char* generics_sname_141;
int generics_sline_142;
char* block_143;
struct sGenericsFun* fun_144;
struct sNode* __result_obj__182;
char* source_tail;
char* new_fun_name;
char* __dec_obj164;
_Bool static_fun;
_Bool inline_fun;
_Bool uniq_fun;
char* generics_sname_145;
int generics_sline_146;
char* block_147;
struct sFun* fun_148;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
struct sNode* __result_obj__183;
struct sBlock* block_149;
struct sFun* fun_150;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
struct sNode* __result_obj__184;
char* new_fun_name_151;
char* __dec_obj165;
struct sFun* fun_152;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
struct sNode* __result_obj__185;
struct tuple2$2char$phchar$ph* multiple_assign_var12 = (void*)0;
char* asm_fun_153=0;
char* fun_attribute2_154=0;
char* __dec_obj166;
char* __dec_obj167;
struct sFun* fun_155;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
struct sNode* __result_obj__186;
struct sNode* __result_obj__187;
fun_name = (void*)0;
    header_head=info->p;
    source_head=info->p;
    multiple_assign_var7=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    fun_attribute=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result_type=((void*)0);
    var_name=((void*)0);
    constructor_=(_Bool)0;
    if(    info->in_class&&(info->end-info->p)>=strlen("new(")&&memcmp(info->p,"new(",4)==0    ) {
        __right_value0 = (void*)0;
        ((char*)(__right_value0=parse_word(info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __dec_obj143=result_type,
        result_type=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type->mHeap=(_Bool)1;
        constructor_=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        __right_value0 = (void*)0;
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name2=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj144=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj145=var_name,
        var_name=(char*)come_increment_ref_count(var_name2);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0);
        if(        !err        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    method_definition=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        __right_value0 = (void*)0;
        buf2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1833, "struct buffer*"))));
        while(        xisalnum(*info->p)||*info->p==95        ) {
            buffer_append_char(buf2,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91&&*(info->p+1)==93        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2)>0&&*info->p==58&&*(info->p+1)==58        ) {
            method_definition=(_Bool)1;
        }
        info->p=p;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    base_fun_name=((void*)0);
    obj_type2=((void*)0);
    if(    constructor_    ) {
        __right_value0 = (void*)0;
        __dec_obj146=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj147=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj148=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    method_definition    ) {
        __right_value0 = (void*)0;
        multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        name=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        err_134=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        !err_134        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __right_value0 = (void*)0;
        __dec_obj149=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj150=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj151=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(obj_type));
        come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    info->impl_type    ) {
        __right_value0 = (void*)0;
        __dec_obj152=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj153=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj154=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->class_type    ) {
        __right_value0 = (void*)0;
        __dec_obj155=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj156=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj157=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj158=fun_name,
        fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj159=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name,"initialize")    ) {
        info->in_class=(_Bool)0;
    }
    __right_value0 = (void*)0;
    multiple_assign_var10=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value0=parse_params(info,constructor_)));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var10->v1);
    param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var10->v2);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var10->v3);
    var_args=multiple_assign_var10->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    header_tail=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name,"initialize")    ) {
        info->in_class=(_Bool)1;
    }
    if(    result_type->mImmutable    ) {
        if(        method_definition||info->impl_type||info->class_type        ) {
            if(            list$1sType$ph_length(param_types)>0            ) {
                __right_value0 = (void*)0;
                ((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,0)))->mImmutable=(_Bool)1;
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
    }
    const_fun=(_Bool)0;
    version=0;
    if(    parsecmp("version",info)    ) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n=0;
        while(        isdigit(*info->p)        ) {
            n=n*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version=n;
    }
    __right_value0 = (void*)0;
    multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun2=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    fun_attribute2=(char*)come_increment_ref_count(multiple_assign_var11->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    string_operator_not_equals(fun_attribute2,"")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj160=fun_attribute,
        fun_attribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(    string_operator_not_equals(asm_fun,"")    ) {
        __right_value0 = (void*)0;
        __dec_obj161=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    string_operator_not_equals(asm_fun2,"")    ) {
        __right_value0 = (void*)0;
        __dec_obj162=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun2));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
    }
    in_top_level=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name,"lambda")    ) {
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
        static int lambda_num=0;
        lambda_num++;
        __right_value0 = (void*)0;
        fun_name_135=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num));
        result_type->mInline=(_Bool)0;
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1969, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_135)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(fun_name_135)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_135)),(struct sFun*)come_increment_ref_count(fun));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1977, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value1=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1977, "struct sLambdaNode*")),fun,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__169 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)));
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name_135 = come_decrement_ref_count(fun_name_135, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sLambdaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__169;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name_135 = come_decrement_ref_count(fun_name_135, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0    ) {
        __right_value0 = (void*)0;
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        __right_value0 = (void*)0;
        generics_sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline=info->sline;
        __right_value0 = (void*)0;
        block_136=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        fun_137=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1987, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args,(char*)come_increment_ref_count(block_136),info,(char*)come_increment_ref_count(__builtin_string(generics_sname)),generics_sline,const_fun));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,base_fun_name));
        __right_value0 = (void*)0;
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3)),(struct sGenericsFun*)come_increment_ref_count(fun_137));
        __result_obj__181 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_136 = come_decrement_ref_count(block_136, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__181;
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_136 = come_decrement_ref_count(block_136, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0    ) {
        __right_value0 = (void*)0;
        generics_sname_141=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_142=info->sline;
        __right_value0 = (void*)0;
        block_143=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        fun_144=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2001, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args,(char*)come_increment_ref_count(block_143),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_141)),generics_sline_142,const_fun));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        method_definition        ) {
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sGenericsFun*)come_increment_ref_count(fun_144));
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name)),(struct sGenericsFun*)come_increment_ref_count(fun_144));
        }
        __result_obj__182 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_141 = come_decrement_ref_count(generics_sname_141, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_143 = come_decrement_ref_count(block_143, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__182;
        (generics_sname_141 = come_decrement_ref_count(generics_sname_141, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_143 = come_decrement_ref_count(block_143, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123    ) {
        source_tail=info->p-1;
        if(        version>0        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value0=__builtin_string(fun_name))),version));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            __dec_obj164=fun_name,
            fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
            __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        static_fun=(_Bool)0;
        if(        result_type->mStatic        ) {
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            static_fun=(_Bool)1;
        }
        inline_fun=(_Bool)0;
        if(        result_type->mInline        ) {
            result_type->mInline=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            inline_fun=(_Bool)1;
        }
        uniq_fun=(_Bool)0;
        if(        result_type->mUniq        ) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
            uniq_fun=(_Bool)1;
        }
        if(        result_type->mUniq        ) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
        }
        if(        info->defining_class&&info->defining_class->mUniq        ) {
            uniq_fun=(_Bool)1;
        }
        if(        uniq_fun        ) {
            __right_value0 = (void*)0;
            generics_sname_145=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_146=info->sline;
            __right_value0 = (void*)0;
            block_147=(char*)come_increment_ref_count(skip_block(info,constructor_));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun_148=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2056, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,((void*)0),static_fun,info,inline_fun,uniq_fun,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,(char*)come_increment_ref_count(block_147),(char*)come_increment_ref_count(generics_sname_145),generics_sline_146,(_Bool)0));
            if(            info->in_class            ) {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_148));
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_148));
            }
            else {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_148));
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_148));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2073, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2073, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_148),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sFunNode_finalize;
            _inf_value6->clone=(void*)sFunNode_clone;
            _inf_value6->compile=(void*)sFunNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sFunNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__183 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
            (generics_sname_145 = come_decrement_ref_count(generics_sname_145, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_147 = come_decrement_ref_count(block_147, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__183;
            (generics_sname_145 = come_decrement_ref_count(generics_sname_145, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_147 = come_decrement_ref_count(block_147, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            block_149=(struct sBlock*)come_increment_ref_count(parse_block(info,constructor_,(_Bool)1));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            __right_value4 = (void*)0;
            fun_150=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2078, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_149)),static_fun,info,inline_fun,uniq_fun,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            if(            info->in_class            ) {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_150));
            }
            else {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_150));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2093, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2093, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_150),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__184 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            come_call_finalizer(sBlock_finalize, block_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sFun_finalize, fun_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__184;
            come_call_finalizer(sBlock_finalize, block_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sFun_finalize, fun_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    isalpha(*info->p)||*info->p==95||*info->p==59    ) {
        if(        version>0        ) {
            __right_value0 = (void*)0;
            new_fun_name_151=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name,version));
            __right_value0 = (void*)0;
            __dec_obj165=fun_name,
            fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_151));
            __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
            (new_fun_name_151 = come_decrement_ref_count(new_fun_name_151, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun_152=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2110, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_152));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2119, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2119, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_152),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__185 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
            come_call_finalizer(sFun_finalize, fun_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__185;
            come_call_finalizer(sFun_finalize, fun_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            multiple_assign_var12=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
            asm_fun_153=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            fun_attribute2_154=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_153,"")            ) {
                __right_value0 = (void*)0;
                __dec_obj166=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun_153));
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj167=fun_attribute,
            fun_attribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2_154));
            __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun_155=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2134, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_155));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2144, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2144, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_155),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__186 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
            (asm_fun_153 = come_decrement_ref_count(asm_fun_153, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2_154 = come_decrement_ref_count(fun_attribute2_154, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__186;
            (asm_fun_153 = come_decrement_ref_count(asm_fun_153, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2_154 = come_decrement_ref_count(fun_attribute2_154, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level;
    __result_obj__187 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
    ((__result_obj__187) ? __result_obj__187 = come_decrement_ref_count(__result_obj__187, ((struct sNode*)__result_obj__187)->finalize, ((struct sNode*)__result_obj__187)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__187;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__167;
void* __right_value0 = (void*)0;
struct sLambdaNode* result;
char* __dec_obj163;
struct sLambdaNode* __result_obj__168;
    if(    self==(void*)0    ) {
        __result_obj__167 = (void*)0;
        return __result_obj__167;
    }
    result=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj163=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result->mFun=self->mFun;
    }
    __result_obj__168 = result;
    come_call_finalizer(sLambdaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__168;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash;
unsigned int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsGenericsFun$ph* __result_obj__180;
    if(    self->len*10>=self->size    ) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
                self->items[it]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=(_Bool)1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__180 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__180;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sGenericsFun** items;
_Bool* item_existance;
int len;
char* it;
struct sGenericsFun* default_value;
struct sGenericsFun* it2;
unsigned int hash;
int n;
struct sGenericsFun* default_value_140;
default_value = (void*)0;
default_value_140 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 7346, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value0=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size)), "/usr/local/include/neo-c.h", 7347, "struct sGenericsFun**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 7348, "_Bool*"))));
    len=0;
    for(    it=map$2char$phsGenericsFun$ph_begin(self)    ;    !map$2char$phsGenericsFun$ph_end(self)    ;    it=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sGenericsFun*));
        __right_value0 = (void*)0;
        it2=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun*)come_increment_ref_count(default_value))));
        come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        (_Bool)1        ) {
            if(            item_existance[n]            ) {
                n++;
                if(                n>=size                ) {
                    n=0;
                }
                else if(                n==hash                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                __right_value0 = (void*)0;
                items[n]=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun*)come_increment_ref_count(default_value_140))));
                come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sGenericsFun_finalize, default_value_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result;
char* __result_obj__170;
char* __result_obj__171;
char* result_138;
char* __result_obj__172;
result = (void*)0;
result_138 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__170 = result;
        return __result_obj__170;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__171 = self->key_list->it->item;
        return __result_obj__171;
    }
    memset(&result_138,0,sizeof(char*));
    __result_obj__172 = result_138;
    return __result_obj__172;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result;
char* __result_obj__173;
char* __result_obj__174;
char* result_139;
char* __result_obj__175;
result = (void*)0;
result_139 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__173 = result;
        return __result_obj__173;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__174 = self->key_list->it->item;
        return __result_obj__174;
    }
    memset(&result_139,0,sizeof(char*));
    __result_obj__175 = result_139;
    return __result_obj__175;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash;
unsigned int it;
struct sGenericsFun* __result_obj__176;
struct sGenericsFun* __result_obj__177;
struct sGenericsFun* __result_obj__178;
struct sGenericsFun* __result_obj__179;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__176 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__176, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__176;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__177 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__177, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__177;
            }
        }
        else {
            __result_obj__178 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__178, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__178;
        }
    }
    __result_obj__179 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__179, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__179;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj168;
char* last_code2;
char* __dec_obj169;
struct sClass* current_stack_frame_struct;
char* real_fun_name;
struct sFun* finalizer;
void* __right_value0 = (void*)0;
struct sType* type_before;
struct sType* type2;
char* fun_name2;
struct sType* __dec_obj170;
char* none_generics_name;
char* generics_fun_name;
struct sGenericsFun* generics_fun;
struct tuple2$2char$phbool$* multiple_assign_var13 = (void*)0;
char* name=0;
_Bool err=0;
char* __dec_obj171;
int i;
char* new_fun_name;
char* __dec_obj172;
char* __dec_obj173;
struct sType* __dec_obj174;
char* __dec_obj175;
char* user_real_fun_name;
struct sFun* user_finalizer;
struct sType* type2_156;
struct sType* __dec_obj176;
struct sClass* klass;
void* __right_value1 = (void*)0;
struct buffer* source;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_159=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj177;
char* __dec_obj178;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_161;
struct sType* self_type;
struct sType* __list_values1__[1];
struct list$1sType$ph* param_types;
char* __list_values2__[1];
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
void* __right_value3 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
struct sNode* node;
_Bool Value;
struct buffer* __dec_obj179;
char* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
struct tuple2$2sFun$pchar$ph* __result_obj__213;
memset(&i, 0, sizeof(int));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj168=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj169=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name=((void*)0);
    finalizer=((void*)0);
    type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    __right_value0 = (void*)0;
    fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj170=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        finalizer==((void*)0)        ) {
            __right_value0 = (void*)0;
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            __right_value0 = (void*)0;
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            generics_fun            ) {
                __right_value0 = (void*)0;
                multiple_assign_var13=((struct tuple2$2char$phbool$*)(__right_value0=create_generics_fun((char*)come_increment_ref_count(fun_name2),generics_fun,(struct sType*)come_increment_ref_count(type),info)));
                name=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                err=multiple_assign_var13->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err                ) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                __right_value0 = (void*)0;
                finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __dec_obj171=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            __right_value0 = (void*)0;
            finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            finalizer            ) {
                __right_value0 = (void*)0;
                __dec_obj172=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        finalizer==((void*)0)        ) {
            __right_value0 = (void*)0;
            finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        __dec_obj173=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    finalizer==((void*)0)    ) {
        __dec_obj174=type,
        type=(struct sType*)come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj175=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        user_real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        __right_value0 = (void*)0;
        user_finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        type2_156=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        __dec_obj176=type,
        type=(struct sType*)come_increment_ref_count(type2_156);
        come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        klass=type->mClass;
        if(        type->mPointerNum>0&&klass->mStruct||type->mAllocaValue        ) {
            __right_value0 = (void*)0;
            source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2242, "struct buffer*"))));
            buffer_append_char(source,123);
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)            ;            it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)            ){
                multiple_assign_var14=it;
                name_159=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                field_type->mHeap                ) {
                    char source2[1024];
                    memset(&source2, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_159,name_159,name_159,name_159);
                    buffer_append_str(source,source2);
                }
                else if(                field_type->mChannel                ) {
                    char source2_160[1024];
                    memset(&source2_160, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_160,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_159,name_159);
                    buffer_append_str(source,source2_160);
                    snprintf(source2_160,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_159,name_159);
                    buffer_append_str(source,source2_160);
                }
                (name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_char(source,125);
            p=info->p;
            sline=info->sline;
            sname=(char*)come_increment_ref_count(info->sname);
            head=info->head;
            source3=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj177=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source);
            come_call_finalizer(buffer_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            info->p=source->buf;
            info->head=source->buf;
            __right_value0 = (void*)0;
            __dec_obj178=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
            __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
            info->sline=0;
            __right_value0 = (void*)0;
            block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2293, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            __right_value0 = (void*)0;
            name_161=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2294, "char*"));
            __right_value0 = (void*)0;
            self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type->mHeap=(_Bool)0;
            if(            self_type->mPointerNum==0            ) {
                self_type->mPointerNum=1;
            }
            if(            self_type->mPointerNum>1            ) {
                self_type->mPointerNum=1;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2303, "struct list$1sType$ph")),1,__list_values1__)));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2304, "struct list$1char$ph")),1,__list_values2__)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2305, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors,((void*)0));
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_161)))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            fun2==((void*)0)||fun2->mExternal            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2314, "struct sFun*")),(char*)come_increment_ref_count(name_161),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun->mGenericsFun=(_Bool)1;
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_161)),(struct sFun*)come_increment_ref_count(fun));
                finalizer=fun;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2325, "struct sNode");
                _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2325, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sFunNode_finalize;
                _inf_value10->clone=(void*)sFunNode_clone;
                _inf_value10->compile=(void*)sFunNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sFunNode_kind;
                _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
                __right_value2 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                Value=node_compile(node,info);
                if(                !Value                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                finalizer=fun2;
            }
            __dec_obj179=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3);
            come_call_finalizer(buffer_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            info->p=p;
            info->head=head;
            info->sline=sline;
            __dec_obj180=info->sname,
            info->sname=(char*)come_increment_ref_count(sname);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj181=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj182=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__213 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2349, "struct tuple2$2sFun$pchar$ph")),finalizer,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__213, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__213;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value;
unsigned int hash;
unsigned int it;
struct sGenericsFun* __result_obj__188;
struct sGenericsFun* __result_obj__189;
struct sGenericsFun* __result_obj__190;
struct sGenericsFun* __result_obj__191;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__188 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__188, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__188;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__189 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__189, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__189;
            }
        }
        else {
            __result_obj__190 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__190, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__190;
        }
    }
    __result_obj__191 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__191, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__191;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value;
unsigned int hash;
unsigned int it;
struct sGenericsFun* __result_obj__192;
struct sGenericsFun* __result_obj__193;
struct sGenericsFun* __result_obj__194;
struct sGenericsFun* __result_obj__195;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__192 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__192, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__192;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__193 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__193, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__193;
            }
        }
        else {
            __result_obj__194 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__194, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__194;
        }
    }
    __result_obj__195 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__195, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__195;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__196;
struct sClass* __result_obj__197;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__196 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__196, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__196;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__197, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__197;
            }
        }
        else {
            __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__198, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__198;
        }
    }
    __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__199, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__199;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__200;
struct sClass* __result_obj__201;
struct sClass* __result_obj__202;
struct sClass* __result_obj__203;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__200 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__200, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__200;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__201 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__201, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__201;
            }
        }
        else {
            __result_obj__202 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__202, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__202;
        }
    }
    __result_obj__203 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__203, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__203;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__204;
struct tuple2$2char$phsType$ph* __result_obj__205;
struct tuple2$2char$phsType$ph* result_157;
struct tuple2$2char$phsType$ph* __result_obj__206;
result = (void*)0;
result_157 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__204 = result;
        return __result_obj__204;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_157,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__206 = result_157;
    return __result_obj__206;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__207;
struct tuple2$2char$phsType$ph* __result_obj__208;
struct tuple2$2char$phsType$ph* result_158;
struct tuple2$2char$phsType$ph* __result_obj__209;
result = (void*)0;
result_158 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__207 = result;
        return __result_obj__207;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__208 = self->it->item;
        return __result_obj__208;
    }
    memset(&result_158,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__209 = result_158;
    return __result_obj__209;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i;
struct list$1sType$ph* __result_obj__210;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i=0    ;    i<num_value    ;    i++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i]));
    }
    __result_obj__210 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__210, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__210;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i;
struct list$1char$ph* __result_obj__211;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i=0    ;    i<num_value    ;    i++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i]));
    }
    __result_obj__211 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__211;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj183;
struct tuple2$2sFun$pchar$ph* __result_obj__212;
    self->v1=v1;
    __dec_obj183=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__212 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__212, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__212;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj184;
char* last_code2;
char* __dec_obj185;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value0 = (void*)0;
char* real_fun_name;
struct sType* type2;
struct sType* __dec_obj186;
struct sClass* klass;
void* __right_value1 = (void*)0;
struct buffer* source;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_162=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj187;
char* __dec_obj188;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_164;
struct sType* left_type;
struct sType* right_type;
struct sType* __list_values3__[2];
struct list$1sType$ph* param_types;
char* __list_values4__[2];
void* __right_value3 = (void*)0;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
struct sFun* fun;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
struct sNode* node;
_Bool Value;
struct buffer* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
struct tuple2$2sFun$pchar$ph* __result_obj__214;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj184=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj185=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj186=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    type->mPointerNum>0&&!klass->mNumber    ) {
        __right_value0 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2373, "struct buffer*"))));
        buffer_append_char(source,123);
        if(        klass->mProtocol        ) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return left.%s.equals(right.%s);\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)            ;            it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)            ){
                multiple_assign_var15=it;
                name_162=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_163[1024];
                memset(&source2_163, 0, sizeof(char)                *(1024)                );
                snprintf(source2_163,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_162,name_162,name_162);
                buffer_append_str(source,source2_163);
                (name_162 = come_decrement_ref_count(name_162, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source,"return true;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj187=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __right_value0 = (void*)0;
        __dec_obj188=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2413, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        __right_value0 = (void*)0;
        name_164=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2414, "char*"));
        __right_value0 = (void*)0;
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=left_type,
__list_values3__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2419, "struct list$1sType$ph")),2,__list_values3__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values4__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2420, "struct list$1char$ph")),2,__list_values4__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2421, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_164)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2431, "struct sFun*")),(char*)come_increment_ref_count(name_164),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_164)),(struct sFun*)come_increment_ref_count(fun));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2440, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2440, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj189=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj190=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_164 = come_decrement_ref_count(name_164, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj191=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj192=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__214 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2465, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__214, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__214;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj193;
char* last_code2;
char* __dec_obj194;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value0 = (void*)0;
char* real_fun_name;
struct sType* type2;
struct sType* __dec_obj195;
struct sClass* klass;
void* __right_value1 = (void*)0;
struct buffer* source;
int i;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_166=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj196;
char* __dec_obj197;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_170;
struct sType* left_type;
struct sType* right_type;
struct sType* __list_values5__[2];
struct list$1sType$ph* param_types;
char* __list_values6__[2];
void* __right_value3 = (void*)0;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
struct sFun* fun;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
struct sNode* node;
_Bool Value;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
struct tuple2$2sFun$pchar$ph* __result_obj__215;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj193=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj194=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj195=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj195,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    type->mPointerNum>0&&!klass->mNumber    ) {
        __right_value0 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2488, "struct buffer*"))));
        buffer_append_char(source,123);
        if(        klass->mProtocol        ) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return left.%s !== right.%s;\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_165[1024];
            memset(&source2_165, 0, sizeof(char)            *(1024)            );
            snprintf(source2_165,1024,"return !(");
            buffer_append_str(source,source2_165);
            snprintf(source2_165,1024,"( ");
            buffer_append_str(source,source2_165);
            i=0;
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)            ;            it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)            ){
                multiple_assign_var16=it;
                name_166=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_167[1024];
                memset(&source2_167, 0, sizeof(char)                *(1024)                );
                snprintf(source2_167,1024,"(left.%s === right.%s)",name_166,name_166,name_166);
                buffer_append_str(source,source2_167);
                if(                i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1                ) {
                    char source2_168[1024];
                    memset(&source2_168, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_168,1024,"));");
                    buffer_append_str(source,source2_168);
                }
                else {
                    char source2_169[1024];
                    memset(&source2_169, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_169,1024," && ");
                    buffer_append_str(source,source2_169);
                }
                i++;
                (name_166 = come_decrement_ref_count(name_166, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj196,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __right_value0 = (void*)0;
        __dec_obj197=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2548, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        __right_value0 = (void*)0;
        name_170=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2549, "char*"));
        __right_value0 = (void*)0;
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values5__[0]=left_type,
__list_values5__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2554, "struct list$1sType$ph")),2,__list_values5__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values6__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values6__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2555, "struct list$1char$ph")),2,__list_values6__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2556, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_170)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2566, "struct sFun*")),(char*)come_increment_ref_count(name_170),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_170)),(struct sFun*)come_increment_ref_count(fun));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2575, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2575, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj198=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj199=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_170 = come_decrement_ref_count(name_170, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj200=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj201=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__215 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2600, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__215, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__215;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj202;
char* last_code2;
char* __dec_obj203;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value0 = (void*)0;
char* real_fun_name;
struct sType* type2;
struct sType* __dec_obj204;
struct sClass* klass;
void* __right_value1 = (void*)0;
struct buffer* source;
int i;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_172=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj205;
char* __dec_obj206;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_176;
struct sType* left_type;
struct sType* right_type;
struct sType* __list_values7__[2];
struct list$1sType$ph* param_types;
char* __list_values8__[2];
void* __right_value3 = (void*)0;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
struct sFun* fun;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
struct sNode* node;
_Bool Value;
struct buffer* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
char* __dec_obj210;
struct tuple2$2sFun$pchar$ph* __result_obj__216;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj202=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj203=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj204=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj204,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    type->mPointerNum>0&&!klass->mNumber    ) {
        __right_value0 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2623, "struct buffer*"))));
        buffer_append_char(source,123);
        if(        klass->mProtocol        ) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return !left.%s.equals(right.%s);\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_171[1024];
            memset(&source2_171, 0, sizeof(char)            *(1024)            );
            snprintf(source2_171,1024,"return !(");
            buffer_append_str(source,source2_171);
            i=0;
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)            ;            it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)            ){
                multiple_assign_var17=it;
                name_172=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_173[1024];
                memset(&source2_173, 0, sizeof(char)                *(1024)                );
                snprintf(source2_173,1024,"left.%s.equals(right.%s)",name_172,name_172);
                buffer_append_str(source,source2_173);
                if(                i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1                ) {
                    char source2_174[1024];
                    memset(&source2_174, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_174,1024,");");
                    buffer_append_str(source,source2_174);
                }
                else {
                    char source2_175[1024];
                    memset(&source2_175, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_175,1024," && ");
                    buffer_append_str(source,source2_175);
                }
                i++;
                (name_172 = come_decrement_ref_count(name_172, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj205=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj205,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __right_value0 = (void*)0;
        __dec_obj206=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2680, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        __right_value0 = (void*)0;
        name_176=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2681, "char*"));
        __right_value0 = (void*)0;
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values7__[0]=left_type,
__list_values7__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2686, "struct list$1sType$ph")),2,__list_values7__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values8__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values8__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2687, "struct list$1char$ph")),2,__list_values8__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2688, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_176)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2698, "struct sFun*")),(char*)come_increment_ref_count(name_176),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_176)),(struct sFun*)come_increment_ref_count(fun));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2707, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2707, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj207=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj208=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_176 = come_decrement_ref_count(name_176, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj209=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj210=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__216 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2732, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__216, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__216;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj211;
char* last_code2;
char* __dec_obj212;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value0 = (void*)0;
char* real_fun_name;
struct sType* type2;
struct sType* __dec_obj213;
struct sClass* klass;
void* __right_value1 = (void*)0;
struct buffer* source;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var18 = (void*)0;
char* name_178=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj214;
char* __dec_obj215;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_180;
struct sType* left_type;
struct sType* right_type;
struct sType* __list_values9__[2];
struct list$1sType$ph* param_types;
char* __list_values10__[2];
void* __right_value3 = (void*)0;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
struct sFun* fun;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
struct sNode* node;
_Bool Value;
struct buffer* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
char* __dec_obj219;
struct tuple2$2sFun$pchar$ph* __result_obj__217;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj211=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj212=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj213=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj213,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    type->mPointerNum>0&&!klass->mNumber    ) {
        __right_value0 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2755, "struct buffer*"))));
        buffer_append_char(source,123);
        if(        klass->mProtocol        ) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return left.%s === right.%s;\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_177[1024];
            memset(&source2_177, 0, sizeof(char)            *(1024)            );
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)            ;            it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)            ){
                multiple_assign_var18=it;
                name_178=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                char source2_179[1024];
                memset(&source2_179, 0, sizeof(char)                *(1024)                );
                snprintf(source2_179,1024,"if(left.%s !== right.%s) { return false; }\n",name_178,name_178,name_178);
                buffer_append_str(source,source2_179);
                (name_178 = come_decrement_ref_count(name_178, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source,"return true;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj214=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __right_value0 = (void*)0;
        __dec_obj215=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        __right_value0 = (void*)0;
        name_180=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2798, "char*"));
        __right_value0 = (void*)0;
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values9__[0]=left_type,
__list_values9__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2803, "struct list$1sType$ph")),2,__list_values9__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values10__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values10__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2804, "struct list$1char$ph")),2,__list_values10__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2805, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_180)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2815, "struct sFun*")),(char*)come_increment_ref_count(name_180),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_180)),(struct sFun*)come_increment_ref_count(fun));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2824, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2824, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj216=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj216,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj217=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj218=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj219=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__217 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2849, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__217, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__217;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__218;
char* last_code;
char* __dec_obj220;
char* last_code2;
char* __dec_obj221;
struct sClass* current_stack_frame_struct;
struct sFun* cloner;
char* real_fun_name;
struct sType* type2;
struct sType* __dec_obj222;
struct sClass* klass;
char* fun_name2;
char* none_generics_name;
struct sType* obj_type;
char* __dec_obj223;
char* fun_name3;
struct sGenericsFun* generics_fun;
struct tuple2$2char$phbool$* multiple_assign_var19 = (void*)0;
char* name=0;
_Bool err=0;
struct tuple2$2sFun$pchar$ph* __result_obj__219;
char* __dec_obj224;
char* __dec_obj225;
int i;
char* new_fun_name;
char* __dec_obj226;
char* __dec_obj227;
struct buffer* source;
struct sType* type2_181;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_183=0;
struct sType* field_type=0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_186;
struct tuple2$2char$phsType$ph* it_187;
struct tuple2$2char$phsType$ph* multiple_assign_var21 = (void*)0;
char* name_188=0;
struct sType* field_type_189=0;
char* user_real_fun_name;
struct sFun* user_cloner;
char* p;
int sline;
char* sname;
struct buffer* source3;
char* head;
struct buffer* __dec_obj228;
char* __dec_obj229;
struct sBlock* block;
struct sType* result_type;
char* name_193;
struct sType* self_type;
struct sType* __list_values11__[1];
struct list$1sType$ph* param_types;
char* __list_values12__[1];
void* __right_value2 = (void*)0;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
void* __right_value3 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
struct sNode* node;
_Bool Value;
char* __dec_obj230;
struct buffer* __dec_obj231;
char* __dec_obj232;
char* __dec_obj233;
struct tuple2$2sFun$pchar$ph* __result_obj__220;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")    ) {
        __result_obj__218 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2855, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__218, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__218;
    }
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj220=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj221=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner=((void*)0);
    __right_value0 = (void*)0;
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj222=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        __right_value0 = (void*)0;
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj223=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        generics_fun        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var19=((struct tuple2$2char$phbool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var19->v1);
            err=multiple_assign_var19->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            !err            ) {
                if(                string_operator_equals(type->mClass->mName,"void")                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__219 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2893, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
                    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
                    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__219, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__219;
                }
            }
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        __dec_obj224=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj225=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0, (void*)0);
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            cloner            ) {
                __right_value0 = (void*)0;
                __dec_obj226=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        cloner==((void*)0)        ) {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        __dec_obj227=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    cloner==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2928, "struct buffer*"))));
        __right_value0 = (void*)0;
        type2_181=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_181->mPointerNum=0;
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"if(self == (void*)0) { return (void*)0; }\n");
        __right_value0 = (void*)0;
        buffer_append_format(source,"var result = new %s;\n",((char*)(__right_value0=make_type_name_string(type2_181,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        klass->mProtocol        ) {
            char* name_182="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source,source2);
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)            ;            it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)            ){
                multiple_assign_var20=it;
                name_183=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                string_operator_equals(name_183,"_protocol_obj")                ) {
                }
                else if(                list$1sNode$ph_length(field_type->mArrayNum)>0                ) {
                    char source2_184[1024];
                    memset(&source2_184, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_184,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_183,name_183,name_183);
                    buffer_append_str(source,source2_184);
                }
                else {
                    char source2_185[1024];
                    memset(&source2_185, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_185,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_183,name_183);
                    buffer_append_str(source,source2_185);
                }
                (name_183 = come_decrement_ref_count(name_183, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(            o2_saved_186=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it_187=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_186)            ;            !list$1tuple2$2char$phsType$ph$ph_end(o2_saved_186)            ;            it_187=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_186)            ){
                multiple_assign_var21=it_187;
                name_188=(char*)come_increment_ref_count(multiple_assign_var21->v1);
                field_type_189=(struct sType*)come_increment_ref_count(multiple_assign_var21->v2);
                if(                field_type_189->mHeap                ) {
                    char source2_190[1024];
                    memset(&source2_190, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_190,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_188,name_188,name_188);
                    buffer_append_str(source,source2_190);
                }
                else if(                list$1sNode$ph_length(field_type_189->mArrayNum)>0                ) {
                    char source2_191[1024];
                    memset(&source2_191, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_191,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_188,name_188,name_188);
                    buffer_append_str(source,source2_191);
                }
                else {
                    char source2_192[1024];
                    memset(&source2_192, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_192,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_188,name_188);
                    buffer_append_str(source,source2_192);
                }
                (name_188 = come_decrement_ref_count(name_188, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        user_real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        __right_value0 = (void*)0;
        user_cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_format(source,"return result;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj228=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj228,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj229=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        __right_value0 = (void*)0;
        name_193=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3021, "char*"));
        __right_value0 = (void*)0;
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values11__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3024, "struct list$1sType$ph")),1,__list_values11__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values12__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3025, "struct list$1char$ph")),1,__list_values12__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3026, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_193)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3036, "struct sFun*")),(char*)come_increment_ref_count(name_193),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_193)),(struct sFun*)come_increment_ref_count(fun));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3045, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3045, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            cloner=fun2;
        }
        __dec_obj230=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline;
        __dec_obj231=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_193 = come_decrement_ref_count(name_193, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj232=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj233=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__220 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3072, "struct tuple2$2sFun$pchar$ph")),cloner,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__220, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__220;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj243;
char* last_code2;
char* __dec_obj244;
struct sClass* current_stack_frame_struct;
struct sFun* to_string_fun;
void* __right_value0 = (void*)0;
char* real_fun_name;
struct sType* type_before;
struct sType* type2;
struct sType* __dec_obj245;
struct sClass* klass;
struct sType* __dec_obj246;
char* none_generics_name;
char* generics_fun_name;
struct sGenericsFun* generics_fun;
struct tuple2$2char$phbool$* multiple_assign_var23 = (void*)0;
char* name=0;
_Bool err=0;
int i;
char* new_fun_name;
char* __dec_obj247;
void* __right_value1 = (void*)0;
struct buffer* source;
int i_196;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var24 = (void*)0;
char* name_197=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
struct buffer* source3;
char* head;
struct buffer* __dec_obj248;
char* __dec_obj249;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_200;
struct sType* self_type;
struct sType* __dec_obj250;
struct sType* __list_values15__[1];
struct list$1sType$ph* param_types;
char* __list_values16__[1];
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
void* __right_value3 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
struct sNode* node;
_Bool Value;
char* __dec_obj251;
struct buffer* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
struct tuple2$2sFun$pchar$ph* __result_obj__222;
memset(&i, 0, sizeof(int));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj243=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj244=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj245=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj245,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj246=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj246,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        to_string_fun==((void*)0)        ) {
            __right_value0 = (void*)0;
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            __right_value0 = (void*)0;
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            generics_fun            ) {
                __right_value0 = (void*)0;
                multiple_assign_var23=((struct tuple2$2char$phbool$*)(__right_value0=create_generics_fun((char*)come_increment_ref_count(real_fun_name),generics_fun,(struct sType*)come_increment_ref_count(type),info)));
                name=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err=multiple_assign_var23->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err                ) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                __right_value0 = (void*)0;
                to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i));
            __right_value0 = (void*)0;
            to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            to_string_fun            ) {
                __right_value0 = (void*)0;
                __dec_obj247=real_fun_name,
                real_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        to_string_fun==((void*)0)        ) {
            __right_value0 = (void*)0;
            to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
    }
    if(    to_string_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber    ) {
        __right_value0 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3276, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"var result = new buffer();\n");
        buffer_append_format(source,"result.append_str(\"%s {\");\n",klass->mName);
        i_196=0;
        __right_value0 = (void*)0;
        klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        for(        o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)        ;        !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)        ;        it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)        ){
            multiple_assign_var24=it;
            name_197=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            if(            string_operator_equals(field_type->mClass->mName,"lambda")            ) {
                char source2[1024];
                memset(&source2, 0, sizeof(char)                *(1024)                );
                snprintf(source2,1024,"result.append_str(\"%s:\");\n",name_197);
                buffer_append_str(source,source2);
                snprintf(source2,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source,source2);
            }
            else if(            i_196==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1            ) {
                char source2_198[1024];
                memset(&source2_198, 0, sizeof(char)                *(1024)                );
                snprintf(source2_198,1024,"result.append_str(\"%s:\");\n",name_197);
                buffer_append_str(source,source2_198);
                snprintf(source2_198,1024,"result.append_str(self.%s.to_string());\n",name_197);
                buffer_append_str(source,source2_198);
            }
            else {
                char source2_199[1024];
                memset(&source2_199, 0, sizeof(char)                *(1024)                );
                snprintf(source2_199,1024,"result.append_str(\"%s:\");\n",name_197);
                buffer_append_str(source,source2_199);
                snprintf(source2_199,1024,"result.append_str(self.%s.to_string());\n",name_197);
                buffer_append_str(source,source2_199);
                snprintf(source2_199,1024,"result.append_str(\",\");\n");
                buffer_append_str(source,source2_199);
            }
            i_196++;
            (name_197 = come_decrement_ref_count(name_197, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(source,"result.append_str(\"}\");\n");
        buffer_append_format(source,"return result.to_string();\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj248=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj249=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3345, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type->mHeap=(_Bool)1;
        __right_value0 = (void*)0;
        name_200=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3347, "char*"));
        __right_value0 = (void*)0;
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        __right_value0 = (void*)0;
        __dec_obj250=self_type,
        self_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj250,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values15__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3352, "struct list$1sType$ph")),1,__list_values15__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values16__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3353, "struct list$1char$ph")),1,__list_values16__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3354, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_200)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3363, "struct sFun*")),(char*)come_increment_ref_count(name_200),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_200)),(struct sFun*)come_increment_ref_count(fun));
            to_string_fun=fun;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3374, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3374, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            to_string_fun=fun2;
        }
        __dec_obj251=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline;
        __dec_obj252=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_200 = come_decrement_ref_count(name_200, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj253=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj254=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__222 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3399, "struct tuple2$2sFun$pchar$ph")),to_string_fun,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__222, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__222;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj255;
char* last_code2;
char* __dec_obj256;
struct sClass* current_stack_frame_struct;
struct sFun* get_hash_key_fun;
void* __right_value0 = (void*)0;
char* real_fun_name;
struct sType* type2;
struct sType* __dec_obj257;
struct sClass* klass;
char* none_generics_name;
char* generics_fun_name;
struct sGenericsFun* generics_fun;
struct tuple2$2char$phbool$* multiple_assign_var25 = (void*)0;
char* name=0;
_Bool err=0;
int i;
char* new_fun_name;
char* __dec_obj258;
void* __right_value1 = (void*)0;
struct buffer* source;
int i_201;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
struct tuple2$2char$phsType$ph* multiple_assign_var26 = (void*)0;
char* name_202=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
struct buffer* source3;
char* head;
struct buffer* __dec_obj259;
char* __dec_obj260;
struct sBlock* block;
void* __right_value2 = (void*)0;
struct sType* result_type;
char* name_203;
struct sType* self_type;
struct sType* __list_values17__[1];
struct list$1sType$ph* param_types;
char* __list_values18__[1];
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
struct sFun* fun2;
void* __right_value3 = (void*)0;
struct sFun* fun;
struct sNode* _inf_value18;
struct sFunNode* _inf_obj_value18;
struct sNode* node;
_Bool Value;
char* __dec_obj261;
struct buffer* __dec_obj262;
char* __dec_obj263;
char* __dec_obj264;
struct tuple2$2sFun$pchar$ph* __result_obj__223;
memset(&i, 0, sizeof(int));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj257=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj257,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        get_hash_key_fun==((void*)0)        ) {
            __right_value0 = (void*)0;
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            __right_value0 = (void*)0;
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            generics_fun            ) {
                __right_value0 = (void*)0;
                multiple_assign_var25=((struct tuple2$2char$phbool$*)(__right_value0=create_generics_fun((char*)come_increment_ref_count(real_fun_name),generics_fun,(struct sType*)come_increment_ref_count(type),info)));
                name=(char*)come_increment_ref_count(multiple_assign_var25->v1);
                err=multiple_assign_var25->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err                ) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                __right_value0 = (void*)0;
                get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i));
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            get_hash_key_fun            ) {
                __right_value0 = (void*)0;
                __dec_obj258=real_fun_name,
                real_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        get_hash_key_fun==((void*)0)        ) {
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
    }
    if(    get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol    ) {
        __right_value0 = (void*)0;
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3467, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"unsigned int result = 0;\n");
        i_201=0;
        __right_value0 = (void*)0;
        klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        for(        o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)        ;        !list$1tuple2$2char$phsType$ph$ph_end(o2_saved)        ;        it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)        ){
            multiple_assign_var26=it;
            name_202=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var26->v2);
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"result += ((int)self.%s).get_hash_key();\n",name_202);
            buffer_append_str(source,source2);
            i_201++;
            (name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_format(source,"return result;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj259=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj259,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj260=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3504, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type->mUnsigned=(_Bool)1;
        __right_value0 = (void*)0;
        name_203=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3506, "char*"));
        __right_value0 = (void*)0;
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values17__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3509, "struct list$1sType$ph")),1,__list_values17__)));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values18__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3510, "struct list$1char$ph")),1,__list_values18__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3511, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_203)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(        fun2==((void*)0)||fun2->mExternal        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3520, "struct sFun*")),(char*)come_increment_ref_count(name_203),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_203)),(struct sFun*)come_increment_ref_count(fun));
            get_hash_key_fun=fun;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3531, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3531, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFunNode_finalize;
            _inf_value18->clone=(void*)sFunNode_clone;
            _inf_value18->compile=(void*)sFunNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFunNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value18);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(            !Value            ) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            get_hash_key_fun=fun2;
        }
        __dec_obj261=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline;
        __dec_obj262=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj262,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_203 = come_decrement_ref_count(name_203, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj263=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj264=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__223 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3556, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__223, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__223;
}

struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info){
struct sFun* caller_fun;
int caller_line;
char* caller_sname;
char* last_code;
char* __dec_obj265;
char* last_code2;
char* __dec_obj266;
void* __right_value0 = (void*)0;
char* sname_top;
int sline_top;
struct sType* result_type;
void* __right_value1 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved;
struct sType* it;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source;
struct buffer* __dec_obj267;
char* __dec_obj268;
struct sBlock* block;
struct buffer* __dec_obj269;
char* __dec_obj270;
_Bool const_fun;
_Bool var_args;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct sFun* fun2;
struct sNode* _inf_value19;
struct sFunNode* _inf_obj_value19;
struct sNode* node;
_Bool Value;
struct sFun* __result_obj__224;
char* __dec_obj271;
char* __dec_obj272;
char* __dec_obj273;
struct sFun* __result_obj__225;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj265=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj266=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0,0, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    result_type=(struct sType*)come_increment_ref_count(fun->mResultType);
    __right_value0 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3578, "struct list$1sType$ph*"))));
    for(    o2_saved=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it=list$1sType$ph_begin(o2_saved)    ;    !list$1sType$ph_end(o2_saved)    ;    it=list$1sType$ph_next(o2_saved)    ){
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __right_value0 = (void*)0;
    __dec_obj267=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    come_call_finalizer(buffer_finalize, __dec_obj267,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj268=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj269=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj269,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj270=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    const_fun=fun->mConstFun;
    var_args=fun->mVarArgs;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun2=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3614, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3619, "struct sNode");
    _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3619, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sFunNode_finalize;
    _inf_value19->clone=(void*)sFunNode_clone;
    _inf_value19->compile=(void*)sFunNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sFunNode_kind;
    _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
    __right_value2 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(_inf_value19);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__224 = (void*)come_increment_ref_count(((void*)0));
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__224, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__224;
    }
    else {
    }
    __right_value0 = (void*)0;
    __dec_obj271=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline_top;
    __dec_obj272=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj273=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0,0, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    __result_obj__225 = (struct sFun*)come_increment_ref_count(fun2);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__225, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__225;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj274;
char* result;
struct list$1CVALUE$ph* stack_saved;
struct list$1sRightValueObject$ph* right_value_objects;
struct sClass* klass;
char* class_name;
void* __right_value0 = (void*)0;
struct sType* type2;
struct sFun* cloner;
char* fun_name2;
char* none_generics_name;
struct sType* obj_type;
char* __dec_obj275;
char* fun_name3;
struct sGenericsFun* generics_fun;
void* __right_value1 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var27 = (void*)0;
char* name=0;
_Bool err=0;
_Bool __result_obj__226;
char* __dec_obj276;
int i;
char* new_fun_name;
char* __dec_obj277;
struct tuple2$2sFun$pchar$ph* multiple_assign_var28 = (void*)0;
struct sFun* fun=0;
char* new_fun_name_204=0;
char* __dec_obj278;
struct list$1sRightValueObject$ph* __dec_obj279;
struct list$1CVALUE$ph* __dec_obj280;
_Bool __result_obj__227;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj274=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj274,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    class_name=klass->mName;
    char* fun_name="equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        __right_value0 = (void*)0;
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj275=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        generics_fun        ) {
            __right_value0 = (void*)0;
            multiple_assign_var27=((struct tuple2$2char$phbool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var27->v1);
            err=multiple_assign_var27->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            !err            ) {
                __result_obj__226 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__226;
            }
            else {
                __right_value0 = (void*)0;
                cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj276=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0,0, (void*)0);
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            cloner            ) {
                __right_value0 = (void*)0;
                __dec_obj277=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        cloner==((void*)0)        ) {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
    }
    if(    cloner==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        __right_value0 = (void*)0;
        multiple_assign_var28=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name,info)));
        fun=multiple_assign_var28->v1;
        new_fun_name_204=(char*)come_increment_ref_count(multiple_assign_var28->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj278=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_204);
        __dec_obj278 = come_decrement_ref_count(__dec_obj278, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_204 = come_decrement_ref_count(new_fun_name_204, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj279=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj279,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj280=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj280,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__227 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__227;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj281;
char* result;
struct list$1CVALUE$ph* stack_saved;
struct list$1sRightValueObject$ph* right_value_objects;
struct sClass* klass;
char* class_name;
void* __right_value0 = (void*)0;
struct sType* type2;
struct sFun* cloner;
char* fun_name2;
char* none_generics_name;
struct sType* obj_type;
char* __dec_obj282;
char* fun_name3;
struct sGenericsFun* generics_fun;
void* __right_value1 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var29 = (void*)0;
char* name=0;
_Bool err=0;
_Bool __result_obj__228;
char* __dec_obj283;
int i;
char* new_fun_name;
char* __dec_obj284;
struct tuple2$2sFun$pchar$ph* multiple_assign_var30 = (void*)0;
struct sFun* fun=0;
char* new_fun_name_205=0;
char* __dec_obj285;
struct list$1sRightValueObject$ph* __dec_obj286;
struct list$1CVALUE$ph* __dec_obj287;
_Bool __result_obj__229;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj281=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj281,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    class_name=klass->mName;
    char* fun_name="operator_equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        __right_value0 = (void*)0;
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj282=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        generics_fun        ) {
            __right_value0 = (void*)0;
            multiple_assign_var29=((struct tuple2$2char$phbool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var29->v1);
            err=multiple_assign_var29->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            !err            ) {
                __result_obj__228 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__228;
            }
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj283=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0,0, (void*)0);
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            cloner            ) {
                __right_value0 = (void*)0;
                __dec_obj284=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj284 = come_decrement_ref_count(__dec_obj284, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        cloner==((void*)0)        ) {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
    }
    if(    cloner==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        __right_value0 = (void*)0;
        multiple_assign_var30=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_operator_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name,info)));
        fun=multiple_assign_var30->v1;
        new_fun_name_205=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj285=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_205);
        __dec_obj285 = come_decrement_ref_count(__dec_obj285, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_205 = come_decrement_ref_count(new_fun_name_205, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj286=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj286,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj287=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj287,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__229 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__229;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj288;
char* result;
struct list$1CVALUE$ph* stack_saved;
struct list$1sRightValueObject$ph* right_value_objects;
struct sClass* klass;
char* class_name;
void* __right_value0 = (void*)0;
struct sType* type2;
struct sFun* cloner;
char* fun_name2;
char* none_generics_name;
struct sType* obj_type;
char* __dec_obj289;
char* fun_name3;
struct sGenericsFun* generics_fun;
void* __right_value1 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var31 = (void*)0;
char* name=0;
_Bool err=0;
_Bool __result_obj__230;
char* __dec_obj290;
int i;
char* new_fun_name;
char* __dec_obj291;
struct tuple2$2sFun$pchar$ph* multiple_assign_var32 = (void*)0;
struct sFun* fun=0;
char* new_fun_name_206=0;
char* __dec_obj292;
struct list$1sRightValueObject$ph* __dec_obj293;
struct list$1CVALUE$ph* __dec_obj294;
_Bool __result_obj__231;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj288=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj288,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    class_name=klass->mName;
    char* fun_name="operator_not_equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        __right_value0 = (void*)0;
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        __right_value0 = (void*)0;
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj289=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj289 = come_decrement_ref_count(__dec_obj289, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        generics_fun        ) {
            __right_value0 = (void*)0;
            multiple_assign_var31=((struct tuple2$2char$phbool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var31->v1);
            err=multiple_assign_var31->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            !err            ) {
                __result_obj__230 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__230;
            }
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj290=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0,0, (void*)0);
        for(        i=128-1        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            cloner            ) {
                __right_value0 = (void*)0;
                __dec_obj291=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj291 = come_decrement_ref_count(__dec_obj291, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        cloner==((void*)0)        ) {
            __right_value0 = (void*)0;
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
    }
    if(    cloner==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        __right_value0 = (void*)0;
        multiple_assign_var32=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_operator_not_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name,info)));
        fun=multiple_assign_var32->v1;
        new_fun_name_206=(char*)come_increment_ref_count(multiple_assign_var32->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj292=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_206);
        __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_206 = come_decrement_ref_count(new_fun_name_206, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj293=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj293,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj294=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj294,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__231 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__231;
}

