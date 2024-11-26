/// previous struct definition ///
struct __sFILEX;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long  long _mbstateL;
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

typedef long  long __darwin_blkcnt_t;

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

typedef long  long __darwin_off_t;

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

typedef long  long fpos_t;

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
    long  long (*_seek)(void*,long  long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long  long _offset;
};

typedef struct __sFILE FILE;

extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
typedef long  long off_t;

typedef long ssize_t;

extern const int sys_nerr;
extern const char* sys_errlist[];
enum anonymous_typeY2 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY2 idtype_t;

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

struct anonymous_typeX3
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX4
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX3 w_T;
struct anonymous_typeX4 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

struct anonymous_typeX5
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX5 div_t;

struct anonymous_typeX6
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX6 ldiv_t;

struct anonymous_typeX7
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX7 lldiv_t;

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

typedef void* any;

typedef char* string;

extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
struct buffer
{
    char* buf;
    int len;
    int size;
};

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct integer
{
    long value;
};

struct floating
{
    double value;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
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
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};

struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
};

struct tuple1$1sTypeph
{
    struct sType* v1;
};

struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};

struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct tuple1$1sTypeph* mChannelType;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct buffer* mHeader;
};

struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};

struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};

struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};

struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
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
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2charphcharph* module_params;
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
    struct list$1sVarph* match_it_var;
    int sline_top;
    _Bool new_;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
struct sSemicolonNode
{
    int sline;
    char* sname;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};

// source head

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long  long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long  long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66);
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...);
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);
int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99);
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);
int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
void flockfile(struct __sFILE* anonymous_var_nameX108);
int ftrylockfile(struct __sFILE* anonymous_var_nameX109);
void funlockfile(struct __sFILE* anonymous_var_nameX110);
int getc_unlocked(struct __sFILE* anonymous_var_nameX111);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);
int putchar_unlocked(int anonymous_var_nameX114);
int getw(struct __sFILE* anonymous_var_nameX115);
int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long  long __offset, int __whence);
long  long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);
int vscanf(const char* __format, va_list anonymous_var_nameX119);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long  long (*anonymous_lambda_var_nameZ3)(void*,long  long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);
int wait(int* anonymous_var_nameX189);
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
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
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX206);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214);
void exit(int anonymous_var_nameX215);
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219);
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231);
int rand();
void srand(unsigned int anonymous_var_nameX232);
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX239);
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245);
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]);
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48();
char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX271[3]);
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX274);
long random();
int rand_r(unsigned int* anonymous_var_nameX275);
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX279);
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);
int cgetclose();
int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);
int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);
int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);
int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);
int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);
int cgetset(const char* anonymous_var_nameX304);
int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);
int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp);
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
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366);
int ffsll(long  long anonymous_var_nameX367);
int fls(int anonymous_var_nameX368);
int flsl(long anonymous_var_nameX369);
int flsll(long  long anonymous_var_nameX370);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX371, const char* anonymous_var_nameX372);
int* __error();
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_format(struct buffer* self, char* str, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool int_equals(int self, int right);
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(int c);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
char* bool_to_string(_Bool self);
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
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct __sFILE* f, char* str);
char* FILE_read(struct __sFILE* f);
int FILE_fclose(struct __sFILE* f);
int* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right);
static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
char* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2392, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2399, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2408, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2415, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2422, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2429, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2436, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2736, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2746, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2751, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2756, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2789, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2791, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2796, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2798, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2803, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2805, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2810, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2812, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2817, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2819, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2824, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2826, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2831, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2833, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2838, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2843, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2848, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2853, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2858, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2863, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2868, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2873, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2878, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2883, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2888, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2893, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2898, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2903, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
}
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 219, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 229, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 239, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 219, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 229, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 239, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 219, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 229, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 239, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 219, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 229, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 239, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 219, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 229, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 239, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 219, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 229, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 239, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 219, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 229, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 239, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sSemicolonNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string("sSemicolonNode")));
    /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct sLambdaNode* __result67__;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value118,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("sLambdaNode")));
    /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_66;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* result_type_67;
