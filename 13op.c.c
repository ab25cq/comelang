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
    struct tuple1$1sTypeph* mNoExceptionType;
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
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
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
    struct buffer* mSourceHead2;
    struct buffer* mSourceHead3;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
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
struct sNullNode
{
    int sline;
    char* sname;
};

struct sNilNode
{
    int sline;
    char* sname;
};

struct sAddNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_come_last_code3(struct sInfo* info, const char* msg, ...);
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile_v5(struct sInfo* info);
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNode* create_null_node(struct sInfo* info);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
struct sNode* mult_exp(struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
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











_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value152 = (void*)0;
struct sType* generics_type_66;
struct sType* __dec_obj62;
struct sClass* klass_97;
char* class_name_98;
struct sFun* operator_fun_99;
char* fun_name2_100;
void* __right_value153 = (void*)0;
char* none_generics_name_101;
void* __right_value154 = (void*)0;
struct sType* obj_type_102;
void* __right_value155 = (void*)0;
char* __dec_obj63;
void* __right_value156 = (void*)0;
char* fun_name3_103;
struct sGenericsFun* generics_fun_104;
void* __right_value157 = (void*)0;
_Bool _if_conditional1;
_Bool __result87__;
void* __right_value158 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_110=0;
char* fun_name_111=0;
void* __right_value159 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun2_112=0;
char* fun_name2_113=0;
void* __right_value160 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_114=0;
char* fun_name_115=0;
void* __right_value161 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_116=0;
char* fun_name2_117=0;
void* __right_value162 = (void*)0;
char* __dec_obj90;
int i_118;
void* __right_value163 = (void*)0;
char* new_fun_name_119;
void* __right_value164 = (void*)0;
char* __dec_obj91;
void* __right_value165 = (void*)0;
struct sType* obj_type_120;
void* __right_value166 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_121=0;
char* fun_name_122=0;
void* __right_value167 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_123=0;
char* fun_name2_124=0;
void* __right_value168 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_125=0;
char* fun_name_126=0;
void* __right_value169 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_127=0;
char* fun_name2_128=0;
_Bool result_129;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct CVALUE* come_value_130;
char* left_value2_131;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
char* __dec_obj92;
void* __right_value175 = (void*)0;
char* __dec_obj93;
char* right_value2_135;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __dec_obj94;
void* __right_value179 = (void*)0;
char* __dec_obj95;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
char* __dec_obj96;
void* __right_value184 = (void*)0;
struct sType* type2_136;
void* __right_value185 = (void*)0;
struct sType* type3_137;
void* __right_value186 = (void*)0;
struct sType* __dec_obj97;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
char* __dec_obj98;
void* __right_value189 = (void*)0;
char* __dec_obj99;
_Bool __result95__;
fun_name2_100 = (void*)0;
memset(&i_118, 0, sizeof(int));
left_value2_131 = (void*)0;
right_value2_135 = (void*)0;
    generics_type_66=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_66->mNoSolvedGenericsType->v1) {
        __dec_obj62=generics_type_66;
        generics_type_66=(struct sType*)come_increment_ref_count(generics_type_66->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_97=type->mClass;
    class_name_98=klass_97->mName;
    operator_fun_99=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_101=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_102=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj63=fun_name2_100;
        fun_name2_100=(char*)come_increment_ref_count(create_method_name(obj_type_102,(_Bool)0,fun_name,info,(_Bool)1));
        /*G*/ __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_103=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_101,fun_name));
        generics_fun_104=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_103,((void*)0));
        if(        generics_fun_104) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_100)),generics_fun_104,obj_type_102,info))),            _if_conditional1) {
                __result87__ = (_Bool)0;
                /* U13 */none_generics_name_101 = come_decrement_ref_count2(none_generics_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_103 = come_decrement_ref_count2(fun_name3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(generics_type_66,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_100 = come_decrement_ref_count2(fun_name2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result87__;
            }
            operator_fun_99=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_100);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value158=create_equals_automatically(obj_type_102,"equals",info)));
                fun_110=multiple_assign_var1->v1;
                fun_name_111=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                /*g*/come_call_finalizer3(__right_value158,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value159=create_operator_equals_automatically(obj_type_102,"operator_equals",info)));
                fun2_112=multiple_assign_var2->v1;
                fun_name2_113=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*g*/come_call_finalizer3(__right_value159,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_99=fun2_112;
                /* U13 */fun_name_111 = come_decrement_ref_count2(fun_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_113 = come_decrement_ref_count2(fun_name2_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value160=create_not_equals_automatically(obj_type_102,"not_equals",info)));
                fun_114=multiple_assign_var3->v1;
                fun_name_115=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*g*/come_call_finalizer3(__right_value160,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value161=create_operator_not_equals_automatically(obj_type_102,"operator_not_equals",info)));
                fun2_116=multiple_assign_var4->v1;
                fun_name2_117=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*g*/come_call_finalizer3(__right_value161,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_99=fun2_116;
                /* U13 */fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_117 = come_decrement_ref_count2(fun_name2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_99=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_100);
            }
        }
        /* U13 */none_generics_name_101 = come_decrement_ref_count2(none_generics_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_103 = come_decrement_ref_count2(fun_name3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj90=fun_name2_100;
        fun_name2_100=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_118=128-1;        i_118>=1;        i_118--        ){
            new_fun_name_119=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_100,i_118));
            operator_fun_99=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_119);
            if(            operator_fun_99) {
                __dec_obj91=fun_name2_100;
                fun_name2_100=(char*)come_increment_ref_count(__builtin_string(new_fun_name_119));
                /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_119 = come_decrement_ref_count2(new_fun_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_119 = come_decrement_ref_count2(new_fun_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_99==((void*)0)) {
            operator_fun_99=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_100);
            obj_type_120=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_99==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value166=create_equals_automatically(obj_type_120,"equals",info)));
                    fun_121=multiple_assign_var5->v1;
                    fun_name_122=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    /*g*/come_call_finalizer3(__right_value166,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value167=create_operator_equals_automatically(obj_type_120,"operator_equals",info)));
                    fun2_123=multiple_assign_var6->v1;
                    fun_name2_124=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    /*g*/come_call_finalizer3(__right_value167,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_99=fun2_123;
                    /* U13 */fun_name_122 = come_decrement_ref_count2(fun_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name2_124 = come_decrement_ref_count2(fun_name2_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value168=create_not_equals_automatically(obj_type_120,"not_equals",info)));
                    fun_125=multiple_assign_var7->v1;
                    fun_name_126=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    /*g*/come_call_finalizer3(__right_value168,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value169=create_operator_not_equals_automatically(obj_type_120,"operator_not_equals",info)));
                    fun2_127=multiple_assign_var8->v1;
                    fun_name2_128=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    /*g*/come_call_finalizer3(__right_value169,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_99=fun2_127;
                    /* U13 */fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name2_128 = come_decrement_ref_count2(fun_name2_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(obj_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_129=(_Bool)0;
    if(    operator_fun_99&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_130=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 92, "CVALUE"))));
        check_assign_type(((char*)(__right_value173=xsprintf("\%s is assigned to",((char*)(__right_value172=string_to_string(fun_name2_100)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_99->mParamTypes,0), "13op.c", 94, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_99->mParamTypes,0), "13op.c", 95, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_99->mParamTypes,0), "13op.c", 96, 2)),left_value->type,left_value,info,(_Bool)1);
            __dec_obj92=left_value2_131;
            left_value2_131=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj93=left_value2_131;
            left_value2_131=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value177=xsprintf("\%s is assigned to",((char*)(__right_value176=string_to_string(fun_name2_100)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_99->mParamTypes,1), "13op.c", 103, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_99->mParamTypes,1), "13op.c", 104, 4))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_99->mParamTypes,1), "13op.c", 105, 5)),right_value->type,right_value,info,(_Bool)1);
            __dec_obj94=right_value2_135;
            right_value2_135=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj95=right_value2_135;
            right_value2_135=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            /*G*/ __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj96=come_value_130->c_value;
        come_value_130->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value180=string_to_string(fun_name2_100))),((char*)(__right_value181=string_to_string(left_value2_131))),((char*)(__right_value182=string_to_string(right_value2_135)))));
        /*G*/ __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type2_136=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_99->mResultType));
        type3_137=(struct sType*)come_increment_ref_count(solve_generics(type2_136,generics_type_66,info));
        __dec_obj97=come_value_130->type;
        come_value_130->type=(struct sType*)come_increment_ref_count(sType_clone(type3_137));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_130->var=((void*)0);
        if(        type3_137->mHeap) {
            append_object_to_right_values2(come_value_130,(struct sType*)come_increment_ref_count(type3_137),info,(_Bool)0);
        }
        if(        !break_guard&&type3_137->mGuardValue&&type3_137->mPointerNum>0) {
            __dec_obj98=come_value_130->c_value;
            come_value_130->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value187=make_type_name_string(type3_137,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_130->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj99=come_value_130->c_value;
        come_value_130->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_130->c_value,come_value_130->type,info));
        /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_130->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
        result_129=(_Bool)1;
        /*i*/come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value2_131 = come_decrement_ref_count2(left_value2_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */right_value2_135 = come_decrement_ref_count2(right_value2_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result95__ = result_129;
    /*i*/come_call_finalizer3(generics_type_66,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_100 = come_decrement_ref_count2(fun_name2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result95__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result65__;
void* __right_value116 = (void*)0;
struct sType* result_67;
void* __right_value119 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value122 = (void*)0;
char* __dec_obj42;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __dec_obj46;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __dec_obj50;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __dec_obj51;
void* __right_value145 = (void*)0;
struct list$1charph* __dec_obj55;
void* __right_value146 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value147 = (void*)0;
struct sNode* __dec_obj57;
void* __right_value148 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value149 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value150 = (void*)0;
char* __dec_obj60;
void* __right_value151 = (void*)0;
char* __dec_obj61;
struct sType* __result82__;
    if(    self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_67=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_67->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj39=result_67->mNoSolvedGenericsType;
        result_67->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj40=result_67->mOriginalLoadVarType;
        result_67->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj41=result_67->mNoExceptionType;
        result_67->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj42=result_67->mGenericsName;
        result_67->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj46=result_67->mGenericsTypes;
        result_67->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj50=result_67->mArrayNum;
        result_67->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj51=result_67->mParamTypes;
        result_67->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj55=result_67->mParamNames;
        result_67->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj55,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj56=result_67->mResultType;
        result_67->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj57=result_67->mAlignas;
        result_67->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj58=result_67->mChannelType;
        result_67->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_67->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_67->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_67->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_67->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_67->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_67->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_67->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_67->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_67->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_67->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_67->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_67->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_67->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_67->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_67->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_67->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_67->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_67->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_67->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_67->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj59=result_67->mSizeNum;
        result_67->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_67->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_67->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj60=result_67->mOriginalTypeName;
        result_67->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_67->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_67->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_67->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_67->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_67->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_67->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_67->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj61=result_67->mAsmName;
        result_67->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_67->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_67->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_67->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_67->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginIsArray=self->mOriginIsArray;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result66__;
void* __right_value117 = (void*)0;
struct tuple1$1sTypeph* result_68;
void* __right_value118 = (void*)0;
struct sType* __dec_obj15;
struct tuple1$1sTypeph* __result67__;
    if(    self==(void*)0) {
        __result66__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    result_68=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj15=result_68->v1;
        result_68->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj16;
struct tuple1$1sTypeph* __dec_obj18;
struct tuple1$1sTypeph* __dec_obj20;
char* __dec_obj22;
struct list$1sTypeph* __dec_obj23;
struct list$1sNodeph* __dec_obj25;
struct list$1sTypeph* __dec_obj27;
struct list$1charph* __dec_obj28;
struct tuple1$1sTypeph* __dec_obj30;
struct sNode* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj33;
struct sNode* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj16=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj16,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj18=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj20=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj22=self->mGenericsName;
            /*G*/ __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj23=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj25=self->mArrayNum;
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj27=self->mParamTypes;
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj28=self->mParamNames;
            come_call_finalizer3(__dec_obj28,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj30=self->mResultType;
            come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj32=self->mAlignas;
            /* U1 */ if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj33=self->mChannelType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj35=self->mSizeNum;
            /* U1 */ if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj36=self->mOriginalTypeName;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj37=self->mAsmName;
            /*G*/ __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_69;
struct list_item$1sTypeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        /*i*/come_call_finalizer3(prev_it_70,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj24;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj24=self->item;
            come_call_finalizer3(__dec_obj24,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_71;
struct list_item$1sTypeph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_73;
struct list_item$1sNodeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj26;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            /* U1 */ if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_75;
struct list_item$1sNodeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj29;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_79;
struct list_item$1charph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj34;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj34=self->v1;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj38;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result68__;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1sTypeph* result_81;
struct list_item$1sTypeph* it_82;
void* __right_value128 = (void*)0;
struct list$1sTypeph* __result71__;
    if(    self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_81=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sTypeph"))));
    it_82=self->head;
    while(it_82!=((void*)0)) {
        list$1sTypeph_add(result_81,(struct sType*)come_increment_ref_count(sType_clone(it_82->item)));
        it_82=it_82->next;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_81;
    /*i*/come_call_finalizer3(result_81,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result69__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj43;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj44;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj45;
struct list$1sTypeph* __result70__;
    if(    self->len==0) {
        litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sTypeph"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj43=litem_83->item;
        litem_83->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sTypeph"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj44=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sTypeph"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj45=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
    }
    self->len++;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result72__;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1sNodeph* result_86;
struct list_item$1sNodeph* it_87;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __result77__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_86=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sNodeph"))));
    it_87=self->head;
    while(it_87!=((void*)0)) {
        list$1sNodeph_add(result_86,(struct sNode*)come_increment_ref_count(sNode_clone(it_87->item)));
        it_87=it_87->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_86;
    /*i*/come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj47;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj48;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj49;
struct list$1sNodeph* __result74__;
    if(    self->len==0) {
        litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sNodeph"))));
        litem_88->prev=((void*)0);
        litem_88->next=((void*)0);
        __dec_obj47=litem_88->item;
        litem_88->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_88;
        self->head=litem_88;
    }
    else if(    self->len==1) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sNodeph"))));
        litem_89->prev=self->head;
        litem_89->next=((void*)0);
        __dec_obj48=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head->next=litem_89;
    }
    else {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sNodeph"))));
        litem_90->prev=self->tail;
        litem_90->next=((void*)0);
        __dec_obj49=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_90;
        self->tail=litem_90;
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result75__;
void* __right_value135 = (void*)0;
struct sNode* result_91;
struct sNode* __result76__;
    if(    self==(void*)0) {
        __result75__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    result_91=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_91->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_91->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_91->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_91->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_91->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_91->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_91->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_91->kind=self->kind;
    }
    __result76__ = gComeFunResultObject = __result_obj__ = result_91;
    if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result78__;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
void* __right_value144 = (void*)0;
struct list$1charph* __result81__;
    if(    self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_92=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 135, "list$1charph"))));
    it_93=self->head;
    while(it_93!=((void*)0)) {
        list$1charph_add(result_92,(char*)come_increment_ref_count(string_clone(it_93->item)));
        it_93=it_93->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_92;
    /*i*/come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj52;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj53;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj54;
struct list$1charph* __result80__;
    if(    self->len==0) {
        litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1charph"))));
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj52=litem_94->item;
        litem_94->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else if(    self->len==1) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1charph"))));
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj53=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1charph"))));
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj54=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_105;
unsigned int it_106;
struct sGenericsFun* __result83__;
struct sGenericsFun* __result84__;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
    hash_105=string_get_hash_key(((char*)key))%self->size;
    it_106=hash_105;
    while((_Bool)1) {
        if(        self->item_existance[it_106]) {
            if(            string_equals(self->keys[it_106],key)) {
                __result83__ = gComeFunResultObject = __result_obj__ = self->items[it_106];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result83__;
            }
            it_106++;
            if(            it_106>=self->size) {
                it_106=0;
            }
            else if(            it_106==hash_105) {
                __result84__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result84__;
            }
        }
        else {
            __result85__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result85__;
        }
    }
    __result86__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj64;
struct list$1charph* __dec_obj65;
struct list$1charph* __dec_obj66;
char* __dec_obj67;
struct sType* __dec_obj68;
struct list$1sTypeph* __dec_obj69;
struct list$1charph* __dec_obj70;
struct list$1charph* __dec_obj71;
char* __dec_obj72;
char* __dec_obj73;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj64=self->mImplType;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj65=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj65,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj66=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj66,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj67=self->mName;
            /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj68=self->mResultType;
            come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj69=self->mParamTypes;
            come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj70=self->mParamNames;
            come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj71=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj72=self->mBlock;
            /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj73=self->mGenericsSName;
            /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_107;
unsigned int hash_108;
unsigned int it_109;
struct sFun* __result88__;
struct sFun* __result89__;
struct sFun* __result90__;
struct sFun* __result91__;
default_value_107 = (void*)0;
    memset(&default_value_107,0,sizeof(struct sFun*));
    hash_108=string_get_hash_key(((char*)key))%self->size;
    it_109=hash_108;
    while((_Bool)1) {
        if(        self->item_existance[it_109]) {
            if(            string_equals(self->keys[it_109],key)) {
                __result88__ = gComeFunResultObject = __result_obj__ = self->items[it_109];
                /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result88__;
            }
            it_109++;
            if(            it_109>=self->size) {
                it_109=0;
            }
            else if(            it_109==hash_108) {
                __result89__ = gComeFunResultObject = __result_obj__ = default_value_107;
                /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result89__;
            }
        }
        else {
            __result90__ = gComeFunResultObject = __result_obj__ = default_value_107;
            /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result90__;
        }
    }
    __result91__ = gComeFunResultObject = __result_obj__ = default_value_107;
    /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj74;
struct sType* __dec_obj75;
struct list$1sTypeph* __dec_obj76;
struct list$1charph* __dec_obj77;
struct list$1charph* __dec_obj78;
struct sType* __dec_obj79;
struct sBlock* __dec_obj80;
struct buffer* __dec_obj83;
struct buffer* __dec_obj84;
struct buffer* __dec_obj85;
struct buffer* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj74=self->mName;
            /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj75=self->mResultType;
            come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj76=self->mParamTypes;
            come_call_finalizer3(__dec_obj76,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj77=self->mParamNames;
            come_call_finalizer3(__dec_obj77,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj78=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj79=self->mLambdaType;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj80=self->mBlock;
            come_call_finalizer3(__dec_obj80,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj83=self->mSource;
            come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj84=self->mSourceHead;
            come_call_finalizer3(__dec_obj84,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj85=self->mSourceHead2;
            come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj86=self->mSourceDefer;
            come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj87=self->mComeHeader;
            /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj88=self->mDeclareSName;
            /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj81;
struct sVarTable* __dec_obj82;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj81=self->mNodes;
            come_call_finalizer3(__dec_obj81,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj82=self->mVarTable;
            come_call_finalizer3(__dec_obj82,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj89;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_132;
int i_133;
struct sType* __result92__;
struct sType* default_value_134;
struct sType* __result93__;
default_value_134 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_132=self->head;
    i_133=0;
    while(it_132!=((void*)0)) {
        if(        position==i_133) {
            __result92__ = gComeFunResultObject = __result_obj__ = it_132->item;
            gComeFunResultObject = (void*)0;
            return __result92__;
        }
        it_132=it_132->next;
        i_133++;
    }
    memset(&default_value_134,0,sizeof(struct sType*));
    __result93__ = gComeFunResultObject = __result_obj__ = default_value_134;
    /*i*/come_call_finalizer3(default_value_134,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value190 = (void*)0;
struct list_item$1CVALUEph* litem_138;
struct CVALUE* __dec_obj100;
void* __right_value191 = (void*)0;
struct list_item$1CVALUEph* litem_139;
struct CVALUE* __dec_obj104;
void* __right_value192 = (void*)0;
struct list_item$1CVALUEph* litem_140;
struct CVALUE* __dec_obj105;
struct list$1CVALUEph* __result94__;
    if(    self->len==0) {
        litem_138=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value190=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1CVALUEph"))));
        litem_138->prev=((void*)0);
        litem_138->next=((void*)0);
        __dec_obj100=litem_138->item;
        litem_138->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_138;
        self->head=litem_138;
    }
    else if(    self->len==1) {
        litem_139=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value191=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1CVALUEph"))));
        litem_139->prev=self->head;
        litem_139->next=((void*)0);
        __dec_obj104=litem_139->item;
        litem_139->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_139;
        self->head->next=litem_139;
    }
    else {
        litem_140=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value192=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1CVALUEph"))));
        litem_140->prev=self->tail;
        litem_140->next=((void*)0);
        __dec_obj105=litem_140->item;
        litem_140->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_140;
        self->tail=litem_140;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj101;
struct sType* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj101=self->c_value;
            /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj102=self->type;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj103=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value193 = (void*)0;
struct sNullNode* __result96__;
    ((struct sNodeBase*)(__right_value193=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value193,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
char* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string("sNullNode")));
    /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct CVALUE* come_value_141;
void* __right_value197 = (void*)0;
char* __dec_obj108;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sType* __dec_obj109;
_Bool __result98__;
    come_value_141=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 155, "CVALUE"))));
    __dec_obj108=come_value_141->c_value;
    come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    /*G*/ __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj109=come_value_141->type;
    come_value_141->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 158, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_141->var=((void*)0);
    add_come_last_code(info,"%s",come_value_141->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
    __result98__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj106;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj106=self->sname;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value204 = (void*)0;
struct sNode* __result101__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 171, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value201=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 171, "sNullNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value204=_inf_value1));
    /*g*/come_call_finalizer3(__right_value201,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value204) { __right_value204 = come_decrement_ref_count2(__right_value204, ((struct sNode*)__right_value204)->finalize, ((struct sNode*)__right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result101__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
struct sNilNode* __result102__;
    ((struct sNodeBase*)(__right_value205=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value205,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
char* __result103__;
    __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=__builtin_string("sNilNode")));
    /* U11 */__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_143;
void* __right_value209 = (void*)0;
char* __dec_obj113;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sType* __dec_obj114;
_Bool __result104__;
    come_value_143=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 188, "CVALUE"))));
    __dec_obj113=come_value_143->c_value;
    come_value_143->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=come_value_143->type;
    come_value_143->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 191, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_143->type->mNullValue=(_Bool)1;
    come_value_143->var=((void*)0);
    add_come_last_code(info,"%s",come_value_143->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
    __result104__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sNode* __dec_obj115;
void* __right_value214 = (void*)0;
struct sNode* __dec_obj116;
struct sAddNode* __result105__;
    ((struct sNodeBase*)(__right_value212=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value212,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj115=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj116=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result105__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
char* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value215=__builtin_string("sAddNode")));
    /* U11 */__right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_144;
_Bool Value_145;
void* __right_value216 = (void*)0;
struct CVALUE* left_value_146;
struct sNode* right_node_147;
_Bool Value_148;
_Bool __result107__;
void* __right_value217 = (void*)0;
struct CVALUE* right_value_149;
struct sType* type_150;
char* fun_name_151;
_Bool calling_fun_152;
void* __right_value218 = (void*)0;
struct sType* result_type_153;
void* __right_value219 = (void*)0;
struct sType* __dec_obj120;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct CVALUE* come_value_154;
void* __right_value222 = (void*)0;
char* __dec_obj121;
void* __right_value223 = (void*)0;
struct sType* __dec_obj122;
_Bool __result108__;
memset(&calling_fun_152, 0, sizeof(_Bool));
    left_node_144=self->mLeft;
    Value_145=node_compile(left_node_144,info);
    if(    !Value_145) {
        return (_Bool)0;
    }
    else {
    }
    left_value_146=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_147=self->mRight;
    Value_148=node_compile(right_node_147,info);
    if(    !Value_148) {
        __result107__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_146,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result107__;
    }
    else {
    }
    right_value_149=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_150=(struct sType*)come_increment_ref_count(left_value_146->type);
    fun_name_151="operator_add";
    if(    self->mQuote) {
        calling_fun_152=(_Bool)0;
    }
    else {
        calling_fun_152=operator_overload_fun(type_150,fun_name_151,left_value_146,right_value_149,(_Bool)0,info);
    }
    if(    !calling_fun_152) {
        result_type_153=(struct sType*)come_increment_ref_count(sType_clone(left_value_146->type));
        if(        right_value_149->type->mPointerNum>0) {
            __dec_obj120=result_type_153;
            result_type_153=(struct sType*)come_increment_ref_count(sType_clone(right_value_149->type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_154=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 257, "CVALUE"))));
        __dec_obj121=come_value_154->c_value;
        come_value_154->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_146->c_value,right_value_149->c_value));
        /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj122=come_value_154->type;
        come_value_154->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_153));
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_154->type->mHeap=(_Bool)0;
        come_value_154->var=((void*)0);
        add_come_last_code(info,"%s",come_value_154->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
        /*i*/come_call_finalizer3(result_type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result108__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_146,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_150,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sNode* __dec_obj123;
void* __right_value226 = (void*)0;
struct sNode* __dec_obj124;
struct sSubNode* __result109__;
    ((struct sNodeBase*)(__right_value224=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value224,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj124=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
char* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string("sSubNode")));
    /* U11 */__right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_155;
_Bool Value_156;
void* __right_value228 = (void*)0;
struct CVALUE* left_value_157;
struct sNode* right_node_158;
_Bool Value_159;
_Bool __result111__;
void* __right_value229 = (void*)0;
struct CVALUE* right_value_160;
struct sType* type_161;
char* fun_name_162;
_Bool calling_fun_163;
void* __right_value230 = (void*)0;
struct sType* result_type_164;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sType* __dec_obj128;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct CVALUE* come_value_165;
void* __right_value235 = (void*)0;
char* __dec_obj129;
void* __right_value236 = (void*)0;
struct sType* __dec_obj130;
_Bool __result112__;
memset(&calling_fun_163, 0, sizeof(_Bool));
    left_node_155=self->mLeft;
    Value_156=node_compile(left_node_155,info);
    if(    !Value_156) {
        return (_Bool)0;
    }
    else {
    }
    left_value_157=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_158=self->mRight;
    Value_159=node_compile(right_node_158,info);
    if(    !Value_159) {
        __result111__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    else {
    }
    right_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_161=(struct sType*)come_increment_ref_count(left_value_157->type);
    fun_name_162="operator_sub";
    if(    self->mQuote) {
        calling_fun_163=(_Bool)0;
    }
    else {
        calling_fun_163=operator_overload_fun(type_161,fun_name_162,left_value_157,right_value_160,(_Bool)0,info);
    }
    if(    !calling_fun_163) {
        result_type_164=(struct sType*)come_increment_ref_count(sType_clone(left_value_157->type));
        if(        left_value_157->type->mPointerNum>0&&right_value_160->type->mPointerNum>0) {
            __dec_obj128=result_type_164;
            result_type_164=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 324, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_165=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 327, "CVALUE"))));
        __dec_obj129=come_value_165->c_value;
        come_value_165->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_157->c_value,right_value_160->c_value));
        /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj130=come_value_165->type;
        come_value_165->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_164));
        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_165->type->mHeap=(_Bool)0;
        come_value_165->var=((void*)0);
        add_come_last_code(info,"%s",come_value_165->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
        /*i*/come_call_finalizer3(result_type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result112__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_161,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value239 = (void*)0;
struct sNode* __dec_obj132;
struct sMultNode* __result113__;
    ((struct sNodeBase*)(__right_value237=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value237,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj131=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj132=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
char* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value240=__builtin_string("sMultNode")));
    /* U11 */__right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_166;
_Bool Value_167;
void* __right_value241 = (void*)0;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
_Bool Value_170;
_Bool __result115__;
void* __right_value242 = (void*)0;
struct CVALUE* right_value_171;
struct sType* type_172;
char* fun_name_173;
_Bool calling_fun_174;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct CVALUE* come_value_175;
void* __right_value245 = (void*)0;
char* __dec_obj136;
void* __right_value246 = (void*)0;
struct sType* __dec_obj137;
_Bool __result116__;
memset(&calling_fun_174, 0, sizeof(_Bool));
    left_node_166=self->mLeft;
    Value_167=node_compile(left_node_166,info);
    if(    !Value_167) {
        return (_Bool)0;
    }
    else {
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_169=self->mRight;
    Value_170=node_compile(right_node_169,info);
    if(    !Value_170) {
        __result115__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
    }
    else {
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_172=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_173="operator_mult";
    if(    self->mQuote) {
        calling_fun_174=(_Bool)0;
    }
    else {
        calling_fun_174=operator_overload_fun(type_172,fun_name_173,left_value_168,right_value_171,(_Bool)0,info);
    }
    if(    !calling_fun_174) {
        come_value_175=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 392, "CVALUE"))));
        __dec_obj136=come_value_175->c_value;
        come_value_175->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_168->c_value,right_value_171->c_value));
        /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj137=come_value_175->type;
        come_value_175->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_168->type));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_175->type->mHeap=(_Bool)0;
        come_value_175->var=((void*)0);
        add_come_last_code(info,"%s",come_value_175->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
        /*i*/come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj139;
struct sDivNode* __result117__;
    ((struct sNodeBase*)(__right_value247=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value247,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sDivNode")));
    /* U11 */__right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_176;
_Bool Value_177;
void* __right_value251 = (void*)0;
struct CVALUE* left_value_178;
struct sNode* right_node_179;
_Bool Value_180;
_Bool __result119__;
void* __right_value252 = (void*)0;
struct CVALUE* right_value_181;
struct sType* type_182;
char* fun_name_183;
_Bool calling_fun_184;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_185;
void* __right_value255 = (void*)0;
char* __dec_obj143;
void* __right_value256 = (void*)0;
struct sType* __dec_obj144;
_Bool __result120__;
memset(&calling_fun_184, 0, sizeof(_Bool));
    left_node_176=self->mLeft;
    Value_177=node_compile(left_node_176,info);
    if(    !Value_177) {
        return (_Bool)0;
    }
    else {
    }
    left_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_179=self->mRight;
    Value_180=node_compile(right_node_179,info);
    if(    !Value_180) {
        __result119__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    else {
    }
    right_value_181=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_182=(struct sType*)come_increment_ref_count(left_value_178->type);
    fun_name_183="operator_div";
    if(    self->mQuote) {
        calling_fun_184=(_Bool)0;
    }
    else {
        calling_fun_184=operator_overload_fun(type_182,fun_name_183,left_value_178,right_value_181,(_Bool)0,info);
    }
    if(    !calling_fun_184) {
        come_value_185=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 457, "CVALUE"))));
        __dec_obj143=come_value_185->c_value;
        come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_178->c_value,right_value_181->c_value));
        /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj144=come_value_185->type;
        come_value_185->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_178->type));
        come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_185->type->mHeap=(_Bool)0;
        come_value_185->var=((void*)0);
        add_come_last_code(info,"%s",come_value_185->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
        /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result120__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_182,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value259 = (void*)0;
struct sNode* __dec_obj146;
struct sModNode* __result121__;
    ((struct sNodeBase*)(__right_value257=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value257,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj146=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string("sModNode")));
    /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_186;
_Bool Value_187;
void* __right_value261 = (void*)0;
struct CVALUE* left_value_188;
struct sNode* right_node_189;
_Bool Value_190;
_Bool __result123__;
void* __right_value262 = (void*)0;
struct CVALUE* right_value_191;
struct sType* type_192;
char* fun_name_193;
_Bool calling_fun_194;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_195;
void* __right_value265 = (void*)0;
char* __dec_obj150;
void* __right_value266 = (void*)0;
struct sType* __dec_obj151;
_Bool __result124__;
memset(&calling_fun_194, 0, sizeof(_Bool));
    left_node_186=self->mLeft;
    Value_187=node_compile(left_node_186,info);
    if(    !Value_187) {
        return (_Bool)0;
    }
    else {
    }
    left_value_188=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_189=self->mRight;
    Value_190=node_compile(right_node_189,info);
    if(    !Value_190) {
        __result123__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result123__;
    }
    else {
    }
    right_value_191=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_192=(struct sType*)come_increment_ref_count(left_value_188->type);
    fun_name_193="operator_mod";
    if(    self->mQuote) {
        calling_fun_194=(_Bool)0;
    }
    else {
        calling_fun_194=operator_overload_fun(type_192,fun_name_193,left_value_188,right_value_191,(_Bool)0,info);
    }
    if(    !calling_fun_194) {
        come_value_195=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 522, "CVALUE"))));
        __dec_obj150=come_value_195->c_value;
        come_value_195->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_188->c_value,right_value_191->c_value));
        /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj151=come_value_195->type;
        come_value_195->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_188->type));
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_195->type->mHeap=(_Bool)0;
        come_value_195->var=((void*)0);
        add_come_last_code(info,"%s",come_value_195->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
        /*i*/come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result124__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result124__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sNode* __dec_obj152;
void* __right_value269 = (void*)0;
struct sNode* __dec_obj153;
struct sLShiftNode* __result125__;
    ((struct sNodeBase*)(__right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value267,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj152=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj153=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
char* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=__builtin_string("sLShiftNode")));
    /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_196;
_Bool Value_197;
void* __right_value271 = (void*)0;
struct CVALUE* left_value_198;
struct sNode* right_node_199;
_Bool Value_200;
_Bool __result127__;
void* __right_value272 = (void*)0;
struct CVALUE* right_value_201;
struct sType* type_202;
char* fun_name_203;
_Bool calling_fun_204;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct CVALUE* come_value_205;
void* __right_value275 = (void*)0;
char* __dec_obj157;
void* __right_value276 = (void*)0;
struct sType* __dec_obj158;
_Bool __result128__;
memset(&calling_fun_204, 0, sizeof(_Bool));
    left_node_196=self->mLeft;
    Value_197=node_compile(left_node_196,info);
    if(    !Value_197) {
        return (_Bool)0;
    }
    else {
    }
    left_value_198=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_199=self->mRight;
    Value_200=node_compile(right_node_199,info);
    if(    !Value_200) {
        __result127__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    else {
    }
    right_value_201=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_202=(struct sType*)come_increment_ref_count(left_value_198->type);
    fun_name_203="operator_lshift";
    if(    self->mQuote) {
        calling_fun_204=(_Bool)0;
    }
    else {
        calling_fun_204=operator_overload_fun(type_202,fun_name_203,left_value_198,right_value_201,(_Bool)0,info);
    }
    if(    !calling_fun_204) {
        come_value_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 588, "CVALUE"))));
        __dec_obj157=come_value_205->c_value;
        come_value_205->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_198->c_value,right_value_201->c_value));
        /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj158=come_value_205->type;
        come_value_205->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_198->type));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_205->type->mHeap=(_Bool)0;
        come_value_205->var=((void*)0);
        add_come_last_code(info,"%s",come_value_205->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
        /*i*/come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj160;
struct sRShiftNode* __result129__;
    ((struct sNodeBase*)(__right_value277=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value277,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj159=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj160=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result129__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
char* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value280=__builtin_string("sRShiftNode")));
    /* U11 */__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_206;
_Bool Value_207;
void* __right_value281 = (void*)0;
struct CVALUE* left_value_208;
struct sNode* right_node_209;
_Bool Value_210;
_Bool __result131__;
void* __right_value282 = (void*)0;
struct CVALUE* right_value_211;
struct sType* type_212;
char* fun_name_213;
_Bool calling_fun_214;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct CVALUE* come_value_215;
void* __right_value285 = (void*)0;
char* __dec_obj164;
void* __right_value286 = (void*)0;
struct sType* __dec_obj165;
_Bool __result132__;
memset(&calling_fun_214, 0, sizeof(_Bool));
    left_node_206=self->mLeft;
    Value_207=node_compile(left_node_206,info);
    if(    !Value_207) {
        return (_Bool)0;
    }
    else {
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_209=self->mRight;
    Value_210=node_compile(right_node_209,info);
    if(    !Value_210) {
        __result131__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result131__;
    }
    else {
    }
    right_value_211=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_212=(struct sType*)come_increment_ref_count(left_value_208->type);
    fun_name_213="operator_rshift";
    if(    self->mQuote) {
        calling_fun_214=(_Bool)0;
    }
    else {
        calling_fun_214=operator_overload_fun(type_212,fun_name_213,left_value_208,right_value_211,(_Bool)0,info);
    }
    if(    !calling_fun_214) {
        come_value_215=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 653, "CVALUE"))));
        __dec_obj164=come_value_215->c_value;
        come_value_215->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_208->c_value,right_value_211->c_value));
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj165=come_value_215->type;
        come_value_215->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_208->type));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_215->type->mHeap=(_Bool)0;
        come_value_215->var=((void*)0);
        add_come_last_code(info,"%s",come_value_215->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
        /*i*/come_call_finalizer3(come_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result132__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_212,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj166;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj167;
struct sGtEqNode* __result133__;
    ((struct sNodeBase*)(__right_value287=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value287,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj166=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj167=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result133__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value290=__builtin_string("sGtEqNode")));
    /* U11 */__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_216;
_Bool Value_217;
void* __right_value291 = (void*)0;
struct CVALUE* left_value_218;
struct sNode* right_node_219;
_Bool Value_220;
_Bool __result135__;
void* __right_value292 = (void*)0;
struct CVALUE* right_value_221;
struct sType* type_222;
char* fun_name_223;
_Bool calling_fun_224;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_225;
void* __right_value295 = (void*)0;
char* __dec_obj171;
void* __right_value296 = (void*)0;
struct sType* __dec_obj172;
_Bool __result136__;
memset(&calling_fun_224, 0, sizeof(_Bool));
    left_node_216=self->mLeft;
    Value_217=node_compile(left_node_216,info);
    if(    !Value_217) {
        return (_Bool)0;
    }
    else {
    }
    left_value_218=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_219=self->mRight;
    Value_220=node_compile(right_node_219,info);
    if(    !Value_220) {
        __result135__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    else {
    }
    right_value_221=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_222=(struct sType*)come_increment_ref_count(left_value_218->type);
    fun_name_223="operator_gteq";
    if(    self->mQuote) {
        calling_fun_224=(_Bool)0;
    }
    else {
        calling_fun_224=operator_overload_fun(type_222,fun_name_223,left_value_218,right_value_221,(_Bool)0,info);
    }
    if(    !calling_fun_224) {
        come_value_225=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 718, "CVALUE"))));
        __dec_obj171=come_value_225->c_value;
        come_value_225->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_218->c_value,right_value_221->c_value));
        /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj172=come_value_225->type;
        come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_218->type));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_225->type->mHeap=(_Bool)0;
        come_value_225->var=((void*)0);
        add_come_last_code(info,"%s",come_value_225->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        /*i*/come_call_finalizer3(come_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result136__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_222,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result136__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj173;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj174;
struct sLtEqNode* __result137__;
    ((struct sNodeBase*)(__right_value297=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value297,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj173=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj174=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value300=__builtin_string("sLtEqNode")));
    /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_226;
_Bool Value_227;
void* __right_value301 = (void*)0;
struct CVALUE* left_value_228;
struct sNode* right_node_229;
_Bool Value_230;
_Bool __result139__;
void* __right_value302 = (void*)0;
struct CVALUE* right_value_231;
struct sType* type_232;
char* fun_name_233;
_Bool calling_fun_234;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_235;
void* __right_value305 = (void*)0;
char* __dec_obj178;
void* __right_value306 = (void*)0;
struct sType* __dec_obj179;
_Bool __result140__;
memset(&calling_fun_234, 0, sizeof(_Bool));
    left_node_226=self->mLeft;
    Value_227=node_compile(left_node_226,info);
    if(    !Value_227) {
        return (_Bool)0;
    }
    else {
    }
    left_value_228=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_229=self->mRight;
    Value_230=node_compile(right_node_229,info);
    if(    !Value_230) {
        __result139__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    else {
    }
    right_value_231=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_232=(struct sType*)come_increment_ref_count(left_value_228->type);
    fun_name_233="operator_lteq";
    if(    self->mQuote) {
        calling_fun_234=(_Bool)0;
    }
    else {
        calling_fun_234=operator_overload_fun(type_232,fun_name_233,left_value_228,right_value_231,(_Bool)0,info);
    }
    if(    !calling_fun_234) {
        come_value_235=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 783, "CVALUE"))));
        __dec_obj178=come_value_235->c_value;
        come_value_235->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_228->c_value,right_value_231->c_value));
        /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj179=come_value_235->type;
        come_value_235->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_228->type));
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_235->type->mHeap=(_Bool)0;
        come_value_235->var=((void*)0);
        add_come_last_code(info,"%s",come_value_235->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_235));
        /*i*/come_call_finalizer3(come_value_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_232,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value309 = (void*)0;
struct sNode* __dec_obj181;
struct sLtNode* __result141__;
    ((struct sNodeBase*)(__right_value307=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value307,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj180=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj181=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    __result141__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result141__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value310=__builtin_string("sLtNode")));
    /* U11 */__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_236;
_Bool Value_237;
void* __right_value311 = (void*)0;
struct CVALUE* left_value_238;
struct sNode* right_node_239;
_Bool Value_240;
_Bool __result143__;
void* __right_value312 = (void*)0;
struct CVALUE* right_value_241;
struct sType* type_242;
char* fun_name_243;
_Bool calling_fun_244;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct CVALUE* come_value_245;
void* __right_value315 = (void*)0;
char* __dec_obj185;
void* __right_value316 = (void*)0;
struct sType* __dec_obj186;
_Bool __result144__;
memset(&calling_fun_244, 0, sizeof(_Bool));
    left_node_236=self->mLeft;
    Value_237=node_compile(left_node_236,info);
    if(    !Value_237) {
        return (_Bool)0;
    }
    else {
    }
    left_value_238=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_239=self->mRight;
    Value_240=node_compile(right_node_239,info);
    if(    !Value_240) {
        __result143__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result143__;
    }
    else {
    }
    right_value_241=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_242=(struct sType*)come_increment_ref_count(left_value_238->type);
    fun_name_243="operator_lt";
    if(    self->mQuote) {
        calling_fun_244=(_Bool)0;
    }
    else {
        calling_fun_244=operator_overload_fun(type_242,fun_name_243,left_value_238,right_value_241,(_Bool)0,info);
    }
    if(    !calling_fun_244) {
        come_value_245=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 848, "CVALUE"))));
        __dec_obj185=come_value_245->c_value;
        come_value_245->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_238->c_value,right_value_241->c_value));
        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj186=come_value_245->type;
        come_value_245->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_238->type));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_245->type->mHeap=(_Bool)0;
        come_value_245->var=((void*)0);
        add_come_last_code(info,"%s",come_value_245->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_245));
        /*i*/come_call_finalizer3(come_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result144__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value319 = (void*)0;
struct sNode* __dec_obj188;
struct sGtNode* __result145__;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value317,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj187=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj188=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
char* __result146__;
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=__builtin_string("sGtNode")));
    /* U11 */__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_246;