void* __right_value122 = (void*)0;
int block_level_68;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_69;
void* __right_value125 = (void*)0;
char* __dec_obj18;
void* __right_value161 = (void*)0;
struct sType* __dec_obj63;
_Bool __result88__;
    come_fun_66=info->come_fun;
    info->come_fun=self->mFun;
    result_type_67=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_67,"__result_obj__",(_Bool)0,info))));
        /* U11 */__right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_68=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_68;
    come_value_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_69->c_value;
    come_value_69->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value_69->type;
    come_value_69->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_69->var=((void*)0);
    add_come_last_code(info,"%s",come_value_69->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
    info->come_fun=come_fun_66;
    __result88__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value126 = (void*)0;
struct sType* result_70;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value130 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value131 = (void*)0;
char* __dec_obj43;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value147 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value154 = (void*)0;
struct list$1charph* __dec_obj56;
void* __right_value155 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value156 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value157 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value158 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value159 = (void*)0;
char* __dec_obj61;
void* __right_value160 = (void*)0;
char* __dec_obj62;
struct sType* __result86__;
    if(    self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_70=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_70->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_70->mNoSolvedGenericsType;
        result_70->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_70->mOriginalLoadVarType;
        result_70->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_70->mGenericsName;
        result_70->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_70->mGenericsTypes;
        result_70->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_70->mArrayNum;
        result_70->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_70->mParamTypes;
        result_70->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj56=result_70->mParamNames;
        result_70->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj56,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj57=result_70->mResultType;
        result_70->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj58=result_70->mAlignas;
        result_70->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj59=result_70->mChannelType;
        result_70->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_70->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_70->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_70->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_70->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_70->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_70->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_70->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_70->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_70->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_70->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_70->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_70->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_70->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_70->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_70->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_70->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj60=result_70->mSizeNum;
        result_70->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_70->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_70->mOriginalTypeName;
        result_70->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_70->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_70->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_70->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_70->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_70->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_70->mAsmName;
        result_70->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_70->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_70->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_70->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_70->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginIsArray=self->mOriginIsArray;
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_70;
    /*i*/come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* result_71;
void* __right_value128 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result71__;
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_71=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_71->v1;
        result_71->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_71;
    /*i*/come_call_finalizer3(result_71,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
char* __dec_obj24;
struct list$1sTypeph* __dec_obj25;
struct list$1sNodeph* __dec_obj27;
struct list$1sTypeph* __dec_obj29;
struct list$1charph* __dec_obj30;
struct tuple1$1sTypeph* __dec_obj32;
struct sNode* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj35;
struct sNode* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj20=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj22=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj24=self->mGenericsName;
            /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj25=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj27=self->mArrayNum;
            come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj29=self->mParamTypes;
            come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj30=self->mParamNames;
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj32=self->mResultType;
            come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj34=self->mAlignas;
            /* U1 */ if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj35=self->mChannelType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            /* U1 */ if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj38=self->mOriginalTypeName;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj39=self->mAsmName;
            /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_72;
struct list_item$1sTypeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj26;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_74;
struct list_item$1sTypeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_76;
struct list_item$1sNodeph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /* U1 */ if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_78;
struct list_item$1sNodeph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_82;
struct list_item$1charph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj40=self->v1;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result72__;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
void* __right_value137 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_84=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sTypeph"))));
    it_85=self->head;
    while(it_85!=((void*)0)) {
        list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(sType_clone(it_85->item)));
        it_85=it_85->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_84;
    /*i*/come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj44;
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj46;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sTypeph"))));
        litem_86->prev=((void*)0);
        litem_86->next=((void*)0);
        __dec_obj44=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_86;
        self->head=litem_86;
    }
    else if(    self->len==1) {
        litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sTypeph"))));
        litem_87->prev=self->head;
        litem_87->next=((void*)0);
        __dec_obj45=litem_87->item;
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_87;
        self->head->next=litem_87;
    }
    else {
        litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sTypeph"))));
        litem_88->prev=self->tail;
        litem_88->next=((void*)0);
        __dec_obj46=litem_88->item;
        litem_88->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_88;
        self->tail=litem_88;
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result76__;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1sNodeph* result_89;
struct list_item$1sNodeph* it_90;
void* __right_value145 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_89=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sNodeph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1sNodeph_add(result_89,(struct sNode*)come_increment_ref_count(sNode_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result77__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj48;
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value141=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sNodeph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj48=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1) {
        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sNodeph"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj49=litem_92->item;
        litem_92->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sNodeph"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj50=litem_93->item;
        litem_93->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_93;
        self->tail=litem_93;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result79__;
void* __right_value144 = (void*)0;
struct sNode* result_94;
struct sNode* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_94=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_94->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_94->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_94->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_94->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_94->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_94->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_94->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_94->kind=self->kind;
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_94;
    if(result_94) { result_94 = come_decrement_ref_count2(result_94, ((struct sNode*)result_94)->finalize, ((struct sNode*)result_94)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result82__;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct list$1charph* result_95;
struct list_item$1charph* it_96;
void* __right_value153 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_95=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 135, "list$1charph"))));
    it_96=self->head;
    while(it_96!=((void*)0)) {
        list$1charph_add(result_95,(char*)come_increment_ref_count(string_clone(it_96->item)));
        it_96=it_96->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_95;
    /*i*/come_call_finalizer3(result_95,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result83__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value150 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj53;
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_98;
char* __dec_obj54;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_99;
char* __dec_obj55;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value150=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1charph"))));
        litem_97->prev=((void*)0);
        litem_97->next=((void*)0);
        __dec_obj53=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_97;
        self->head=litem_97;
    }
    else if(    self->len==1) {
        litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1charph"))));
        litem_98->prev=self->head;
        litem_98->next=((void*)0);
        __dec_obj54=litem_98->item;
        litem_98->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_98;
        self->head->next=litem_98;
    }
    else {
        litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1charph"))));
        litem_99->prev=self->tail;
        litem_99->next=((void*)0);
        __dec_obj55=litem_99->item;
        litem_99->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_99;
        self->tail=litem_99;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj64;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_101;
struct CVALUE* __dec_obj68;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_102;
struct CVALUE* __dec_obj69;
struct list$1CVALUEph* __result87__;
    if(    self->len==0) {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1CVALUEph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj64=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_100;
        self->head=litem_100;
    }
    else if(    self->len==1) {
        litem_101=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1CVALUEph"))));
        litem_101->prev=self->head;
        litem_101->next=((void*)0);
        __dec_obj68=litem_101->item;
        litem_101->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_101;
        self->head->next=litem_101;
    }
    else {
        litem_102=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1CVALUEph"))));
        litem_102->prev=self->tail;
        litem_102->next=((void*)0);
        __dec_obj69=litem_102->item;
        litem_102->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_102;
        self->tail=litem_102;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj65;
struct sType* __dec_obj66;
char* __dec_obj67;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj65=self->c_value;
            /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj66=self->type;
            come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj67=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
struct sFun* __dec_obj70;
struct sFunNode* __result89__;
    ((struct sNodeBase*)(__right_value165=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value165,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj70=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj70,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string("sFunNode")));
    /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_103;
char* come_fun_name_104;
void* __right_value167 = (void*)0;
char* __dec_obj88;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sType* result_type_105;
void* __right_value170 = (void*)0;
int block_level_106;
void* __right_value171 = (void*)0;
char* __dec_obj89;
_Bool __result91__;
    come_fun_103=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_104=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj88=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_105=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_105,"__result_obj__",(_Bool)0,info))));
            /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_106=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_106;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_103;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_104);
    /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    /* U13 */come_fun_name_104 = come_decrement_ref_count2(come_fun_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj71;
struct sType* __dec_obj72;
struct list$1sTypeph* __dec_obj73;
struct list$1charph* __dec_obj74;
struct list$1charph* __dec_obj75;
struct sType* __dec_obj76;
struct sBlock* __dec_obj77;
struct buffer* __dec_obj80;
struct buffer* __dec_obj81;
struct buffer* __dec_obj82;
struct buffer* __dec_obj83;
char* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj72=self->mResultType;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj75=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj76=self->mLambdaType;
            come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj77=self->mBlock;
            come_call_finalizer3(__dec_obj77,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj80=self->mSource;
            come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj81=self->mSourceHead;
            come_call_finalizer3(__dec_obj81,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj82=self->mSourceHead2;
            come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj83=self->mSourceDefer;
            come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj84=self->mComeHeader;
            /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj78;
struct sVarTable* __dec_obj79;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj78=self->mNodes;
            come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj79=self->mVarTable;
            come_call_finalizer3(__dec_obj79,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct list$1sNodeph* __dec_obj90;
struct sBlock* __result92__;
    __dec_obj90=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
struct sType* __dec_obj91;
void* __right_value175 = (void*)0;
struct list$1charph* __dec_obj92;
void* __right_value176 = (void*)0;
struct list$1charph* __dec_obj93;
char* __dec_obj94;
struct sType* __dec_obj95;
struct list$1sTypeph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct list$1charph* __dec_obj98;
char* __dec_obj99;
void* __right_value177 = (void*)0;
char* __dec_obj100;
struct sGenericsFun* __result93__;
    __dec_obj91=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj100=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
char* __dec_obj104;
struct sType* __dec_obj105;
struct list$1sTypeph* __dec_obj106;
struct list$1charph* __dec_obj107;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj101=self->mImplType;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj102=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj103=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj105=self->mResultType;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj106=self->mParamTypes;
            come_call_finalizer3(__dec_obj106,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj107=self->mParamNames;
            come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj108=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj109=self->mBlock;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj110=self->mGenericsSName;
            /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct sBlock* result_107;
int sline_top_108;
int block_level_109;
char* p_saved_110;
int sline_saved_111;
char* sname_saved_112;
void* __right_value180 = (void*)0;
char* __dec_obj111;
char* __dec_obj112;
struct map$2charphcharph* __dec_obj113;
char* p_115;
int sline_116;
char* sname_117;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
char* module_name_118;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct list$1charph* params_119;
void* __right_value185 = (void*)0;
char* word_120;
void* __right_value186 = (void*)0;
char* __dec_obj114;
void* __right_value187 = (void*)0;
char* __dec_obj115;
struct sBlock* __result98__;
struct sClassModule* module_124;
void* __right_value188 = (void*)0;
void* __right_value194 = (void*)0;
struct map$2charphcharph* __dec_obj121;
int i_128;
struct list$1charph* o2_saved_129;
char* it_132;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
char* __dec_obj122;
void* __right_value202 = (void*)0;
struct sNode* node_179;
void* __right_value203 = (void*)0;
char* __dec_obj123;
_Bool omit_semicolon_183;
void* __right_value207 = (void*)0;
char* __dec_obj127;
char* head_198;
void* __right_value208 = (void*)0;
struct sNode* value_199;
char* tail_200;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sNode* node_202;
void* __right_value212 = (void*)0;
char* __dec_obj129;
struct sNode* node_203;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value217 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value218 = (void*)0;
struct sNode* __dec_obj133;
_Bool omit_semicolon_205;
char* p_206;
char* head_207;
void* __right_value219 = (void*)0;
char* source_208;
void* __right_value220 = (void*)0;
struct sNode* node_209;
struct sBlock* __result137__;
node_203 = (void*)0;
    result_107=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_108=info->sline_top;
    info->sline_top=info->sline;
    block_level_109=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_110=((void*)0);
        sline_saved_111=0;
        sname_saved_112=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_110) {
                if(                *info->p==0) {
                    info->p=p_saved_110;
                    info->sline=sline_saved_111;
                    __dec_obj111=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_112));
                    /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_110=((void*)0);
                    sline_saved_111=0;
                    __dec_obj112=sname_saved_112;
                    sname_saved_112=((void*)0);
                    /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj113=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj113,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_115=info->p;
            sline_116=info->sline;
            sname_117=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_116;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value181=parse_word(info)));
                /* U11 */__right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_118=(char*)come_increment_ref_count(parse_word(info));
                params_119=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 211, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_120=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_119,(char*)come_increment_ref_count(word_120));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /* U13 */word_120 = come_decrement_ref_count2(word_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        /* U13 */word_120 = come_decrement_ref_count2(word_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_110=info->p;
                sline_saved_111=info->sline;
                __dec_obj114=sname_saved_112;
                sname_saved_112=(char*)come_increment_ref_count(__builtin_string(info->sname));
                /*G*/ __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj115=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_118));
                /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                map$2charphsClassModulephp_operator_load_element(info->modules,module_name_118)==((void*)0)) {
                    err_msg(info,"module not found");
                    __result98__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    /* U13 */module_name_118 = come_decrement_ref_count2(module_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_119,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */sname_saved_112 = come_decrement_ref_count2(sname_saved_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_107,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result98__;
                }
                module_124=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_118), "05function.c", 258, 0));
                if(                list$1charph_length(module_124->mParams)!=list$1charph_length(params_119)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj121=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 265, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj121,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_128=0;
                for(                o2_saved_129=(struct list$1charph*)come_increment_ref_count((module_124->mParams)),it_132=list$1charph_begin((o2_saved_129));                !list$1charph_end((o2_saved_129));                it_132=list$1charph_next((o2_saved_129))                ){
                    ((char*)(__right_value200=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_132)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(list$1charphp_operator_load_element(params_119,i_128), "05function.c", 269, 1)))))));
                    /* U11 */__right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_128++;
                }
                /*i*/come_call_finalizer3(o2_saved_129,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_124->mText;
                info->sline=module_124->mSLine;
                __dec_obj122=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_124->mSName));
                /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */module_name_118 = come_decrement_ref_count2(module_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_119,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_179=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj123=info->sname;
            info->sname=(char*)come_increment_ref_count(node_179->sname(node_179->_protocol_obj));
            /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_179->sline(node_179->_protocol_obj);
            if(            node_179==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_179));
            parse_sharp_v5(info);
            if(            node_179->terminated(node_179->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_183=(_Bool)1;
            if(            node_179->terminated(node_179->_protocol_obj)) {
                omit_semicolon_183=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_183=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_107->mOmitSemicolon=omit_semicolon_183;
                if(                omit_semicolon_183&&in_function) {
                    list$1sNodeph_delete(result_107->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_115;
                    info->sline=sline_116;
                    __dec_obj127=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_117));
                    /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_198=info->p;
                    value_199=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_200=info->p;
                    __dec_obj128=value_199;
                    value_199=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_199),info));
                    /* U1 */ if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_201[tail_200-head_198+1];
                    memset(&buf_201, 0, sizeof(char)                    *(tail_200-head_198+1)                    );
                    memcpy(buf_201,head_198,tail_200-head_198);
                    buf_201[tail_200-head_198]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_202=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_199),(char*)come_increment_ref_count(__builtin_string(buf_201)),info));
                    list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_202));
                    if(value_199) { value_199 = come_decrement_ref_count2(value_199, ((struct sNode*)value_199)->finalize, ((struct sNode*)value_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_199) { value_199 = come_decrement_ref_count2(value_199, ((struct sNode*)value_199)->finalize, ((struct sNode*)value_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_110) {
            if(            info->p==0) {
                info->p=p_saved_110;
                info->sline=sline_saved_111;
                __dec_obj129=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_112));
                /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_110=((void*)0);
                sline_saved_111=0;
            }
        }
        /* U13 */sname_saved_112 = come_decrement_ref_count2(sname_saved_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 366, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value214=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 366, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj132=node_203;
            node_203=(struct sNode*)come_increment_ref_count(_inf_value1);
            /* U1 */ if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value214,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_203));
        }
        else {
            __dec_obj133=node_203;
            node_203=(struct sNode*)come_increment_ref_count(expression_v13(info));
            /* U1 */ if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_203==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_203->terminated(node_203->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_205=(_Bool)1;
            if(            node_203->terminated(node_203->_protocol_obj)) {
                omit_semicolon_205=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_205=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_107->mOmitSemicolon=omit_semicolon_205;
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_203));
        }
        if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_206=info->p;
        head_207=info->head;
        source_208=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_208;
        info->head=source_208;
        node_209=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_209==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_209));
        info->p=p_206;
        info->head=head_207;
        /* U13 */source_208 = come_decrement_ref_count2(source_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_109;
    __result137__ = gComeFunResultObject = __result_obj__ = result_107;
    /*i*/come_call_finalizer3(result_107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_113;
int i_114;
    for(    i_113=0;    i_113<self->size;    i_113++    ){
        if(        self->item_existance[i_113]) {
            if(            1) {
                /* U13 */self->items[i_113] = come_decrement_ref_count2(self->items[i_113], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_114=0;    i_114<self->size;    i_114++    ){
        if(        self->item_existance[i_114]) {
            if(            1) {
                /* U13 */self->keys[i_114] = come_decrement_ref_count2(self->keys[i_114], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_121;
unsigned int hash_122;
unsigned int it_123;
struct sClassModule* __result94__;
struct sClassModule* __result95__;
struct sClassModule* __result96__;
struct sClassModule* __result97__;
default_value_121 = (void*)0;
    memset(&default_value_121,0,sizeof(struct sClassModule*));
    hash_122=string_get_hash_key(((char*)key))%self->size;
    it_123=hash_122;
    while((_Bool)1) {
        if(        self->item_existance[it_123]) {
            if(            string_equals(self->keys[it_123],key)) {
                __result94__ = gComeFunResultObject = __result_obj__ = self->items[it_123];
                /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result94__;
            }
            it_123++;
            if(            it_123>=self->size) {
                it_123=0;
            }
            else if(            it_123==hash_122) {
                __result95__ = gComeFunResultObject = __result_obj__ = default_value_121;
                /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result95__;
            }
        }
        else {
            __result96__ = gComeFunResultObject = __result_obj__ = default_value_121;
            /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result96__;
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = default_value_121;
    /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj116;
char* __dec_obj117;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj116=self->mName;
            /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj117=self->mText;
            /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj118=self->mParams;
            come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj119=self->mSName;
            /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
int i_125;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1charp* __dec_obj120;
struct map$2charphcharph* __result100__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value189=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1396, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value190=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1397, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value191=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1398, "bool"))));
    for(    i_125=0;    i_125<128;    i_125++    ){
        self->item_existance[i_125]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj120=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1408, "list$1charp"))));
    come_call_finalizer3(__dec_obj120,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_126;
int i_127;
    for(    i_126=0;    i_126<self->size;    i_126++    ){
        if(        self->item_existance[i_126]) {
            if(            1) {
                /* U13 */self->items[i_126] = come_decrement_ref_count2(self->items[i_126], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_127=0;    i_127<self->size;    i_127++    ){
        if(        self->item_existance[i_127]) {
            if(            1) {
                /* U13 */self->keys[i_127] = come_decrement_ref_count2(self->keys[i_127], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_130;
char* __result101__;
char* __result102__;
char* result_131;
char* __result103__;
result_130 = (void*)0;
result_131 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_130,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_130;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->head;
    if(    self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_131,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_131;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_133;
char* __result104__;
char* __result105__;
char* result_134;
char* __result106__;
result_133 = (void*)0;
result_134 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_133,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_133;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_134,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_134;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_135;
int i_136;
char* __result107__;
char* default_value_137;
char* __result108__;
default_value_137 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_135=self->head;
    i_136=0;
    while(it_135!=((void*)0)) {
        if(        position==i_136) {
            __result107__ = gComeFunResultObject = __result_obj__ = it_135->item;
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
        it_135=it_135->next;
        i_136++;
    }
    memset(&default_value_137,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = default_value_137;
    /* U13 */default_value_137 = come_decrement_ref_count2(default_value_137, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result130__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result130__ = gComeFunResultObject = __result_obj__ = item;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_155;
unsigned int it_156;
_Bool same_key_exist_173;
char* it2_176;
struct map$2charphcharph* __result129__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_155=string_get_hash_key(key)%self->size;
    it_156=hash_155;
    while((_Bool)1) {
        if(        self->item_existance[it_156]) {
            if(            string_equals(self->keys[it_156],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_156]);
                    /* U13 */self->keys[it_156] = come_decrement_ref_count2(self->keys[it_156], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_156]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_156]);
                    self->keys[it_156]=key;
                }
                if(                1) {
                    /* U13 */self->items[it_156] = come_decrement_ref_count2(self->items[it_156], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_156]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_156]=item;
                }
                break;
            }
            it_156++;
            if(            it_156>=self->size) {
                it_156=0;
            }
            else if(            it_156==hash_155) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_156]=(_Bool)1;
            if(            1) {
                self->keys[it_156]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_156]=key;
            }
            if(            1) {
                self->items[it_156]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_156]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_173=(_Bool)0;
    for(    it2_176=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_176=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_176,key)) {
            same_key_exist_173=(_Bool)1;
        }
    }
    if(    !same_key_exist_173) {
        list$1charp_push_back(self->key_list,key);
    }
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_138;
void* __right_value197 = (void*)0;
char** keys_139;
void* __right_value198 = (void*)0;
char** items_140;
void* __right_value199 = (void*)0;
_Bool* item_existance_141;
int len_142;
char* it_145;
char* default_value_148;
char* it2_149;
unsigned int hash_152;
int n_153;
char* default_value_154;
default_value_148 = (void*)0;
default_value_154 = (void*)0;
    size_138=self->size*10;
    keys_139=(char**)come_increment_ref_count(((char**)(__right_value197=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_140=(char**)come_increment_ref_count(((char**)(__right_value198=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "/usr/local/include/comelang.h", 1625, "char*%"))));
    item_existance_141=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value199=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_138)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_142=0;
    for(    it_145=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_145=map$2charphcharph_next(self)    ){
        memset(&default_value_148,0,sizeof(char*));
        it2_149=map$2charphcharph_at(self,it_145,default_value_148);
        hash_152=string_get_hash_key(it_145)%size_138;
        n_153=hash_152;
        while((_Bool)1) {
            if(            item_existance_141[n_153]) {
                n_153++;
                if(                n_153>=size_138) {
                    n_153=0;
                }
                else if(                n_153==hash_152) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_141[n_153]=(_Bool)1;
                keys_139[n_153]=it_145;
                items_140[n_153]=map$2charphcharph_at(self,it_145,default_value_154);
                len_142++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_139;
    self->items=items_140;
    self->item_existance=item_existance_141;
    self->size=size_138;
    self->len=len_142;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_143;
char* __result109__;
char* __result110__;
char* result_144;
char* __result111__;
result_143 = (void*)0;
result_144 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_143,0,sizeof(char*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_143;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_144,0,sizeof(char*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_144;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_146;
char* __result112__;
char* __result113__;
char* result_147;
char* __result114__;
result_146 = (void*)0;
result_147 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_146,0,sizeof(char*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_146;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_147,0,sizeof(char*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_147;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_150;
unsigned int it_151;
char* __result115__;
char* __result116__;
char* __result117__;
char* __result118__;
    hash_150=string_get_hash_key(((char*)key))%self->size;
    it_151=hash_150;
    while((_Bool)1) {
        if(        self->item_existance[it_151]) {
            if(            string_equals(self->keys[it_151],key)) {
                __result115__ = gComeFunResultObject = __result_obj__ = self->items[it_151];
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result115__;
            }
            it_151++;
            if(            it_151>=self->size) {
                it_151=0;
            }
            else if(            it_151==hash_150) {
                __result116__ = gComeFunResultObject = __result_obj__ = default_value;
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result116__;
            }
        }
        else {
            __result117__ = gComeFunResultObject = __result_obj__ = default_value;
            /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result117__;
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = default_value;
    /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_157;
struct list_item$1charp* it_158;
struct list$1charp* __result122__;
    it2_157=0;
    it_158=self->head;
    while(it_158!=((void*)0)) {
        if(        charp_equals(it_158->item,item)) {
            list$1charp_delete(self,it2_157,it2_157+1);
            break;
        }
        it2_157++;
        it_158=it_158->next;
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_159;
struct list$1charp* __result119__;
struct list_item$1charp* it_162;
int i_163;
struct list_item$1charp* prev_it_164;
struct list_item$1charp* it_165;
int i_166;
struct list_item$1charp* prev_it_167;
struct list_item$1charp* it_168;
struct list_item$1charp* head_prev_it_169;
struct list_item$1charp* tail_it_170;
int i_171;
struct list_item$1charp* prev_it_172;
struct list$1charp* __result121__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_159=tail;
        tail=head;
        head=tmp_159;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result119__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_162=self->head;
        i_163=0;
        while(it_162!=((void*)0)) {
            if(            i_163<tail) {
                prev_it_164=it_162;
                it_162=it_162->next;
                i_163++;
                /*i*/come_call_finalizer3(prev_it_164,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_163==tail) {
                self->head=it_162;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_162=it_162->next;
                i_163++;
            }
        }
    }
    else if(    tail==self->len) {
        it_165=self->head;
        i_166=0;
        while(it_165!=((void*)0)) {
            if(            i_166==head) {
                self->tail=it_165->prev;
                self->tail->next=((void*)0);
            }
            if(            i_166>=head) {
                prev_it_167=it_165;
                it_165=it_165->next;
                i_166++;
                /*i*/come_call_finalizer3(prev_it_167,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_165=it_165->next;
                i_166++;
            }
        }
    }
    else {
        it_168=self->head;
        head_prev_it_169=((void*)0);
        tail_it_170=((void*)0);
        i_171=0;
        while(it_168!=((void*)0)) {
            if(            i_171==head) {
                head_prev_it_169=it_168->prev;
            }
            if(            i_171==tail) {
                tail_it_170=it_168;
            }
            if(            i_171>=head&&i_171<tail) {
                prev_it_172=it_168;
                it_168=it_168->next;
                i_171++;
                /*i*/come_call_finalizer3(prev_it_172,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_168=it_168->next;
                i_171++;
            }
        }
        if(        head_prev_it_169!=((void*)0)) {
            head_prev_it_169->next=tail_it_170;
        }
        if(        tail_it_170!=((void*)0)) {
            tail_it_170->prev=head_prev_it_169;
        }
    }
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_160;
struct list_item$1charp* prev_it_161;
struct list$1charp* __result120__;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*i*/come_call_finalizer3(prev_it_161,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_174;
char* __result123__;
char* __result124__;
char* result_175;
char* __result125__;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_174,0,sizeof(char*));
        __result123__ = gComeFunResultObject = __result_obj__ = result_174;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    self->it=self->head;
    if(    self->it) {
        __result124__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    memset(&result_175,0,sizeof(char*));
    __result125__ = gComeFunResultObject = __result_obj__ = result_175;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_177;
char* __result126__;
char* __result127__;
char* result_178;
char* __result128__;
result_177 = (void*)0;
result_178 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_177,0,sizeof(char*));
        __result126__ = gComeFunResultObject = __result_obj__ = result_177;
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result127__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    memset(&result_178,0,sizeof(char*));
    __result128__ = gComeFunResultObject = __result_obj__ = result_178;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value204 = (void*)0;
struct list_item$1sNodeph* litem_180;
struct sNode* __dec_obj124;
void* __right_value205 = (void*)0;
struct list_item$1sNodeph* litem_181;
struct sNode* __dec_obj125;
void* __right_value206 = (void*)0;
struct list_item$1sNodeph* litem_182;
struct sNode* __dec_obj126;
struct list$1sNodeph* __result131__;
    if(    self->len==0) {
        litem_180=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value204=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sNodeph"))));
        litem_180->prev=((void*)0);
        litem_180->next=((void*)0);
        __dec_obj124=litem_180->item;
        litem_180->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_180;
        self->head=litem_180;
    }
    else if(    self->len==1) {
        litem_181=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value205=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sNodeph"))));
        litem_181->prev=self->head;
        litem_181->next=((void*)0);
        __dec_obj125=litem_181->item;
        litem_181->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_181;
        self->head->next=litem_181;
    }
    else {
        litem_182=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value206=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sNodeph"))));
        litem_182->prev=self->tail;
        litem_182->next=((void*)0);
        __dec_obj126=litem_182->item;
        litem_182->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_182;
        self->tail=litem_182;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_184;
struct list$1sNodeph* __result132__;
struct list_item$1sNodeph* it_187;
int i_188;
struct list_item$1sNodeph* prev_it_189;
struct list_item$1sNodeph* it_190;
int i_191;
struct list_item$1sNodeph* prev_it_192;
struct list_item$1sNodeph* it_193;
struct list_item$1sNodeph* head_prev_it_194;
struct list_item$1sNodeph* tail_it_195;
int i_196;
struct list_item$1sNodeph* prev_it_197;
struct list$1sNodeph* __result134__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_184=tail;
        tail=head;
        head=tmp_184;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result132__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result132__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_187=self->head;
        i_188=0;
        while(it_187!=((void*)0)) {
            if(            i_188<tail) {
                prev_it_189=it_187;
                it_187=it_187->next;
                i_188++;
                /*i*/come_call_finalizer3(prev_it_189,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_188==tail) {
                self->head=it_187;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_187=it_187->next;
                i_188++;
            }
        }
    }
    else if(    tail==self->len) {
        it_190=self->head;
        i_191=0;
        while(it_190!=((void*)0)) {
            if(            i_191==head) {
                self->tail=it_190->prev;
                self->tail->next=((void*)0);
            }
            if(            i_191>=head) {
                prev_it_192=it_190;
                it_190=it_190->next;
                i_191++;
                /*i*/come_call_finalizer3(prev_it_192,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_190=it_190->next;
                i_191++;
            }
        }
    }
    else {
        it_193=self->head;
        head_prev_it_194=((void*)0);
        tail_it_195=((void*)0);
        i_196=0;
        while(it_193!=((void*)0)) {
            if(            i_196==head) {
                head_prev_it_194=it_193->prev;
            }
            if(            i_196==tail) {
                tail_it_195=it_193;
            }
            if(            i_196>=head&&i_196<tail) {
                prev_it_197=it_193;
                it_193=it_193->next;
                i_196++;
                /*i*/come_call_finalizer3(prev_it_197,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_193=it_193->next;
                i_196++;
            }
        }
        if(        head_prev_it_194!=((void*)0)) {
            head_prev_it_194->next=tail_it_195;
        }
        if(        tail_it_195!=((void*)0)) {
            tail_it_195->prev=head_prev_it_194;
        }
    }
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_185;
struct list_item$1sNodeph* prev_it_186;
struct list$1sNodeph* __result133__;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        /*i*/come_call_finalizer3(prev_it_186,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj130;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj130=self->sname;
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result135__;
void* __right_value215 = (void*)0;
struct sSemicolonNode* result_204;
void* __right_value216 = (void*)0;
char* __dec_obj131;
struct sSemicolonNode* __result136__;
    if(    self==(void*)0) {
        __result135__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    result_204=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_204->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj131=result_204->sname;
        result_204->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_204;
    /*i*/come_call_finalizer3(result_204,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_210;
struct sVarTable* old_table_211;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct sVarTable* __dec_obj134;
struct sVarTable* current_loop_vtable_212;
struct list$1sTypeph* param_types__213;
struct list$1charph* param_names__214;
int i_215;
struct list$1charph* o2_saved_216;
char* name_217;
void* __right_value223 = (void*)0;
struct sType* type_218;
void* __right_value224 = (void*)0;
int block_level_222;
int i_223;
struct list$1sNodeph* o2_saved_224;
struct sNode* node_227;
struct list$1sRightValueObjectph* right_value_objects_230;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
int stack_num_before_235;
int sline_236;
void* __right_value227 = (void*)0;
char* sname_237;
void* __right_value228 = (void*)0;
char* __dec_obj142;
_Bool Value_238;
void* __right_value229 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value234 = (void*)0;
struct CVALUE* come_value2_240;
void* __right_value235 = (void*)0;
char* __dec_obj146;
void* __right_value236 = (void*)0;
struct CVALUE* come_value2_242;
struct sVar* var__243;
void* __right_value237 = (void*)0;
struct CVALUE* come_value3_244;
void* __right_value238 = (void*)0;
_Bool _if_conditional1;
void* __right_value239 = (void*)0;
struct sType* __dec_obj147;
void* __right_value240 = (void*)0;
char* c_value_261;
void* __right_value241 = (void*)0;
char* __dec_obj148;
void* __right_value242 = (void*)0;
char* __dec_obj149;
void* __right_value243 = (void*)0;
char* __dec_obj150;
_Bool Value_262;
void* __right_value244 = (void*)0;
char* __dec_obj151;
struct list$1sRightValueObjectph* __dec_obj152;
void* __if_result__0_265 = (void*)0;
struct list$1sVarph* o2_saved_266;
struct sVar* it_269;
struct list$1sVarph* __dec_obj158;
memset(&i_215, 0, sizeof(int));
memset(&i_223, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_210=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_211=info->lv_table;
    if(    !no_var_table) {
        __dec_obj134=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 440, "sVarTable")),(_Bool)0,old_table_211));
        come_call_finalizer3(__dec_obj134,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_212=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__213=info->param_types;
    param_names__214=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_216=(param_names),name_217=list$1charph_begin((o2_saved_216));        !list$1charph_end((o2_saved_216));        name_217=list$1charph_next((o2_saved_216))        ){
            type_218=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_215), "05function.c", 458, 2))));
            type_218->mFunctionParam=(_Bool)1;
            type_218->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_217,(struct sType*)come_increment_ref_count(sType_clone(type_218)),info);
            i_215++;
            /*i*/come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_222=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_224=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_227=list$1sNodeph_begin((o2_saved_224));        !list$1sNodeph_end((o2_saved_224));        node_227=list$1sNodeph_next((o2_saved_224))        ){
            right_value_objects_230=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj139=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 477, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj139,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj140=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj141=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_235=list$1CVALUEph_length(info->stack);
            sline_236=info->sline;
            sname_237=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_227->sline(node_227->_protocol_obj);
            __dec_obj142=info->sname;
            info->sname=(char*)come_increment_ref_count(node_227->sname(node_227->_protocol_obj));
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_223==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_238=node_compile(node_227,info);
                if(                !Value_238) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_235+1) {
                    come_value_239=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_239->type->mClass->mName,"void")&&come_value_239->type->mPointerNum==0) {
                        come_value2_240=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_239));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_240));
                        __dec_obj146=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_240->c_value));
                        /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_242=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_239));
                        var__243=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__243) {
                            come_value3_244=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 513, "CVALUE"));
                            if(                            var__243->mType->mClass=="void"&&var__243->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__243->mType,((struct sType*)(__right_value238=sType_clone(come_value_239->type))),come_value3_244,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value238,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj147=var__243->mType;
                            var__243->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_239->type));
                            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_239->type->mHeap) {
                                c_value_261=(char*)come_increment_ref_count(increment_ref_count_object(come_value_239->type,come_value_239->c_value,info));
                                __dec_obj148=come_value2_242->c_value;
                                come_value2_242->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__243->mCValueName,c_value_261));
                                /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                /* U13 */c_value_261 = come_decrement_ref_count2(c_value_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj149=come_value2_242->c_value;
                                come_value2_242->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__243->mCValueName,come_value_239->c_value));
                                /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_242));
                        __dec_obj150=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_242->c_value));
                        /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_262=node_compile(node_227,info);
                if(                !Value_262) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_236;
            __dec_obj151=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_237));
            /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_235);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj152=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_230);
            come_call_finalizer3(__dec_obj152,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_223++;
            /*i*/come_call_finalizer3(right_value_objects_230,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */sname_237 = come_decrement_ref_count2(sname_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_224,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_222==0) {
            for(            o2_saved_266=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_269=list$1sVarph_begin((o2_saved_266));            !list$1sVarph_end((o2_saved_266));            it_269=list$1sVarph_next((o2_saved_266))            ){
                free_object(it_269->mType,it_269->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_266,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj158=info->match_it_var;
            __if_result__0_265=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj158,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_265,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_211;
    info->block_level=block_level_222;
    info->param_types=param_types__213;
    info->param_names=param_names__214;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_212;
    info->inhibits_output_code=inhibits_output_code_210;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_219;
int i_220;
struct sType* __result138__;
struct sType* default_value_221;
struct sType* __result139__;
default_value_221 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_219=self->head;
    i_220=0;
    while(it_219!=((void*)0)) {
        if(        position==i_220) {
            __result138__ = gComeFunResultObject = __result_obj__ = it_219->item;
            gComeFunResultObject = (void*)0;
            return __result138__;
        }
        it_219=it_219->next;
        i_220++;
    }
    memset(&default_value_221,0,sizeof(struct sType*));
    __result139__ = gComeFunResultObject = __result_obj__ = default_value_221;
    /*i*/come_call_finalizer3(default_value_221,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_225;
struct sNode* __result140__;
struct sNode* __result141__;
struct sNode* result_226;
struct sNode* __result142__;
result_225 = (void*)0;
result_226 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_225,0,sizeof(struct sNode*));
        __result140__ = gComeFunResultObject = __result_obj__ = result_225;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    self->it=self->head;
    if(    self->it) {
        __result141__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    memset(&result_226,0,sizeof(struct sNode*));
    __result142__ = gComeFunResultObject = __result_obj__ = result_226;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_228;
struct sNode* __result143__;
struct sNode* __result144__;
struct sNode* result_229;
struct sNode* __result145__;
result_228 = (void*)0;
result_229 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_228,0,sizeof(struct sNode*));
        __result143__ = gComeFunResultObject = __result_obj__ = result_228;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result144__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    memset(&result_229,0,sizeof(struct sNode*));
    __result145__ = gComeFunResultObject = __result_obj__ = result_229;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result146__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_231;
struct list_item$1sRightValueObjectph* prev_it_232;
    it_231=self->head;
    while(it_231!=((void*)0)) {
        prev_it_232=it_231;
        it_231=it_231->next;
        /*i*/come_call_finalizer3(prev_it_232,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj135;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj135=self->item;
            come_call_finalizer3(__dec_obj135,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj136=self->mType;
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj137=self->mVarName;
            /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj138=self->mFunName;
            /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_233;
struct list_item$1sRightValueObjectph* prev_it_234;
    it_233=self->head;
    while(it_233!=((void*)0)) {
        prev_it_234=it_233;
        it_233=it_233->next;
        /*i*/come_call_finalizer3(prev_it_234,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result147__;
void* __right_value230 = (void*)0;
struct CVALUE* result_241;
void* __right_value231 = (void*)0;
char* __dec_obj143;
void* __right_value232 = (void*)0;
struct sType* __dec_obj144;
void* __right_value233 = (void*)0;
char* __dec_obj145;
struct CVALUE* __result148__;
    if(    self==(void*)0) {
        __result147__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    result_241=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj143=result_241->c_value;
        result_241->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj144=result_241->type;
        result_241->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_241->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_241->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj145=result_241->c_value_without_right_value_objects;
        result_241->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result148__ = gComeFunResultObject = __result_obj__ = result_241;
    /*i*/come_call_finalizer3(result_241,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_245;
struct list_item$1tuple2$2charphsTypephph* it2_246;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_245=left->head;
    it2_246=right->head;
    while(it_245!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_245->item,it2_246->item)) {
            return (_Bool)0;
        }
        it_245=it_245->next;
        it2_246=it2_246->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_247;
struct list_item$1sTypeph* it2_248;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_247=left->head;
    it2_248=right->head;
    while(it_247!=((void*)0)) {
        if(        !sType_equals(it_247->item,it2_248->item)) {
            return (_Bool)0;
        }
        it_247=it_247->next;
        it2_248=it2_248->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_249;
struct list_item$1sNodeph* it2_250;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_249=left->head;
    it2_250=right->head;
    while(it_249!=((void*)0)) {
        if(        !sNode_equals(it_249->item,it2_250->item)) {
            return (_Bool)0;
        }
        it_249=it_249->next;
        it2_250=it2_250->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_251;
struct list_item$1charph* it2_252;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_251=left->head;
    it2_252=right->head;
    while(it_251!=((void*)0)) {
        if(        !string_equals(it_251->item,it2_252->item)) {
            return (_Bool)0;
        }
        it_251=it_251->next;
        it2_252=it2_252->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2charphsTypephphp_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
    return !list$1tuple2$2charphsTypephph_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_253;
struct list_item$1tuple2$2charphsTypephph* it2_254;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_253=left->head;
    it2_254=right->head;
    while(it_253!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_253->item,it2_254->item))) {
            return (_Bool)0;
        }
        it_253=it_253->next;
        it2_254=it2_254->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodeph_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mComeMemCore,right->mComeMemCore)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoNumberArray,right->mNoNumberArray)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    list$1sNodeph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1charph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mComeMemCore,right->mComeMemCore)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoNumberArray,right->mNoNumberArray)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&string_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&string_equals(left->mParentClassName,right->mParentClassName));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))));
}

static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right){
    return !tuple1$1sTypeph_operator_equals(left,right);
}

static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !(sType_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypeph_operator_equals(left,right);
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_255;
struct list_item$1sTypeph* it2_256;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_255=left->head;
    it2_256=right->head;
    while(it_255!=((void*)0)) {
        if(        !(sType_operator_equals(it_255->item,it2_256->item))) {
            return (_Bool)0;
        }
        it_255=it_255->next;
        it2_256=it2_256->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_257;
struct list_item$1sNodeph* it2_258;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_257=left->head;
    it2_258=right->head;
    while(it_257!=((void*)0)) {
        if(        !(sNode_operator_equals(it_257->item,it2_258->item))) {
            return (_Bool)0;
        }
        it_257=it_257->next;
        it2_258=it2_258->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charph_operator_equals(left,right);
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_259;
struct list_item$1charph* it2_260;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_259=left->head;
    it2_260=right->head;
    while(it_259!=((void*)0)) {
        if(        !(string_operator_equals(it_259->item,it2_260->item))) {
            return (_Bool)0;
        }
        it_259=it_259->next;
        it2_260=it2_260->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_263;
struct list_item$1sRightValueObjectph* prev_it_264;
struct list$1sRightValueObjectph* __result149__;
    it_263=self->head;
    while(it_263!=((void*)0)) {
        prev_it_264=it_263;
        it_263=it_263->next;
        /*i*/come_call_finalizer3(prev_it_264,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_267;
struct sVar* __result150__;
struct sVar* __result151__;
struct sVar* result_268;
struct sVar* __result152__;
result_267 = (void*)0;
result_268 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_267,0,sizeof(struct sVar*));
        __result150__ = gComeFunResultObject = __result_obj__ = result_267;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    self->it=self->head;
    if(    self->it) {
        __result151__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    memset(&result_268,0,sizeof(struct sVar*));
    __result152__ = gComeFunResultObject = __result_obj__ = result_268;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_270;
struct sVar* __result153__;
struct sVar* __result154__;
struct sVar* result_271;
struct sVar* __result155__;
result_270 = (void*)0;
result_271 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_270,0,sizeof(struct sVar*));
        __result153__ = gComeFunResultObject = __result_obj__ = result_270;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result154__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    memset(&result_271,0,sizeof(struct sVar*));
    __result155__ = gComeFunResultObject = __result_obj__ = result_271;
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_272;
struct list_item$1sVarph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        /*i*/come_call_finalizer3(prev_it_273,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj153;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj153=self->item;
            come_call_finalizer3(__dec_obj153,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj154;
char* __dec_obj155;
struct sType* __dec_obj156;
char* __dec_obj157;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj154=self->mName;
            /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj155=self->mCValueName;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj156=self->mType;
            come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj157=self->mFunName;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_274;
struct list_item$1sVarph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*i*/come_call_finalizer3(prev_it_275,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(    list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_276;
_Bool dquort_277;
_Bool squort_278;
int sline_279;
int nest_280;
char* tail_281;
void* __right_value245 = (void*)0;
char* buf_282;
void* __right_value246 = (void*)0;
char* __result156__;
    head_276=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_277=(_Bool)0;
        squort_278=(_Bool)0;
        sline_279=0;
        nest_280=0;
        while(1) {
            if(            dquort_277) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_277=!dquort_277;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
            }
            else if(            squort_278) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_278=!squort_278;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_279=info->sline;
                info->p++;
                squort_278=!squort_278;
            }
            else if(            *info->p==34) {
                sline_279=info->sline;
                info->p++;
                dquort_277=!dquort_277;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_280++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_280==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_280--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(            *info->p==10) {
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
    }
    tail_281=info->p;
    buf_282=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_281-head_276+1)), "05function.c", 745, "char"));
    memcpy(buf_282,head_276,tail_281-head_276);
    buf_282[tail_281-head_276]=0;
    __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string(buf_282)));
    /* U13 */buf_282 = come_decrement_ref_count2(buf_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_283;
char* p3_284;
int i_285;
    terminated_283=(_Bool)0;
    p3_284=p;
    for(    i_285=0;    i_285<strlen(p2);    i_285++    ){
        if(        *p3_284==0) {
            terminated_283=(_Bool)1;
            break;
        }
        p3_284++;
    }
    return !terminated_283&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct buffer* asm_fun_name_286;
int brace_num_287;
int len_288;
_Bool in_dquort_289;
int brace_num_290;
int brace_num_291;
void* __right_value249 = (void*)0;
char* __result157__;
    asm_fun_name_286=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 768, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            brace_num_287=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_287++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_287--;
                    if(                    brace_num_287==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            len_288=0;
            in_dquort_289=(_Bool)0;
            brace_num_290=0;
            while(*info->p) {
                if(                *info->p==34) {
                    info->p++;
                    in_dquort_289=!in_dquort_289;
                }
                else if(                in_dquort_289) {
                    buffer_append_char(asm_fun_name_286,*info->p);
                    info->p++;
                }
                else if(                *info->p==40) {
                    info->p++;
                    brace_num_290++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_290--;
                    if(                    brace_num_290==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            brace_num_291=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_291++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_291--;
                    if(                    brace_num_291==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value249=buffer_to_string(asm_fun_name_286)));
    /*i*/come_call_finalizer3(asm_fun_name_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_292;
int head_sline_293;
void* __right_value250 = (void*)0;
char* buf_294;
void* __right_value251 = (void*)0;
struct sNode* node_295;
_Bool Value_296;
    while(*info->p) {
        parse_sharp_v5(info);
        head_292=info->p;
        head_sline_293=info->sline;
        buf_294=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_294 = come_decrement_ref_count2(buf_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_295=(struct sNode*)come_increment_ref_count(top_level_v99(buf_294,head_292,head_sline_293,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_295!=((void*)0)) {
            Value_296=node_compile(node_295,info);
            if(            !Value_296) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_294 = come_decrement_ref_count2(buf_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */buf_294 = come_decrement_ref_count2(buf_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value252 = (void*)0;
char* name_297;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_298;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sType* __list_values1___299[5];
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sTypeph* param_types_304;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* __list_values2___305[5];
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* param_names_310;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* param_default_parametors_311;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sFun* main_fun_312;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
char* name_334;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* result_type_335;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* __list_values3___336[1];
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sTypeph* param_types_337;
void* __right_value300 = (void*)0;
char* __list_values4___338[1];
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* param_names_339;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1charph* param_default_parametors_340;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sFun* main_fun_341;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
char* name_342;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* result_type_343;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sType* __list_values5___344[7];
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1sTypeph* param_types_345;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* __list_values6___346[7];
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct list$1charph* param_names_347;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1charph* param_default_parametors_348;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sFun* main_fun_349;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* name_350;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* result_type_351;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __list_values7___352[5];
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1sTypeph* param_types_353;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* __list_values8___354[5];
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charph* param_names_355;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1charph* param_default_parametors_356;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sFun* main_fun_357;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* name_358;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* result_type_359;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* __list_values9___360[1];
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1sTypeph* param_types_361;
void* __right_value381 = (void*)0;
char* __list_values10___362[1];
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1charph* param_names_363;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1charph* param_default_parametors_364;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sFun* main_fun_365;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
char* name_366;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* result_type_367;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* __list_values11___368[4];
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sTypeph* param_types_369;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __list_values12___370[4];
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct list$1charph* param_names_371;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1charph* param_default_parametors_372;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sFun* main_fun_373;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
char* name_374;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* result_type_375;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __list_values13___376[3];
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1sTypeph* param_types_377;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* __list_values14___378[3];
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1charph* param_names_379;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1charph* param_default_parametors_380;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sFun* main_fun_381;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* name_382;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* result_type_383;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* __list_values15___384[1];
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1sTypeph* param_types_385;
void* __right_value450 = (void*)0;
char* __list_values16___386[1];
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* param_names_387;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1charph* param_default_parametors_388;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sFun* main_fun_389;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
char* name_390;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* result_type_391;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sType* __list_values17___392[3];
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1sTypeph* param_types_393;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __list_values18___394[3];
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1charph* param_names_395;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct list$1charph* param_default_parametors_396;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sFun* main_fun_397;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
char* name_398;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* result_type_399;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1sTypeph* param_types_400;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct list$1charph* param_names_401;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1charph* param_default_parametors_402;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sFun* main_fun_403;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
char* name_404;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* result_type_405;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __list_values19___406[4];
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1sTypeph* param_types_407;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* __list_values20___408[4];
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1charph* param_names_409;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1charph* param_default_parametors_410;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sFun* main_fun_411;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* name_412;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* result_type_413;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1sTypeph* param_types_414;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1charph* param_names_415;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct list$1charph* param_default_parametors_416;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sFun* fun_417;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* name_418;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* result_type_419;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1sTypeph* param_types_420;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1charph* param_names_421;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1charph* param_default_parametors_422;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sFun* fun_423;
void* __right_value550 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_297=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_298=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 937, "sType")),"void*",(_Bool)0,info));
        param_types_304=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___299[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value256=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 938, "sType")),"int",(_Bool)0,info)))),
__list_values1___299[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value258=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 938, "sType")),"int",(_Bool)0,info)))),
__list_values1___299[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value260=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 938, "sType")),"char*",(_Bool)0,info)))),
__list_values1___299[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value262=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 938, "sType")),"int",(_Bool)0,info)))),
__list_values1___299[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value264=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 938, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 938, "struct list$1sTypeph")),5,__list_values1___299)));
        /*g*/come_call_finalizer3(__right_value256,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value258,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value260,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value262,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value264,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_310=(struct list$1charph*)come_increment_ref_count((__list_values2___305[0]=(char*)come_increment_ref_count(((char*)(__right_value270=__builtin_string("count")))),
__list_values2___305[1]=(char*)come_increment_ref_count(((char*)(__right_value271=__builtin_string("size")))),
__list_values2___305[2]=(char*)come_increment_ref_count(((char*)(__right_value272=__builtin_string("sname")))),
__list_values2___305[3]=(char*)come_increment_ref_count(((char*)(__right_value273=__builtin_string("sline")))),
__list_values2___305[4]=(char*)come_increment_ref_count(((char*)(__right_value274=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 939, "struct list$1charph")),5,__list_values2___305)));
        /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_311=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 940, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_311,((void*)0));
        list$1charph_push_back(param_default_parametors_311,((void*)0));
        list$1charph_push_back(param_default_parametors_311,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_311,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_311,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_312=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 946, "sFun")),(char*)come_increment_ref_count(name_297),(struct sType*)come_increment_ref_count(result_type_298),(struct list$1sTypeph*)come_increment_ref_count(param_types_304),(struct list$1charph*)come_increment_ref_count(param_names_310),(struct list$1charph*)come_increment_ref_count(param_default_parametors_311),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_297)),(struct sFun*)come_increment_ref_count(main_fun_312));
        /* U13 */name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_304,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_310,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_311,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_312,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_334=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_335=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 957, "sType")),"void*",(_Bool)0,info));
        param_types_337=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___336[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 958, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 958, "struct list$1sTypeph")),1,__list_values3___336)));
        /*g*/come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_339=(struct list$1charph*)come_increment_ref_count((__list_values4___338[0]=(char*)come_increment_ref_count(((char*)(__right_value300=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 959, "struct list$1charph")),1,__list_values4___338)));
        /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_340=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 960, "list$1charph"))));
        main_fun_341=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 961, "sFun")),(char*)come_increment_ref_count(name_334),(struct sType*)come_increment_ref_count(result_type_335),(struct list$1sTypeph*)come_increment_ref_count(param_types_337),(struct list$1charph*)come_increment_ref_count(param_names_339),(struct list$1charph*)come_increment_ref_count(param_default_parametors_340),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_334)),(struct sFun*)come_increment_ref_count(main_fun_341));
        /* U13 */name_334 = come_decrement_ref_count2(name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_335,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_337,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_339,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_341,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_342=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_343=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 972, "sType")),"void",(_Bool)0,info));
        param_types_345=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___344[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value314=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"void*",(_Bool)0,info)))),
__list_values5___344[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value316=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"void*",(_Bool)0,info)))),
__list_values5___344[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value318=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"void*",(_Bool)0,info)))),
__list_values5___344[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value320=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"void*",(_Bool)0,info)))),
__list_values5___344[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value322=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"int",(_Bool)0,info)))),
__list_values5___344[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value324=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"int",(_Bool)0,info)))),
__list_values5___344[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value326=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 973, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 973, "struct list$1sTypeph")),7,__list_values5___344)));
        /*g*/come_call_finalizer3(__right_value314,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value320,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value326,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_347=(struct list$1charph*)come_increment_ref_count((__list_values6___346[0]=(char*)come_increment_ref_count(((char*)(__right_value329=__builtin_string("fun")))),
__list_values6___346[1]=(char*)come_increment_ref_count(((char*)(__right_value330=__builtin_string("mem")))),
__list_values6___346[2]=(char*)come_increment_ref_count(((char*)(__right_value331=__builtin_string("protocol_fun")))),
__list_values6___346[3]=(char*)come_increment_ref_count(((char*)(__right_value332=__builtin_string("protocol_obj")))),
__list_values6___346[4]=(char*)come_increment_ref_count(((char*)(__right_value333=__builtin_string("call_finalizer_only")))),
__list_values6___346[5]=(char*)come_increment_ref_count(((char*)(__right_value334=__builtin_string("no_decrement")))),
__list_values6___346[6]=(char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 974, "struct list$1charph")),7,__list_values6___346)));
        /* U11 */__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_348=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 975, "list$1charph"))));
        main_fun_349=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 976, "sFun")),(char*)come_increment_ref_count(name_342),(struct sType*)come_increment_ref_count(result_type_343),(struct list$1sTypeph*)come_increment_ref_count(param_types_345),(struct list$1charph*)come_increment_ref_count(param_names_347),(struct list$1charph*)come_increment_ref_count(param_default_parametors_348),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_342)),(struct sFun*)come_increment_ref_count(main_fun_349));
        /* U13 */name_342 = come_decrement_ref_count2(name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_345,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_347,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_348,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_349,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_350=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_351=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 987, "sType")),"void*",(_Bool)0,info));
        param_types_353=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___352[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value349=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 988, "sType")),"void*",(_Bool)0,info)))),
__list_values7___352[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value351=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 988, "sType")),"void*",(_Bool)0,info)))),
__list_values7___352[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value353=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 988, "sType")),"void*",(_Bool)0,info)))),
__list_values7___352[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value355=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 988, "sType")),"bool",(_Bool)0,info)))),
__list_values7___352[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value357=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 988, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 988, "struct list$1sTypeph")),5,__list_values7___352)));
        /*g*/come_call_finalizer3(__right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value353,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value355,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value357,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_355=(struct list$1charph*)come_increment_ref_count((__list_values8___354[0]=(char*)come_increment_ref_count(((char*)(__right_value360=__builtin_string("mem")))),
__list_values8___354[1]=(char*)come_increment_ref_count(((char*)(__right_value361=__builtin_string("protocol_fun")))),
__list_values8___354[2]=(char*)come_increment_ref_count(((char*)(__right_value362=__builtin_string("protocol_obj")))),
__list_values8___354[3]=(char*)come_increment_ref_count(((char*)(__right_value363=__builtin_string("no_decrement")))),
__list_values8___354[4]=(char*)come_increment_ref_count(((char*)(__right_value364=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 989, "struct list$1charph")),5,__list_values8___354)));
        /* U11 */__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_356=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 990, "list$1charph"))));
        main_fun_357=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 991, "sFun")),(char*)come_increment_ref_count(name_350),(struct sType*)come_increment_ref_count(result_type_351),(struct list$1sTypeph*)come_increment_ref_count(param_types_353),(struct list$1charph*)come_increment_ref_count(param_names_355),(struct list$1charph*)come_increment_ref_count(param_default_parametors_356),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_350)),(struct sFun*)come_increment_ref_count(main_fun_357));
        /* U13 */name_350 = come_decrement_ref_count2(name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_353,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_357,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_358=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_359=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1002, "sType")),"void",(_Bool)0,info));
        param_types_361=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___360[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value378=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1003, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1003, "struct list$1sTypeph")),1,__list_values9___360)));
        /*g*/come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_363=(struct list$1charph*)come_increment_ref_count((__list_values10___362[0]=(char*)come_increment_ref_count(((char*)(__right_value381=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1004, "struct list$1charph")),1,__list_values10___362)));
        /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1005, "list$1charph"))));
        main_fun_365=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1006, "sFun")),(char*)come_increment_ref_count(name_358),(struct sType*)come_increment_ref_count(result_type_359),(struct list$1sTypeph*)come_increment_ref_count(param_types_361),(struct list$1charph*)come_increment_ref_count(param_names_363),(struct list$1charph*)come_increment_ref_count(param_default_parametors_364),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_358)),(struct sFun*)come_increment_ref_count(main_fun_365));
        /* U13 */name_358 = come_decrement_ref_count2(name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_361,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_363,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_364,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_365,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_366=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_367=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1017, "sType")),"void*",(_Bool)0,info));
        param_types_369=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___368[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value395=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1018, "sType")),"void*",(_Bool)0,info)))),
__list_values11___368[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value397=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1018, "sType")),"char*",(_Bool)0,info)))),
__list_values11___368[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value399=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1018, "sType")),"int",(_Bool)0,info)))),
__list_values11___368[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value401=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1018, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1018, "struct list$1sTypeph")),4,__list_values11___368)));
        /*g*/come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value397,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value399,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value401,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_371=(struct list$1charph*)come_increment_ref_count((__list_values12___370[0]=(char*)come_increment_ref_count(((char*)(__right_value404=__builtin_string("block")))),
__list_values12___370[1]=(char*)come_increment_ref_count(((char*)(__right_value405=__builtin_string("sname")))),
__list_values12___370[2]=(char*)come_increment_ref_count(((char*)(__right_value406=__builtin_string("sline")))),
__list_values12___370[3]=(char*)come_increment_ref_count(((char*)(__right_value407=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1019, "struct list$1charph")),4,__list_values12___370)));
        /* U11 */__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_372=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1020, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_372,((void*)0));
        list$1charph_push_back(param_default_parametors_372,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_372,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_372,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_373=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1025, "sFun")),(char*)come_increment_ref_count(name_366),(struct sType*)come_increment_ref_count(result_type_367),(struct list$1sTypeph*)come_increment_ref_count(param_types_369),(struct list$1charph*)come_increment_ref_count(param_names_371),(struct list$1charph*)come_increment_ref_count(param_default_parametors_372),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_366)),(struct sFun*)come_increment_ref_count(main_fun_373));
        /* U13 */name_366 = come_decrement_ref_count2(name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_369,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_371,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_373,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_374=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_375=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1036, "sType")),"void*",(_Bool)0,info));
        param_types_377=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___376[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1037, "sType")),"void*",(_Bool)0,info)))),
__list_values13___376[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1037, "sType")),"int",(_Bool)0,info)))),
__list_values13___376[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1037, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1037, "struct list$1sTypeph")),3,__list_values13___376)));
        /*g*/come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_379=(struct list$1charph*)come_increment_ref_count((__list_values14___378[0]=(char*)come_increment_ref_count(((char*)(__right_value431=__builtin_string("b")))),
__list_values14___378[1]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("c")))),
__list_values14___378[2]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1038, "struct list$1charph")),3,__list_values14___378)));
        /* U11 */__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_380=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1039, "list$1charph"))));
        main_fun_381=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1040, "sFun")),(char*)come_increment_ref_count(name_374),(struct sType*)come_increment_ref_count(result_type_375),(struct list$1sTypeph*)come_increment_ref_count(param_types_377),(struct list$1charph*)come_increment_ref_count(param_names_379),(struct list$1charph*)come_increment_ref_count(param_default_parametors_380),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_374)),(struct sFun*)come_increment_ref_count(main_fun_381));
        /* U13 */name_374 = come_decrement_ref_count2(name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_377,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_380,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_381,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_382=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_383=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1051, "sType")),"char*",(_Bool)0,info));
        param_types_385=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___384[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value447=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1052, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1052, "struct list$1sTypeph")),1,__list_values15___384)));
        /*g*/come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_387=(struct list$1charph*)come_increment_ref_count((__list_values16___386[0]=(char*)come_increment_ref_count(((char*)(__right_value450=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1053, "struct list$1charph")),1,__list_values16___386)));
        /* U11 */__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_388=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1054, "list$1charph"))));
        main_fun_389=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1055, "sFun")),(char*)come_increment_ref_count(name_382),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_385),(struct list$1charph*)come_increment_ref_count(param_names_387),(struct list$1charph*)come_increment_ref_count(param_default_parametors_388),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_382)),(struct sFun*)come_increment_ref_count(main_fun_389));
        /* U13 */name_382 = come_decrement_ref_count2(name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_385,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_387,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_388,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_389,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_390=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_391=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1066, "sType")),"void",(_Bool)0,info));
        param_types_393=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___392[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value464=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1067, "sType")),"int",(_Bool)0,info)))),
__list_values17___392[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value466=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1067, "sType")),"int",(_Bool)0,info)))),
__list_values17___392[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value468=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1067, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1067, "struct list$1sTypeph")),3,__list_values17___392)));
        /*g*/come_call_finalizer3(__right_value464,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value466,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value468,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_395=(struct list$1charph*)come_increment_ref_count((__list_values18___394[0]=(char*)come_increment_ref_count(((char*)(__right_value471=xsprintf("come_malloc")))),
__list_values18___394[1]=(char*)come_increment_ref_count(((char*)(__right_value472=xsprintf("come_debug")))),
__list_values18___394[2]=(char*)come_increment_ref_count(((char*)(__right_value473=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1068, "struct list$1charph")),3,__list_values18___394)));
        /* U11 */__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_396=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1069, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_396,((void*)0));
        main_fun_397=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1071, "sFun")),(char*)come_increment_ref_count(name_390),(struct sType*)come_increment_ref_count(result_type_391),(struct list$1sTypeph*)come_increment_ref_count(param_types_393),(struct list$1charph*)come_increment_ref_count(param_names_395),(struct list$1charph*)come_increment_ref_count(param_default_parametors_396),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_390)),(struct sFun*)come_increment_ref_count(main_fun_397));
        /* U13 */name_390 = come_decrement_ref_count2(name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_393,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_395,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_396,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_397,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_398=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_399=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1082, "sType")),"void",(_Bool)0,info));
        param_types_400=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1083, "list$1sTypeph"))));
        param_names_401=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1084, "list$1charph"))));
        param_default_parametors_402=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1085, "list$1charph"))));
        main_fun_403=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1086, "sFun")),(char*)come_increment_ref_count(name_398),(struct sType*)come_increment_ref_count(result_type_399),(struct list$1sTypeph*)come_increment_ref_count(param_types_400),(struct list$1charph*)come_increment_ref_count(param_names_401),(struct list$1charph*)come_increment_ref_count(param_default_parametors_402),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_398)),(struct sFun*)come_increment_ref_count(main_fun_403));
        /* U13 */name_398 = come_decrement_ref_count2(name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_401,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_402,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_403,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_404=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_405=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1097, "sType")),"void*",(_Bool)0,info));
        param_types_407=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___406[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value501=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1098, "sType")),"void*",(_Bool)0,info)))),