_Bool Value_247;
void* __right_value321 = (void*)0;
struct CVALUE* left_value_248;
struct sNode* right_node_249;
_Bool Value_250;
_Bool __result147__;
void* __right_value322 = (void*)0;
struct CVALUE* right_value_251;
struct sType* type_252;
char* fun_name_253;
_Bool calling_fun_254;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_255;
void* __right_value325 = (void*)0;
char* __dec_obj192;
void* __right_value326 = (void*)0;
struct sType* __dec_obj193;
_Bool __result148__;
memset(&calling_fun_254, 0, sizeof(_Bool));
    left_node_246=self->mLeft;
    Value_247=node_compile(left_node_246,info);
    if(    !Value_247) {
        return (_Bool)0;
    }
    else {
    }
    left_value_248=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_249=self->mRight;
    Value_250=node_compile(right_node_249,info);
    if(    !Value_250) {
        __result147__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result147__;
    }
    else {
    }
    right_value_251=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_252=(struct sType*)come_increment_ref_count(left_value_248->type);
    fun_name_253="operator_gt";
    if(    self->mQuote) {
        calling_fun_254=(_Bool)0;
    }
    else {
        calling_fun_254=operator_overload_fun(type_252,fun_name_253,left_value_248,right_value_251,(_Bool)0,info);
    }
    if(    !calling_fun_254) {
        come_value_255=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 913, "CVALUE"))));
        __dec_obj192=come_value_255->c_value;
        come_value_255->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_248->c_value,right_value_251->c_value));
        /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj193=come_value_255->type;
        come_value_255->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_248->type));
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_255->type->mHeap=(_Bool)0;
        come_value_255->var=((void*)0);
        add_come_last_code(info,"%s",come_value_255->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_255));
        /*i*/come_call_finalizer3(come_value_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result148__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value329 = (void*)0;
struct sNode* __dec_obj195;
struct sEqNode* __result149__;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj194=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj195=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
char* __result150__;
    __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value330=__builtin_string("sEqNode")));
    /* U11 */__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_256;