__list_values19___406[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value503=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1098, "sType")),"char*",(_Bool)0,info)))),
__list_values19___406[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value505=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1098, "sType")),"int",(_Bool)0,info)))),
__list_values19___406[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value507=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1098, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1098, "struct list$1sTypeph")),4,__list_values19___406)));
        /*g*/come_call_finalizer3(__right_value501,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value503,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value505,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value507,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_409=(struct list$1charph*)come_increment_ref_count((__list_values20___408[0]=(char*)come_increment_ref_count(((char*)(__right_value510=__builtin_string("mem")))),
__list_values20___408[1]=(char*)come_increment_ref_count(((char*)(__right_value511=__builtin_string("sname")))),
__list_values20___408[2]=(char*)come_increment_ref_count(((char*)(__right_value512=__builtin_string("sline")))),
__list_values20___408[3]=(char*)come_increment_ref_count(((char*)(__right_value513=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1099, "struct list$1charph")),4,__list_values20___408)));
        /* U11 */__right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_410=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1100, "list$1charph"))));
        main_fun_411=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1101, "sFun")),(char*)come_increment_ref_count(name_404),(struct sType*)come_increment_ref_count(result_type_405),(struct list$1sTypeph*)come_increment_ref_count(param_types_407),(struct list$1charph*)come_increment_ref_count(param_names_409),(struct list$1charph*)come_increment_ref_count(param_default_parametors_410),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_404)),(struct sFun*)come_increment_ref_count(main_fun_411));
        /* U13 */name_404 = come_decrement_ref_count2(name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_405,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_407,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_409,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_410,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_411,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_412=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_413=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1112, "sType")),"void",(_Bool)0,info));
        param_types_414=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1113, "list$1sTypeph"))));
        param_names_415=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1114, "list$1charph"))));
        param_default_parametors_416=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1115, "list$1charph"))));
        fun_417=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1116, "sFun")),(char*)come_increment_ref_count(name_412),(struct sType*)come_increment_ref_count(result_type_413),(struct list$1sTypeph*)come_increment_ref_count(param_types_414),(struct list$1charph*)come_increment_ref_count(param_names_415),(struct list$1charph*)come_increment_ref_count(param_default_parametors_416),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_412)),(struct sFun*)come_increment_ref_count(fun_417));
        /* U13 */name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_415,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_416,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_417,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_418=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_419=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1127, "sType")),"void",(_Bool)0,info));
        param_types_420=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1128, "list$1sTypeph"))));
        param_names_421=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1129, "list$1charph"))));
        param_default_parametors_422=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1130, "list$1charph"))));
        fun_423=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1131, "sFun")),(char*)come_increment_ref_count(name_418),(struct sType*)come_increment_ref_count(result_type_419),(struct list$1sTypeph*)come_increment_ref_count(param_types_420),(struct list$1charph*)come_increment_ref_count(param_names_421),(struct list$1charph*)come_increment_ref_count(param_default_parametors_422),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_418)),(struct sFun*)come_increment_ref_count(fun_423));
        /* U13 */name_418 = come_decrement_ref_count2(name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_419,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_420,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_421,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_423,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_300;
struct list$1sTypeph* __result159__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_300=0;    i_300<num_value;    i_300++    ){
        list$1sTypeph_push_back(self,values[i_300]);
    }
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
struct list_item$1sTypeph* litem_301;
struct sType* __dec_obj159;
void* __right_value266 = (void*)0;
struct list_item$1sTypeph* litem_302;
struct sType* __dec_obj160;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_303;
struct sType* __dec_obj161;
struct list$1sTypeph* __result158__;
    if(    self->len==0) {
        litem_301=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value265=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sTypeph"))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        __dec_obj159=litem_301->item;
        litem_301->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1) {
        litem_302=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value266=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sTypeph"))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        __dec_obj160=litem_302->item;
        litem_302->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sTypeph"))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        __dec_obj161=litem_303->item;
        litem_303->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_306;
struct list$1charph* __result161__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_306=0;    i_306<num_value;    i_306++    ){
        list$1charph_push_back(self,values[i_306]);
    }
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj162;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_308;
char* __dec_obj163;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_309;
char* __dec_obj164;
struct list$1charph* __result160__;
    if(    self->len==0) {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1charph"))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        __dec_obj162=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1) {
        litem_308=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1charph"))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        __dec_obj163=litem_308->item;
        litem_308->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1charph"))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        __dec_obj164=litem_309->item;
        litem_309->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_330;
unsigned int it_331;
_Bool same_key_exist_332;
char* it2_333;
struct map$2charphsFunph* __result172__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_330=string_get_hash_key(key)%self->size;
    it_331=hash_330;
    while((_Bool)1) {
        if(        self->item_existance[it_331]) {
            if(            string_equals(self->keys[it_331],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_331]);
                    /* U13 */self->keys[it_331] = come_decrement_ref_count2(self->keys[it_331], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_331]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_331]);
                    self->keys[it_331]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_331],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_331]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_331]=item;
                }
                break;
            }
            it_331++;
            if(            it_331>=self->size) {
                it_331=0;
            }
            else if(            it_331==hash_330) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_331]=(_Bool)1;
            if(            1) {
                self->keys[it_331]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_331]=key;
            }
            if(            1) {
                self->items[it_331]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_331]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_332=(_Bool)0;
    for(    it2_333=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_333=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_333,key)) {
            same_key_exist_332=(_Bool)1;
        }
    }
    if(    !same_key_exist_332) {
        list$1charp_push_back(self->key_list,key);
    }
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_313;
void* __right_value289 = (void*)0;
char** keys_314;
void* __right_value290 = (void*)0;
struct sFun** items_315;
void* __right_value291 = (void*)0;
_Bool* item_existance_316;
int len_317;
char* it_320;
struct sFun* default_value_323;
struct sFun* it2_324;
unsigned int hash_327;
int n_328;
struct sFun* default_value_329;
default_value_323 = (void*)0;
default_value_329 = (void*)0;
    size_313=self->size*10;
    keys_314=(char**)come_increment_ref_count(((char**)(__right_value289=(char**)come_calloc(1, sizeof(char*)*(1*(size_313)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_315=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value290=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_313)), "/usr/local/include/comelang.h", 1625, "sFun*%"))));
    item_existance_316=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value291=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_313)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_317=0;
    for(    it_320=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_320=map$2charphsFunph_next(self)    ){
        memset(&default_value_323,0,sizeof(struct sFun*));
        it2_324=map$2charphsFunph_at(self,it_320,default_value_323);
        hash_327=string_get_hash_key(it_320)%size_313;
        n_328=hash_327;
        while((_Bool)1) {
            if(            item_existance_316[n_328]) {
                n_328++;
                if(                n_328>=size_313) {
                    n_328=0;
                }
                else if(                n_328==hash_327) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_316[n_328]=(_Bool)1;
                keys_314[n_328]=it_320;
                items_315[n_328]=map$2charphsFunph_at(self,it_320,default_value_329);
                len_317++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_314;
    self->items=items_315;
    self->item_existance=item_existance_316;
    self->size=size_313;
    self->len=len_317;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_318;
char* __result162__;
char* __result163__;
char* result_319;
char* __result164__;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_318,0,sizeof(char*));
        __result162__ = gComeFunResultObject = __result_obj__ = result_318;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result163__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    memset(&result_319,0,sizeof(char*));
    __result164__ = gComeFunResultObject = __result_obj__ = result_319;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_321;
char* __result165__;
char* __result166__;
char* result_322;
char* __result167__;
result_321 = (void*)0;
result_322 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_321,0,sizeof(char*));
        __result165__ = gComeFunResultObject = __result_obj__ = result_321;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result166__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    memset(&result_322,0,sizeof(char*));
    __result167__ = gComeFunResultObject = __result_obj__ = result_322;
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_325;
unsigned int it_326;
struct sFun* __result168__;
struct sFun* __result169__;
struct sFun* __result170__;
struct sFun* __result171__;
    hash_325=string_get_hash_key(((char*)key))%self->size;
    it_326=hash_325;
    while((_Bool)1) {
        if(        self->item_existance[it_326]) {
            if(            string_equals(self->keys[it_326],key)) {
                __result168__ = gComeFunResultObject = __result_obj__ = self->items[it_326];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result168__;
            }
            it_326++;
            if(            it_326>=self->size) {
                it_326=0;
            }
            else if(            it_326==hash_325) {
                __result169__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result169__;
            }
        }
        else {
            __result170__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result170__;
        }
    }
    __result171__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_424;
_Bool is_type_name_flag_425;
int sline_426;
_Bool define_struct_nobody_427;
char* p_428;
int sline_429;
void* __right_value551 = (void*)0;
char* word_430;
_Bool define_function_pointer_result_function_431;
_Bool define_variable_between_brace_432;
char* p_433;
void* __right_value552 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_434=0;
char* fun_name_435=0;
_Bool err_436=0;
void* __right_value553 = (void*)0;
char* word_437;
_Bool define_function_flag_438;
char* p_439;
void* __right_value554 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_440=0;
char* fun_name_441=0;
_Bool err_442=0;
char* word_443;
void* __right_value555 = (void*)0;
char* __dec_obj167;
void* __right_value556 = (void*)0;
char* __dec_obj168;
char* __dec_obj169;
void* __right_value557 = (void*)0;
char* __dec_obj170;
_Bool define_variable_444;
char* p_445;
void* __right_value558 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_446=0;
char* fun_name_447=0;
_Bool err_448=0;
void* __right_value559 = (void*)0;
char* word_449;
void* __right_value560 = (void*)0;
char* word_450;
char* p_451;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* word_452;
void* __right_value563 = (void*)0;
char* __dec_obj171;
void* __right_value564 = (void*)0;
char* word_453;
void* __right_value565 = (void*)0;
char* word_456;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* node_457;
struct sNode* __result174__;
void* __right_value568 = (void*)0;
struct sNode* __result175__;
char* header_head_458;
void* __right_value569 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_459=0;
char* fun_name_460=0;
_Bool err_461=0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1sTypeph* param_types_462;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1charph* param_names_463;
void* __right_value574 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_464=0;
char* param_name_465=0;
_Bool err_466=0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sTypeph* param_types2_468;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1charph* param_names2_469;
void* __right_value581 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_470=0;
char* param_name_471=0;
_Bool err_472=0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* header_tail_474;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* result_type2_475;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct tuple1$1sTypeph* __dec_obj173;
void* __right_value588 = (void*)0;
struct list$1sTypeph* __dec_obj174;
void* __right_value589 = (void*)0;
struct list$1charph* __dec_obj175;
_Bool var_args_476;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct buffer* header_buf_477;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1charph* param_default_parametors_478;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sFun* fun_479;
void* __right_value599 = (void*)0;
struct sFun* fun2_483;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value637 = (void*)0;
struct sNode* __result203__;
void* __right_value638 = (void*)0;
struct sNode* node_518;
struct sNode* __result204__;
void* __right_value639 = (void*)0;
struct sNode* node_519;
char* source_tail_520;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct buffer* header_521;
struct sNode* __result205__;
void* __right_value642 = (void*)0;
char* buf2_522;
void* __right_value643 = (void*)0;
struct sNode* __result206__;
    source_head_424=info->p;
    is_type_name_flag_425=is_type_name(buf,info);
    sline_426=info->sline;
    define_struct_nobody_427=(_Bool)0;
    {
        p_428=info->p;
        sline_429=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_430=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_427=(_Bool)1;
                }
                /* U13 */word_430 = come_decrement_ref_count2(word_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_429;
    }
    define_function_pointer_result_function_431=(_Bool)0;
    define_variable_between_brace_432=(_Bool)0;
    if(    is_type_name_flag_425) {
        p_433=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value552=backtrace_parse_type((_Bool)0,info)));
            result_type_434=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_435=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_436=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value552,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_431=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_437=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_437,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_432=(_Bool)1;
                            }
                        }
                        /* U13 */word_437 = come_decrement_ref_count2(word_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_435 = come_decrement_ref_count2(fun_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_426;
    }
    define_function_flag_438=(_Bool)0;
    if(    is_type_name_flag_425&&!define_function_pointer_result_function_431&&charp_operator_not_equals(buf,"__typeof__")) {
        p_439=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value554=backtrace_parse_type((_Bool)0,info)));
            result_type_440=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_441=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_442=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value554,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_441 = come_decrement_ref_count2(fun_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_443=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj167=word_443;
                word_443=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_443,"extern")) {
                    __dec_obj168=word_443;
                    word_443=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj169=word_443;
                word_443=((void*)0);
                /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_443) {
                if(                is_type_name(word_443,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj170=word_443;
                        word_443=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_443)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_425) {
                        define_function_flag_438=(_Bool)1;
                    }
                }
            }
            /* U13 */word_443 = come_decrement_ref_count2(word_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_439;
        info->sline=sline_426;
    }
    define_variable_444=(_Bool)1;
    if(    is_type_name_flag_425&&!define_function_pointer_result_function_431) {
        p_445=info->p;
        info->p=head;
        if(        !is_type_name_flag_425) {
            define_variable_444=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value558=backtrace_parse_type((_Bool)0,info)));
            result_type_446=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_447=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_448=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_449=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_444=(_Bool)1;
                            }
                        }
                        /* U13 */word_449 = come_decrement_ref_count2(word_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_450=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_450,info)&&*info->p!=40) {
                            define_variable_444=(_Bool)1;
                        }
                    }
                    /* U13 */word_450 = come_decrement_ref_count2(word_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_447 = come_decrement_ref_count2(fun_name_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_444=(_Bool)0;
        }
        else if(        define_variable_444) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_444=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_444=(_Bool)0;
            }
        }
        info->p=p_445;
        info->sline=sline_426;
    }
    else {
        define_variable_444=(_Bool)0;
    }
    {
        p_451=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value561=parse_word(info)));
                /* U11 */__right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_452=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj171=word_452;
                        word_452=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_452,"extends")) {
                            define_variable_444=(_Bool)0;
                        }
                    }
                    /* U13 */word_452 = come_decrement_ref_count2(word_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_444=(_Bool)0;
        }
        else if(        define_variable_444) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_444=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_444=(_Bool)0;
            }
        }
        info->p=p_451;
        info->sline=sline_426;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_453=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_456=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_456)));
                    /* U13 */word_456 = come_decrement_ref_count2(word_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_457=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result174__ = gComeFunResultObject = __result_obj__ = node_457;
            if(node_457) { node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */word_453 = come_decrement_ref_count2(word_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result174__;
            if(node_457) { node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */word_453 = come_decrement_ref_count2(word_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_427) {
    }
    else if(    define_variable_between_brace_432) {
        info->p=head;
        info->sline=sline_426;
        __result175__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value568=parse_global_variable(info)));
        if(__right_value568) { __right_value568 = come_decrement_ref_count2(__right_value568, ((struct sNode*)__right_value568)->finalize, ((struct sNode*)__right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    else if(    define_function_pointer_result_function_431) {
        header_head_458=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value569=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_459=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_460=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_461=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value569,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_462=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1457, "list$1sTypeph"))));
            param_names_463=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1458, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value574=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_464=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_465=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_466=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value574,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_466) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_462,(struct sType*)come_increment_ref_count(param_type_464));
                    static int num_function_pointer_result_var_name_a_467=0;
                    list$1charph_push_back(param_names_463,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_467)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value576=parse_word(info)));
                        /* U11 */__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_465 = come_decrement_ref_count2(param_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_465 = come_decrement_ref_count2(param_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_468=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1504, "list$1sTypeph"))));
                param_names2_469=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1505, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value581=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_470=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_471=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_472=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value581,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_472) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_468,(struct sType*)come_increment_ref_count(param_type_470));
                        static int num_function_pointer_result_var_name_b_473=0;
                        list$1charph_push_back(param_names2_469,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_473)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value583=parse_word(info)));
                            /* U11 */__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_470,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */param_name_471 = come_decrement_ref_count2(param_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_470,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_471 = come_decrement_ref_count2(param_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_474=info->p;
                result_type2_475=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "sType")),"lambda",(_Bool)0,info));
                __dec_obj173=result_type2_475->mResultType;
                result_type2_475->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1549, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_459)));
                come_call_finalizer3(__dec_obj173,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj174=result_type2_475->mParamTypes;
                result_type2_475->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_468));
                come_call_finalizer3(__dec_obj174,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj175=result_type2_475->mParamNames;
                result_type2_475->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_469));
                come_call_finalizer3(__dec_obj175,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_475->mVarArgs=(_Bool)0;
                result_type2_475->mStatic=(_Bool)0;
                var_args_476=(_Bool)0;
                header_buf_477=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1557, "buffer"))));
                buffer_append(header_buf_477,header_head_458,header_tail_474-header_head_458);
                buffer_append_char(header_buf_477,0);
                param_default_parametors_478=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1561, "list$1charph"))));
                fun_479=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1563, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_460)),(struct sType*)come_increment_ref_count(result_type2_475),(struct list$1sTypeph*)come_increment_ref_count(param_types_462),(struct list$1charph*)come_increment_ref_count(param_names_463),(struct list$1charph*)come_increment_ref_count(param_default_parametors_478),(_Bool)1,var_args_476,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_477)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                fun2_483=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value599=__builtin_string(fun_name_460))));
                /* U11 */__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_483==((void*)0)||fun2_483->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_460)),(struct sFun*)come_increment_ref_count(fun_479));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1575, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value602=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1575, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_479),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result203__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_468,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_469,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_475,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_478,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_479,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_463,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value602,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value637) { __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result203__;
                /*i*/come_call_finalizer3(param_types2_468,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_469,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_475,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_478,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_479,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_463,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_438) {
        info->p=head;
        info->sline=sline_426;
        node_518=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result204__ = gComeFunResultObject = __result_obj__ = node_518;
        if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result204__;
        if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_444) {
        info->p=head;
        info->sline=sline_426;
        node_519=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_520=info->p;
        header_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1599, "buffer"))));
        buffer_append(header_521,source_head_424,source_tail_520-source_head_424);
        __result205__ = gComeFunResultObject = __result_obj__ = node_519;
        if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result205__;
        if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_426;
    buf2_522=(char*)come_increment_ref_count(parse_word(info));
    __result206__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=top_level_v98(buf2_522,head,head_sline,info)));
    /* U13 */buf2_522 = come_decrement_ref_count2(buf2_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value643) { __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj165;
char* __dec_obj166;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj165=self->v1;
            come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj166=self->v2;
            /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_454;
struct list_item$1charph* prev_it_455;
struct list$1charph* __result173__;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        /*i*/come_call_finalizer3(prev_it_455,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj172;
struct tuple1$1sTypeph* __result176__;
    __dec_obj172=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result176__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_480;
unsigned int hash_481;
unsigned int it_482;
struct sFun* __result177__;
struct sFun* __result178__;
struct sFun* __result179__;
struct sFun* __result180__;
default_value_480 = (void*)0;
    memset(&default_value_480,0,sizeof(struct sFun*));
    hash_481=string_get_hash_key(((char*)key))%self->size;
    it_482=hash_481;
    while((_Bool)1) {
        if(        self->item_existance[it_482]) {
            if(            string_equals(self->keys[it_482],key)) {
                __result177__ = gComeFunResultObject = __result_obj__ = self->items[it_482];
                /*i*/come_call_finalizer3(default_value_480,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result177__;
            }
            it_482++;
            if(            it_482>=self->size) {
                it_482=0;
            }
            else if(            it_482==hash_481) {
                __result178__ = gComeFunResultObject = __result_obj__ = default_value_480;
                /*i*/come_call_finalizer3(default_value_480,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result178__;
            }
        }
        else {
            __result179__ = gComeFunResultObject = __result_obj__ = default_value_480;
            /*i*/come_call_finalizer3(default_value_480,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result179__;
        }
    }
    __result180__ = gComeFunResultObject = __result_obj__ = default_value_480;
    /*i*/come_call_finalizer3(default_value_480,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result182__;
void* __right_value605 = (void*)0;
struct sFun* result_485;
void* __right_value606 = (void*)0;
char* __dec_obj179;
void* __right_value607 = (void*)0;
struct sType* __dec_obj180;
void* __right_value608 = (void*)0;
struct list$1sTypeph* __dec_obj181;
void* __right_value609 = (void*)0;
struct list$1charph* __dec_obj182;
void* __right_value610 = (void*)0;
struct list$1charph* __dec_obj183;
void* __right_value611 = (void*)0;
struct sType* __dec_obj184;
void* __right_value629 = (void*)0;
struct sBlock* __dec_obj190;
void* __right_value630 = (void*)0;
struct buffer* __dec_obj191;
void* __right_value631 = (void*)0;
struct buffer* __dec_obj192;
void* __right_value632 = (void*)0;
struct buffer* __dec_obj193;
void* __right_value633 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value634 = (void*)0;
char* __dec_obj195;
void* __right_value635 = (void*)0;
char* __dec_obj196;
struct sFun* __result201__;
    if(    self==(void*)0) {
        __result182__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    result_485=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj179=result_485->mName;
        result_485->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj180=result_485->mResultType;
        result_485->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj181=result_485->mParamTypes;
        result_485->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj181,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj182=result_485->mParamNames;
        result_485->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj182,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj183=result_485->mParamDefaultParametors;
        result_485->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj183,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj184=result_485->mLambdaType;
        result_485->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj190=result_485->mBlock;
        result_485->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj190,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_485->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_485->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj191=result_485->mSource;
        result_485->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj191,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj192=result_485->mSourceHead;
        result_485->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj193=result_485->mSourceHead2;
        result_485->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj194=result_485->mSourceDefer;
        result_485->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_485->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj195=result_485->mComeHeader;
        result_485->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_485->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj196=result_485->mDeclareSName;
        result_485->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_485->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_485->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_485->no_output_come_code2=self->no_output_come_code2;
    }
    __result201__ = gComeFunResultObject = __result_obj__ = result_485;
    /*i*/come_call_finalizer3(result_485,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result183__;
void* __right_value612 = (void*)0;
struct sBlock* result_486;
void* __right_value613 = (void*)0;
struct list$1sNodeph* __dec_obj185;
void* __right_value628 = (void*)0;
struct sVarTable* __dec_obj189;
struct sBlock* __result200__;
    if(    self==(void*)0) {
        __result183__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    result_486=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj185=result_486->mNodes;
        result_486->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj185,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj189=result_486->mVarTable;
        result_486->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj189,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_486->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result200__ = gComeFunResultObject = __result_obj__ = result_486;
    /*i*/come_call_finalizer3(result_486,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result184__;
void* __right_value614 = (void*)0;
struct sVarTable* result_487;
void* __right_value627 = (void*)0;
struct map$2charphsVarph* __dec_obj188;
struct sVarTable* __result199__;
    if(    self==(void*)0) {
        __result184__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    result_487=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj188=result_487->mVars;
        result_487->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj188,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_487->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_487->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_487->mID=self->mID;
    }
    __result199__ = gComeFunResultObject = __result_obj__ = result_487;
    /*i*/come_call_finalizer3(result_487,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result185__;
void* __right_value615 = (void*)0;
void* __right_value621 = (void*)0;
struct map$2charphsVarph* result_491;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1charp* __dec_obj187;
char* it_494;
struct sVar* default_value_497;
struct sVar* it2_500;
struct map$2charphsVarph* __result198__;
default_value_497 = (void*)0;
    if(    self==((void*)0)) {
        __result185__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    result_491=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1467, "map$2charphsVarph"))));
    __dec_obj187=result_491->key_list;
    result_491->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1469, "list$1charp"))));
    come_call_finalizer3(__dec_obj187,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_494=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_494=map$2charphsVarph_next(self)    ){
        memset(&default_value_497,0,sizeof(struct sVar*));
        it2_500=map$2charphsVarph_at(self,it_494,default_value_497);
        map$2charphsVarph_put(result_491,it_494,it2_500);
    }
    __result198__ = gComeFunResultObject = __result_obj__ = result_491;
    /*i*/come_call_finalizer3(result_491,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
int i_488;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct list$1charp* __dec_obj186;
struct map$2charphsVarph* __result186__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value616=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1396, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value617=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1397, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value618=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1398, "bool"))));
    for(    i_488=0;    i_488<128;    i_488++    ){
        self->item_existance[i_488]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj186=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1408, "list$1charp"))));
    come_call_finalizer3(__dec_obj186,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_489;
int i_490;
    for(    i_489=0;    i_489<self->size;    i_489++    ){
        if(        self->item_existance[i_489]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_489],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_490=0;    i_490<self->size;    i_490++    ){
        if(        self->item_existance[i_490]) {
            if(            1) {
                /* U13 */self->keys[i_490] = come_decrement_ref_count2(self->keys[i_490], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_492;
char* __result187__;
char* __result188__;
char* result_493;
char* __result189__;
result_492 = (void*)0;
result_493 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_492,0,sizeof(char*));
        __result187__ = gComeFunResultObject = __result_obj__ = result_492;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result188__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    memset(&result_493,0,sizeof(char*));
    __result189__ = gComeFunResultObject = __result_obj__ = result_493;
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_495;
char* __result190__;
char* __result191__;
char* result_496;
char* __result192__;
result_495 = (void*)0;
result_496 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_495,0,sizeof(char*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_495;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_496,0,sizeof(char*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_496;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_498;
unsigned int it_499;
struct sVar* __result193__;
struct sVar* __result194__;
struct sVar* __result195__;
struct sVar* __result196__;
    hash_498=string_get_hash_key(((char*)key))%self->size;
    it_499=hash_498;
    while((_Bool)1) {
        if(        self->item_existance[it_499]) {
            if(            string_equals(self->keys[it_499],key)) {
                __result193__ = gComeFunResultObject = __result_obj__ = self->items[it_499];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result193__;
            }
            it_499++;
            if(            it_499>=self->size) {
                it_499=0;
            }
            else if(            it_499==hash_498) {
                __result194__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result194__;
            }
        }
        else {
            __result195__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result195__;
        }
    }
    __result196__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_512;
int it_513;
_Bool same_key_exist_514;
char* it2_515;
struct map$2charphsVarph* __result197__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_512=string_get_hash_key(key)%self->size;
    it_513=hash_512;
    while((_Bool)1) {
        if(        self->item_existance[it_513]) {
            if(            string_equals(self->keys[it_513],key)) {
                if(                1) {
                    /* U13 */self->keys[it_513] = come_decrement_ref_count2(self->keys[it_513], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_513]);
                    self->keys[it_513]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_513]);
                    self->keys[it_513]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_513],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_513]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_513]=item;
                }
                break;
            }
            it_513++;
            if(            it_513>=self->size) {
                it_513=0;
            }
            else if(            it_513==hash_512) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_513]=(_Bool)1;
            if(            1) {
                self->keys[it_513]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_513]=key;
            }
            if(            1) {
                self->items[it_513]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_513]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_514=(_Bool)0;
    for(    it2_515=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_515=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_515,key)) {
            same_key_exist_514=(_Bool)1;
        }
    }
    if(    !same_key_exist_514) {
        list$1charp_push_back(self->key_list,key);
    }
    __result197__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_501;