_Bool Value_257;
void* __right_value331 = (void*)0;
struct CVALUE* left_value_258;
struct sNode* right_node_259;
_Bool Value_260;
_Bool __result151__;
void* __right_value332 = (void*)0;
struct CVALUE* right_value_261;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_262;
void* __right_value335 = (void*)0;
char* __dec_obj199;
void* __right_value336 = (void*)0;
struct sType* __dec_obj200;
_Bool __result152__;
    left_node_256=self->mLeft;
    Value_257=node_compile(left_node_256,info);
    if(    !Value_257) {
        return (_Bool)0;
    }
    else {
    }
    left_value_258=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_259=self->mRight;
    Value_260=node_compile(right_node_259,info);
    if(    !Value_260) {
        __result151__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_258,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    else {
    }
    right_value_261=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_262=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 966, "CVALUE"))));
    __dec_obj199=come_value_262->c_value;
    come_value_262->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_258->c_value,right_value_261->c_value));
    /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj200=come_value_262->type;
    come_value_262->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_258->type));
    come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_262->type->mHeap=(_Bool)0;
    come_value_262->var=((void*)0);
    add_come_last_code(info,"%s",come_value_262->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_262));
    __result152__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_258,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_261,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value339 = (void*)0;
struct sNode* __dec_obj202;
struct sNotEqNode* __result153__;
    ((struct sNodeBase*)(__right_value337=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value337,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj201=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj202=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value340=__builtin_string("sNotEqNode")));
    /* U11 */__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_263;
_Bool Value_264;
void* __right_value341 = (void*)0;
struct CVALUE* left_value_265;
struct sNode* right_node_266;
_Bool Value_267;
_Bool __result155__;
void* __right_value342 = (void*)0;
struct CVALUE* right_value_268;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_269;
void* __right_value345 = (void*)0;
char* __dec_obj206;
void* __right_value346 = (void*)0;
struct sType* __dec_obj207;
_Bool __result156__;
    left_node_263=self->mLeft;
    Value_264=node_compile(left_node_263,info);
    if(    !Value_264) {
        return (_Bool)0;
    }
    else {
    }
    left_value_265=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_266=self->mRight;
    Value_267=node_compile(right_node_266,info);
    if(    !Value_267) {
        __result155__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_265,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result155__;
    }
    else {
    }
    right_value_268=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_269=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1018, "CVALUE"))));
    __dec_obj206=come_value_269->c_value;
    come_value_269->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_265->c_value,right_value_268->c_value));
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value_269->type;
    come_value_269->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_265->type));
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_269->type->mHeap=(_Bool)0;
    come_value_269->var=((void*)0);
    add_come_last_code(info,"%s",come_value_269->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_269));
    __result156__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_265,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_268,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* __dec_obj208;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj209;
struct sEq2Node* __result157__;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj208=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj209=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
char* __result158__;
    __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value350=__builtin_string("sEq2Node")));
    /* U11 */__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_270;
_Bool Value_271;
void* __right_value351 = (void*)0;
struct CVALUE* left_value_272;
struct sNode* right_node_273;
_Bool Value_274;
_Bool __result159__;
void* __right_value352 = (void*)0;
struct CVALUE* right_value_275;
struct sType* type_276;
char* fun_name_277;
_Bool calling_fun_278;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_279;
void* __right_value355 = (void*)0;
char* __dec_obj213;
void* __right_value356 = (void*)0;
struct sType* __dec_obj214;
_Bool __result160__;
memset(&calling_fun_278, 0, sizeof(_Bool));
    left_node_270=self->mLeft;
    Value_271=node_compile(left_node_270,info);
    if(    !Value_271) {
        return (_Bool)0;
    }
    else {
    }
    left_value_272=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_273=self->mRight;
    Value_274=node_compile(right_node_273,info);
    if(    !Value_274) {
        __result159__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result159__;
    }
    else {
    }
    right_value_275=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_276=(struct sType*)come_increment_ref_count(left_value_272->type);
    fun_name_277="operator_equals";
    if(    self->mQuote) {
        calling_fun_278=(_Bool)0;
    }
    else {
        calling_fun_278=operator_overload_fun(type_276,fun_name_277,left_value_272,right_value_275,(_Bool)0,info);
    }
    if(    !calling_fun_278) {
        come_value_279=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1083, "CVALUE"))));
        __dec_obj213=come_value_279->c_value;
        come_value_279->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_272->c_value,right_value_275->c_value));
        /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj214=come_value_279->type;
        come_value_279->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_272->type));
        come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_279->type->mHeap=(_Bool)0;
        come_value_279->var=((void*)0);
        add_come_last_code(info,"%s",come_value_279->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_279));
        /*i*/come_call_finalizer3(come_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result160__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_276,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result160__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj215;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj216;
struct sNotEq2Node* __result161__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj215=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj216=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result161__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
char* __result162__;
    __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value360=__builtin_string("sNotEq2Node")));
    /* U11 */__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_280;