void* __right_value624 = (void*)0;
char** keys_502;
void* __right_value625 = (void*)0;
struct sVar** items_503;
void* __right_value626 = (void*)0;
_Bool* item_existance_504;
int len_505;
char* it_506;
struct sVar* default_value_507;
struct sVar* it2_508;
unsigned int hash_509;
int n_510;
struct sVar* default_value_511;
default_value_507 = (void*)0;
default_value_511 = (void*)0;
    size_501=self->size*10;
    keys_502=(char**)come_increment_ref_count(((char**)(__right_value624=(char**)come_calloc(1, sizeof(char*)*(1*(size_501)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_503=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value625=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_501)), "/usr/local/include/comelang.h", 1625, "sVar*%"))));
    item_existance_504=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value626=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_501)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_505=0;
    for(    it_506=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_506=map$2charphsVarph_next(self)    ){
        memset(&default_value_507,0,sizeof(struct sVar*));
        it2_508=map$2charphsVarph_at(self,it_506,default_value_507);
        hash_509=string_get_hash_key(it_506)%size_501;
        n_510=hash_509;
        while((_Bool)1) {
            if(            item_existance_504[n_510]) {
                n_510++;
                if(                n_510>=size_501) {
                    n_510=0;
                }
                else if(                n_510==hash_509) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_504[n_510]=(_Bool)1;
                keys_502[n_510]=it_506;
                items_503[n_510]=map$2charphsVarph_at(self,it_506,default_value_511);
                len_505++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_502;
    self->items=items_503;
    self->item_existance=item_existance_504;
    self->size=size_501;
    self->len=len_505;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_516;
int i_517;
    for(    i_516=0;    i_516<self->size;    i_516++    ){
        if(        self->item_existance[i_516]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_516],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_517=0;    i_517<self->size;    i_517++    ){
        if(        self->item_existance[i_517]) {
            if(            1) {
                /* U13 */self->keys[i_517] = come_decrement_ref_count2(self->keys[i_517], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_523;
int caller_line_524;
char* caller_sname_525;
_Bool comma_instead_of_semicolon_526;
char* last_code_527;
char* __dec_obj198;
char* last_code2_528;
char* __dec_obj199;
void* __right_value644 = (void*)0;
char* sname_top_529;
int sline_top_530;
struct sFun* funX_531;
_Bool __result207__;
void* __right_value645 = (void*)0;
struct sType* result_type_532;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1sTypeph* param_types_533;
struct list$1sTypeph* o2_saved_534;
struct sType* it_537;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sType* param_type_540;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1charph* param_names_541;
void* __right_value652 = (void*)0;
struct list$1charph* param_default_parametors_542;
char* p_543;
int sline_544;
char* sname_545;
char* head_546;
struct buffer* source_547;
void* __right_value653 = (void*)0;
struct buffer* __dec_obj200;
struct sType* generics_type_saved_548;
void* __right_value654 = (void*)0;
struct sType* __dec_obj201;
struct list$1charph* method_generics_type_names_549;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1charph* __dec_obj202;
struct list$1charph* o2_saved_550;
char* it_551;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct list$1charph* __dec_obj203;
char* __dec_obj204;
void* __right_value659 = (void*)0;
struct sBlock* block_552;
struct buffer* __dec_obj205;
char* __dec_obj206;
_Bool var_args_553;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sFun* fun_554;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value671 = (void*)0;
struct sNode* node_555;
_Bool in_generics_fun_557;
_Bool Value_558;
void* __if_result__1_559 = (void*)0;
_Bool __result216__;
struct sType* __dec_obj211;
struct list$1charph* __dec_obj212;
void* __right_value672 = (void*)0;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
_Bool __result217__;
    caller_fun_523=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_524=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_525=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_526=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_527=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj198=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_528=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj199=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_529=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_530=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_531=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_531) {
        __result207__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_527 = come_decrement_ref_count2(last_code_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_528 = come_decrement_ref_count2(last_code2_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result207__;
    }
    result_type_532=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_533=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1645, "list$1sTypeph"))));
    for(    o2_saved_534=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_537=list$1sTypeph_begin((o2_saved_534));    !list$1sTypeph_end((o2_saved_534));    it_537=list$1sTypeph_next((o2_saved_534))    ){
        param_type_540=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value648=sType_clone(it_537))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value648,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_540->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_533,(struct sType*)come_increment_ref_count(sType_clone(param_type_540)));
        /*i*/come_call_finalizer3(param_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_534,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_541=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_542=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_543=info->p;
    sline_544=info->sline;
    sname_545=(char*)come_increment_ref_count(info->sname);
    head_546=info->head;
    source_547=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj200=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_548=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj201=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_549=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj202=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1672, "list$1charph"))));
    come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_550=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_551=list$1charph_begin((o2_saved_550));    !list$1charph_end((o2_saved_550));    it_551=list$1charph_next((o2_saved_550))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_551)));
    }
    /*i*/come_call_finalizer3(o2_saved_550,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj203=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj203,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj204=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_552=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_546;
    __dec_obj205=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_547);
    come_call_finalizer3(__dec_obj205,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_543;
    info->sline=sline_544;
    __dec_obj206=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_545);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_532->mInline=(_Bool)0;
    var_args_553=generics_fun->mVarArgs;
    fun_554=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1694, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_532),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_533)),(struct list$1charph*)come_increment_ref_count(param_names_541),(struct list$1charph*)come_increment_ref_count(param_default_parametors_542),(_Bool)0,var_args_553,(struct sBlock*)come_increment_ref_count(block_552),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_554));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1701, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value667=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1701, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_554),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_555=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value667,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_557=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_558=node_compile(node_555,info);
    if(    !Value_558) {
        __result216__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_527 = come_decrement_ref_count2(last_code_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_528 = come_decrement_ref_count2(last_code2_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_541,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_542,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_545 = come_decrement_ref_count2(sname_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_548,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_552,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_554,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result216__;
    }
    else {
        __if_result__1_559=(void*)(Value_558);
;
    }
    info->in_generics_fun=in_generics_fun_557;
    __dec_obj211=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_548);
    come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj212=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_549);
    come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj213=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_529));
    /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_530;
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_527);
    /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_528);
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_523;
    info->caller_line=caller_line_524;
    info->caller_sname=caller_sname_525;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_526;
    __result217__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_527 = come_decrement_ref_count2(last_code_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_528 = come_decrement_ref_count2(last_code2_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_541,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_542,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_545 = come_decrement_ref_count2(sname_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_548,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_552,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_554,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result217__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_535;
struct sType* __result208__;
struct sType* __result209__;
struct sType* result_536;
struct sType* __result210__;
result_535 = (void*)0;
result_536 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_535,0,sizeof(struct sType*));
        __result208__ = gComeFunResultObject = __result_obj__ = result_535;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    self->it=self->head;
    if(    self->it) {
        __result209__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    memset(&result_536,0,sizeof(struct sType*));
    __result210__ = gComeFunResultObject = __result_obj__ = result_536;
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_538;
struct sType* __result211__;
struct sType* __result212__;
struct sType* result_539;
struct sType* __result213__;
result_538 = (void*)0;
result_539 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_538,0,sizeof(struct sType*));
        __result211__ = gComeFunResultObject = __result_obj__ = result_538;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result212__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    memset(&result_539,0,sizeof(struct sType*));
    __result213__ = gComeFunResultObject = __result_obj__ = result_539;
    gComeFunResultObject = (void*)0;
    return __result213__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_560;
int caller_line_561;
char* caller_sname_562;
_Bool comma_instead_of_semicolon_563;
char* last_code_564;
char* __dec_obj216;
char* last_code2_565;
char* __dec_obj217;
void* __right_value673 = (void*)0;
char* sname_top_566;
int sline_top_567;
struct sFun* funX_568;
_Bool __result218__;
void* __right_value674 = (void*)0;
struct sType* result_type_569;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1sTypeph* param_types_570;
struct list$1sTypeph* o2_saved_571;
struct sType* it_572;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* param_type_573;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1charph* param_names_574;
void* __right_value681 = (void*)0;
struct list$1charph* param_default_parametors_575;
char* p_576;
int sline_577;
char* sname_578;
char* head_579;
struct buffer* source_580;
void* __right_value682 = (void*)0;
struct buffer* __dec_obj218;
struct list$1charph* method_generics_type_names_581;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1charph* __dec_obj219;
struct list$1charph* o2_saved_582;
char* it_583;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1charph* __dec_obj220;
char* __dec_obj221;
void* __right_value687 = (void*)0;
struct sBlock* block_584;
struct buffer* __dec_obj222;
char* __dec_obj223;
_Bool var_args_585;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sFun* fun_586;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value699 = (void*)0;
struct sNode* node_587;
_Bool Value_589;
void* __if_result__2_590 = (void*)0;
_Bool __result221__;
struct list$1charph* __dec_obj228;
void* __right_value700 = (void*)0;
char* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
_Bool __result222__;
    caller_fun_560=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_561=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_562=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_563=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_564=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_565=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_566=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_567=info->sline;
    funX_568=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_568) {
        __result218__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_564 = come_decrement_ref_count2(last_code_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_565 = come_decrement_ref_count2(last_code2_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_566 = come_decrement_ref_count2(sname_top_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result218__;
    }
    result_type_569=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_570=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1755, "list$1sTypeph"))));
    for(    o2_saved_571=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_572=list$1sTypeph_begin((o2_saved_571));    !list$1sTypeph_end((o2_saved_571));    it_572=list$1sTypeph_next((o2_saved_571))    ){
        param_type_573=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value677=sType_clone(it_572))),info));
        /*g*/come_call_finalizer3(__right_value677,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_573->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_570,(struct sType*)come_increment_ref_count(sType_clone(param_type_573)));
        /*i*/come_call_finalizer3(param_type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_571,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_574=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_575=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_576=info->p;
    sline_577=info->sline;
    sname_578=(char*)come_increment_ref_count(info->sname);
    head_579=info->head;
    source_580=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj218=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_581=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj219=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1779, "list$1charph"))));
    come_call_finalizer3(__dec_obj219,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_582=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_583=list$1charph_begin((o2_saved_582));    !list$1charph_end((o2_saved_582));    it_583=list$1charph_next((o2_saved_582))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_583)));
    }
    /*i*/come_call_finalizer3(o2_saved_582,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj220=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj221=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_584=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_579;
    __dec_obj222=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_580);
    come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_576;
    info->sline=sline_577;
    __dec_obj223=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_578);
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_569->mInline=(_Bool)0;
    var_args_585=generics_fun->mVarArgs;
    fun_586=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1801, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_569),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_570)),(struct list$1charph*)come_increment_ref_count(param_names_574),(struct list$1charph*)come_increment_ref_count(param_default_parametors_575),(_Bool)0,var_args_585,(struct sBlock*)come_increment_ref_count(block_584),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_586));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1808, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value695=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1808, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_586),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_587=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value695,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_589=node_compile(node_587,info);
    if(    !Value_589) {
        __result221__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_564 = come_decrement_ref_count2(last_code_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_565 = come_decrement_ref_count2(last_code2_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_566 = come_decrement_ref_count2(sname_top_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_575,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_578 = come_decrement_ref_count2(sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_581,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_584,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_586,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_587) { node_587 = come_decrement_ref_count2(node_587, ((struct sNode*)node_587)->finalize, ((struct sNode*)node_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result221__;
    }
    else {
        __if_result__2_590=(void*)(Value_589);
;
    }
    __dec_obj228=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_581);
    come_call_finalizer3(__dec_obj228,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj229=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_566));
    /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_567;
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_564);
    /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_565);
    /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_560;
    info->caller_line=caller_line_561;
    info->caller_sname=caller_sname_562;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_563;
    __result222__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_564 = come_decrement_ref_count2(last_code_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_565 = come_decrement_ref_count2(last_code2_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_566 = come_decrement_ref_count2(sname_top_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_575,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_578 = come_decrement_ref_count2(sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_581,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_584,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_586,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_587) { node_587 = come_decrement_ref_count2(node_587, ((struct sNode*)node_587)->finalize, ((struct sNode*)node_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result222__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_591;
char* source_head_592;
struct sType* result_type_593;
char* var_name_594;
_Bool constructor__595;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* __dec_obj232;
void* __right_value703 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_596=0;
char* var_name2_597=0;
_Bool err_598=0;
struct sType* __dec_obj233;
char* __dec_obj234;
_Bool method_definition_599;
char* p_600;
int sline_601;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct buffer* buf2_602;
char* fun_name_603;
char* base_fun_name_604;
void* __right_value706 = (void*)0;
char* __dec_obj235;
void* __right_value707 = (void*)0;
char* __dec_obj236;
void* __right_value708 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_605=0;
char* name_606=0;
_Bool err_607=0;
void* __right_value709 = (void*)0;
char* __dec_obj237;
void* __right_value710 = (void*)0;
char* __dec_obj238;
void* __right_value711 = (void*)0;
char* __dec_obj239;
void* __right_value712 = (void*)0;
char* __dec_obj240;
void* __right_value713 = (void*)0;
char* __dec_obj241;
void* __right_value714 = (void*)0;
char* __dec_obj242;
void* __right_value715 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_608=0;
struct list$1charph* param_names_609=0;
struct list$1charph* param_default_parametors_610=0;
_Bool var_args_611=0;
char* header_tail_612;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct buffer* header_buf_613;
int version_614;
int n_615;
void* __right_value718 = (void*)0;
struct sBlock* block_616;
void* __right_value719 = (void*)0;
char* fun_name_618;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sFun* fun_619;
void* __right_value725 = (void*)0;
struct sFun* fun2_620;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value731 = (void*)0;
struct sNode* __result225__;
void* __right_value732 = (void*)0;
char* none_generics_name_622;
void* __right_value733 = (void*)0;
char* generics_sname_623;
int generics_sline_624;
void* __right_value734 = (void*)0;
char* block_625;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sGenericsFun* fun_626;
void* __right_value741 = (void*)0;
char* fun_name3_627;
void* __right_value745 = (void*)0;
struct sNode* __result237__;
void* __right_value746 = (void*)0;
char* generics_sname_649;
int generics_sline_650;
void* __right_value747 = (void*)0;
char* block_651;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sGenericsFun* fun_652;
void* __right_value754 = (void*)0;
char* fun_name3_653;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* __result238__;
char* source_tail_654;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct buffer* header_655;
void* __right_value759 = (void*)0;
char* name_656;
void* __right_value760 = (void*)0;
char* name_657;
int i_658;
struct sType* param_type_659;
char* param_name_660;
char* default_parametor_661;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
char* impl_name_662;
void* __right_value764 = (void*)0;
char* result_type_name_663;
void* __right_value765 = (void*)0;
char* impl_name_664;
void* __right_value766 = (void*)0;
char* result_type_name_665;
int i_666;
struct sType* param_type_667;
char* param_name_668;
char* default_parametor_669;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sBlock* block_670;
_Bool static__671;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
char* new_fun_name_672;
void* __right_value773 = (void*)0;
char* __dec_obj248;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sFun* fun_673;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sFun* fun2_674;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value788 = (void*)0;
struct sNode* __result241__;
void* __right_value789 = (void*)0;
char* new_fun_name_676;
void* __right_value790 = (void*)0;
char* __dec_obj253;
_Bool result_type_static_677;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sFun* fun_678;
void* __right_value796 = (void*)0;
struct sFun* fun2_679;
void* __right_value797 = (void*)0;
char* source_tail_680;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct buffer* header_681;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value806 = (void*)0;
struct sNode* __result244__;
void* __right_value807 = (void*)0;
char* asm_fun_683;
void* __right_value808 = (void*)0;
char* __dec_obj258;
_Bool result_type_static_684;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct sFun* fun_685;
void* __right_value814 = (void*)0;
struct sFun* fun2_686;
void* __right_value815 = (void*)0;
char* source_tail_687;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct buffer* header_688;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value824 = (void*)0;
struct sNode* __result247__;
struct sNode* __result248__;
fun_name_603 = (void*)0;
    header_head_591=info->p;
    source_head_592=info->p;
    result_type_593=((void*)0);
    var_name_594=((void*)0);
    constructor__595=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value701=parse_word(info)));
        /* U11 */__right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj232=result_type_593;
        result_type_593=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_593->mHeap=(_Bool)1;
        constructor__595=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value703=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_596=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_597=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_598=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value703,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj233=result_type_593;
        result_type_593=(struct sType*)come_increment_ref_count(result_type2_596);
        come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj234=var_name_594;
        var_name_594=(char*)come_increment_ref_count(var_name2_597);
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_598) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_596,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name2_597 = come_decrement_ref_count2(var_name2_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_599=(_Bool)0;
    {
        p_600=info->p;
        sline_601=info->sline;
        buf2_602=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1872, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_602,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_602)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_599=(_Bool)1;
        }
        info->p=p_600;
        info->sline=sline_601;
        /*i*/come_call_finalizer3(buf2_602,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_604=((void*)0);
    if(    constructor__595) {
        __dec_obj235=base_fun_name_604;
        base_fun_name_604=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj236=fun_name_603;
        fun_name_603=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_604,info,(_Bool)1));
        /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_599) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value708=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_605=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_606=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_607=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value708,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_607) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj237=base_fun_name_604;
        base_fun_name_604=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj238=fun_name_603;
        fun_name_603=(char*)come_increment_ref_count(create_method_name(obj_type_605,(_Bool)0,base_fun_name_604,info,(_Bool)1));
        /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_605,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_606 = come_decrement_ref_count2(name_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj239=base_fun_name_604;
        base_fun_name_604=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj240=fun_name_603;
        fun_name_603=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_604,info,(_Bool)1));
        /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj241=fun_name_603;
        fun_name_603=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj242=base_fun_name_604;
        base_fun_name_604=(char*)come_increment_ref_count(__builtin_string(fun_name_603));
        /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_604,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value715=parse_params(info,constructor__595)));
    param_types_608=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_609=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_610=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_611=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value715,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_612=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_604,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_613=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1939, "buffer"))));
    buffer_append(header_buf_613,header_head_591,header_tail_612-header_head_591);
    buffer_append_char(header_buf_613,0);
    version_614=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_615=0;
        while(xisdigit(*info->p)) {
            n_615=n_615*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_614=n_615;
    }
    if(    charp_operator_equals(base_fun_name_604,"lambda")) {
        block_616=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_617=0;
        lambda_num_617++;
        fun_name_618=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_617));
        result_type_593->mStatic=(_Bool)0;
        fun_619=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1969, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_618)),(struct sType*)come_increment_ref_count(result_type_593),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_609),(struct list$1charph*)come_increment_ref_count(param_default_parametors_610),(_Bool)0,var_args_611,(struct sBlock*)come_increment_ref_count(block_616),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_613)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_620=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value725=__builtin_string(fun_name_618))));
        /* U11 */__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_620==((void*)0)||fun2_620->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_618)),(struct sFun*)come_increment_ref_count(fun_619));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1979, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value728=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1979, "sLambdaNode")),fun_619,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=_inf_value5));
        /*i*/come_call_finalizer3(block_616,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_618 = come_decrement_ref_count2(fun_name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_619,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value728,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        /*i*/come_call_finalizer3(block_616,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_618 = come_decrement_ref_count2(fun_name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_619,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_622=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_623=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_624=info->sline;
        block_625=(char*)come_increment_ref_count(skip_block(info));
        fun_626=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1989, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value736=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value737=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_603)),(struct sType*)come_increment_ref_count(result_type_593),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_609),(struct list$1charph*)come_increment_ref_count(param_default_parametors_610),var_args_611,(char*)come_increment_ref_count(block_625),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_623)),generics_sline_624));
        /*g*/come_call_finalizer3(__right_value736,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value737,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_627=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_622,base_fun_name_604));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_627)),(struct sGenericsFun*)come_increment_ref_count(fun_626));
        __result237__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */none_generics_name_622 = come_decrement_ref_count2(none_generics_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_623 = come_decrement_ref_count2(generics_sname_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_625 = come_decrement_ref_count2(block_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_626,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_627 = come_decrement_ref_count2(fun_name3_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
        /* U13 */none_generics_name_622 = come_decrement_ref_count2(none_generics_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_623 = come_decrement_ref_count2(generics_sname_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_625 = come_decrement_ref_count2(block_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_626,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_627 = come_decrement_ref_count2(fun_name3_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_649=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_650=info->sline;
        block_651=(char*)come_increment_ref_count(skip_block(info));
        fun_652=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2003, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value749=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value750=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_603)),(struct sType*)come_increment_ref_count(result_type_593),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_609),(struct list$1charph*)come_increment_ref_count(param_default_parametors_610),var_args_611,(char*)come_increment_ref_count(block_651),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_649)),generics_sline_650));
        /*g*/come_call_finalizer3(__right_value749,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value750,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_653=(char*)come_increment_ref_count(charp_clone(base_fun_name_604));
        if(        method_definition_599) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_603)),(struct sGenericsFun*)come_increment_ref_count(fun_652));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_653)),(struct sGenericsFun*)come_increment_ref_count(fun_652));
        }
        __result238__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */generics_sname_649 = come_decrement_ref_count2(generics_sname_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_651 = come_decrement_ref_count2(block_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_652,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_653 = come_decrement_ref_count2(fun_name3_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
        /* U13 */generics_sname_649 = come_decrement_ref_count2(generics_sname_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_651 = come_decrement_ref_count2(block_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_652,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_653 = come_decrement_ref_count2(fun_name3_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_654=info->p-1;
        header_655=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2019, "buffer"))));
        if(        constructor__595) {
            if(            list$1sTypeph_length(param_types_608)==1) {
                name_656=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_655,"extern %s*%% %s*::initialize(%s*%% self);\n",name_656,name_656,name_656);
                /* U13 */name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_657=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_655,"extern %s*%% %s*::initialize(%s*%% self, ",name_657,name_657,name_657);
                for(                i_658=1;                i_658<list$1sTypeph_length(param_types_608);                i_658++                ){
                    param_type_659=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_608,i_658), "05function.c", 2031, 3));
                    param_name_660=((char*)come_null_check(list$1charphp_operator_load_element(param_names_609,i_658), "05function.c", 2032, 4));
                    default_parametor_661=list$1charphp_operator_load_element(param_default_parametors_610,i_658);
                    if(                    default_parametor_661) {
                        buffer_append_format(header_655,"extern %s %s=%s",((char*)(__right_value761=make_come_type_name_string_no_solved(param_type_659,(_Bool)0,info))),param_name_660,default_parametor_661);
                        /* U11 */__right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_655,"extern %s %s",((char*)(__right_value762=make_come_type_name_string_no_solved(param_type_659,(_Bool)0,info))),param_name_660);
                        /* U11 */__right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_658!=list$1sTypeph_length(param_types_608)-1) {
                        buffer_append_str(header_655,",");
                    }
                }
                buffer_append_str(header_655,");\n");
                /* U13 */name_657 = come_decrement_ref_count2(name_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_608)==1) {
                impl_name_662=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_663=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_593,(_Bool)0,info));
                buffer_append_format(header_655,"extern %s %s*::%s(%s* self);\n",result_type_name_663,impl_name_662,base_fun_name_604,impl_name_662);
                /* U13 */impl_name_662 = come_decrement_ref_count2(impl_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_663 = come_decrement_ref_count2(result_type_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_664=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_665=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_593,(_Bool)0,info));
                buffer_append_format(header_655,"extern %s %s*::%s(%s* self, ",result_type_name_665,impl_name_664,base_fun_name_604,impl_name_664);
                for(                i_666=1;                i_666<list$1sTypeph_length(param_types_608);                i_666++                ){
                    param_type_667=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_608,i_666), "05function.c", 2062, 5));
                    param_name_668=((char*)come_null_check(list$1charphp_operator_load_element(param_names_609,i_666), "05function.c", 2063, 6));
                    default_parametor_669=list$1charphp_operator_load_element(param_default_parametors_610,i_666);
                    if(                    default_parametor_669) {
                        buffer_append_format(header_655,"extern %s %s=%s",((char*)(__right_value767=make_come_type_name_string_no_solved(param_type_667,(_Bool)0,info))),param_name_668,default_parametor_669);
                        /* U11 */__right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_655,"extern %s %s",((char*)(__right_value768=make_come_type_name_string_no_solved(param_type_667,(_Bool)0,info))),param_name_668);
                        /* U11 */__right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_666!=list$1sTypeph_length(param_types_608)-1) {
                        buffer_append_str(header_655,",");
                    }
                }
                buffer_append_str(header_655,");\n");
                /* U13 */impl_name_664 = come_decrement_ref_count2(impl_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_665 = come_decrement_ref_count2(result_type_name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_655,source_head_592,source_tail_654-source_head_592);
            buffer_append_str(header_655,";\n");
        }
        if(        !result_type_593->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value769=buffer_to_string(header_655))));
                /* U11 */__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_670=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__595,(_Bool)1));
        static__671=(_Bool)0;
        if(        result_type_593->mStatic) {
            result_type_593->mStatic=(_Bool)0;
            static__671=(_Bool)1;
        }
        if(        version_614>0) {
            new_fun_name_672=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value771=__builtin_string(fun_name_603))),version_614));
            /* U11 */__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj248=fun_name_603;
            fun_name_603=(char*)come_increment_ref_count(__builtin_string(new_fun_name_672));
            /*G*/ __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_672 = come_decrement_ref_count2(new_fun_name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_673=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2105, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_603)),(struct sType*)come_increment_ref_count(result_type_593),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_609),(struct list$1charph*)come_increment_ref_count(param_default_parametors_610),(_Bool)0,var_args_611,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_670)),static__671,(char*)come_increment_ref_count(buffer_to_string(header_buf_613)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_603)),(struct sFun*)come_increment_ref_count(fun_673));
        }
        else {
            fun2_674=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value781=__builtin_string(fun_name_603))));
            /* U11 */__right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_674==((void*)0)||fun2_674->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_603)),(struct sFun*)come_increment_ref_count(fun_673));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2125, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value784=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2125, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_673),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result241__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value788=_inf_value6));
        /*i*/come_call_finalizer3(header_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_670,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_673,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value784,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value788) { __right_value788 = come_decrement_ref_count2(__right_value788, ((struct sNode*)__right_value788)->finalize, ((struct sNode*)__right_value788)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result241__;
        /*i*/come_call_finalizer3(header_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_670,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_673,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_614>0) {
            new_fun_name_676=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_603,version_614));
            __dec_obj253=fun_name_603;
            fun_name_603=(char*)come_increment_ref_count(__builtin_string(new_fun_name_676));
            /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_676 = come_decrement_ref_count2(new_fun_name_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_677=result_type_593->mStatic;
            result_type_593->mStatic=(_Bool)0;
            fun_678=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2140, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_603)),(struct sType*)come_increment_ref_count(result_type_593),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_609),(struct list$1charph*)come_increment_ref_count(param_default_parametors_610),(_Bool)1,var_args_611,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_613)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_679=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value796=__builtin_string(fun_name_603))));
            /* U11 */__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_679==((void*)0)||fun2_679->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_603)),(struct sFun*)come_increment_ref_count(fun_678));
            }
            source_tail_680=info->p;
            header_681=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2154, "buffer"))));
            buffer_append(header_681,source_head_592,source_tail_680-source_head_592);
            if(            !result_type_static_677) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value800=buffer_to_string(header_681))));
                    /* U11 */__right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2163, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value802=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2163, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_678),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result244__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value806=_inf_value7));
            /*i*/come_call_finalizer3(fun_678,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value802,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value806) { __right_value806 = come_decrement_ref_count2(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result244__;
            /*i*/come_call_finalizer3(fun_678,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_683=(char*)come_increment_ref_count(parse_attribute(info));
            if(            string_operator_not_equals(asm_fun_683,"")) {
                __dec_obj258=fun_name_603;
                fun_name_603=(char*)come_increment_ref_count(__builtin_string(asm_fun_683));
                /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_684=result_type_593->mStatic;
            result_type_593->mStatic=(_Bool)0;
            fun_685=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2177, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_603)),(struct sType*)come_increment_ref_count(result_type_593),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_609),(struct list$1charph*)come_increment_ref_count(param_default_parametors_610),(_Bool)1,var_args_611,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_613)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_686=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value814=__builtin_string(fun_name_603))));
            /* U11 */__right_value814 = come_decrement_ref_count2(__right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_686==((void*)0)||fun2_686->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_603)),(struct sFun*)come_increment_ref_count(fun_685));
            }
            source_tail_687=info->p;
            header_688=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2191, "buffer"))));
            buffer_append(header_688,source_head_592,source_tail_687-source_head_592);
            if(            !result_type_static_684) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value818=buffer_to_string(header_688))));
                    /* U11 */__right_value818 = come_decrement_ref_count2(__right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2200, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value820=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2200, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_685),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result247__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value824=_inf_value8));
            /* U13 */asm_fun_683 = come_decrement_ref_count2(asm_fun_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_685,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value820,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value824) { __right_value824 = come_decrement_ref_count2(__right_value824, ((struct sNode*)__right_value824)->finalize, ((struct sNode*)__right_value824)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result247__;
            /* U13 */asm_fun_683 = come_decrement_ref_count2(asm_fun_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_685,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    __result248__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_594 = come_decrement_ref_count2(var_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_603 = come_decrement_ref_count2(fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */base_fun_name_604 = come_decrement_ref_count2(base_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj243;
struct list$1charph* __dec_obj244;
struct list$1charph* __dec_obj245;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj243=self->v1;
            come_call_finalizer3(__dec_obj243,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj244=self->v2;
            come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj245=self->v3;
            come_call_finalizer3(__dec_obj245,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj246;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj246=self->sname;
            /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result223__;
void* __right_value729 = (void*)0;
struct sLambdaNode* result_621;
void* __right_value730 = (void*)0;
char* __dec_obj247;
struct sLambdaNode* __result224__;
    if(    self==(void*)0) {
        __result223__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_621=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_621->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj247=result_621->sname;
        result_621->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_621->mFun=self->mFun;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = result_621;
    /*i*/come_call_finalizer3(result_621,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_645;
unsigned int it_646;
_Bool same_key_exist_647;
char* it2_648;
struct map$2charphsGenericsFunph* __result236__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_645=string_get_hash_key(key)%self->size;
    it_646=hash_645;
    while((_Bool)1) {
        if(        self->item_existance[it_646]) {
            if(            string_equals(self->keys[it_646],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_646]);
                    /* U13 */self->keys[it_646] = come_decrement_ref_count2(self->keys[it_646], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_646]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_646]);
                    self->keys[it_646]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_646],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_646]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_646]=item;
                }
                break;
            }
            it_646++;
            if(            it_646>=self->size) {
                it_646=0;
            }
            else if(            it_646==hash_645) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_646]=(_Bool)1;
            if(            1) {
                self->keys[it_646]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_646]=key;
            }
            if(            1) {
                self->items[it_646]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_646]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_647=(_Bool)0;
    for(    it2_648=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_648=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_648,key)) {
            same_key_exist_647=(_Bool)1;
        }
    }
    if(    !same_key_exist_647) {
        list$1charp_push_back(self->key_list,key);
    }
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_628;
void* __right_value742 = (void*)0;
char** keys_629;
void* __right_value743 = (void*)0;
struct sGenericsFun** items_630;
void* __right_value744 = (void*)0;
_Bool* item_existance_631;
int len_632;
char* it_635;
struct sGenericsFun* default_value_638;
struct sGenericsFun* it2_639;
unsigned int hash_642;
int n_643;
struct sGenericsFun* default_value_644;
default_value_638 = (void*)0;
default_value_644 = (void*)0;
    size_628=self->size*10;
    keys_629=(char**)come_increment_ref_count(((char**)(__right_value742=(char**)come_calloc(1, sizeof(char*)*(1*(size_628)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_630=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value743=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_628)), "/usr/local/include/comelang.h", 1625, "sGenericsFun*%"))));
    item_existance_631=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value744=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_628)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_632=0;
    for(    it_635=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_635=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_638,0,sizeof(struct sGenericsFun*));
        it2_639=map$2charphsGenericsFunph_at(self,it_635,default_value_638);
        hash_642=string_get_hash_key(it_635)%size_628;
        n_643=hash_642;
        while((_Bool)1) {
            if(            item_existance_631[n_643]) {
                n_643++;
                if(                n_643>=size_628) {
                    n_643=0;
                }
                else if(                n_643==hash_642) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_631[n_643]=(_Bool)1;
                keys_629[n_643]=it_635;
                items_630[n_643]=map$2charphsGenericsFunph_at(self,it_635,default_value_644);
                len_632++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_629;
    self->items=items_630;
    self->item_existance=item_existance_631;
    self->size=size_628;
    self->len=len_632;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_633;
char* __result226__;
char* __result227__;
char* result_634;
char* __result228__;
result_633 = (void*)0;
result_634 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_633,0,sizeof(char*));
        __result226__ = gComeFunResultObject = __result_obj__ = result_633;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result227__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    memset(&result_634,0,sizeof(char*));
    __result228__ = gComeFunResultObject = __result_obj__ = result_634;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_636;
char* __result229__;
char* __result230__;
char* result_637;
char* __result231__;
result_636 = (void*)0;
result_637 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_636,0,sizeof(char*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_636;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_637,0,sizeof(char*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_637;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_640;
unsigned int it_641;
struct sGenericsFun* __result232__;
struct sGenericsFun* __result233__;
struct sGenericsFun* __result234__;
struct sGenericsFun* __result235__;
    hash_640=string_get_hash_key(((char*)key))%self->size;
    it_641=hash_640;
    while((_Bool)1) {
        if(        self->item_existance[it_641]) {
            if(            string_equals(self->keys[it_641],key)) {
                __result232__ = gComeFunResultObject = __result_obj__ = self->items[it_641];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
            it_641++;
            if(            it_641>=self->size) {
                it_641=0;
            }
            else if(            it_641==hash_640) {
                __result233__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result233__;
            }
        }
        else {
            __result234__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result234__;
        }
    }
    __result235__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_690;
char* __dec_obj263;
char* last_code2_691;
char* __dec_obj264;
_Bool comma_instead_of_semicolon_692;
struct sClass* current_stack_frame_struct_693;
struct sFun* finalizer_694;
void* __right_value825 = (void*)0;
char* real_fun_name_695;
void* __right_value826 = (void*)0;
char* user_real_fun_name_696;
struct sFun* user_finalizer_697;
void* __right_value827 = (void*)0;
struct sType* type2_698;
struct sClass* klass_699;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct buffer* source_700;
struct list$1tuple2$2charphsTypephph* o2_saved_709;
struct tuple2$2charphsTypeph* it_712;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_715=0;
struct sType* field_type_716=0;
char* p_719;
int sline_720;
char* sname_721;
char* head_722;
struct buffer* source3_723;
struct buffer* __dec_obj272;
void* __right_value830 = (void*)0;
char* __dec_obj273;
void* __right_value831 = (void*)0;
struct sBlock* block_724;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sType* result_type_725;
void* __right_value834 = (void*)0;
char* name_726;
void* __right_value835 = (void*)0;
struct sType* self_type_727;
struct sType* __list_values21___728[1];
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct list$1sTypeph* param_types_729;
void* __right_value838 = (void*)0;
char* __list_values22___730[1];
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1charph* param_names_731;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1charph* param_default_parametors_732;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* header_buf_733;
void* __right_value845 = (void*)0;
int i_734;
struct sType* param_type_735;
char* param_name_736;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sFun* fun_737;
void* __right_value851 = (void*)0;
struct sFun* fun2_738;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value858 = (void*)0;
struct sNode* node_739;
_Bool Value_741;
struct buffer* __dec_obj278;
char* __dec_obj279;
char* __dec_obj280;
char* __dec_obj281;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct tuple2$2sFunpcharph* __result262__;
    last_code_690=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj263=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_691=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj264=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_692=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_693=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_694=((void*)0);
    real_fun_name_695=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_696=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_697=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_696);
    type2_698=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_698;
    klass_699=type->mClass;
    if(    type->mPointerNum>0&&klass_699->mStruct||type->mAllocaValue) {
        source_700=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2239, "buffer"))));
        buffer_append_char(source_700,123);
        if(        user_finalizer_697) {
            char source2_701[1024];
            memset(&source2_701, 0, sizeof(char)            *(1024)            );
            snprintf(source2_701,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_696);
            buffer_append_str(source_700,source2_701);
        }
        klass_699=map$2charphsClassphp_operator_load_element(info->classes,klass_699->mName);
        for(        o2_saved_709=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_699->mFields)),it_712=list$1tuple2$2charphsTypephph_begin((o2_saved_709));        !list$1tuple2$2charphsTypephph_end((o2_saved_709));        it_712=list$1tuple2$2charphsTypephph_next((o2_saved_709))        ){
            multiple_assign_var10=it_712;
            name_715=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_716=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_716->mClass->mName)&&type->mPointerNum==field_type_716->mPointerNum&&field_type_716->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_716->mHeap) {
                char source2_717[1024];
                memset(&source2_717, 0, sizeof(char)                *(1024)                );
                snprintf(source2_717,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_715,name_715,name_715,name_715);
                buffer_append_str(source_700,source2_717);
            }
            else if(            field_type_716->mChannel) {
                char source2_718[1024];
                memset(&source2_718, 0, sizeof(char)                *(1024)                );
                snprintf(source2_718,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_715,name_715);
                buffer_append_str(source_700,source2_718);
                snprintf(source2_718,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_715,name_715);
                buffer_append_str(source_700,source2_718);
            }
            /* U13 */name_715 = come_decrement_ref_count2(name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_716,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_709,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_700,125);
        p_719=info->p;
        sline_720=info->sline;
        sname_721=(char*)come_increment_ref_count(info->sname);
        head_722=info->head;
        source3_723=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj272=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_700);
        come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_700->buf;
        info->head=source_700->buf;
        __dec_obj273=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_695));
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_724=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_725=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2294, "sType")),"void",(_Bool)0,info));
        name_726=(char*)come_increment_ref_count(string_clone(real_fun_name_695));
        self_type_727=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_727->mHeap=(_Bool)0;
        if(        self_type_727->mPointerNum==0) {
            self_type_727->mPointerNum=1;
        }
        if(        self_type_727->mPointerNum>1) {
            self_type_727->mPointerNum=1;
        }
        param_types_729=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___728[0]=(struct sType*)come_increment_ref_count(self_type_727),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2304, "struct list$1sTypeph")),1,__list_values21___728)));
        param_names_731=(struct list$1charph*)come_increment_ref_count((__list_values22___730[0]=(char*)come_increment_ref_count(((char*)(__right_value838=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2305, "struct list$1charph")),1,__list_values22___730)));
        /* U11 */__right_value838 = come_decrement_ref_count2(__right_value838, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_732=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2306, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_732,((void*)0));
        header_buf_733=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2309, "buffer"))));
        buffer_append_str(header_buf_733,((char*)(__right_value845=make_come_type_name_string(result_type_725,info))));
        /* U11 */__right_value845 = come_decrement_ref_count2(__right_value845, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_733," ");
        buffer_append_str(header_buf_733,real_fun_name_695);
        buffer_append_str(header_buf_733,"(");
        for(        i_734=0;        i_734<list$1sTypeph_length(param_types_729);        i_734++        ){
            param_type_735=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_729,i_734), "05function.c", 2317, 7));
            param_name_736=((char*)come_null_check(list$1charphp_operator_load_element(param_names_731,i_734), "05function.c", 2318, 8));
            buffer_append_str(header_buf_733,((char*)(__right_value846=make_come_type_name_string(param_type_735,info))));
            /* U11 */__right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_733," ");
            buffer_append_str(header_buf_733,param_name_736);
            if(            i_734!=list$1sTypeph_length(param_types_729)-1) {
                buffer_append_str(header_buf_733,",");
            }
        }
        buffer_append_str(header_buf_733,")");
        result_type_725->mStatic=(_Bool)0;
        fun_737=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2332, "sFun")),(char*)come_increment_ref_count(name_726),(struct sType*)come_increment_ref_count(result_type_725),(struct list$1sTypeph*)come_increment_ref_count(param_types_729),(struct list$1charph*)come_increment_ref_count(param_names_731),(struct list$1charph*)come_increment_ref_count(param_default_parametors_732),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_724),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_733)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_738=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value851=__builtin_string(fun_name))));
        /* U11 */__right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_738==((void*)0)||fun2_738->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_726)),(struct sFun*)come_increment_ref_count(fun_737));
        }
        finalizer_694=fun_737;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2348, "struct sNode");
        _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value854=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2348, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_737),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_739=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value854,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_741=node_compile(node_739,info);
        if(        !Value_741) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj278=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_723);
        come_call_finalizer3(__dec_obj278,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_719;
        info->head=head_722;
        info->sline=sline_720;
        __dec_obj279=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_721);
        /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_700,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_721 = come_decrement_ref_count2(sname_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_724,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_726 = come_decrement_ref_count2(name_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_729,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_733,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_737,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_693;
    __dec_obj280=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_690);
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_691);
    /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_692;
    __result262__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value860=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2368, "struct tuple2$2sFunpcharph")),finalizer_694,(char*)come_increment_ref_count(real_fun_name_695))));
    /* U13 */last_code_690 = come_decrement_ref_count2(last_code_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_691 = come_decrement_ref_count2(last_code2_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_695 = come_decrement_ref_count2(real_fun_name_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */user_real_fun_name_696 = come_decrement_ref_count2(user_real_fun_name_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_698,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value860,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_702;
unsigned int hash_703;
unsigned int it_704;
struct sClass* __result249__;
struct sClass* __result250__;
struct sClass* __result251__;
struct sClass* __result252__;
default_value_702 = (void*)0;
    memset(&default_value_702,0,sizeof(struct sClass*));
    hash_703=string_get_hash_key(((char*)key))%self->size;
    it_704=hash_703;
    while((_Bool)1) {
        if(        self->item_existance[it_704]) {
            if(            string_equals(self->keys[it_704],key)) {
                __result249__ = gComeFunResultObject = __result_obj__ = self->items[it_704];
                /*i*/come_call_finalizer3(default_value_702,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
            it_704++;
            if(            it_704>=self->size) {
                it_704=0;
            }
            else if(            it_704==hash_703) {
                __result250__ = gComeFunResultObject = __result_obj__ = default_value_702;
                /*i*/come_call_finalizer3(default_value_702,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
        }
        else {
            __result251__ = gComeFunResultObject = __result_obj__ = default_value_702;
            /*i*/come_call_finalizer3(default_value_702,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result251__;
        }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = default_value_702;
    /*i*/come_call_finalizer3(default_value_702,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj265;
struct list$1tuple2$2charphsTypephph* __dec_obj266;
char* __dec_obj270;
char* __dec_obj271;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj265=self->mName;
            /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj266=self->mFields;
            come_call_finalizer3(__dec_obj266,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj270=self->mDeclareSName;
            /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj271=self->mParentClassName;
            /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_705;
struct list_item$1tuple2$2charphsTypephph* prev_it_706;
    it_705=self->head;
    while(it_705!=((void*)0)) {
        prev_it_706=it_705;
        it_705=it_705->next;
        /*i*/come_call_finalizer3(prev_it_706,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj267;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj267=self->item;
            come_call_finalizer3(__dec_obj267,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj268;
struct sType* __dec_obj269;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj268=self->v1;
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj269=self->v2;
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_707;
struct list_item$1tuple2$2charphsTypephph* prev_it_708;
    it_707=self->head;
    while(it_707!=((void*)0)) {
        prev_it_708=it_707;
        it_707=it_707->next;
        /*i*/come_call_finalizer3(prev_it_708,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_710;
struct tuple2$2charphsTypeph* __result253__;
struct tuple2$2charphsTypeph* __result254__;
struct tuple2$2charphsTypeph* result_711;
struct tuple2$2charphsTypeph* __result255__;
result_710 = (void*)0;
result_711 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_710,0,sizeof(struct tuple2$2charphsTypeph*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_710;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->head;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_711,0,sizeof(struct tuple2$2charphsTypeph*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_711;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_713;
struct tuple2$2charphsTypeph* __result256__;
struct tuple2$2charphsTypeph* __result257__;
struct tuple2$2charphsTypeph* result_714;
struct tuple2$2charphsTypeph* __result258__;
result_713 = (void*)0;
result_714 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_713,0,sizeof(struct tuple2$2charphsTypeph*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_713;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_714,0,sizeof(struct tuple2$2charphsTypeph*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_714;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj282;
struct tuple2$2sFunpcharph* __result261__;
    self->v1=v1;
    __dec_obj282=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj283;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj283=self->v2;
            /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_742;
char* __dec_obj284;
char* last_code2_743;
char* __dec_obj285;
_Bool comma_instead_of_semicolon_744;
struct sClass* current_stack_frame_struct_745;
struct sFun* finalizer_746;
void* __right_value861 = (void*)0;
char* real_fun_name_747;
void* __right_value862 = (void*)0;
struct sType* type2_748;
struct sClass* klass_749;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct buffer* source_750;
struct list$1tuple2$2charphsTypephph* o2_saved_751;
struct tuple2$2charphsTypeph* it_752;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_753=0;
struct sType* field_type_754=0;
char* p_756;
int sline_757;
char* sname_758;
char* head_759;
struct buffer* source3_760;
struct buffer* __dec_obj286;
void* __right_value865 = (void*)0;
char* __dec_obj287;
void* __right_value866 = (void*)0;
struct sBlock* block_761;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sType* result_type_762;
void* __right_value869 = (void*)0;
char* name_763;
void* __right_value870 = (void*)0;
struct sType* self_type_764;
struct sType* __list_values23___765[1];
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct list$1sTypeph* param_types_766;
void* __right_value873 = (void*)0;
char* __list_values24___767[1];
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1charph* param_names_768;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct list$1charph* param_default_parametors_769;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct buffer* header_buf_770;
void* __right_value880 = (void*)0;
int i_771;
struct sType* param_type_772;
char* param_name_773;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sFun* fun_774;
void* __right_value886 = (void*)0;
struct sFun* fun2_775;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value893 = (void*)0;
struct sNode* node_776;
_Bool Value_778;
struct buffer* __dec_obj292;
char* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct tuple2$2sFunpcharph* __result265__;
    last_code_742=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj284=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_743=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj285=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_744=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_745=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_746=((void*)0);
    real_fun_name_747=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_748=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_748;
    klass_749=type->mClass;
    if(    type->mPointerNum>0&&klass_749->mStruct) {
        source_750=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2394, "buffer"))));
        buffer_append_char(source_750,123);
        klass_749=map$2charphsClassphp_operator_load_element(info->classes,klass_749->mName);
        for(        o2_saved_751=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_749->mFields)),it_752=list$1tuple2$2charphsTypephph_begin((o2_saved_751));        !list$1tuple2$2charphsTypephph_end((o2_saved_751));        it_752=list$1tuple2$2charphsTypephph_next((o2_saved_751))        ){
            multiple_assign_var11=it_752;
            name_753=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_754=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_754->mClass->mName)&&type->mPointerNum==field_type_754->mPointerNum&&field_type_754->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_754->mHeap) {
                char source2_755[1024];
                memset(&source2_755, 0, sizeof(char)                *(1024)                );
                snprintf(source2_755,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_753,name_753,name_753,name_753);
                buffer_append_str(source_750,source2_755);
            }
            /* U13 */name_753 = come_decrement_ref_count2(name_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_751,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_750,125);
        p_756=info->p;
        sline_757=info->sline;
        sname_758=(char*)come_increment_ref_count(info->sname);
        head_759=info->head;
        source3_760=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj286=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_750);
        come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_750->buf;
        info->head=source_750->buf;
        __dec_obj287=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_747));
        /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_761=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_762=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2433, "sType")),"void",(_Bool)0,info));
        name_763=(char*)come_increment_ref_count(string_clone(real_fun_name_747));
        self_type_764=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_764->mHeap=(_Bool)0;
        if(        self_type_764->mPointerNum>1) {
            self_type_764->mPointerNum=1;
        }
        param_types_766=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___765[0]=(struct sType*)come_increment_ref_count(self_type_764),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2440, "struct list$1sTypeph")),1,__list_values23___765)));
        param_names_768=(struct list$1charph*)come_increment_ref_count((__list_values24___767[0]=(char*)come_increment_ref_count(((char*)(__right_value873=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2441, "struct list$1charph")),1,__list_values24___767)));
        /* U11 */__right_value873 = come_decrement_ref_count2(__right_value873, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_769=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2442, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_769,((void*)0));
        header_buf_770=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2445, "buffer"))));
        buffer_append_str(header_buf_770,((char*)(__right_value880=make_come_type_name_string(result_type_762,info))));
        /* U11 */__right_value880 = come_decrement_ref_count2(__right_value880, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_770," ");
        buffer_append_str(header_buf_770,real_fun_name_747);
        buffer_append_str(header_buf_770,"(");
        for(        i_771=0;        i_771<list$1sTypeph_length(param_types_766);        i_771++        ){
            param_type_772=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_766,i_771), "05function.c", 2453, 9));
            param_name_773=((char*)come_null_check(list$1charphp_operator_load_element(param_names_768,i_771), "05function.c", 2454, 10));
            buffer_append_str(header_buf_770,((char*)(__right_value881=make_come_type_name_string(param_type_772,info))));
            /* U11 */__right_value881 = come_decrement_ref_count2(__right_value881, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_770," ");
            buffer_append_str(header_buf_770,param_name_773);
            if(            i_771!=list$1sTypeph_length(param_types_766)-1) {
                buffer_append_str(header_buf_770,",");
            }
        }
        buffer_append_str(header_buf_770,")");
        result_type_762->mStatic=(_Bool)0;
        fun_774=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2468, "sFun")),(char*)come_increment_ref_count(name_763),(struct sType*)come_increment_ref_count(result_type_762),(struct list$1sTypeph*)come_increment_ref_count(param_types_766),(struct list$1charph*)come_increment_ref_count(param_names_768),(struct list$1charph*)come_increment_ref_count(param_default_parametors_769),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_761),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_770)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_775=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value886=__builtin_string(fun_name))));
        /* U11 */__right_value886 = come_decrement_ref_count2(__right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_775==((void*)0)||fun2_775->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_763)),(struct sFun*)come_increment_ref_count(fun_774));
        }
        finalizer_746=fun_774;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2484, "struct sNode");
        _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value889=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2484, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_774),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_776=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value889,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_778=node_compile(node_776,info);
        if(        !Value_778) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj292=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_760);
        come_call_finalizer3(__dec_obj292,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_756;
        info->head=head_759;
        info->sline=sline_757;
        __dec_obj293=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_758);
        /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_750,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_758 = come_decrement_ref_count2(sname_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_760,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_761,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_763 = come_decrement_ref_count2(name_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_764,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_766,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_768,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_769,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_774,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_776) { node_776 = come_decrement_ref_count2(node_776, ((struct sNode*)node_776)->finalize, ((struct sNode*)node_776)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_745;
    __dec_obj294=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_742);
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj295=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_743);
    /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_744;
    __result265__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value895=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2504, "struct tuple2$2sFunpcharph")),finalizer_746,(char*)come_increment_ref_count(real_fun_name_747))));
    /* U13 */last_code_742 = come_decrement_ref_count2(last_code_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_743 = come_decrement_ref_count2(last_code2_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_747 = come_decrement_ref_count2(real_fun_name_747, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_748,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value895,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_779;
char* __dec_obj296;
char* last_code2_780;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_781;
struct sClass* current_stack_frame_struct_782;
struct sFun* equaler_783;
void* __right_value896 = (void*)0;
char* real_fun_name_784;
void* __right_value897 = (void*)0;
struct sType* type2_785;
struct sClass* klass_786;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct buffer* source_787;
char* name_788;
struct list$1tuple2$2charphsTypephph* o2_saved_790;
struct tuple2$2charphsTypeph* it_791;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_792=0;
struct sType* field_type_793=0;
char* p_795;
int sline_796;
char* sname_797;
char* head_798;
struct buffer* source3_799;
struct buffer* __dec_obj298;
void* __right_value900 = (void*)0;
char* __dec_obj299;
void* __right_value901 = (void*)0;
struct sBlock* block_800;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sType* result_type_801;
void* __right_value904 = (void*)0;
char* name_802;
void* __right_value905 = (void*)0;
struct sType* left_type_803;
void* __right_value906 = (void*)0;
struct sType* right_type_804;
struct sType* __list_values25___805[2];
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct list$1sTypeph* param_types_806;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
char* __list_values26___807[2];
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct list$1charph* param_names_808;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct list$1charph* param_default_parametors_809;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct buffer* header_buf_810;
void* __right_value917 = (void*)0;
int i_811;
struct sType* param_type_812;
char* param_name_813;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct sFun* fun_814;
void* __right_value923 = (void*)0;
struct sFun* fun2_815;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value930 = (void*)0;
struct sNode* node_816;
_Bool Value_818;
struct buffer* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
char* __dec_obj307;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct tuple2$2sFunpcharph* __result268__;
    last_code_779=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_780=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_781=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_782=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_783=((void*)0);
    real_fun_name_784=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_785=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_785;
    klass_786=type->mClass;
    if(    type->mPointerNum>0&&!klass_786->mNumber) {
        source_787=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2529, "buffer"))));
        buffer_append_char(source_787,123);
        if(        klass_786->mProtocol) {
            name_788="_protocol_obj";
            char source2_789[1024];
            memset(&source2_789, 0, sizeof(char)            *(1024)            );
            snprintf(source2_789,1024,"return left.%s.equals(right.%s);\n",name_788,name_788);
            buffer_append_str(source_787,source2_789);
        }
        else {
            klass_786=map$2charphsClassphp_operator_load_element(info->classes,klass_786->mName);
            for(            o2_saved_790=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_786->mFields)),it_791=list$1tuple2$2charphsTypephph_begin((o2_saved_790));            !list$1tuple2$2charphsTypephph_end((o2_saved_790));            it_791=list$1tuple2$2charphsTypephph_next((o2_saved_790))            ){
                multiple_assign_var12=it_791;
                name_792=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_793=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_793->mClass->mName)&&type->mPointerNum==field_type_793->mPointerNum&&field_type_793->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_794[1024];
                memset(&source2_794, 0, sizeof(char)                *(1024)                );
                snprintf(source2_794,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_792,name_792,name_792);
                buffer_append_str(source_787,source2_794);
                /* U13 */name_792 = come_decrement_ref_count2(name_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_793,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_790,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_787,"return true;");
        buffer_append_char(source_787,125);
        p_795=info->p;
        sline_796=info->sline;
        sname_797=(char*)come_increment_ref_count(info->sname);
        head_798=info->head;
        source3_799=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_787);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_787->buf;
        info->head=source_787->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_784));
        /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_800=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_801=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2575, "sType")),"bool",(_Bool)0,info));
        name_802=(char*)come_increment_ref_count(string_clone(real_fun_name_784));
        left_type_803=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_803->mHeap=(_Bool)0;
        right_type_804=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_804->mHeap=(_Bool)0;
        param_types_806=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___805[0]=(struct sType*)come_increment_ref_count(left_type_803),