_Bool Value_281;
void* __right_value361 = (void*)0;
struct CVALUE* left_value_282;
struct sNode* right_node_283;
_Bool Value_284;
_Bool __result163__;
void* __right_value362 = (void*)0;
struct CVALUE* right_value_285;
struct sType* type_286;
char* fun_name_287;
_Bool calling_fun_288;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_289;
void* __right_value365 = (void*)0;
char* __dec_obj220;
void* __right_value366 = (void*)0;
struct sType* __dec_obj221;
_Bool __result164__;
memset(&calling_fun_288, 0, sizeof(_Bool));
    left_node_280=self->mLeft;
    Value_281=node_compile(left_node_280,info);
    if(    !Value_281) {
        return (_Bool)0;
    }
    else {
    }
    left_value_282=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_283=self->mRight;
    Value_284=node_compile(right_node_283,info);
    if(    !Value_284) {
        __result163__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result163__;
    }
    else {
    }
    right_value_285=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_286=(struct sType*)come_increment_ref_count(left_value_282->type);
    fun_name_287="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_288=(_Bool)0;
    }
    else {
        calling_fun_288=operator_overload_fun(type_286,fun_name_287,left_value_282,right_value_285,(_Bool)0,info);
    }
    if(    !calling_fun_288) {
        come_value_289=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1148, "CVALUE"))));
        __dec_obj220=come_value_289->c_value;
        come_value_289->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_282->c_value,right_value_285->c_value));
        /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj221=come_value_289->type;
        come_value_289->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_282->type));
        come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_289->type->mHeap=(_Bool)0;
        come_value_289->var=((void*)0);
        add_come_last_code(info,"%s",come_value_289->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_289));
        /*i*/come_call_finalizer3(come_value_289,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result164__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* __dec_obj222;
void* __right_value369 = (void*)0;
struct sNode* __dec_obj223;
struct sAndNode* __result165__;
    ((struct sNodeBase*)(__right_value367=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value367,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj222=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj223=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sAndNode")));
    /* U11 */__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_290;
_Bool Value_291;
void* __right_value371 = (void*)0;
struct CVALUE* left_value_292;
struct sNode* right_node_293;
_Bool Value_294;
_Bool __result167__;
void* __right_value372 = (void*)0;
struct CVALUE* right_value_295;
struct sType* type_296;
char* fun_name_297;
_Bool calling_fun_298;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_299;
void* __right_value375 = (void*)0;
char* __dec_obj227;
void* __right_value376 = (void*)0;
struct sType* __dec_obj228;
_Bool __result168__;
memset(&calling_fun_298, 0, sizeof(_Bool));
    left_node_290=self->mLeft;
    Value_291=node_compile(left_node_290,info);
    if(    !Value_291) {
        return (_Bool)0;
    }
    else {
    }
    left_value_292=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_293=self->mRight;
    Value_294=node_compile(right_node_293,info);
    if(    !Value_294) {
        __result167__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result167__;
    }
    else {
    }
    right_value_295=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_296=(struct sType*)come_increment_ref_count(left_value_292->type);
    fun_name_297="operator_and";
    if(    self->mQuote) {
        calling_fun_298=(_Bool)0;
    }
    else {
        calling_fun_298=operator_overload_fun(type_296,fun_name_297,left_value_292,right_value_295,(_Bool)0,info);
    }
    if(    !calling_fun_298) {
        come_value_299=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1214, "CVALUE"))));
        __dec_obj227=come_value_299->c_value;
        come_value_299->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_292->c_value,right_value_295->c_value));
        /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj228=come_value_299->type;
        come_value_299->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_292->type));
        come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_299->type->mHeap=(_Bool)0;
        come_value_299->var=((void*)0);
        add_come_last_code(info,"%s",come_value_299->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_299));
        /*i*/come_call_finalizer3(come_value_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result168__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result168__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj230;
struct sXOrNode* __result169__;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value377,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj229=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj230=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result169__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value380=__builtin_string("sXOrNode")));
    /* U11 */__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_300;
_Bool Value_301;
void* __right_value381 = (void*)0;
struct CVALUE* left_value_302;
struct sNode* right_node_303;
_Bool Value_304;
_Bool __result171__;
void* __right_value382 = (void*)0;
struct CVALUE* right_value_305;
struct sType* type_306;
char* fun_name_307;
_Bool calling_fun_308;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value385 = (void*)0;
char* __dec_obj234;
void* __right_value386 = (void*)0;
struct sType* __dec_obj235;
_Bool __result172__;
memset(&calling_fun_308, 0, sizeof(_Bool));
    left_node_300=self->mLeft;
    Value_301=node_compile(left_node_300,info);
    if(    !Value_301) {
        return (_Bool)0;
    }
    else {
    }
    left_value_302=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_303=self->mRight;
    Value_304=node_compile(right_node_303,info);
    if(    !Value_304) {
        __result171__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_302,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result171__;
    }
    else {
    }
    right_value_305=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_306=(struct sType*)come_increment_ref_count(left_value_302->type);
    fun_name_307="operator_xor";
    if(    self->mQuote) {
        calling_fun_308=(_Bool)0;
    }
    else {
        calling_fun_308=operator_overload_fun(type_306,fun_name_307,left_value_302,right_value_305,(_Bool)0,info);
    }
    if(    !calling_fun_308) {
        come_value_309=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1279, "CVALUE"))));
        __dec_obj234=come_value_309->c_value;
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_302->c_value,right_value_305->c_value));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj235=come_value_309->type;
        come_value_309->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_302->type));
        come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_309->type->mHeap=(_Bool)0;
        come_value_309->var=((void*)0);
        add_come_last_code(info,"%s",come_value_309->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_309));
        /*i*/come_call_finalizer3(come_value_309,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result172__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_302,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result172__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj236;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj237;
struct sOrNode* __result173__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj236=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj237=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
char* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string("sOrNode")));
    /* U11 */__right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_310;
_Bool Value_311;
void* __right_value391 = (void*)0;
struct CVALUE* left_value_312;
struct sNode* right_node_313;
_Bool Value_314;
_Bool __result175__;
void* __right_value392 = (void*)0;
struct CVALUE* right_value_315;
struct sType* type_316;
char* fun_name_317;
_Bool calling_fun_318;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_319;
void* __right_value395 = (void*)0;
char* __dec_obj241;
void* __right_value396 = (void*)0;
struct sType* __dec_obj242;
_Bool __result176__;
memset(&calling_fun_318, 0, sizeof(_Bool));
    left_node_310=self->mLeft;
    Value_311=node_compile(left_node_310,info);
    if(    !Value_311) {
        return (_Bool)0;
    }
    else {
    }
    left_value_312=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_313=self->mRight;
    Value_314=node_compile(right_node_313,info);
    if(    !Value_314) {
        __result175__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_312,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result175__;
    }
    else {
    }
    right_value_315=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_316=(struct sType*)come_increment_ref_count(left_value_312->type);
    fun_name_317="operator_or";
    if(    self->mQuote) {
        calling_fun_318=(_Bool)0;
    }
    else {
        calling_fun_318=operator_overload_fun(type_316,fun_name_317,left_value_312,right_value_315,(_Bool)0,info);
    }
    if(    !calling_fun_318) {
        come_value_319=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1345, "CVALUE"))));
        __dec_obj241=come_value_319->c_value;
        come_value_319->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_312->c_value,right_value_315->c_value));
        /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj242=come_value_319->type;
        come_value_319->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_312->type));
        come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_319->type->mHeap=(_Bool)0;
        come_value_319->var=((void*)0);
        add_come_last_code(info,"%s",come_value_319->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_319));
        /*i*/come_call_finalizer3(come_value_319,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result176__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_312,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_315,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_316,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sNode* __dec_obj243;
void* __right_value399 = (void*)0;
struct sNode* __dec_obj244;
struct sAndAndNode* __result177__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj243=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj244=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
    __result177__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result177__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
char* __result178__;
    __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value400=__builtin_string("sAndAndNode")));
    /* U11 */__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_320;
_Bool Value_321;
void* __right_value401 = (void*)0;
struct CVALUE* left_value_322;
struct sNode* right_node_323;
_Bool Value_324;
_Bool __result179__;
void* __right_value402 = (void*)0;
struct CVALUE* right_value_325;
struct sType* type_326;
char* fun_name_327;
_Bool calling_fun_328;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_329;
void* __right_value405 = (void*)0;
char* __dec_obj248;
void* __right_value406 = (void*)0;
struct sType* __dec_obj249;
_Bool __result180__;
memset(&calling_fun_328, 0, sizeof(_Bool));
    left_node_320=self->mLeft;
    Value_321=node_compile(left_node_320,info);
    if(    !Value_321) {
        return (_Bool)0;
    }
    else {
    }
    left_value_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_323=self->mRight;
    Value_324=node_compile(right_node_323,info);
    if(    !Value_324) {
        __result179__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result179__;
    }
    else {
    }
    right_value_325=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_326=(struct sType*)come_increment_ref_count(left_value_322->type);
    fun_name_327="operator_andand";
    if(    self->mQuote) {
        calling_fun_328=(_Bool)0;
    }
    else {
        calling_fun_328=operator_overload_fun(type_326,fun_name_327,left_value_322,right_value_325,(_Bool)0,info);
    }
    if(    !calling_fun_328) {
        come_value_329=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1411, "CVALUE"))));
        __dec_obj248=come_value_329->c_value;
        come_value_329->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_322->c_value,right_value_325->c_value));
        /*G*/ __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj249=come_value_329->type;
        come_value_329->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_322->type));
        come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_329->type->mHeap=(_Bool)0;
        come_value_329->var=left_value_322->var;
        add_come_last_code(info,"%s",come_value_329->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_329));
        /*i*/come_call_finalizer3(come_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result180__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result180__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sNode* __dec_obj250;
void* __right_value409 = (void*)0;
struct sNode* __dec_obj251;
struct sOrOrNode* __result181__;
    ((struct sNodeBase*)(__right_value407=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value407,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj250=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj251=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    __result181__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value410=__builtin_string("sOrOrNode")));
    /* U11 */__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_330;
_Bool Value_331;
void* __right_value411 = (void*)0;
struct CVALUE* left_value_332;
struct sNode* right_node_333;
_Bool Value_334;
_Bool __result183__;
void* __right_value412 = (void*)0;
struct CVALUE* right_value_335;
struct sType* type_336;
char* fun_name_337;
_Bool calling_fun_338;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct CVALUE* come_value_339;
void* __right_value415 = (void*)0;
char* __dec_obj255;
void* __right_value416 = (void*)0;
struct sType* __dec_obj256;
_Bool __result184__;
memset(&calling_fun_338, 0, sizeof(_Bool));
    left_node_330=self->mLeft;
    Value_331=node_compile(left_node_330,info);
    if(    !Value_331) {
        return (_Bool)0;
    }
    else {
    }
    left_value_332=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_333=self->mRight;
    Value_334=node_compile(right_node_333,info);
    if(    !Value_334) {
        __result183__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result183__;
    }
    else {
    }
    right_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_336=(struct sType*)come_increment_ref_count(left_value_332->type);
    fun_name_337="operator_oror";
    if(    self->mQuote) {
        calling_fun_338=(_Bool)0;
    }
    else {
        calling_fun_338=operator_overload_fun(type_336,fun_name_337,left_value_332,right_value_335,(_Bool)0,info);
    }
    if(    !calling_fun_338) {
        come_value_339=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1476, "CVALUE"))));
        __dec_obj255=come_value_339->c_value;
        come_value_339->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_332->c_value,right_value_335->c_value));
        /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=come_value_339->type;
        come_value_339->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_332->type));
        come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_339->type->mHeap=(_Bool)0;
        come_value_339->var=left_value_332->var;
        add_come_last_code(info,"%s",come_value_339->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_339));
        /*i*/come_call_finalizer3(come_value_339,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result184__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sNode* __dec_obj257;
void* __right_value419 = (void*)0;
struct sNode* __dec_obj258;
struct sCommaNode* __result185__;
    ((struct sNodeBase*)(__right_value417=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value417,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj257=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj258=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
char* __result186__;
    __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string("sCommaNode")));
    /* U11 */__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_340;
_Bool Value_341;
void* __right_value421 = (void*)0;
struct CVALUE* left_value_342;
struct sNode* right_node_343;
_Bool Value_344;
_Bool __result187__;
void* __right_value422 = (void*)0;
struct CVALUE* right_value_345;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_346;
void* __right_value425 = (void*)0;
char* __dec_obj262;
void* __right_value426 = (void*)0;
struct sType* __dec_obj263;
_Bool __result188__;
    left_node_340=self->mLeft;
    Value_341=node_compile(left_node_340,info);
    if(    !Value_341) {
        return (_Bool)0;
    }
    else {
    }
    left_value_342=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_343=self->mRight;
    Value_344=node_compile(right_node_343,info);
    if(    !Value_344) {
        __result187__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_342,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    else {
    }
    right_value_345=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_346=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1528, "CVALUE"))));
    __dec_obj262=come_value_346->c_value;
    come_value_346->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_342->c_value,right_value_345->c_value));
    /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj263=come_value_346->type;
    come_value_346->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_342->type));
    come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_346->var=((void*)0);
    add_come_last_code(info,"%s",come_value_346->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_346));
    __result188__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_342,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_345,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_346,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value430 = (void*)0;
struct sNode* __dec_obj266;
struct sConditionalNode* __result189__;
    ((struct sNodeBase*)(__right_value427=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value427,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj264=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    /* U1 */ if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj265=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    /* U1 */ if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj266=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    /* U1 */ if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
char* __result190__;
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value431=__builtin_string("sConditionalNode")));
    /* U11 */__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_347;