__list_values25___805[1]=(struct sType*)come_increment_ref_count(right_type_804),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2581, "struct list$1sTypeph")),2,__list_values25___805)));
        param_names_808=(struct list$1charph*)come_increment_ref_count((__list_values26___807[0]=(char*)come_increment_ref_count(((char*)(__right_value909=__builtin_string("left")))),
__list_values26___807[1]=(char*)come_increment_ref_count(((char*)(__right_value910=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2582, "struct list$1charph")),2,__list_values26___807)));
        /* U11 */__right_value909 = come_decrement_ref_count2(__right_value909, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value910 = come_decrement_ref_count2(__right_value910, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_809=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2583, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_809,((void*)0));
        list$1charph_push_back(param_default_parametors_809,((void*)0));
        header_buf_810=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2587, "buffer"))));
        buffer_append_str(header_buf_810,((char*)(__right_value917=make_come_type_name_string(result_type_801,info))));
        /* U11 */__right_value917 = come_decrement_ref_count2(__right_value917, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_810," ");
        buffer_append_str(header_buf_810,real_fun_name_784);
        buffer_append_str(header_buf_810,"(");
        for(        i_811=0;        i_811<list$1sTypeph_length(param_types_806);        i_811++        ){
            param_type_812=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_806,i_811), "05function.c", 2595, 11));
            param_name_813=((char*)come_null_check(list$1charphp_operator_load_element(param_names_808,i_811), "05function.c", 2596, 12));
            buffer_append_str(header_buf_810,((char*)(__right_value918=make_come_type_name_string(param_type_812,info))));
            /* U11 */__right_value918 = come_decrement_ref_count2(__right_value918, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_810," ");
            buffer_append_str(header_buf_810,param_name_813);
            if(            i_811!=list$1sTypeph_length(param_types_806)-1) {
                buffer_append_str(header_buf_810,",");
            }
        }
        buffer_append_str(header_buf_810,")");
        result_type_801->mStatic=(_Bool)0;
        fun_814=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2610, "sFun")),(char*)come_increment_ref_count(name_802),(struct sType*)come_increment_ref_count(result_type_801),(struct list$1sTypeph*)come_increment_ref_count(param_types_806),(struct list$1charph*)come_increment_ref_count(param_names_808),(struct list$1charph*)come_increment_ref_count(param_default_parametors_809),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_800),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_810)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_815=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value923=__builtin_string(fun_name))));
        /* U11 */__right_value923 = come_decrement_ref_count2(__right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_815==((void*)0)||fun2_815->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_802)),(struct sFun*)come_increment_ref_count(fun_814));
        }
        equaler_783=fun_814;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2626, "struct sNode");
        _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value926=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2626, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_814),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_816=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value926,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_818=node_compile(node_816,info);
        if(        !Value_818) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj304=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_799);
        come_call_finalizer3(__dec_obj304,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_795;
        info->head=head_798;
        info->sline=sline_796;
        __dec_obj305=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_797);
        /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_797 = come_decrement_ref_count2(sname_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_800,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_802 = come_decrement_ref_count2(name_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_803,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_804,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_806,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_808,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_809,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_816) { node_816 = come_decrement_ref_count2(node_816, ((struct sNode*)node_816)->finalize, ((struct sNode*)node_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_782;
    __dec_obj306=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_779);
    /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj307=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_780);
    /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_781;
    __result268__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value932=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2646, "struct tuple2$2sFunpcharph")),equaler_783,(char*)come_increment_ref_count(real_fun_name_784))));
    /* U13 */last_code_779 = come_decrement_ref_count2(last_code_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_780 = come_decrement_ref_count2(last_code2_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_784 = come_decrement_ref_count2(real_fun_name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_785,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value932,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_819;
char* __dec_obj308;
char* last_code2_820;
char* __dec_obj309;
_Bool comma_instead_of_semicolon_821;
struct sClass* current_stack_frame_struct_822;
struct sFun* equaler_823;
void* __right_value933 = (void*)0;
char* real_fun_name_824;
void* __right_value934 = (void*)0;
struct sType* type2_825;
struct sClass* klass_826;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct buffer* source_827;
char* name_828;
int i_831;
struct list$1tuple2$2charphsTypephph* o2_saved_832;
struct tuple2$2charphsTypeph* it_833;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_834=0;
struct sType* field_type_835=0;
char* p_839;
int sline_840;
char* sname_841;
char* head_842;
struct buffer* source3_843;
struct buffer* __dec_obj310;
void* __right_value937 = (void*)0;
char* __dec_obj311;
void* __right_value938 = (void*)0;
struct sBlock* block_844;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct sType* result_type_845;
void* __right_value941 = (void*)0;
char* name_846;
void* __right_value942 = (void*)0;
struct sType* left_type_847;
void* __right_value943 = (void*)0;
struct sType* right_type_848;
struct sType* __list_values27___849[2];
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct list$1sTypeph* param_types_850;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
char* __list_values28___851[2];
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct list$1charph* param_names_852;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct list$1charph* param_default_parametors_853;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct buffer* header_buf_854;
void* __right_value954 = (void*)0;
int i_855;
struct sType* param_type_856;
char* param_name_857;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sFun* fun_858;
void* __right_value960 = (void*)0;
struct sFun* fun2_859;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value967 = (void*)0;
struct sNode* node_860;
_Bool Value_862;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct tuple2$2sFunpcharph* __result271__;
    last_code_819=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj308=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_820=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj309=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_821=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_822=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_823=((void*)0);
    real_fun_name_824=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_825=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_825;
    klass_826=type->mClass;
    if(    type->mPointerNum>0&&!klass_826->mNumber) {
        source_827=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2671, "buffer"))));
        buffer_append_char(source_827,123);
        if(        klass_826->mProtocol) {
            name_828="_protocol_obj";
            char source2_829[1024];
            memset(&source2_829, 0, sizeof(char)            *(1024)            );
            snprintf(source2_829,1024,"return left.%s !== right.%s;\n",name_828,name_828);
            buffer_append_str(source_827,source2_829);
        }
        else {
            char source2_830[1024];
            memset(&source2_830, 0, sizeof(char)            *(1024)            );
            snprintf(source2_830,1024,"return !(");
            buffer_append_str(source_827,source2_830);
            snprintf(source2_830,1024,"( ");
            buffer_append_str(source_827,source2_830);
            i_831=0;
            klass_826=map$2charphsClassphp_operator_load_element(info->classes,klass_826->mName);
            for(            o2_saved_832=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_826->mFields)),it_833=list$1tuple2$2charphsTypephph_begin((o2_saved_832));            !list$1tuple2$2charphsTypephph_end((o2_saved_832));            it_833=list$1tuple2$2charphsTypephph_next((o2_saved_832))            ){
                multiple_assign_var13=it_833;
                name_834=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_835=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_835->mClass->mName)&&type->mPointerNum==field_type_835->mPointerNum&&field_type_835->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_836[1024];
                memset(&source2_836, 0, sizeof(char)                *(1024)                );
                snprintf(source2_836,1024,"(left.%s === right.%s)",name_834,name_834,name_834);
                buffer_append_str(source_827,source2_836);
                if(                i_831==list$1tuple2$2charphsTypephph_length(klass_826->mFields)-1) {
                    char source2_837[1024];
                    memset(&source2_837, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_837,1024,"));");
                    buffer_append_str(source_827,source2_837);
                }
                else {
                    char source2_838[1024];
                    memset(&source2_838, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_838,1024," && ");
                    buffer_append_str(source_827,source2_838);
                }
                i_831++;
                /* U13 */name_834 = come_decrement_ref_count2(name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_835,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_832,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_827,125);
        p_839=info->p;
        sline_840=info->sline;
        sname_841=(char*)come_increment_ref_count(info->sname);
        head_842=info->head;
        source3_843=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_827);
        come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_827->buf;
        info->head=source_827->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_824));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_844=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_845=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2737, "sType")),"bool",(_Bool)0,info));
        name_846=(char*)come_increment_ref_count(string_clone(real_fun_name_824));
        left_type_847=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_847->mHeap=(_Bool)0;
        right_type_848=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_848->mHeap=(_Bool)0;
        param_types_850=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___849[0]=(struct sType*)come_increment_ref_count(left_type_847),
__list_values27___849[1]=(struct sType*)come_increment_ref_count(right_type_848),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2743, "struct list$1sTypeph")),2,__list_values27___849)));
        param_names_852=(struct list$1charph*)come_increment_ref_count((__list_values28___851[0]=(char*)come_increment_ref_count(((char*)(__right_value946=__builtin_string("left")))),
__list_values28___851[1]=(char*)come_increment_ref_count(((char*)(__right_value947=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2744, "struct list$1charph")),2,__list_values28___851)));
        /* U11 */__right_value946 = come_decrement_ref_count2(__right_value946, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value947 = come_decrement_ref_count2(__right_value947, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_853=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2745, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_853,((void*)0));
        list$1charph_push_back(param_default_parametors_853,((void*)0));
        header_buf_854=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2749, "buffer"))));
        buffer_append_str(header_buf_854,((char*)(__right_value954=make_come_type_name_string(result_type_845,info))));
        /* U11 */__right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_854," ");
        buffer_append_str(header_buf_854,real_fun_name_824);
        buffer_append_str(header_buf_854,"(");
        for(        i_855=0;        i_855<list$1sTypeph_length(param_types_850);        i_855++        ){
            param_type_856=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_850,i_855), "05function.c", 2757, 13));
            param_name_857=((char*)come_null_check(list$1charphp_operator_load_element(param_names_852,i_855), "05function.c", 2758, 14));
            buffer_append_str(header_buf_854,((char*)(__right_value955=make_come_type_name_string(param_type_856,info))));
            /* U11 */__right_value955 = come_decrement_ref_count2(__right_value955, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_854," ");
            buffer_append_str(header_buf_854,param_name_857);
            if(            i_855!=list$1sTypeph_length(param_types_850)-1) {
                buffer_append_str(header_buf_854,",");
            }
        }
        buffer_append_str(header_buf_854,")");
        result_type_845->mStatic=(_Bool)0;
        fun_858=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2772, "sFun")),(char*)come_increment_ref_count(name_846),(struct sType*)come_increment_ref_count(result_type_845),(struct list$1sTypeph*)come_increment_ref_count(param_types_850),(struct list$1charph*)come_increment_ref_count(param_names_852),(struct list$1charph*)come_increment_ref_count(param_default_parametors_853),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_844),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_854)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_859=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value960=__builtin_string(fun_name))));
        /* U11 */__right_value960 = come_decrement_ref_count2(__right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_859==((void*)0)||fun2_859->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_846)),(struct sFun*)come_increment_ref_count(fun_858));
        }
        equaler_823=fun_858;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2788, "struct sNode");
        _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value963=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2788, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_858),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_860=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value963,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_862=node_compile(node_860,info);
        if(        !Value_862) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_843);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_839;
        info->head=head_842;
        info->sline=sline_840;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_841);
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_827,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_841 = come_decrement_ref_count2(sname_841, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_844,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_845,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_846 = come_decrement_ref_count2(name_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_847,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_850,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_852,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_853,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_858,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_860) { node_860 = come_decrement_ref_count2(node_860, ((struct sNode*)node_860)->finalize, ((struct sNode*)node_860)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_822;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_819);
    /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_820);
    /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_821;
    __result271__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value969=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2808, "struct tuple2$2sFunpcharph")),equaler_823,(char*)come_increment_ref_count(real_fun_name_824))));
    /* U13 */last_code_819 = come_decrement_ref_count2(last_code_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_820 = come_decrement_ref_count2(last_code2_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_824 = come_decrement_ref_count2(real_fun_name_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_825,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value969,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_863;
char* __dec_obj320;
char* last_code2_864;
char* __dec_obj321;
_Bool comma_instead_of_semicolon_865;
struct sClass* current_stack_frame_struct_866;
struct sFun* equaler_867;
void* __right_value970 = (void*)0;
char* real_fun_name_868;
void* __right_value971 = (void*)0;
struct sType* type2_869;
struct sClass* klass_870;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct buffer* source_871;
char* name_872;
int i_875;
struct list$1tuple2$2charphsTypephph* o2_saved_876;
struct tuple2$2charphsTypeph* it_877;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_878=0;
struct sType* field_type_879=0;
char* p_883;
int sline_884;
char* sname_885;
char* head_886;
struct buffer* source3_887;
struct buffer* __dec_obj322;
void* __right_value974 = (void*)0;
char* __dec_obj323;
void* __right_value975 = (void*)0;
struct sBlock* block_888;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sType* result_type_889;
void* __right_value978 = (void*)0;
char* name_890;
void* __right_value979 = (void*)0;
struct sType* left_type_891;
void* __right_value980 = (void*)0;
struct sType* right_type_892;
struct sType* __list_values29___893[2];
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct list$1sTypeph* param_types_894;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
char* __list_values30___895[2];
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct list$1charph* param_names_896;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct list$1charph* param_default_parametors_897;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct buffer* header_buf_898;
void* __right_value991 = (void*)0;
int i_899;
struct sType* param_type_900;
char* param_name_901;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sFun* fun_902;
void* __right_value997 = (void*)0;
struct sFun* fun2_903;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1004 = (void*)0;
struct sNode* node_904;
_Bool Value_906;
struct buffer* __dec_obj328;
char* __dec_obj329;
char* __dec_obj330;
char* __dec_obj331;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct tuple2$2sFunpcharph* __result274__;
    last_code_863=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_864=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_865=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_866=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_867=((void*)0);
    real_fun_name_868=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_869=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_869;
    klass_870=type->mClass;
    if(    type->mPointerNum>0&&!klass_870->mNumber) {
        source_871=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2833, "buffer"))));
        buffer_append_char(source_871,123);
        if(        klass_870->mProtocol) {
            name_872="_protocol_obj";
            char source2_873[1024];
            memset(&source2_873, 0, sizeof(char)            *(1024)            );
            snprintf(source2_873,1024,"return !left.%s.equals(right.%s);\n",name_872,name_872);
            buffer_append_str(source_871,source2_873);
        }
        else {
            char source2_874[1024];
            memset(&source2_874, 0, sizeof(char)            *(1024)            );
            snprintf(source2_874,1024,"return !(");
            buffer_append_str(source_871,source2_874);
            i_875=0;
            klass_870=map$2charphsClassphp_operator_load_element(info->classes,klass_870->mName);
            for(            o2_saved_876=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_870->mFields)),it_877=list$1tuple2$2charphsTypephph_begin((o2_saved_876));            !list$1tuple2$2charphsTypephph_end((o2_saved_876));            it_877=list$1tuple2$2charphsTypephph_next((o2_saved_876))            ){
                multiple_assign_var14=it_877;
                name_878=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_879=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_879->mClass->mName)&&type->mPointerNum==field_type_879->mPointerNum&&field_type_879->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_880[1024];
                memset(&source2_880, 0, sizeof(char)                *(1024)                );
                snprintf(source2_880,1024,"left.%s.equals(right.%s)",name_878,name_878);
                buffer_append_str(source_871,source2_880);
                if(                i_875==list$1tuple2$2charphsTypephph_length(klass_870->mFields)-1) {
                    char source2_881[1024];
                    memset(&source2_881, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_881,1024,");");
                    buffer_append_str(source_871,source2_881);
                }
                else {
                    char source2_882[1024];
                    memset(&source2_882, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_882,1024," && ");
                    buffer_append_str(source_871,source2_882);
                }
                i_875++;
                /* U13 */name_878 = come_decrement_ref_count2(name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_879,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_876,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_871,125);
        p_883=info->p;
        sline_884=info->sline;
        sname_885=(char*)come_increment_ref_count(info->sname);
        head_886=info->head;
        source3_887=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_871);
        come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_871->buf;
        info->head=source_871->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_868));
        /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_888=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_889=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2896, "sType")),"bool",(_Bool)0,info));
        name_890=(char*)come_increment_ref_count(string_clone(real_fun_name_868));
        left_type_891=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_891->mHeap=(_Bool)0;
        right_type_892=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_892->mHeap=(_Bool)0;
        param_types_894=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___893[0]=(struct sType*)come_increment_ref_count(left_type_891),
__list_values29___893[1]=(struct sType*)come_increment_ref_count(right_type_892),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2902, "struct list$1sTypeph")),2,__list_values29___893)));
        param_names_896=(struct list$1charph*)come_increment_ref_count((__list_values30___895[0]=(char*)come_increment_ref_count(((char*)(__right_value983=__builtin_string("left")))),
__list_values30___895[1]=(char*)come_increment_ref_count(((char*)(__right_value984=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2903, "struct list$1charph")),2,__list_values30___895)));
        /* U11 */__right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value984 = come_decrement_ref_count2(__right_value984, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_897=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2904, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_897,((void*)0));
        list$1charph_push_back(param_default_parametors_897,((void*)0));
        header_buf_898=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2908, "buffer"))));
        buffer_append_str(header_buf_898,((char*)(__right_value991=make_come_type_name_string(result_type_889,info))));
        /* U11 */__right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_898," ");
        buffer_append_str(header_buf_898,real_fun_name_868);
        buffer_append_str(header_buf_898,"(");
        for(        i_899=0;        i_899<list$1sTypeph_length(param_types_894);        i_899++        ){
            param_type_900=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_894,i_899), "05function.c", 2916, 15));
            param_name_901=((char*)come_null_check(list$1charphp_operator_load_element(param_names_896,i_899), "05function.c", 2917, 16));
            buffer_append_str(header_buf_898,((char*)(__right_value992=make_come_type_name_string(param_type_900,info))));
            /* U11 */__right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_898," ");
            buffer_append_str(header_buf_898,param_name_901);
            if(            i_899!=list$1sTypeph_length(param_types_894)-1) {
                buffer_append_str(header_buf_898,",");
            }
        }
        buffer_append_str(header_buf_898,")");
        result_type_889->mStatic=(_Bool)0;
        fun_902=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2931, "sFun")),(char*)come_increment_ref_count(name_890),(struct sType*)come_increment_ref_count(result_type_889),(struct list$1sTypeph*)come_increment_ref_count(param_types_894),(struct list$1charph*)come_increment_ref_count(param_names_896),(struct list$1charph*)come_increment_ref_count(param_default_parametors_897),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_888),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_898)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_903=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value997=__builtin_string(fun_name))));
        /* U11 */__right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_903==((void*)0)||fun2_903->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_890)),(struct sFun*)come_increment_ref_count(fun_902));
        }
        equaler_867=fun_902;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2947, "struct sNode");
        _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1000=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2947, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_902),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_904=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value1000,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_906=node_compile(node_904,info);
        if(        !Value_906) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj328=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_887);
        come_call_finalizer3(__dec_obj328,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_883;
        info->head=head_886;
        info->sline=sline_884;
        __dec_obj329=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_885);
        /*G*/ __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_871,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_885 = come_decrement_ref_count2(sname_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_888,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_889,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_890 = come_decrement_ref_count2(name_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_892,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_894,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_896,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_897,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_898,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_904) { node_904 = come_decrement_ref_count2(node_904, ((struct sNode*)node_904)->finalize, ((struct sNode*)node_904)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_866;
    __dec_obj330=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_863);
    /*G*/ __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj331=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_864);
    /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_865;
    __result274__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1006=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2967, "struct tuple2$2sFunpcharph")),equaler_867,(char*)come_increment_ref_count(real_fun_name_868))));
    /* U13 */last_code_863 = come_decrement_ref_count2(last_code_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_864 = come_decrement_ref_count2(last_code2_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_868 = come_decrement_ref_count2(real_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_869,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1006,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_907;
char* __dec_obj332;
char* last_code2_908;
char* __dec_obj333;
_Bool comma_instead_of_semicolon_909;
struct sClass* current_stack_frame_struct_910;
struct sFun* equaler_911;
void* __right_value1007 = (void*)0;
char* real_fun_name_912;
void* __right_value1008 = (void*)0;
struct sType* type2_913;
struct sClass* klass_914;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct buffer* source_915;
char* name_916;
struct list$1tuple2$2charphsTypephph* o2_saved_919;
struct tuple2$2charphsTypeph* it_920;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_921=0;
struct sType* field_type_922=0;
char* p_924;
int sline_925;
char* sname_926;
char* head_927;
struct buffer* source3_928;
struct buffer* __dec_obj334;
void* __right_value1011 = (void*)0;
char* __dec_obj335;
void* __right_value1012 = (void*)0;
struct sBlock* block_929;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sType* result_type_930;
void* __right_value1015 = (void*)0;
char* name_931;
void* __right_value1016 = (void*)0;
struct sType* left_type_932;
void* __right_value1017 = (void*)0;
struct sType* right_type_933;
struct sType* __list_values31___934[2];
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
struct list$1sTypeph* param_types_935;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
char* __list_values32___936[2];
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct list$1charph* param_names_937;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct list$1charph* param_default_parametors_938;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct buffer* header_buf_939;
void* __right_value1028 = (void*)0;
int i_940;
struct sType* param_type_941;
char* param_name_942;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sFun* fun_943;
void* __right_value1034 = (void*)0;
struct sFun* fun2_944;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1041 = (void*)0;
struct sNode* node_945;
_Bool Value_947;
struct buffer* __dec_obj340;
char* __dec_obj341;
char* __dec_obj342;
char* __dec_obj343;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct tuple2$2sFunpcharph* __result277__;
    last_code_907=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_908=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_909=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_910=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_911=((void*)0);
    real_fun_name_912=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_913=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_913;
    klass_914=type->mClass;
    if(    type->mPointerNum>0&&!klass_914->mNumber) {
        source_915=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2992, "buffer"))));
        buffer_append_char(source_915,123);
        if(        klass_914->mProtocol) {
            name_916="_protocol_obj";
            char source2_917[1024];
            memset(&source2_917, 0, sizeof(char)            *(1024)            );
            snprintf(source2_917,1024,"return left.%s === right.%s;\n",name_916,name_916);
            buffer_append_str(source_915,source2_917);
        }
        else {
            char source2_918[1024];
            memset(&source2_918, 0, sizeof(char)            *(1024)            );
            klass_914=map$2charphsClassphp_operator_load_element(info->classes,klass_914->mName);
            for(            o2_saved_919=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_914->mFields)),it_920=list$1tuple2$2charphsTypephph_begin((o2_saved_919));            !list$1tuple2$2charphsTypephph_end((o2_saved_919));            it_920=list$1tuple2$2charphsTypephph_next((o2_saved_919))            ){
                multiple_assign_var15=it_920;
                name_921=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_922=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_922->mClass->mName)&&type->mPointerNum==field_type_922->mPointerNum&&field_type_922->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_923[1024];
                memset(&source2_923, 0, sizeof(char)                *(1024)                );
                snprintf(source2_923,1024,"if(left.%s !== right.%s) { return false; }\n",name_921,name_921,name_921);
                buffer_append_str(source_915,source2_923);
                /* U13 */name_921 = come_decrement_ref_count2(name_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_922,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_919,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_915,"return true;\n");
        buffer_append_char(source_915,125);
        p_924=info->p;
        sline_925=info->sline;
        sname_926=(char*)come_increment_ref_count(info->sname);
        head_927=info->head;
        source3_928=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj334=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_915);
        come_call_finalizer3(__dec_obj334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_915->buf;
        info->head=source_915->buf;
        __dec_obj335=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_912));
        /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_929=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_930=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3040, "sType")),"bool",(_Bool)0,info));
        name_931=(char*)come_increment_ref_count(string_clone(real_fun_name_912));
        left_type_932=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_932->mHeap=(_Bool)0;
        right_type_933=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_933->mHeap=(_Bool)0;
        param_types_935=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___934[0]=(struct sType*)come_increment_ref_count(left_type_932),