struct sNode* value1_348;
_Bool Value_349;
void* __right_value432 = (void*)0;
struct CVALUE* value1_value_350;
struct sNode* value2_351;
_Bool Value_352;
_Bool __result191__;
void* __right_value433 = (void*)0;
struct CVALUE* value2_value_353;
struct sNode* value3_354;
_Bool Value_355;
_Bool __result192__;
void* __right_value434 = (void*)0;
struct CVALUE* value3_value_356;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_357;
void* __right_value437 = (void*)0;
char* __dec_obj271;
void* __right_value438 = (void*)0;
struct sType* __dec_obj272;
_Bool __result193__;
    in_conditional_operator_347=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_348=self->mValue1;
    Value_349=node_compile(value1_348,info);
    if(    !Value_349) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_350=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_351=self->mValue2;
    Value_352=node_compile(value2_351,info);
    if(    !Value_352) {
        __result191__ = (_Bool)0;
        /*i*/come_call_finalizer3(value1_value_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result191__;
    }
    else {
    }
    value2_value_353=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_354=self->mValue3;
    Value_355=node_compile(value3_354,info);
    if(    !Value_355) {
        __result192__ = (_Bool)0;
        /*i*/come_call_finalizer3(value1_value_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value2_value_353,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result192__;
    }
    else {
    }
    value3_value_356=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_357=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1591, "CVALUE"))));
    __dec_obj271=come_value_357->c_value;
    come_value_357->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_350->c_value,value2_value_353->c_value,value3_value_356->c_value));
    /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj272=come_value_357->type;
    come_value_357->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_353->type));
    come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_357->var=((void*)0);
    add_come_last_code(info,"%s",come_value_357->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_357));
    info->in_conditional_operator=in_conditional_operator_347;
    __result193__ = (_Bool)1;
    /*i*/come_call_finalizer3(value1_value_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(value2_value_353,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(value3_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result193__;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value446 = (void*)0;
struct sNode* __result196__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1609, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value440=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1609, "sConditionalNode")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result196__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value446=_inf_value2));
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value440,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value446) { __right_value446 = come_decrement_ref_count2(__right_value446, ((struct sNode*)__right_value446)->finalize, ((struct sNode*)__right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result196__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value447 = (void*)0;
struct sNode* node_359;
void* __right_value448 = (void*)0;
struct sNode* right_360;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value455 = (void*)0;
struct sNode* __result199__;
void* __right_value456 = (void*)0;
struct sNode* right_362;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value463 = (void*)0;
struct sNode* __result202__;
void* __right_value464 = (void*)0;
struct sNode* right_364;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value471 = (void*)0;
struct sNode* __result205__;
void* __right_value472 = (void*)0;
struct sNode* right_366;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value479 = (void*)0;
struct sNode* __result208__;
void* __right_value480 = (void*)0;
struct sNode* right_368;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value487 = (void*)0;
struct sNode* __result211__;
void* __right_value488 = (void*)0;
struct sNode* right_370;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value495 = (void*)0;
struct sNode* __result214__;
struct sNode* __result215__;
    node_359=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_359->terminated(node_359->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_360=(struct sNode*)come_increment_ref_count(mult_exp(info));
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1625, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value450=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1625, "sMultNode")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_360),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result199__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value455=_inf_value3));
            if(right_360) { right_360 = come_decrement_ref_count2(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value450,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value455) { __right_value455 = come_decrement_ref_count2(__right_value455, ((struct sNode*)__right_value455)->finalize, ((struct sNode*)__right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result199__;
            if(right_360) { right_360 = come_decrement_ref_count2(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==47&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_362=(struct sNode*)come_increment_ref_count(mult_exp(info));
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1633, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value458=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1633, "sDivNode")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_362),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result202__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value463=_inf_value4));
            if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value458,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value463) { __right_value463 = come_decrement_ref_count2(__right_value463, ((struct sNode*)__right_value463)->finalize, ((struct sNode*)__right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result202__;
            if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_364=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1641, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value466=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1641, "sModNode")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_364),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value471=_inf_value5));
            if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value466,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value471) { __right_value471 = come_decrement_ref_count2(__right_value471, ((struct sNode*)__right_value471)->finalize, ((struct sNode*)__right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result205__;
            if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_359->terminated(node_359->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_366=(struct sNode*)come_increment_ref_count(mult_exp(info));
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1649, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value474=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1649, "sMultNode")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_366),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result208__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value479=_inf_value6));
            if(right_366) { right_366 = come_decrement_ref_count2(right_366, ((struct sNode*)right_366)->finalize, ((struct sNode*)right_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value474,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value479) { __right_value479 = come_decrement_ref_count2(__right_value479, ((struct sNode*)__right_value479)->finalize, ((struct sNode*)__right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result208__;
            if(right_366) { right_366 = come_decrement_ref_count2(right_366, ((struct sNode*)right_366)->finalize, ((struct sNode*)right_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_368=(struct sNode*)come_increment_ref_count(mult_exp(info));
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1657, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value482=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1657, "sDivNode")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_368),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result211__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value487=_inf_value7));
            if(right_368) { right_368 = come_decrement_ref_count2(right_368, ((struct sNode*)right_368)->finalize, ((struct sNode*)right_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value482,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value487) { __right_value487 = come_decrement_ref_count2(__right_value487, ((struct sNode*)__right_value487)->finalize, ((struct sNode*)__right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result211__;
            if(right_368) { right_368 = come_decrement_ref_count2(right_368, ((struct sNode*)right_368)->finalize, ((struct sNode*)right_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_370=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1665, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value490=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1665, "sModNode")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_370),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result214__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value495=_inf_value8));
            if(right_370) { right_370 = come_decrement_ref_count2(right_370, ((struct sNode*)right_370)->finalize, ((struct sNode*)right_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value490,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value495) { __right_value495 = come_decrement_ref_count2(__right_value495, ((struct sNode*)__right_value495)->finalize, ((struct sNode*)__right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result214__;
            if(right_370) { right_370 = come_decrement_ref_count2(right_370, ((struct sNode*)right_370)->finalize, ((struct sNode*)right_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result215__ = gComeFunResultObject = __result_obj__ = node_359;
    if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj299;
struct sNode* __dec_obj300;
struct sNode* __dec_obj301;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj299=self->sname;
            /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj300=self->mLeft;
            /* U1 */ if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj301=self->mRight;
            /* U1 */ if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result206__;
void* __right_value475 = (void*)0;
struct sMultNode* result_367;
void* __right_value476 = (void*)0;
char* __dec_obj302;
void* __right_value477 = (void*)0;
struct sNode* __dec_obj303;
void* __right_value478 = (void*)0;
struct sNode* __dec_obj304;
struct sMultNode* __result207__;
    if(    self==(void*)0) {
        __result206__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    result_367=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"));
    if(    self!=((void*)0)) {
        result_367->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj302=result_367->sname;
        result_367->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj303=result_367->mLeft;
        result_367->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj304=result_367->mRight;
        result_367->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result207__ = gComeFunResultObject = __result_obj__ = result_367;
    /*i*/come_call_finalizer3(result_367,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj305;
struct sNode* __dec_obj306;
struct sNode* __dec_obj307;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj305=self->sname;
            /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj306=self->mLeft;
            /* U1 */ if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj307=self->mRight;
            /* U1 */ if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result209__;
void* __right_value483 = (void*)0;
struct sDivNode* result_369;
void* __right_value484 = (void*)0;
char* __dec_obj308;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj309;
void* __right_value486 = (void*)0;
struct sNode* __dec_obj310;
struct sDivNode* __result210__;
    if(    self==(void*)0) {
        __result209__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_369=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"));
    if(    self!=((void*)0)) {
        result_369->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj308=result_369->sname;
        result_369->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj309=result_369->mLeft;
        result_369->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj310=result_369->mRight;
        result_369->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_369;
    /*i*/come_call_finalizer3(result_369,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj311;
struct sNode* __dec_obj312;
struct sNode* __dec_obj313;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj311=self->sname;
            /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj312=self->mLeft;
            /* U1 */ if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj313=self->mRight;
            /* U1 */ if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result212__;
void* __right_value491 = (void*)0;
struct sModNode* result_371;
void* __right_value492 = (void*)0;
char* __dec_obj314;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj315;
void* __right_value494 = (void*)0;
struct sNode* __dec_obj316;
struct sModNode* __result213__;
    if(    self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_371=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"));
    if(    self!=((void*)0)) {
        result_371->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj314=result_371->sname;
        result_371->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj315=result_371->mLeft;
        result_371->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj316=result_371->mRight;
        result_371->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_371;
    /*i*/come_call_finalizer3(result_371,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value496 = (void*)0;
struct sNode* node_372;
void* __right_value497 = (void*)0;
struct sNode* right_373;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value504 = (void*)0;
struct sNode* __result218__;
void* __right_value505 = (void*)0;
struct sNode* right_375;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value512 = (void*)0;
struct sNode* __result221__;
void* __right_value513 = (void*)0;
struct sNode* right_377;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value520 = (void*)0;
struct sNode* __result224__;
void* __right_value521 = (void*)0;
struct sNode* right_379;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value528 = (void*)0;
struct sNode* __result227__;
struct sNode* __result228__;
    node_372=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            skip_spaces_and_lf(info);
            right_373=(struct sNode*)come_increment_ref_count(add_exp(info));
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1691, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value499=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1691, "sAddNode")),(struct sNode*)come_increment_ref_count(node_372),(struct sNode*)come_increment_ref_count(right_373),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result218__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value504=_inf_value9));
            if(right_373) { right_373 = come_decrement_ref_count2(right_373, ((struct sNode*)right_373)->finalize, ((struct sNode*)right_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value499,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value504) { __right_value504 = come_decrement_ref_count2(__right_value504, ((struct sNode*)__right_value504)->finalize, ((struct sNode*)__right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result218__;
            if(right_373) { right_373 = come_decrement_ref_count2(right_373, ((struct sNode*)right_373)->finalize, ((struct sNode*)right_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            right_375=(struct sNode*)come_increment_ref_count(add_exp(info));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1700, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value507=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1700, "sSubNode")),(struct sNode*)come_increment_ref_count(node_372),(struct sNode*)come_increment_ref_count(right_375),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result221__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value512=_inf_value10));
            if(right_375) { right_375 = come_decrement_ref_count2(right_375, ((struct sNode*)right_375)->finalize, ((struct sNode*)right_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value507,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value512) { __right_value512 = come_decrement_ref_count2(__right_value512, ((struct sNode*)__right_value512)->finalize, ((struct sNode*)__right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result221__;
            if(right_375) { right_375 = come_decrement_ref_count2(right_375, ((struct sNode*)right_375)->finalize, ((struct sNode*)right_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_377=(struct sNode*)come_increment_ref_count(add_exp(info));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1709, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value515=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1709, "sAddNode")),(struct sNode*)come_increment_ref_count(node_372),(struct sNode*)come_increment_ref_count(right_377),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value520=_inf_value11));
            if(right_377) { right_377 = come_decrement_ref_count2(right_377, ((struct sNode*)right_377)->finalize, ((struct sNode*)right_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value515,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value520) { __right_value520 = come_decrement_ref_count2(__right_value520, ((struct sNode*)__right_value520)->finalize, ((struct sNode*)__right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result224__;
            if(right_377) { right_377 = come_decrement_ref_count2(right_377, ((struct sNode*)right_377)->finalize, ((struct sNode*)right_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_379=(struct sNode*)come_increment_ref_count(add_exp(info));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1718, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value523=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1718, "sSubNode")),(struct sNode*)come_increment_ref_count(node_372),(struct sNode*)come_increment_ref_count(right_379),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result227__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value528=_inf_value12));
            if(right_379) { right_379 = come_decrement_ref_count2(right_379, ((struct sNode*)right_379)->finalize, ((struct sNode*)right_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value523,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value528) { __right_value528 = come_decrement_ref_count2(__right_value528, ((struct sNode*)__right_value528)->finalize, ((struct sNode*)__right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result227__;
            if(right_379) { right_379 = come_decrement_ref_count2(right_379, ((struct sNode*)right_379)->finalize, ((struct sNode*)right_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result228__ = gComeFunResultObject = __result_obj__ = node_372;
    if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj329;
struct sNode* __dec_obj330;
struct sNode* __dec_obj331;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj329=self->sname;
            /*G*/ __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj330=self->mLeft;
            /* U1 */ if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj331=self->mRight;
            /* U1 */ if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result222__;
void* __right_value516 = (void*)0;
struct sAddNode* result_378;
void* __right_value517 = (void*)0;
char* __dec_obj332;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj333;
void* __right_value519 = (void*)0;
struct sNode* __dec_obj334;
struct sAddNode* __result223__;
    if(    self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_378=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"));
    if(    self!=((void*)0)) {
        result_378->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj332=result_378->sname;
        result_378->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj333=result_378->mLeft;
        result_378->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj333) { __dec_obj333 = come_decrement_ref_count2(__dec_obj333, ((struct sNode*)__dec_obj333)->finalize, ((struct sNode*)__dec_obj333)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj334=result_378->mRight;
        result_378->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_378->mQuote=self->mQuote;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_378;
    /*i*/come_call_finalizer3(result_378,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj335;
struct sNode* __dec_obj336;
struct sNode* __dec_obj337;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj335=self->sname;
            /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj336=self->mLeft;
            /* U1 */ if(__dec_obj336) { __dec_obj336 = come_decrement_ref_count2(__dec_obj336, ((struct sNode*)__dec_obj336)->finalize, ((struct sNode*)__dec_obj336)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj337=self->mRight;
            /* U1 */ if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result225__;
void* __right_value524 = (void*)0;
struct sSubNode* result_380;
void* __right_value525 = (void*)0;
char* __dec_obj338;
void* __right_value526 = (void*)0;
struct sNode* __dec_obj339;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj340;
struct sSubNode* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_380=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"));
    if(    self!=((void*)0)) {
        result_380->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj338=result_380->sname;
        result_380->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj339=result_380->mLeft;
        result_380->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj339) { __dec_obj339 = come_decrement_ref_count2(__dec_obj339, ((struct sNode*)__dec_obj339)->finalize, ((struct sNode*)__dec_obj339)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj340=result_380->mRight;
        result_380->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_380->mQuote=self->mQuote;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_380;
    /*i*/come_call_finalizer3(result_380,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value529 = (void*)0;
struct sNode* node_381;
void* __right_value530 = (void*)0;
struct sNode* right_382;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value537 = (void*)0;
struct sNode* __result231__;
void* __right_value538 = (void*)0;
struct sNode* right_384;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value545 = (void*)0;
struct sNode* __result234__;
void* __right_value546 = (void*)0;
struct sNode* right_386;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value553 = (void*)0;
struct sNode* __result237__;
void* __right_value554 = (void*)0;
struct sNode* right_388;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value561 = (void*)0;
struct sNode* __result240__;
struct sNode* __result241__;
    parse_sharp_v5(info);
    node_381=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_382=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1745, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value532=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1745, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_381),(struct sNode*)come_increment_ref_count(right_382),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result231__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value537=_inf_value13));
            if(right_382) { right_382 = come_decrement_ref_count2(right_382, ((struct sNode*)right_382)->finalize, ((struct sNode*)right_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value532,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value537) { __right_value537 = come_decrement_ref_count2(__right_value537, ((struct sNode*)__right_value537)->finalize, ((struct sNode*)__right_value537)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result231__;
            if(right_382) { right_382 = come_decrement_ref_count2(right_382, ((struct sNode*)right_382)->finalize, ((struct sNode*)right_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_384=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1753, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value540=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1753, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_381),(struct sNode*)come_increment_ref_count(right_384),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result234__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value545=_inf_value14));
            if(right_384) { right_384 = come_decrement_ref_count2(right_384, ((struct sNode*)right_384)->finalize, ((struct sNode*)right_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value540,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value545) { __right_value545 = come_decrement_ref_count2(__right_value545, ((struct sNode*)__right_value545)->finalize, ((struct sNode*)__right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result234__;
            if(right_384) { right_384 = come_decrement_ref_count2(right_384, ((struct sNode*)right_384)->finalize, ((struct sNode*)right_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_386=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1761, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value548=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1761, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_381),(struct sNode*)come_increment_ref_count(right_386),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result237__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value553=_inf_value15));
            if(right_386) { right_386 = come_decrement_ref_count2(right_386, ((struct sNode*)right_386)->finalize, ((struct sNode*)right_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value548,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value553) { __right_value553 = come_decrement_ref_count2(__right_value553, ((struct sNode*)__right_value553)->finalize, ((struct sNode*)__right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result237__;
            if(right_386) { right_386 = come_decrement_ref_count2(right_386, ((struct sNode*)right_386)->finalize, ((struct sNode*)right_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_388=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1769, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value556=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1769, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_381),(struct sNode*)come_increment_ref_count(right_388),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result240__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value561=_inf_value16));
            if(right_388) { right_388 = come_decrement_ref_count2(right_388, ((struct sNode*)right_388)->finalize, ((struct sNode*)right_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value556,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value561) { __right_value561 = come_decrement_ref_count2(__right_value561, ((struct sNode*)__right_value561)->finalize, ((struct sNode*)__right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result240__;
            if(right_388) { right_388 = come_decrement_ref_count2(right_388, ((struct sNode*)right_388)->finalize, ((struct sNode*)right_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result241__ = gComeFunResultObject = __result_obj__ = node_381;
    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj353;
struct sNode* __dec_obj354;
struct sNode* __dec_obj355;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj353=self->sname;
            /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj354=self->mLeft;
            /* U1 */ if(__dec_obj354) { __dec_obj354 = come_decrement_ref_count2(__dec_obj354, ((struct sNode*)__dec_obj354)->finalize, ((struct sNode*)__dec_obj354)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj355=self->mRight;
            /* U1 */ if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result235__;
void* __right_value549 = (void*)0;
struct sLShiftNode* result_387;
void* __right_value550 = (void*)0;
char* __dec_obj356;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj357;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj358;
struct sLShiftNode* __result236__;
    if(    self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_387=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"));
    if(    self!=((void*)0)) {
        result_387->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj356=result_387->sname;
        result_387->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_387->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj357=result_387->mLeft;
        result_387->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj357) { __dec_obj357 = come_decrement_ref_count2(__dec_obj357, ((struct sNode*)__dec_obj357)->finalize, ((struct sNode*)__dec_obj357)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj358=result_387->mRight;
        result_387->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj358) { __dec_obj358 = come_decrement_ref_count2(__dec_obj358, ((struct sNode*)__dec_obj358)->finalize, ((struct sNode*)__dec_obj358)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_387;
    /*i*/come_call_finalizer3(result_387,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj359;
struct sNode* __dec_obj360;
struct sNode* __dec_obj361;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj359=self->sname;
            /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj360=self->mLeft;
            /* U1 */ if(__dec_obj360) { __dec_obj360 = come_decrement_ref_count2(__dec_obj360, ((struct sNode*)__dec_obj360)->finalize, ((struct sNode*)__dec_obj360)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj361=self->mRight;
            /* U1 */ if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result238__;
void* __right_value557 = (void*)0;
struct sRShiftNode* result_389;
void* __right_value558 = (void*)0;
char* __dec_obj362;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj363;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj364;
struct sRShiftNode* __result239__;
    if(    self==(void*)0) {
        __result238__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_389=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"));
    if(    self!=((void*)0)) {
        result_389->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj362=result_389->sname;
        result_389->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_389->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj363=result_389->mLeft;
        result_389->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj363) { __dec_obj363 = come_decrement_ref_count2(__dec_obj363, ((struct sNode*)__dec_obj363)->finalize, ((struct sNode*)__dec_obj363)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj364=result_389->mRight;
        result_389->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj364) { __dec_obj364 = come_decrement_ref_count2(__dec_obj364, ((struct sNode*)__dec_obj364)->finalize, ((struct sNode*)__dec_obj364)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_389;
    /*i*/come_call_finalizer3(result_389,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
struct sNode* node_390;
void* __right_value563 = (void*)0;
struct sNode* right_391;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value570 = (void*)0;
struct sNode* __result244__;
void* __right_value571 = (void*)0;
struct sNode* right_393;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value578 = (void*)0;
struct sNode* __result247__;
void* __right_value579 = (void*)0;
struct sNode* right_395;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value586 = (void*)0;
struct sNode* __result250__;
void* __right_value587 = (void*)0;
struct sNode* right_397;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value594 = (void*)0;
struct sNode* __result253__;
void* __right_value595 = (void*)0;
struct sNode* right_399;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value602 = (void*)0;
struct sNode* __result256__;
void* __right_value603 = (void*)0;
struct sNode* right_401;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value610 = (void*)0;
struct sNode* __result259__;
void* __right_value611 = (void*)0;
struct sNode* right_403;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value618 = (void*)0;
struct sNode* __result262__;
void* __right_value619 = (void*)0;
struct sNode* right_405;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value626 = (void*)0;
struct sNode* __result265__;
struct sNode* __result266__;
    parse_sharp_v5(info);
    node_390=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_391=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1796, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value565=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1796, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_391),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result244__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value570=_inf_value17));
            if(right_391) { right_391 = come_decrement_ref_count2(right_391, ((struct sNode*)right_391)->finalize, ((struct sNode*)right_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value565,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value570) { __right_value570 = come_decrement_ref_count2(__right_value570, ((struct sNode*)__right_value570)->finalize, ((struct sNode*)__right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result244__;
            if(right_391) { right_391 = come_decrement_ref_count2(right_391, ((struct sNode*)right_391)->finalize, ((struct sNode*)right_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_393=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1804, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value573=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1804, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_393),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result247__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value578=_inf_value18));
            if(right_393) { right_393 = come_decrement_ref_count2(right_393, ((struct sNode*)right_393)->finalize, ((struct sNode*)right_393)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value573,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value578) { __right_value578 = come_decrement_ref_count2(__right_value578, ((struct sNode*)__right_value578)->finalize, ((struct sNode*)__right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result247__;
            if(right_393) { right_393 = come_decrement_ref_count2(right_393, ((struct sNode*)right_393)->finalize, ((struct sNode*)right_393)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            right_395=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1812, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value581=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1812, "sGtNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_395),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result250__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value586=_inf_value19));
            if(right_395) { right_395 = come_decrement_ref_count2(right_395, ((struct sNode*)right_395)->finalize, ((struct sNode*)right_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value581,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value586) { __right_value586 = come_decrement_ref_count2(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result250__;
            if(right_395) { right_395 = come_decrement_ref_count2(right_395, ((struct sNode*)right_395)->finalize, ((struct sNode*)right_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            skip_spaces_and_lf(info);
            right_397=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1820, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value589=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1820, "sLtNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_397),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result253__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value594=_inf_value20));
            if(right_397) { right_397 = come_decrement_ref_count2(right_397, ((struct sNode*)right_397)->finalize, ((struct sNode*)right_397)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value589,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value594) { __right_value594 = come_decrement_ref_count2(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result253__;
            if(right_397) { right_397 = come_decrement_ref_count2(right_397, ((struct sNode*)right_397)->finalize, ((struct sNode*)right_397)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_399=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1828, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value597=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1828, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_399),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result256__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value602=_inf_value21));
            if(right_399) { right_399 = come_decrement_ref_count2(right_399, ((struct sNode*)right_399)->finalize, ((struct sNode*)right_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value597,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value602) { __right_value602 = come_decrement_ref_count2(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result256__;
            if(right_399) { right_399 = come_decrement_ref_count2(right_399, ((struct sNode*)right_399)->finalize, ((struct sNode*)right_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_401=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1836, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value605=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1836, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_401),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result259__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value610=_inf_value22));
            if(right_401) { right_401 = come_decrement_ref_count2(right_401, ((struct sNode*)right_401)->finalize, ((struct sNode*)right_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value605,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value610) { __right_value610 = come_decrement_ref_count2(__right_value610, ((struct sNode*)__right_value610)->finalize, ((struct sNode*)__right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result259__;
            if(right_401) { right_401 = come_decrement_ref_count2(right_401, ((struct sNode*)right_401)->finalize, ((struct sNode*)right_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_403=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1844, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value613=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1844, "sGtNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_403),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result262__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value23));
            if(right_403) { right_403 = come_decrement_ref_count2(right_403, ((struct sNode*)right_403)->finalize, ((struct sNode*)right_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value613,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result262__;
            if(right_403) { right_403 = come_decrement_ref_count2(right_403, ((struct sNode*)right_403)->finalize, ((struct sNode*)right_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_405=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1852, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value621=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1852, "sLtNode")),(struct sNode*)come_increment_ref_count(node_390),(struct sNode*)come_increment_ref_count(right_405),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result265__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value626=_inf_value24));
            if(right_405) { right_405 = come_decrement_ref_count2(right_405, ((struct sNode*)right_405)->finalize, ((struct sNode*)right_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value621,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value626) { __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result265__;
            if(right_405) { right_405 = come_decrement_ref_count2(right_405, ((struct sNode*)right_405)->finalize, ((struct sNode*)right_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result266__ = gComeFunResultObject = __result_obj__ = node_390;
    if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj389;
struct sNode* __dec_obj390;
struct sNode* __dec_obj391;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj389=self->sname;
            /*G*/ __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj390=self->mLeft;
            /* U1 */ if(__dec_obj390) { __dec_obj390 = come_decrement_ref_count2(__dec_obj390, ((struct sNode*)__dec_obj390)->finalize, ((struct sNode*)__dec_obj390)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj391=self->mRight;
            /* U1 */ if(__dec_obj391) { __dec_obj391 = come_decrement_ref_count2(__dec_obj391, ((struct sNode*)__dec_obj391)->finalize, ((struct sNode*)__dec_obj391)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result254__;
void* __right_value598 = (void*)0;
struct sGtEqNode* result_400;
void* __right_value599 = (void*)0;
char* __dec_obj392;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj393;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj394;
struct sGtEqNode* __result255__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_400=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"));
    if(    self!=((void*)0)) {
        result_400->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj392=result_400->sname;
        result_400->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_400->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj393=result_400->mLeft;
        result_400->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj393) { __dec_obj393 = come_decrement_ref_count2(__dec_obj393, ((struct sNode*)__dec_obj393)->finalize, ((struct sNode*)__dec_obj393)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj394=result_400->mRight;
        result_400->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj394) { __dec_obj394 = come_decrement_ref_count2(__dec_obj394, ((struct sNode*)__dec_obj394)->finalize, ((struct sNode*)__dec_obj394)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_400;
    /*i*/come_call_finalizer3(result_400,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj395;
struct sNode* __dec_obj396;
struct sNode* __dec_obj397;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj395=self->sname;
            /*G*/ __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj396=self->mLeft;
            /* U1 */ if(__dec_obj396) { __dec_obj396 = come_decrement_ref_count2(__dec_obj396, ((struct sNode*)__dec_obj396)->finalize, ((struct sNode*)__dec_obj396)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj397=self->mRight;
            /* U1 */ if(__dec_obj397) { __dec_obj397 = come_decrement_ref_count2(__dec_obj397, ((struct sNode*)__dec_obj397)->finalize, ((struct sNode*)__dec_obj397)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result257__;
void* __right_value606 = (void*)0;
struct sLtEqNode* result_402;
void* __right_value607 = (void*)0;
char* __dec_obj398;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj399;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj400;
struct sLtEqNode* __result258__;
    if(    self==(void*)0) {
        __result257__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_402=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"));
    if(    self!=((void*)0)) {
        result_402->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj398=result_402->sname;
        result_402->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj398 = come_decrement_ref_count2(__dec_obj398, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_402->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj399=result_402->mLeft;
        result_402->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj399) { __dec_obj399 = come_decrement_ref_count2(__dec_obj399, ((struct sNode*)__dec_obj399)->finalize, ((struct sNode*)__dec_obj399)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj400=result_402->mRight;
        result_402->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj400) { __dec_obj400 = come_decrement_ref_count2(__dec_obj400, ((struct sNode*)__dec_obj400)->finalize, ((struct sNode*)__dec_obj400)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_402;
    /*i*/come_call_finalizer3(result_402,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj401;
struct sNode* __dec_obj402;
struct sNode* __dec_obj403;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj401=self->sname;
            /*G*/ __dec_obj401 = come_decrement_ref_count2(__dec_obj401, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj402=self->mLeft;
            /* U1 */ if(__dec_obj402) { __dec_obj402 = come_decrement_ref_count2(__dec_obj402, ((struct sNode*)__dec_obj402)->finalize, ((struct sNode*)__dec_obj402)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj403=self->mRight;
            /* U1 */ if(__dec_obj403) { __dec_obj403 = come_decrement_ref_count2(__dec_obj403, ((struct sNode*)__dec_obj403)->finalize, ((struct sNode*)__dec_obj403)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result260__;
void* __right_value614 = (void*)0;
struct sGtNode* result_404;
void* __right_value615 = (void*)0;
char* __dec_obj404;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj405;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj406;
struct sGtNode* __result261__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_404=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"));
    if(    self!=((void*)0)) {
        result_404->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj404=result_404->sname;
        result_404->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj404 = come_decrement_ref_count2(__dec_obj404, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_404->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj405=result_404->mLeft;
        result_404->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj405) { __dec_obj405 = come_decrement_ref_count2(__dec_obj405, ((struct sNode*)__dec_obj405)->finalize, ((struct sNode*)__dec_obj405)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj406=result_404->mRight;
        result_404->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj406) { __dec_obj406 = come_decrement_ref_count2(__dec_obj406, ((struct sNode*)__dec_obj406)->finalize, ((struct sNode*)__dec_obj406)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_404;
    /*i*/come_call_finalizer3(result_404,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value627 = (void*)0;
struct sNode* node_407;
void* __right_value628 = (void*)0;
struct sNode* right_408;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value635 = (void*)0;
struct sNode* __result269__;
void* __right_value636 = (void*)0;
struct sNode* right_410;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value643 = (void*)0;
struct sNode* __result272__;
void* __right_value644 = (void*)0;
struct sNode* right_412;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value651 = (void*)0;
struct sNode* __result275__;
void* __right_value652 = (void*)0;
struct sNode* right_414;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value659 = (void*)0;
struct sNode* __result278__;
void* __right_value660 = (void*)0;
struct sNode* right_416;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value667 = (void*)0;
struct sNode* __result281__;
void* __right_value668 = (void*)0;
struct sNode* right_418;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value675 = (void*)0;
struct sNode* __result284__;
void* __right_value676 = (void*)0;
struct sNode* right_420;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value683 = (void*)0;
struct sNode* __result287__;
void* __right_value684 = (void*)0;
struct sNode* right_422;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value691 = (void*)0;
struct sNode* __result290__;
struct sNode* __result291__;
    parse_sharp_v5(info);
    node_407=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_408=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1879, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value630=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1879, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_408),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result269__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value635=_inf_value25));
            if(right_408) { right_408 = come_decrement_ref_count2(right_408, ((struct sNode*)right_408)->finalize, ((struct sNode*)right_408)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value630,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value635) { __right_value635 = come_decrement_ref_count2(__right_value635, ((struct sNode*)__right_value635)->finalize, ((struct sNode*)__right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result269__;
            if(right_408) { right_408 = come_decrement_ref_count2(right_408, ((struct sNode*)right_408)->finalize, ((struct sNode*)right_408)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_410=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1887, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value638=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1887, "sEqNode")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_410),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result272__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=_inf_value26));
            if(right_410) { right_410 = come_decrement_ref_count2(right_410, ((struct sNode*)right_410)->finalize, ((struct sNode*)right_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value638,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value643) { __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result272__;
            if(right_410) { right_410 = come_decrement_ref_count2(right_410, ((struct sNode*)right_410)->finalize, ((struct sNode*)right_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_412=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1895, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value646=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1895, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_412),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result275__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value651=_inf_value27));
            if(right_412) { right_412 = come_decrement_ref_count2(right_412, ((struct sNode*)right_412)->finalize, ((struct sNode*)right_412)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value646,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value651) { __right_value651 = come_decrement_ref_count2(__right_value651, ((struct sNode*)__right_value651)->finalize, ((struct sNode*)__right_value651)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result275__;
            if(right_412) { right_412 = come_decrement_ref_count2(right_412, ((struct sNode*)right_412)->finalize, ((struct sNode*)right_412)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_414=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1903, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value654=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1903, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_414),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result278__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value28));
            if(right_414) { right_414 = come_decrement_ref_count2(right_414, ((struct sNode*)right_414)->finalize, ((struct sNode*)right_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value654,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result278__;
            if(right_414) { right_414 = come_decrement_ref_count2(right_414, ((struct sNode*)right_414)->finalize, ((struct sNode*)right_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            skip_spaces_and_lf(info);
            right_416=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1911, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value662=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1911, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_416),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result281__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value29));
            if(right_416) { right_416 = come_decrement_ref_count2(right_416, ((struct sNode*)right_416)->finalize, ((struct sNode*)right_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value662,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result281__;
            if(right_416) { right_416 = come_decrement_ref_count2(right_416, ((struct sNode*)right_416)->finalize, ((struct sNode*)right_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_418=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1919, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value670=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1919, "sEqNode")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_418),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result284__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value675=_inf_value30));
            if(right_418) { right_418 = come_decrement_ref_count2(right_418, ((struct sNode*)right_418)->finalize, ((struct sNode*)right_418)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value670,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value675) { __right_value675 = come_decrement_ref_count2(__right_value675, ((struct sNode*)__right_value675)->finalize, ((struct sNode*)__right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result284__;
            if(right_418) { right_418 = come_decrement_ref_count2(right_418, ((struct sNode*)right_418)->finalize, ((struct sNode*)right_418)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            skip_spaces_and_lf(info);
            right_420=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1927, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value678=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1927, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_420),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result287__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value683=_inf_value31));
            if(right_420) { right_420 = come_decrement_ref_count2(right_420, ((struct sNode*)right_420)->finalize, ((struct sNode*)right_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value678,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value683) { __right_value683 = come_decrement_ref_count2(__right_value683, ((struct sNode*)__right_value683)->finalize, ((struct sNode*)__right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result287__;
            if(right_420) { right_420 = come_decrement_ref_count2(right_420, ((struct sNode*)right_420)->finalize, ((struct sNode*)right_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_422=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1935, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value686=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1935, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_407),(struct sNode*)come_increment_ref_count(right_422),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result290__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value691=_inf_value32));
            if(right_422) { right_422 = come_decrement_ref_count2(right_422, ((struct sNode*)right_422)->finalize, ((struct sNode*)right_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value686,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value691) { __right_value691 = come_decrement_ref_count2(__right_value691, ((struct sNode*)__right_value691)->finalize, ((struct sNode*)__right_value691)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result290__;
            if(right_422) { right_422 = come_decrement_ref_count2(right_422, ((struct sNode*)right_422)->finalize, ((struct sNode*)right_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result291__ = gComeFunResultObject = __result_obj__ = node_407;
    if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj437;
struct sNode* __dec_obj438;
struct sNode* __dec_obj439;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj437=self->sname;
            /*G*/ __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj438=self->mLeft;
            /* U1 */ if(__dec_obj438) { __dec_obj438 = come_decrement_ref_count2(__dec_obj438, ((struct sNode*)__dec_obj438)->finalize, ((struct sNode*)__dec_obj438)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj439=self->mRight;
            /* U1 */ if(__dec_obj439) { __dec_obj439 = come_decrement_ref_count2(__dec_obj439, ((struct sNode*)__dec_obj439)->finalize, ((struct sNode*)__dec_obj439)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result279__;
void* __right_value663 = (void*)0;
struct sEq2Node* result_417;
void* __right_value664 = (void*)0;
char* __dec_obj440;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj441;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj442;
struct sEq2Node* __result280__;
    if(    self==(void*)0) {
        __result279__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_417=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"));
    if(    self!=((void*)0)) {
        result_417->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj440=result_417->sname;
        result_417->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_417->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj441=result_417->mLeft;
        result_417->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj441) { __dec_obj441 = come_decrement_ref_count2(__dec_obj441, ((struct sNode*)__dec_obj441)->finalize, ((struct sNode*)__dec_obj441)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj442=result_417->mRight;
        result_417->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj442) { __dec_obj442 = come_decrement_ref_count2(__dec_obj442, ((struct sNode*)__dec_obj442)->finalize, ((struct sNode*)__dec_obj442)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_417;
    /*i*/come_call_finalizer3(result_417,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj443;
struct sNode* __dec_obj444;
struct sNode* __dec_obj445;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj443=self->sname;
            /*G*/ __dec_obj443 = come_decrement_ref_count2(__dec_obj443, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj444=self->mLeft;
            /* U1 */ if(__dec_obj444) { __dec_obj444 = come_decrement_ref_count2(__dec_obj444, ((struct sNode*)__dec_obj444)->finalize, ((struct sNode*)__dec_obj444)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj445=self->mRight;
            /* U1 */ if(__dec_obj445) { __dec_obj445 = come_decrement_ref_count2(__dec_obj445, ((struct sNode*)__dec_obj445)->finalize, ((struct sNode*)__dec_obj445)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result282__;
void* __right_value671 = (void*)0;
struct sEqNode* result_419;
void* __right_value672 = (void*)0;
char* __dec_obj446;
void* __right_value673 = (void*)0;
struct sNode* __dec_obj447;
void* __right_value674 = (void*)0;
struct sNode* __dec_obj448;
struct sEqNode* __result283__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_419=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"));
    if(    self!=((void*)0)) {
        result_419->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj446=result_419->sname;
        result_419->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj446 = come_decrement_ref_count2(__dec_obj446, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj447=result_419->mLeft;
        result_419->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj447) { __dec_obj447 = come_decrement_ref_count2(__dec_obj447, ((struct sNode*)__dec_obj447)->finalize, ((struct sNode*)__dec_obj447)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj448=result_419->mRight;
        result_419->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj448) { __dec_obj448 = come_decrement_ref_count2(__dec_obj448, ((struct sNode*)__dec_obj448)->finalize, ((struct sNode*)__dec_obj448)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_419;
    /*i*/come_call_finalizer3(result_419,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj449;
struct sNode* __dec_obj450;
struct sNode* __dec_obj451;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj449=self->sname;
            /*G*/ __dec_obj449 = come_decrement_ref_count2(__dec_obj449, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj450=self->mLeft;
            /* U1 */ if(__dec_obj450) { __dec_obj450 = come_decrement_ref_count2(__dec_obj450, ((struct sNode*)__dec_obj450)->finalize, ((struct sNode*)__dec_obj450)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj451=self->mRight;
            /* U1 */ if(__dec_obj451) { __dec_obj451 = come_decrement_ref_count2(__dec_obj451, ((struct sNode*)__dec_obj451)->finalize, ((struct sNode*)__dec_obj451)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result285__;
void* __right_value679 = (void*)0;
struct sNotEq2Node* result_421;
void* __right_value680 = (void*)0;
char* __dec_obj452;
void* __right_value681 = (void*)0;
struct sNode* __dec_obj453;
void* __right_value682 = (void*)0;
struct sNode* __dec_obj454;
struct sNotEq2Node* __result286__;
    if(    self==(void*)0) {
        __result285__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_421=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"));
    if(    self!=((void*)0)) {
        result_421->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj452=result_421->sname;
        result_421->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj452 = come_decrement_ref_count2(__dec_obj452, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj453=result_421->mLeft;
        result_421->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj453) { __dec_obj453 = come_decrement_ref_count2(__dec_obj453, ((struct sNode*)__dec_obj453)->finalize, ((struct sNode*)__dec_obj453)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj454=result_421->mRight;
        result_421->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj454) { __dec_obj454 = come_decrement_ref_count2(__dec_obj454, ((struct sNode*)__dec_obj454)->finalize, ((struct sNode*)__dec_obj454)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_421;
    /*i*/come_call_finalizer3(result_421,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj455;
struct sNode* __dec_obj456;
struct sNode* __dec_obj457;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj455=self->sname;
            /*G*/ __dec_obj455 = come_decrement_ref_count2(__dec_obj455, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj456=self->mLeft;
            /* U1 */ if(__dec_obj456) { __dec_obj456 = come_decrement_ref_count2(__dec_obj456, ((struct sNode*)__dec_obj456)->finalize, ((struct sNode*)__dec_obj456)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj457=self->mRight;
            /* U1 */ if(__dec_obj457) { __dec_obj457 = come_decrement_ref_count2(__dec_obj457, ((struct sNode*)__dec_obj457)->finalize, ((struct sNode*)__dec_obj457)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result288__;
void* __right_value687 = (void*)0;
struct sNotEqNode* result_423;
void* __right_value688 = (void*)0;
char* __dec_obj458;
void* __right_value689 = (void*)0;
struct sNode* __dec_obj459;
void* __right_value690 = (void*)0;
struct sNode* __dec_obj460;
struct sNotEqNode* __result289__;
    if(    self==(void*)0) {
        __result288__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    result_423=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"));
    if(    self!=((void*)0)) {
        result_423->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj458=result_423->sname;
        result_423->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj458 = come_decrement_ref_count2(__dec_obj458, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj459=result_423->mLeft;
        result_423->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj459) { __dec_obj459 = come_decrement_ref_count2(__dec_obj459, ((struct sNode*)__dec_obj459)->finalize, ((struct sNode*)__dec_obj459)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj460=result_423->mRight;
        result_423->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj460) { __dec_obj460 = come_decrement_ref_count2(__dec_obj460, ((struct sNode*)__dec_obj460)->finalize, ((struct sNode*)__dec_obj460)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result289__ = gComeFunResultObject = __result_obj__ = result_423;
    /*i*/come_call_finalizer3(result_423,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value692 = (void*)0;
struct sNode* node_424;
void* __right_value693 = (void*)0;
struct sNode* right_425;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value700 = (void*)0;
struct sNode* __result294__;
void* __right_value701 = (void*)0;
struct sNode* right_427;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value708 = (void*)0;
struct sNode* __result297__;
struct sNode* __result298__;
    parse_sharp_v5(info);
    node_424=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_424->terminated(node_424->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_425=(struct sNode*)come_increment_ref_count(and_exp(info));
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1962, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value695=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1962, "sAndNode")),(struct sNode*)come_increment_ref_count(node_424),(struct sNode*)come_increment_ref_count(right_425),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value700=_inf_value33));
            if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value695,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value700) { __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result294__;
            if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_424->terminated(node_424->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_427=(struct sNode*)come_increment_ref_count(and_exp(info));
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1970, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value703=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1970, "sAndNode")),(struct sNode*)come_increment_ref_count(node_424),(struct sNode*)come_increment_ref_count(right_427),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result297__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value708=_inf_value34));
            if(right_427) { right_427 = come_decrement_ref_count2(right_427, ((struct sNode*)right_427)->finalize, ((struct sNode*)right_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value703,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value708) { __right_value708 = come_decrement_ref_count2(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result297__;
            if(right_427) { right_427 = come_decrement_ref_count2(right_427, ((struct sNode*)right_427)->finalize, ((struct sNode*)right_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result298__ = gComeFunResultObject = __result_obj__ = node_424;
    if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj467;
struct sNode* __dec_obj468;
struct sNode* __dec_obj469;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj467=self->sname;
            /*G*/ __dec_obj467 = come_decrement_ref_count2(__dec_obj467, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj468=self->mLeft;
            /* U1 */ if(__dec_obj468) { __dec_obj468 = come_decrement_ref_count2(__dec_obj468, ((struct sNode*)__dec_obj468)->finalize, ((struct sNode*)__dec_obj468)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj469=self->mRight;
            /* U1 */ if(__dec_obj469) { __dec_obj469 = come_decrement_ref_count2(__dec_obj469, ((struct sNode*)__dec_obj469)->finalize, ((struct sNode*)__dec_obj469)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result295__;
void* __right_value704 = (void*)0;
struct sAndNode* result_428;
void* __right_value705 = (void*)0;
char* __dec_obj470;
void* __right_value706 = (void*)0;
struct sNode* __dec_obj471;
void* __right_value707 = (void*)0;
struct sNode* __dec_obj472;
struct sAndNode* __result296__;
    if(    self==(void*)0) {
        __result295__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    result_428=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"));
    if(    self!=((void*)0)) {
        result_428->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj470=result_428->sname;
        result_428->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj470 = come_decrement_ref_count2(__dec_obj470, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_428->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj471=result_428->mLeft;
        result_428->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj471) { __dec_obj471 = come_decrement_ref_count2(__dec_obj471, ((struct sNode*)__dec_obj471)->finalize, ((struct sNode*)__dec_obj471)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj472=result_428->mRight;
        result_428->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj472) { __dec_obj472 = come_decrement_ref_count2(__dec_obj472, ((struct sNode*)__dec_obj472)->finalize, ((struct sNode*)__dec_obj472)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result296__ = gComeFunResultObject = __result_obj__ = result_428;
    /*i*/come_call_finalizer3(result_428,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value709 = (void*)0;
struct sNode* node_429;
void* __right_value710 = (void*)0;
struct sNode* right_430;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value717 = (void*)0;
struct sNode* __result301__;
void* __right_value718 = (void*)0;
struct sNode* right_432;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value725 = (void*)0;
struct sNode* __result304__;
struct sNode* __result305__;
    parse_sharp_v5(info);
    node_429=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_430=(struct sNode*)come_increment_ref_count(xor_exp(info));
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1997, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value712=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1997, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_429),(struct sNode*)come_increment_ref_count(right_430),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value717=_inf_value35));
            if(right_430) { right_430 = come_decrement_ref_count2(right_430, ((struct sNode*)right_430)->finalize, ((struct sNode*)right_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value712,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value717) { __right_value717 = come_decrement_ref_count2(__right_value717, ((struct sNode*)__right_value717)->finalize, ((struct sNode*)__right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result301__;
            if(right_430) { right_430 = come_decrement_ref_count2(right_430, ((struct sNode*)right_430)->finalize, ((struct sNode*)right_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_432=(struct sNode*)come_increment_ref_count(xor_exp(info));
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2005, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value720=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2005, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_429),(struct sNode*)come_increment_ref_count(right_432),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result304__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value725=_inf_value36));
            if(right_432) { right_432 = come_decrement_ref_count2(right_432, ((struct sNode*)right_432)->finalize, ((struct sNode*)right_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value720,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value725) { __right_value725 = come_decrement_ref_count2(__right_value725, ((struct sNode*)__right_value725)->finalize, ((struct sNode*)__right_value725)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result304__;
            if(right_432) { right_432 = come_decrement_ref_count2(right_432, ((struct sNode*)right_432)->finalize, ((struct sNode*)right_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result305__ = gComeFunResultObject = __result_obj__ = node_429;
    if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj479;
struct sNode* __dec_obj480;
struct sNode* __dec_obj481;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj479=self->sname;
            /*G*/ __dec_obj479 = come_decrement_ref_count2(__dec_obj479, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj480=self->mLeft;
            /* U1 */ if(__dec_obj480) { __dec_obj480 = come_decrement_ref_count2(__dec_obj480, ((struct sNode*)__dec_obj480)->finalize, ((struct sNode*)__dec_obj480)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj481=self->mRight;
            /* U1 */ if(__dec_obj481) { __dec_obj481 = come_decrement_ref_count2(__dec_obj481, ((struct sNode*)__dec_obj481)->finalize, ((struct sNode*)__dec_obj481)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result302__;
void* __right_value721 = (void*)0;
struct sXOrNode* result_433;
void* __right_value722 = (void*)0;
char* __dec_obj482;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj483;
void* __right_value724 = (void*)0;
struct sNode* __dec_obj484;
struct sXOrNode* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_433=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"));
    if(    self!=((void*)0)) {
        result_433->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj482=result_433->sname;
        result_433->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj482 = come_decrement_ref_count2(__dec_obj482, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_433->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj483=result_433->mLeft;
        result_433->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj483) { __dec_obj483 = come_decrement_ref_count2(__dec_obj483, ((struct sNode*)__dec_obj483)->finalize, ((struct sNode*)__dec_obj483)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj484=result_433->mRight;
        result_433->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj484) { __dec_obj484 = come_decrement_ref_count2(__dec_obj484, ((struct sNode*)__dec_obj484)->finalize, ((struct sNode*)__dec_obj484)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_433;
    /*i*/come_call_finalizer3(result_433,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value726 = (void*)0;
struct sNode* node_434;
void* __right_value727 = (void*)0;
struct sNode* right_435;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value734 = (void*)0;
struct sNode* __result308__;
void* __right_value735 = (void*)0;
struct sNode* right_437;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value742 = (void*)0;
struct sNode* __result311__;
struct sNode* __result312__;
    parse_sharp_v5(info);
    node_434=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            skip_spaces_and_lf(info);
            right_435=(struct sNode*)come_increment_ref_count(or_exp(info));
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2032, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value729=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2032, "sOrNode")),(struct sNode*)come_increment_ref_count(node_434),(struct sNode*)come_increment_ref_count(right_435),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value734=_inf_value37));
            if(right_435) { right_435 = come_decrement_ref_count2(right_435, ((struct sNode*)right_435)->finalize, ((struct sNode*)right_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value729,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value734) { __right_value734 = come_decrement_ref_count2(__right_value734, ((struct sNode*)__right_value734)->finalize, ((struct sNode*)__right_value734)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result308__;
            if(right_435) { right_435 = come_decrement_ref_count2(right_435, ((struct sNode*)right_435)->finalize, ((struct sNode*)right_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_437=(struct sNode*)come_increment_ref_count(or_exp(info));
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2040, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value737=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2040, "sOrNode")),(struct sNode*)come_increment_ref_count(node_434),(struct sNode*)come_increment_ref_count(right_437),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result311__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value742=_inf_value38));
            if(right_437) { right_437 = come_decrement_ref_count2(right_437, ((struct sNode*)right_437)->finalize, ((struct sNode*)right_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value737,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value742) { __right_value742 = come_decrement_ref_count2(__right_value742, ((struct sNode*)__right_value742)->finalize, ((struct sNode*)__right_value742)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result311__;
            if(right_437) { right_437 = come_decrement_ref_count2(right_437, ((struct sNode*)right_437)->finalize, ((struct sNode*)right_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result312__ = gComeFunResultObject = __result_obj__ = node_434;
    if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj491;
struct sNode* __dec_obj492;
struct sNode* __dec_obj493;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj491=self->sname;
            /*G*/ __dec_obj491 = come_decrement_ref_count2(__dec_obj491, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj492=self->mLeft;
            /* U1 */ if(__dec_obj492) { __dec_obj492 = come_decrement_ref_count2(__dec_obj492, ((struct sNode*)__dec_obj492)->finalize, ((struct sNode*)__dec_obj492)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj493=self->mRight;
            /* U1 */ if(__dec_obj493) { __dec_obj493 = come_decrement_ref_count2(__dec_obj493, ((struct sNode*)__dec_obj493)->finalize, ((struct sNode*)__dec_obj493)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result309__;
void* __right_value738 = (void*)0;
struct sOrNode* result_438;
void* __right_value739 = (void*)0;
char* __dec_obj494;
void* __right_value740 = (void*)0;
struct sNode* __dec_obj495;
void* __right_value741 = (void*)0;
struct sNode* __dec_obj496;
struct sOrNode* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_438=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"));
    if(    self!=((void*)0)) {
        result_438->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj494=result_438->sname;
        result_438->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj494 = come_decrement_ref_count2(__dec_obj494, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj495=result_438->mLeft;
        result_438->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj495) { __dec_obj495 = come_decrement_ref_count2(__dec_obj495, ((struct sNode*)__dec_obj495)->finalize, ((struct sNode*)__dec_obj495)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj496=result_438->mRight;
        result_438->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj496) { __dec_obj496 = come_decrement_ref_count2(__dec_obj496, ((struct sNode*)__dec_obj496)->finalize, ((struct sNode*)__dec_obj496)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_438;
    /*i*/come_call_finalizer3(result_438,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value743 = (void*)0;
struct sNode* node_439;
void* __right_value744 = (void*)0;
struct sNode* right_440;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value751 = (void*)0;
struct sNode* __result315__;
void* __right_value752 = (void*)0;
struct sNode* right_442;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value759 = (void*)0;
struct sNode* __result318__;
struct sNode* __result319__;
    parse_sharp_v5(info);
    node_439=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_440=(struct sNode*)come_increment_ref_count(andand_exp(info));
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2067, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value746=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2067, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_439),(struct sNode*)come_increment_ref_count(right_440),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result315__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value751=_inf_value39));
            if(right_440) { right_440 = come_decrement_ref_count2(right_440, ((struct sNode*)right_440)->finalize, ((struct sNode*)right_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_439) { node_439 = come_decrement_ref_count2(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value746,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value751) { __right_value751 = come_decrement_ref_count2(__right_value751, ((struct sNode*)__right_value751)->finalize, ((struct sNode*)__right_value751)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result315__;
            if(right_440) { right_440 = come_decrement_ref_count2(right_440, ((struct sNode*)right_440)->finalize, ((struct sNode*)right_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_442=(struct sNode*)come_increment_ref_count(andand_exp(info));
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2075, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value754=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2075, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_439),(struct sNode*)come_increment_ref_count(right_442),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result318__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value759=_inf_value40));
            if(right_442) { right_442 = come_decrement_ref_count2(right_442, ((struct sNode*)right_442)->finalize, ((struct sNode*)right_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_439) { node_439 = come_decrement_ref_count2(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value754,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value759) { __right_value759 = come_decrement_ref_count2(__right_value759, ((struct sNode*)__right_value759)->finalize, ((struct sNode*)__right_value759)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result318__;
            if(right_442) { right_442 = come_decrement_ref_count2(right_442, ((struct sNode*)right_442)->finalize, ((struct sNode*)right_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result319__ = gComeFunResultObject = __result_obj__ = node_439;
    if(node_439) { node_439 = come_decrement_ref_count2(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj503;
struct sNode* __dec_obj504;
struct sNode* __dec_obj505;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj503=self->sname;
            /*G*/ __dec_obj503 = come_decrement_ref_count2(__dec_obj503, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj504=self->mLeft;
            /* U1 */ if(__dec_obj504) { __dec_obj504 = come_decrement_ref_count2(__dec_obj504, ((struct sNode*)__dec_obj504)->finalize, ((struct sNode*)__dec_obj504)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj505=self->mRight;
            /* U1 */ if(__dec_obj505) { __dec_obj505 = come_decrement_ref_count2(__dec_obj505, ((struct sNode*)__dec_obj505)->finalize, ((struct sNode*)__dec_obj505)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result316__;
void* __right_value755 = (void*)0;
struct sAndAndNode* result_443;
void* __right_value756 = (void*)0;
char* __dec_obj506;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj507;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj508;
struct sAndAndNode* __result317__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_443=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"));
    if(    self!=((void*)0)) {
        result_443->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj506=result_443->sname;
        result_443->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj506 = come_decrement_ref_count2(__dec_obj506, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_443->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj507=result_443->mLeft;
        result_443->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj507) { __dec_obj507 = come_decrement_ref_count2(__dec_obj507, ((struct sNode*)__dec_obj507)->finalize, ((struct sNode*)__dec_obj507)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj508=result_443->mRight;
        result_443->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj508) { __dec_obj508 = come_decrement_ref_count2(__dec_obj508, ((struct sNode*)__dec_obj508)->finalize, ((struct sNode*)__dec_obj508)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_443;
    /*i*/come_call_finalizer3(result_443,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value760 = (void*)0;
struct sNode* node_444;
void* __right_value761 = (void*)0;
struct sNode* right_445;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value768 = (void*)0;
struct sNode* __result322__;
void* __right_value769 = (void*)0;
struct sNode* right_447;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value776 = (void*)0;
struct sNode* __result325__;
struct sNode* __result326__;
    parse_sharp_v5(info);
    node_444=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_445=(struct sNode*)come_increment_ref_count(oror_exp(info));
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2102, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value763=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2102, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_444),(struct sNode*)come_increment_ref_count(right_445),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value768=_inf_value41));
            if(right_445) { right_445 = come_decrement_ref_count2(right_445, ((struct sNode*)right_445)->finalize, ((struct sNode*)right_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_444) { node_444 = come_decrement_ref_count2(node_444, ((struct sNode*)node_444)->finalize, ((struct sNode*)node_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value763,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value768) { __right_value768 = come_decrement_ref_count2(__right_value768, ((struct sNode*)__right_value768)->finalize, ((struct sNode*)__right_value768)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result322__;
            if(right_445) { right_445 = come_decrement_ref_count2(right_445, ((struct sNode*)right_445)->finalize, ((struct sNode*)right_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_447=(struct sNode*)come_increment_ref_count(oror_exp(info));
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2110, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value771=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2110, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_444),(struct sNode*)come_increment_ref_count(right_447),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result325__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value776=_inf_value42));
            if(right_447) { right_447 = come_decrement_ref_count2(right_447, ((struct sNode*)right_447)->finalize, ((struct sNode*)right_447)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_444) { node_444 = come_decrement_ref_count2(node_444, ((struct sNode*)node_444)->finalize, ((struct sNode*)node_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value771,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value776) { __right_value776 = come_decrement_ref_count2(__right_value776, ((struct sNode*)__right_value776)->finalize, ((struct sNode*)__right_value776)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result325__;
            if(right_447) { right_447 = come_decrement_ref_count2(right_447, ((struct sNode*)right_447)->finalize, ((struct sNode*)right_447)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result326__ = gComeFunResultObject = __result_obj__ = node_444;
    if(node_444) { node_444 = come_decrement_ref_count2(node_444, ((struct sNode*)node_444)->finalize, ((struct sNode*)node_444)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj515;
struct sNode* __dec_obj516;
struct sNode* __dec_obj517;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj515=self->sname;
            /*G*/ __dec_obj515 = come_decrement_ref_count2(__dec_obj515, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj516=self->mLeft;
            /* U1 */ if(__dec_obj516) { __dec_obj516 = come_decrement_ref_count2(__dec_obj516, ((struct sNode*)__dec_obj516)->finalize, ((struct sNode*)__dec_obj516)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj517=self->mRight;
            /* U1 */ if(__dec_obj517) { __dec_obj517 = come_decrement_ref_count2(__dec_obj517, ((struct sNode*)__dec_obj517)->finalize, ((struct sNode*)__dec_obj517)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result323__;
void* __right_value772 = (void*)0;
struct sOrOrNode* result_448;
void* __right_value773 = (void*)0;
char* __dec_obj518;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj519;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj520;
struct sOrOrNode* __result324__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_448=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"));
    if(    self!=((void*)0)) {
        result_448->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj518=result_448->sname;
        result_448->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj518 = come_decrement_ref_count2(__dec_obj518, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_448->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj519=result_448->mLeft;
        result_448->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj519) { __dec_obj519 = come_decrement_ref_count2(__dec_obj519, ((struct sNode*)__dec_obj519)->finalize, ((struct sNode*)__dec_obj519)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj520=result_448->mRight;
        result_448->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj520) { __dec_obj520 = come_decrement_ref_count2(__dec_obj520, ((struct sNode*)__dec_obj520)->finalize, ((struct sNode*)__dec_obj520)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_448;
    /*i*/come_call_finalizer3(result_448,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value777 = (void*)0;
struct sNode* node_449;
void* __right_value778 = (void*)0;
struct sNode* node2_450;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value785 = (void*)0;
struct sNode* __result329__;
struct sNode* __result330__;
    parse_sharp_v5(info);
    node_449=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_450=(struct sNode*)come_increment_ref_count(comma_exp(info));
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2137, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value780=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2137, "sCommaNode")),(struct sNode*)come_increment_ref_count(node_449),(struct sNode*)come_increment_ref_count(node2_450),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result329__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value785=_inf_value43));
            if(node2_450) { node2_450 = come_decrement_ref_count2(node2_450, ((struct sNode*)node2_450)->finalize, ((struct sNode*)node2_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value780,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value785) { __right_value785 = come_decrement_ref_count2(__right_value785, ((struct sNode*)__right_value785)->finalize, ((struct sNode*)__right_value785)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result329__;
            if(node2_450) { node2_450 = come_decrement_ref_count2(node2_450, ((struct sNode*)node2_450)->finalize, ((struct sNode*)node2_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result330__ = gComeFunResultObject = __result_obj__ = node_449;
    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj521;
struct sNode* __dec_obj522;
struct sNode* __dec_obj523;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj521=self->sname;
            /*G*/ __dec_obj521 = come_decrement_ref_count2(__dec_obj521, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj522=self->mLeft;
            /* U1 */ if(__dec_obj522) { __dec_obj522 = come_decrement_ref_count2(__dec_obj522, ((struct sNode*)__dec_obj522)->finalize, ((struct sNode*)__dec_obj522)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj523=self->mRight;
            /* U1 */ if(__dec_obj523) { __dec_obj523 = come_decrement_ref_count2(__dec_obj523, ((struct sNode*)__dec_obj523)->finalize, ((struct sNode*)__dec_obj523)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result327__;
void* __right_value781 = (void*)0;
struct sCommaNode* result_451;
void* __right_value782 = (void*)0;
char* __dec_obj524;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj525;
void* __right_value784 = (void*)0;
struct sNode* __dec_obj526;
struct sCommaNode* __result328__;
    if(    self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_451=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"));
    if(    self!=((void*)0)) {
        result_451->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj524=result_451->sname;
        result_451->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj524 = come_decrement_ref_count2(__dec_obj524, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj525=result_451->mLeft;
        result_451->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj525) { __dec_obj525 = come_decrement_ref_count2(__dec_obj525, ((struct sNode*)__dec_obj525)->finalize, ((struct sNode*)__dec_obj525)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj526=result_451->mRight;
        result_451->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj526) { __dec_obj526 = come_decrement_ref_count2(__dec_obj526, ((struct sNode*)__dec_obj526)->finalize, ((struct sNode*)__dec_obj526)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_451;
    /*i*/come_call_finalizer3(result_451,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value786 = (void*)0;
struct sNode* node_452;
struct sNode* value1_453;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value791 = (void*)0;
struct sNode* __dec_obj529;
_Bool no_label_455;
void* __right_value792 = (void*)0;
struct sNode* __dec_obj530;
void* __right_value793 = (void*)0;
struct sNode* value2_456;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value801 = (void*)0;
struct sNode* __result335__;
struct sNode* __result336__;
value1_453 = (void*)0;
    parse_sharp_v5(info);
    node_452=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2166, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value788=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2166, "sNullNode")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj529=value1_453;
                value1_453=(struct sNode*)come_increment_ref_count(_inf_value44);
                /* U1 */ if(__dec_obj529) { __dec_obj529 = come_decrement_ref_count2(__dec_obj529, ((struct sNode*)__dec_obj529)->finalize, ((struct sNode*)__dec_obj529)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value788,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_455=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj530=value1_453;
                value1_453=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                /* U1 */ if(__dec_obj530) { __dec_obj530 = come_decrement_ref_count2(__dec_obj530, ((struct sNode*)__dec_obj530)->finalize, ((struct sNode*)__dec_obj530)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_455;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_456=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2183, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value795=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2183, "sConditionalNode")),(struct sNode*)come_increment_ref_count(node_452),(struct sNode*)come_increment_ref_count(value1_453),(struct sNode*)come_increment_ref_count(value2_456),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value801=_inf_value45));
            if(value1_453) { value1_453 = come_decrement_ref_count2(value1_453, ((struct sNode*)value1_453)->finalize, ((struct sNode*)value1_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_456) { value2_456 = come_decrement_ref_count2(value2_456, ((struct sNode*)value2_456)->finalize, ((struct sNode*)value2_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_452) { node_452 = come_decrement_ref_count2(node_452, ((struct sNode*)node_452)->finalize, ((struct sNode*)node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value795,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value801) { __right_value801 = come_decrement_ref_count2(__right_value801, ((struct sNode*)__right_value801)->finalize, ((struct sNode*)__right_value801)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result335__;
            if(value1_453) { value1_453 = come_decrement_ref_count2(value1_453, ((struct sNode*)value1_453)->finalize, ((struct sNode*)value1_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_456) { value2_456 = come_decrement_ref_count2(value2_456, ((struct sNode*)value2_456)->finalize, ((struct sNode*)value2_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result336__ = gComeFunResultObject = __result_obj__ = node_452;
    if(node_452) { node_452 = come_decrement_ref_count2(node_452, ((struct sNode*)node_452)->finalize, ((struct sNode*)node_452)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj531;
struct sNode* __dec_obj532;
struct sNode* __dec_obj533;
struct sNode* __dec_obj534;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj531=self->sname;
            /*G*/ __dec_obj531 = come_decrement_ref_count2(__dec_obj531, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj532=self->mValue1;
            /* U1 */ if(__dec_obj532) { __dec_obj532 = come_decrement_ref_count2(__dec_obj532, ((struct sNode*)__dec_obj532)->finalize, ((struct sNode*)__dec_obj532)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj533=self->mValue2;
            /* U1 */ if(__dec_obj533) { __dec_obj533 = come_decrement_ref_count2(__dec_obj533, ((struct sNode*)__dec_obj533)->finalize, ((struct sNode*)__dec_obj533)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj534=self->mValue3;
            /* U1 */ if(__dec_obj534) { __dec_obj534 = come_decrement_ref_count2(__dec_obj534, ((struct sNode*)__dec_obj534)->finalize, ((struct sNode*)__dec_obj534)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result333__;
void* __right_value796 = (void*)0;
struct sConditionalNode* result_457;
void* __right_value797 = (void*)0;
char* __dec_obj535;
void* __right_value798 = (void*)0;
struct sNode* __dec_obj536;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj537;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj538;
struct sConditionalNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_457=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"));
    if(    self!=((void*)0)) {
        result_457->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj535=result_457->sname;
        result_457->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj535 = come_decrement_ref_count2(__dec_obj535, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj536=result_457->mValue1;
        result_457->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        /* U1 */ if(__dec_obj536) { __dec_obj536 = come_decrement_ref_count2(__dec_obj536, ((struct sNode*)__dec_obj536)->finalize, ((struct sNode*)__dec_obj536)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj537=result_457->mValue2;
        result_457->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        /* U1 */ if(__dec_obj537) { __dec_obj537 = come_decrement_ref_count2(__dec_obj537, ((struct sNode*)__dec_obj537)->finalize, ((struct sNode*)__dec_obj537)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj538=result_457->mValue3;
        result_457->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        /* U1 */ if(__dec_obj538) { __dec_obj538 = come_decrement_ref_count2(__dec_obj538, ((struct sNode*)__dec_obj538)->finalize, ((struct sNode*)__dec_obj538)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_457;
    /*i*/come_call_finalizer3(result_457,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value802 = (void*)0;
struct sNode* node_458;
struct sNode* __result337__;
    parse_sharp_v5(info);
    node_458=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result337__ = gComeFunResultObject = __result_obj__ = node_458;
    if(node_458) { node_458 = come_decrement_ref_count2(node_458, ((struct sNode*)node_458)->finalize, ((struct sNode*)node_458)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value807 = (void*)0;
struct sNode* __result340__;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value812 = (void*)0;
struct sNode* __result343__;
void* __right_value813 = (void*)0;
struct sNode* __result344__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2207, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value804=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2207, "sNullNode")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value807=_inf_value46));
        /*g*/come_call_finalizer3(__right_value804,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value807) { __right_value807 = come_decrement_ref_count2(__right_value807, ((struct sNode*)__right_value807)->finalize, ((struct sNode*)__right_value807)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2210, "struct sNode");
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value809=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2210, "sNilNode")),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value812=_inf_value47));
        /*g*/come_call_finalizer3(__right_value809,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value812) { __right_value812 = come_decrement_ref_count2(__right_value812, ((struct sNode*)__right_value812)->finalize, ((struct sNode*)__right_value812)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=string_node_v12(buf,head,head_sline,info)));
    if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj539;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj539=self->sname;
            /*G*/ __dec_obj539 = come_decrement_ref_count2(__dec_obj539, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result338__;
void* __right_value805 = (void*)0;
struct sNullNode* result_459;
void* __right_value806 = (void*)0;
char* __dec_obj540;
struct sNullNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_459=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"));
    if(    self!=((void*)0)) {
        result_459->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj540=result_459->sname;
        result_459->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj540 = come_decrement_ref_count2(__dec_obj540, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_459;
    /*i*/come_call_finalizer3(result_459,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void sNilNode_finalize(struct sNilNode* self){
char* __dec_obj541;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj541=self->sname;
            /*G*/ __dec_obj541 = come_decrement_ref_count2(__dec_obj541, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result341__;
void* __right_value810 = (void*)0;
struct sNilNode* result_460;
void* __right_value811 = (void*)0;
char* __dec_obj542;
struct sNilNode* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_460=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"));
    if(    self!=((void*)0)) {
        result_460->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj542=result_460->sname;
        result_460->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj542 = come_decrement_ref_count2(__dec_obj542, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_460;
    /*i*/come_call_finalizer3(result_460,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value820 = (void*)0;
struct sNode* __result347__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2218, "struct sNode");
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value815=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2218, "sLtNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result347__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value820=_inf_value48));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value815,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj543;
struct sNode* __dec_obj544;
struct sNode* __dec_obj545;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj543=self->sname;
            /*G*/ __dec_obj543 = come_decrement_ref_count2(__dec_obj543, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj544=self->mLeft;
            /* U1 */ if(__dec_obj544) { __dec_obj544 = come_decrement_ref_count2(__dec_obj544, ((struct sNode*)__dec_obj544)->finalize, ((struct sNode*)__dec_obj544)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj545=self->mRight;
            /* U1 */ if(__dec_obj545) { __dec_obj545 = come_decrement_ref_count2(__dec_obj545, ((struct sNode*)__dec_obj545)->finalize, ((struct sNode*)__dec_obj545)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result345__;
void* __right_value816 = (void*)0;
struct sLtNode* result_461;
void* __right_value817 = (void*)0;
char* __dec_obj546;
void* __right_value818 = (void*)0;
struct sNode* __dec_obj547;
void* __right_value819 = (void*)0;
struct sNode* __dec_obj548;
struct sLtNode* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_461=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"));
    if(    self!=((void*)0)) {
        result_461->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj546=result_461->sname;
        result_461->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj546 = come_decrement_ref_count2(__dec_obj546, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj547=result_461->mLeft;
        result_461->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj547) { __dec_obj547 = come_decrement_ref_count2(__dec_obj547, ((struct sNode*)__dec_obj547)->finalize, ((struct sNode*)__dec_obj547)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj548=result_461->mRight;
        result_461->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj548) { __dec_obj548 = come_decrement_ref_count2(__dec_obj548, ((struct sNode*)__dec_obj548)->finalize, ((struct sNode*)__dec_obj548)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_461;
    /*i*/come_call_finalizer3(result_461,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