__list_values31___934[1]=(struct sType*)come_increment_ref_count(right_type_933),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3046, "struct list$1sTypeph")),2,__list_values31___934)));
        param_names_937=(struct list$1charph*)come_increment_ref_count((__list_values32___936[0]=(char*)come_increment_ref_count(((char*)(__right_value1020=__builtin_string("left")))),
__list_values32___936[1]=(char*)come_increment_ref_count(((char*)(__right_value1021=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3047, "struct list$1charph")),2,__list_values32___936)));
        /* U11 */__right_value1020 = come_decrement_ref_count2(__right_value1020, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1021 = come_decrement_ref_count2(__right_value1021, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_938=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3048, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_938,((void*)0));
        list$1charph_push_back(param_default_parametors_938,((void*)0));
        header_buf_939=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3052, "buffer"))));
        buffer_append_str(header_buf_939,((char*)(__right_value1028=make_come_type_name_string(result_type_930,info))));
        /* U11 */__right_value1028 = come_decrement_ref_count2(__right_value1028, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_939," ");
        buffer_append_str(header_buf_939,real_fun_name_912);
        buffer_append_str(header_buf_939,"(");
        for(        i_940=0;        i_940<list$1sTypeph_length(param_types_935);        i_940++        ){
            param_type_941=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_935,i_940), "05function.c", 3060, 17));
            param_name_942=((char*)come_null_check(list$1charphp_operator_load_element(param_names_937,i_940), "05function.c", 3061, 18));
            buffer_append_str(header_buf_939,((char*)(__right_value1029=make_come_type_name_string(param_type_941,info))));
            /* U11 */__right_value1029 = come_decrement_ref_count2(__right_value1029, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_939," ");
            buffer_append_str(header_buf_939,param_name_942);
            if(            i_940!=list$1sTypeph_length(param_types_935)-1) {
                buffer_append_str(header_buf_939,",");
            }
        }
        buffer_append_str(header_buf_939,")");
        result_type_930->mStatic=(_Bool)0;
        fun_943=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3075, "sFun")),(char*)come_increment_ref_count(name_931),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1sTypeph*)come_increment_ref_count(param_types_935),(struct list$1charph*)come_increment_ref_count(param_names_937),(struct list$1charph*)come_increment_ref_count(param_default_parametors_938),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_929),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_939)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_944=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1034=__builtin_string(fun_name))));
        /* U11 */__right_value1034 = come_decrement_ref_count2(__right_value1034, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_944==((void*)0)||fun2_944->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_931)),(struct sFun*)come_increment_ref_count(fun_943));
        }
        equaler_911=fun_943;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3091, "struct sNode");
        _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1037=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3091, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_943),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_945=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1037,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_947=node_compile(node_945,info);
        if(        !Value_947) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        else {
        }
        __dec_obj340=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_928);
        come_call_finalizer3(__dec_obj340,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_924;
        info->head=head_927;
        info->sline=sline_925;
        __dec_obj341=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_926);
        /*G*/ __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_915,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_926 = come_decrement_ref_count2(sname_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_928,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_929,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_931 = come_decrement_ref_count2(name_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_933,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_935,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_937,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_938,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_939,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_943,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_945) { node_945 = come_decrement_ref_count2(node_945, ((struct sNode*)node_945)->finalize, ((struct sNode*)node_945)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_910;
    __dec_obj342=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_907);
    /*G*/ __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj343=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_908);
    /*G*/ __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_909;
    __result277__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1043=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3111, "struct tuple2$2sFunpcharph")),equaler_911,(char*)come_increment_ref_count(real_fun_name_912))));
    /* U13 */last_code_907 = come_decrement_ref_count2(last_code_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_908 = come_decrement_ref_count2(last_code2_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_912 = come_decrement_ref_count2(real_fun_name_912, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_913,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1043,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_948;
char* __dec_obj344;
char* last_code2_949;
char* __dec_obj345;
_Bool comma_instead_of_semicolon_950;
struct sClass* current_stack_frame_struct_951;
struct sFun* cloner_952;
void* __right_value1044 = (void*)0;
char* real_fun_name_953;
void* __right_value1045 = (void*)0;
struct sType* type2_954;
struct sClass* klass_955;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct buffer* source_956;
void* __right_value1048 = (void*)0;
char* name_957;
struct list$1tuple2$2charphsTypephph* o2_saved_959;
struct tuple2$2charphsTypeph* it_960;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_961=0;
struct sType* field_type_962=0;
struct list$1tuple2$2charphsTypephph* o2_saved_965;
struct tuple2$2charphsTypeph* it_966;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_967=0;
struct sType* field_type_968=0;
char* p_972;
int sline_973;
char* sname_974;
struct buffer* source3_975;
char* head_976;
struct buffer* __dec_obj346;
void* __right_value1049 = (void*)0;
char* __dec_obj347;
void* __right_value1050 = (void*)0;
struct sBlock* block_977;
void* __right_value1051 = (void*)0;
struct sType* result_type_978;
void* __right_value1052 = (void*)0;
char* name_979;
void* __right_value1053 = (void*)0;
struct sType* self_type_980;
struct sType* __list_values33___981[1];
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
struct list$1sTypeph* param_types_982;
void* __right_value1056 = (void*)0;
char* __list_values34___983[1];
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct list$1charph* param_names_984;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
struct list$1charph* param_default_parametors_985;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct buffer* header_buf_986;
void* __right_value1063 = (void*)0;
int i_987;
struct sType* param_type_988;
char* param_name_989;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sFun* fun_990;
void* __right_value1069 = (void*)0;
struct sFun* fun2_991;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1076 = (void*)0;
struct sNode* node_992;
_Bool Value_994;
char* __dec_obj352;
struct buffer* __dec_obj353;
char* __dec_obj354;
char* __dec_obj355;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct tuple2$2sFunpcharph* __result280__;
    last_code_948=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj344=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_949=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj345=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_950=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_951=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_952=((void*)0);
    real_fun_name_953=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_954=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_954;
    klass_955=type->mClass;
    if(    type->mPointerNum>0&&!klass_955->mNumber) {
        source_956=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3136, "buffer"))));
        buffer_append_str(source_956,"{\n");
        buffer_append_str(source_956,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_956,"var result = new %s;\n",((char*)(__right_value1048=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        /* U11 */__right_value1048 = come_decrement_ref_count2(__right_value1048, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_955->mProtocol) {
            name_957="_protocol_obj";
            char source2_958[1024];
            memset(&source2_958, 0, sizeof(char)            *(1024)            );
            snprintf(source2_958,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_956,source2_958);
            klass_955=map$2charphsClassphp_operator_load_element(info->classes,klass_955->mName);
            for(            o2_saved_959=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_955->mFields)),it_960=list$1tuple2$2charphsTypephph_begin((o2_saved_959));            !list$1tuple2$2charphsTypephph_end((o2_saved_959));            it_960=list$1tuple2$2charphsTypephph_next((o2_saved_959))            ){
                multiple_assign_var16=it_960;
                name_961=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_962=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_962->mClass->mName)&&type->mPointerNum==field_type_962->mPointerNum&&field_type_962->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_961,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_962->mArrayNum)>0) {
                    char source2_963[1024];
                    memset(&source2_963, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_963,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_961,name_961,name_961);
                    buffer_append_str(source_956,source2_963);
                }
                else {
                    char source2_964[1024];
                    memset(&source2_964, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_964,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_961,name_961);
                    buffer_append_str(source_956,source2_964);
                }
                /* U13 */name_961 = come_decrement_ref_count2(name_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_962,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_959,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_955=map$2charphsClassphp_operator_load_element(info->classes,klass_955->mName);
            for(            o2_saved_965=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_955->mFields)),it_966=list$1tuple2$2charphsTypephph_begin((o2_saved_965));            !list$1tuple2$2charphsTypephph_end((o2_saved_965));            it_966=list$1tuple2$2charphsTypephph_next((o2_saved_965))            ){
                multiple_assign_var17=it_966;
                name_967=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_968=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_968->mClass->mName)&&type->mPointerNum==field_type_968->mPointerNum&&field_type_968->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_968->mHeap) {
                    char source2_969[1024];
                    memset(&source2_969, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_969,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_967,name_967,name_967);
                    buffer_append_str(source_956,source2_969);
                }
                else if(                list$1sNodeph_length(field_type_968->mArrayNum)>0) {
                    char source2_970[1024];
                    memset(&source2_970, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_970,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_967,name_967,name_967);
                    buffer_append_str(source_956,source2_970);
                }
                else {
                    char source2_971[1024];
                    memset(&source2_971, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_971,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_967,name_967);
                    buffer_append_str(source_956,source2_971);
                }
                /* U13 */name_967 = come_decrement_ref_count2(name_967, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_968,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_965,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_956,"return result;");
        buffer_append_char(source_956,125);
        p_972=info->p;
        sline_973=info->sline;
        sname_974=(char*)come_increment_ref_count(info->sname);
        source3_975=(struct buffer*)come_increment_ref_count(info->source);
        head_976=info->head;
        __dec_obj346=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_956);
        come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj347=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_953));
        /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_977=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_978=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_979=(char*)come_increment_ref_count(string_clone(real_fun_name_953));
        self_type_980=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_980->mHeap=(_Bool)0;
        param_types_982=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___981[0]=(struct sType*)come_increment_ref_count(self_type_980),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3230, "struct list$1sTypeph")),1,__list_values33___981)));
        param_names_984=(struct list$1charph*)come_increment_ref_count((__list_values34___983[0]=(char*)come_increment_ref_count(((char*)(__right_value1056=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3231, "struct list$1charph")),1,__list_values34___983)));
        /* U11 */__right_value1056 = come_decrement_ref_count2(__right_value1056, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_985=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3232, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_985,((void*)0));
        header_buf_986=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3235, "buffer"))));
        buffer_append_str(header_buf_986,((char*)(__right_value1063=make_come_type_name_string(result_type_978,info))));
        /* U11 */__right_value1063 = come_decrement_ref_count2(__right_value1063, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_986," ");
        buffer_append_str(header_buf_986,real_fun_name_953);
        buffer_append_str(header_buf_986,"(");
        for(        i_987=0;        i_987<list$1sTypeph_length(param_types_982);        i_987++        ){
            param_type_988=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_982,i_987), "05function.c", 3243, 19));
            param_name_989=((char*)come_null_check(list$1charphp_operator_load_element(param_names_984,i_987), "05function.c", 3244, 20));
            buffer_append_str(header_buf_986,((char*)(__right_value1064=make_come_type_name_string(param_type_988,info))));
            /* U11 */__right_value1064 = come_decrement_ref_count2(__right_value1064, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_986," ");
            buffer_append_str(header_buf_986,param_name_989);
            if(            i_987!=list$1sTypeph_length(param_types_982)-1) {
                buffer_append_str(header_buf_986,",");
            }
        }
        buffer_append_str(header_buf_986,")");
        result_type_978->mStatic=(_Bool)0;
        fun_990=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3258, "sFun")),(char*)come_increment_ref_count(name_979),(struct sType*)come_increment_ref_count(result_type_978),(struct list$1sTypeph*)come_increment_ref_count(param_types_982),(struct list$1charph*)come_increment_ref_count(param_names_984),(struct list$1charph*)come_increment_ref_count(param_default_parametors_985),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_977),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_986)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_990->mCloner=(_Bool)1;
        fun2_991=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1069=__builtin_string(fun_name))));
        /* U11 */__right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_991==((void*)0)||fun2_991->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_979)),(struct sFun*)come_increment_ref_count(fun_990));
        }
        cloner_952=fun_990;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3275, "struct sNode");
        _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1072=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3275, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_990),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_992=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1072,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_994=node_compile(node_992,info);
        if(        !Value_994) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj352=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_974);
        /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_973;
        __dec_obj353=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_975);
        come_call_finalizer3(__dec_obj353,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_972;
        info->head=head_976;
        info->sline=sline_973;
        /*i*/come_call_finalizer3(source_956,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_974 = come_decrement_ref_count2(sname_974, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_975,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_977,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_978,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_979 = come_decrement_ref_count2(name_979, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_980,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_982,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_984,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_985,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_986,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_990,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_992) { node_992 = come_decrement_ref_count2(node_992, ((struct sNode*)node_992)->finalize, ((struct sNode*)node_992)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_951;
    __dec_obj354=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_948);
    /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj355=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_949);
    /*G*/ __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_950;
    __result280__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1078=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph")),cloner_952,(char*)come_increment_ref_count(real_fun_name_953))));
    /* U13 */last_code_948 = come_decrement_ref_count2(last_code_948, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_949 = come_decrement_ref_count2(last_code2_949, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_953 = come_decrement_ref_count2(real_fun_name_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_954,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1078,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_995;
char* __dec_obj356;
char* last_code2_996;
char* __dec_obj357;
_Bool comma_instead_of_semicolon_997;
struct sClass* current_stack_frame_struct_998;
struct sFun* cloner_999;
void* __right_value1079 = (void*)0;
char* real_fun_name_1000;
void* __right_value1080 = (void*)0;
struct sType* type2_1001;
struct sClass* klass_1002;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct buffer* source_1003;
int i_1004;
struct list$1tuple2$2charphsTypephph* o2_saved_1005;
struct tuple2$2charphsTypeph* it_1006;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1007=0;
struct sType* field_type_1008=0;
char* p_1011;
int sline_1012;
char* sname_1013;
struct buffer* source3_1014;
char* head_1015;
struct buffer* __dec_obj358;
void* __right_value1083 = (void*)0;
char* __dec_obj359;
void* __right_value1084 = (void*)0;
struct sBlock* block_1016;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct sType* result_type_1017;
void* __right_value1087 = (void*)0;
char* name_1018;
void* __right_value1088 = (void*)0;
struct sType* self_type_1019;
struct sType* __list_values35___1020[1];
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct list$1sTypeph* param_types_1021;
void* __right_value1091 = (void*)0;
char* __list_values36___1022[1];
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct list$1charph* param_names_1023;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct list$1charph* param_default_parametors_1024;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct buffer* header_buf_1025;
void* __right_value1098 = (void*)0;
int i_1026;
struct sType* param_type_1027;
char* param_name_1028;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
struct sFun* fun_1029;
void* __right_value1104 = (void*)0;
struct sFun* fun2_1030;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value1111 = (void*)0;
struct sNode* node_1031;
_Bool Value_1033;
char* __dec_obj364;
struct buffer* __dec_obj365;
char* __dec_obj366;
char* __dec_obj367;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct tuple2$2sFunpcharph* __result283__;
    last_code_995=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj356=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_996=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj357=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_997=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_998=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_999=((void*)0);
    real_fun_name_1000=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1001=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1001;
    klass_1002=type->mClass;
    if(    type->mPointerNum>0&&!klass_1002->mNumber) {
        source_1003=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "buffer"))));
        buffer_append_str(source_1003,"{\n");
        buffer_append_str(source_1003,"var result = new buffer();\n");
        buffer_append_format(source_1003,"result.append_str(\"%s {\");\n",klass_1002->mName);
        i_1004=0;
        klass_1002=map$2charphsClassphp_operator_load_element(info->classes,klass_1002->mName);
        for(        o2_saved_1005=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1002->mFields)),it_1006=list$1tuple2$2charphsTypephph_begin((o2_saved_1005));        !list$1tuple2$2charphsTypephph_end((o2_saved_1005));        it_1006=list$1tuple2$2charphsTypephph_next((o2_saved_1005))        ){
            multiple_assign_var18=it_1006;
            name_1007=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1008=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1008->mClass->mName)&&type->mPointerNum==field_type_1008->mPointerNum&&field_type_1008->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1004==list$1tuple2$2charphsTypephph_length(klass_1002->mFields)-1) {
                char source2_1009[1024];
                memset(&source2_1009, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1009,1024,"result.append_str(\"%s:\");\n",name_1007);
                buffer_append_str(source_1003,source2_1009);
                snprintf(source2_1009,1024,"result.append_str(self.%s.to_string());\n",name_1007);
                buffer_append_str(source_1003,source2_1009);
            }
            else {
                char source2_1010[1024];
                memset(&source2_1010, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1010,1024,"result.append_str(\"%s:\");\n",name_1007);
                buffer_append_str(source_1003,source2_1010);
                snprintf(source2_1010,1024,"result.append_str(self.%s.to_string());\n",name_1007);
                buffer_append_str(source_1003,source2_1010);
                snprintf(source2_1010,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1003,source2_1010);
            }
            i_1004++;
            /* U13 */name_1007 = come_decrement_ref_count2(name_1007, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_1008,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_1005,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1003,"result.append_str(\"}\");\n");
        buffer_append_format(source_1003,"return result.to_string();\n");
        buffer_append_char(source_1003,125);
        p_1011=info->p;
        sline_1012=info->sline;
        sname_1013=(char*)come_increment_ref_count(info->sname);
        source3_1014=(struct buffer*)come_increment_ref_count(info->source);
        head_1015=info->head;
        __dec_obj358=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1003);
        come_call_finalizer3(__dec_obj358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj359=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1000));
        /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1016=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1017=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3389, "sType")),"char*",(_Bool)0,info));
        result_type_1017->mHeap=(_Bool)1;
        name_1018=(char*)come_increment_ref_count(string_clone(real_fun_name_1000));
        self_type_1019=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1019->mHeap=(_Bool)0;
        param_types_1021=(struct list$1sTypeph*)come_increment_ref_count((__list_values35___1020[0]=(struct sType*)come_increment_ref_count(self_type_1019),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3394, "struct list$1sTypeph")),1,__list_values35___1020)));
        param_names_1023=(struct list$1charph*)come_increment_ref_count((__list_values36___1022[0]=(char*)come_increment_ref_count(((char*)(__right_value1091=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3395, "struct list$1charph")),1,__list_values36___1022)));
        /* U11 */__right_value1091 = come_decrement_ref_count2(__right_value1091, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1024=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3396, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1024,((void*)0));
        header_buf_1025=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3399, "buffer"))));
        buffer_append_str(header_buf_1025,((char*)(__right_value1098=make_come_type_name_string(result_type_1017,info))));
        /* U11 */__right_value1098 = come_decrement_ref_count2(__right_value1098, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1025," ");
        buffer_append_str(header_buf_1025,real_fun_name_1000);
        buffer_append_str(header_buf_1025,"(");
        for(        i_1026=0;        i_1026<list$1sTypeph_length(param_types_1021);        i_1026++        ){
            param_type_1027=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1021,i_1026), "05function.c", 3407, 21));
            param_name_1028=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1023,i_1026), "05function.c", 3408, 22));
            buffer_append_str(header_buf_1025,((char*)(__right_value1099=make_come_type_name_string(param_type_1027,info))));
            /* U11 */__right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1025," ");
            buffer_append_str(header_buf_1025,param_name_1028);
            if(            i_1026!=list$1sTypeph_length(param_types_1021)-1) {
                buffer_append_str(header_buf_1025,",");
            }
        }
        buffer_append_str(header_buf_1025,")");
        result_type_1017->mStatic=(_Bool)0;
        fun_1029=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "sFun")),(char*)come_increment_ref_count(name_1018),(struct sType*)come_increment_ref_count(result_type_1017),(struct list$1sTypeph*)come_increment_ref_count(param_types_1021),(struct list$1charph*)come_increment_ref_count(param_names_1023),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1024),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1016),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1025)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_1029->mCloner=(_Bool)1;
        fun2_1030=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1104=__builtin_string(fun_name))));
        /* U11 */__right_value1104 = come_decrement_ref_count2(__right_value1104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1030==((void*)0)||fun2_1030->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1018)),(struct sFun*)come_increment_ref_count(fun_1029));
        }
        cloner_999=fun_1029;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3439, "struct sNode");
        _inf_obj_value16=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1107=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3439, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1029),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFunNode_finalize;
        _inf_value16->clone=(void*)sFunNode_clone;
        _inf_value16->compile=(void*)sFunNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFunNode_kind;
        node_1031=(struct sNode*)come_increment_ref_count(_inf_value16);
        /*g*/come_call_finalizer3(__right_value1107,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1033=node_compile(node_1031,info);
        if(        !Value_1033) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1013);
        /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1012;
        __dec_obj365=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1014);
        come_call_finalizer3(__dec_obj365,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1011;
        info->head=head_1015;
        info->sline=sline_1012;
        /*i*/come_call_finalizer3(source_1003,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1013 = come_decrement_ref_count2(sname_1013, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1014,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1016,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1017,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1018 = come_decrement_ref_count2(name_1018, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_1019,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1021,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1023,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1024,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1025,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1029,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1031) { node_1031 = come_decrement_ref_count2(node_1031, ((struct sNode*)node_1031)->finalize, ((struct sNode*)node_1031)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_998;
    __dec_obj366=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_995);
    /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj367=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_996);
    /*G*/ __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_997;
    __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1113=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3461, "struct tuple2$2sFunpcharph")),cloner_999,(char*)come_increment_ref_count(real_fun_name_1000))));
    /* U13 */last_code_995 = come_decrement_ref_count2(last_code_995, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_996 = come_decrement_ref_count2(last_code2_996, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1000 = come_decrement_ref_count2(real_fun_name_1000, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1001,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1113,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj360;
struct sFun* __dec_obj361;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj360=self->sname;
            /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj361=self->mFun;
            come_call_finalizer3(__dec_obj361,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result281__;
void* __right_value1108 = (void*)0;
struct sFunNode* result_1032;
void* __right_value1109 = (void*)0;
char* __dec_obj362;
void* __right_value1110 = (void*)0;
struct sFun* __dec_obj363;
struct sFunNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_1032=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1032->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj362=result_1032->sname;
        result_1032->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj363=result_1032->mFun;
        result_1032->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj363,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_1032;
    /*i*/come_call_finalizer3(result_1032,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

