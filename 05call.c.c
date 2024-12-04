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
    unsigned char* buf;
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
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
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
struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef unsigned int nfds_t;

struct sReturnNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    char* source;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
};

struct sLineNode
{
    int sline;
    char* sname;
};

struct sSNameNode
{
    int sline;
    char* sname;
};

struct sFuncNode
{
    int sline;
    char* sname;
};

struct sWildCard
{
    int sline;
    char* sname;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* vars;
    struct list$1sBlockph* blocks;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    struct sType* type;
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
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
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
char* buffer_printable(struct buffer* self);
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
char* charp_printable(char* str);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
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
int poll(struct pollfd* anonymous_var_nameX447, unsigned int anonymous_var_nameX448, int anonymous_var_nameX449);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void sComePollNode_finalize(struct sComePollNode* self);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sWildCard_finalize(struct sWildCard* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result2__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2399, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result3__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2406, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result3__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2415, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2422, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2429, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result7__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2436, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result8__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2443, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result8__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2743, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2748, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result11__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result13__;
    __result13__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2753, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result13__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result15__;
    __result15__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2758, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result15__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result17__;
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2763, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result18__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2796, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2798, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result18__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result20__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2803, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2805, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result21__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2810, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2812, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result22__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2817, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2819, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result23__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2824, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result23__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2826, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result23__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result25__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2831, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result25__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2833, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result25__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result27__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2838, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result27__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2840, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result27__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result30__;
    __result30__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2845, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result30__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result33__;
    __result33__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2850, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result36__;
    __result36__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2855, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result39__;
    __result39__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2860, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result42__;
    __result42__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2865, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2870, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2875, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2880, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2885, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result54__;
    __result54__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2890, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result56__;
    __result56__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2895, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result58__;
    __result58__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2900, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2905, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2910, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
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
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value116=string_printable(str)));
    /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

// body function










static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result9__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result9__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result9__;
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
struct smart_pointer$1short* __result12__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result12__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result12__;
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
struct smart_pointer$1int* __result14__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result14__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result14__;
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
struct smart_pointer$1long* __result16__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result16__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result16__;
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
struct smart_pointer$1charp* __result19__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result19__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result19__;
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
struct smart_pointer$1float* __result24__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result24__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result24__;
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
struct smart_pointer$1double* __result26__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result26__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result26__;
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
struct list$1char* __result29__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result29__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result29__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result28__;
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
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result28__;
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
struct list$1charp* __result32__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result32__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result32__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result31__;
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
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
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
struct list$1short* __result35__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result35__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result35__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result34__;
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
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
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
struct list$1int* __result38__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result38__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result38__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result37__;
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
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
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
struct list$1long* __result41__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result41__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result41__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result40__;
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
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
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
struct list$1float* __result44__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result44__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result43__;
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
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
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
struct list$1double* __result47__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result47__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result47__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result46__;
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
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
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
struct vector$1char* __result49__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result49__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result49__;
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
struct vector$1charp* __result51__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result51__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
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
struct vector$1short* __result53__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
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
struct vector$1int* __result55__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
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
struct vector$1long* __result57__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result57__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
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
struct vector$1float* __result59__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
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
struct vector$1double* __result61__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
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












struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value118 = (void*)0;
char* __dec_obj17;
struct sReturnNode* __result67__;
    ((struct sNodeBase*)(__right_value117=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value117,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    /* U1 */ if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj17=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("sReturnNode")));
    /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_66;
void* __right_value156 = (void*)0;
struct sType* result_type_67;
void* __right_value157 = (void*)0;
struct sType* result_type2_98;
struct sType* result_type3_99;
void* __right_value158 = (void*)0;
_Bool _if_conditional1;
void* __right_value159 = (void*)0;
struct sNode* __dec_obj67;
_Bool Value_100;
_Bool __result87__;
void* __right_value160 = (void*)0;
struct CVALUE* come_value_101;
void* __right_value161 = (void*)0;
struct sType* come_value_type_102;
void* __right_value162 = (void*)0;
struct sType* __dec_obj68;
void* __right_value163 = (void*)0;
char* var_name_104;
int num_result_stack_105;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __if_result__0_106 = (void*)0;
struct list$1sVarph* o2_saved_107;
struct sVar* it_110;
struct list$1sVarph* __dec_obj74;
void* __right_value166 = (void*)0;
struct sFun* come_fun_117;
void* __if_result__1_118 = (void*)0;
struct list$1sVarph* o2_saved_119;
struct sVar* it_120;
struct list$1sVarph* __dec_obj78;
void* __right_value167 = (void*)0;
    if(    self->value) {
        come_fun_66=info->come_fun;
        result_type_67=(struct sType*)come_increment_ref_count(sType_clone(come_fun_66->mResultType));
        result_type2_98=(struct sType*)come_increment_ref_count(solve_generics(result_type_67,info->generics_type,info));
        result_type3_99=result_type2_98->mNoSolvedGenericsType->v1;
        if(        result_type2_98->mNoSolvedGenericsType->v1) {
            result_type3_99=result_type2_98->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_99=result_type2_98;
        }
        if(        result_type_67->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value158=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            /* U10 */ (__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj67=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_100=node_compile(self->value,info);
        if(        !Value_100) {
            __result87__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_98,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result87__;
        }
        else {
        }
        come_value_101=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_102=(struct sType*)come_increment_ref_count(solve_generics(come_value_101->type,info->generics_type,info));
        __dec_obj68=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_101->type));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_101->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_66->mBlock,info,come_value_101->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_101->c_value);
        }
        else {
            static int num_result_103=0;
            var_name_104=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_103));
            num_result_stack_105=num_result_103;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_98->mClass->mName)>strlen("tuple")&&memcmp(result_type2_98->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_98,come_value_type_102,come_value_101,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value164=make_define_var(result_type2_98,var_name_104,(_Bool)0,info))));
                /* U11 */__right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_104,come_value_101->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value165=make_define_var(result_type2_98,var_name_104,(_Bool)0,info))));
                /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_104,come_value_101->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_66->mBlock,info,come_value_101->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_107=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_110=list$1sVarph_begin((o2_saved_107));                    !list$1sVarph_end((o2_saved_107));                    it_110=list$1sVarph_next((o2_saved_107))                    ){
                        free_object(it_110->mType,it_110->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_107,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj74=info->match_it_var;
                    __if_result__0_106=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj74,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(__if_result__0_106,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value166=xsprintf("come_heap_final();\n"))));
                /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_105);
            /* U13 */var_name_104 = come_decrement_ref_count2(var_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_98,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_117=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_117->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_119=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_120=list$1sVarph_begin((o2_saved_119));                !list$1sVarph_end((o2_saved_119));                it_120=list$1sVarph_next((o2_saved_119))                ){
                    free_object(it_120->mType,it_120->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                /*i*/come_call_finalizer3(o2_saved_119,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj78=info->match_it_var;
                __if_result__1_118=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj78,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(__if_result__1_118,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value167=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value120 = (void*)0;
struct sType* result_68;
void* __right_value123 = (void*)0;
struct tuple1$1sTypeph* __dec_obj44;
void* __right_value124 = (void*)0;
struct tuple1$1sTypeph* __dec_obj45;
void* __right_value125 = (void*)0;
char* __dec_obj46;
void* __right_value132 = (void*)0;
struct list$1sTypeph* __dec_obj50;
void* __right_value140 = (void*)0;
struct list$1sNodeph* __dec_obj54;
void* __right_value141 = (void*)0;
struct list$1sTypeph* __dec_obj55;
void* __right_value148 = (void*)0;
struct list$1charph* __dec_obj59;
void* __right_value149 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value150 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value151 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value152 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value153 = (void*)0;
char* __dec_obj64;
void* __right_value154 = (void*)0;
char* __dec_obj65;
void* __right_value155 = (void*)0;
char* __dec_obj66;
struct sType* __result86__;
    if(    self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_68=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_68->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj44=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj45=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj46=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj54=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj55=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj59=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj60=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj61=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj62=result_68->mChannelType;
        result_68->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_68->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_68->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_68->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_68->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_68->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_68->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_68->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_68->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_68->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_68->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_68->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_68->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_68->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_68->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_68->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_68->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj63=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj64=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_68->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_68->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_68->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_68->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_68->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_68->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj65=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_68->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_68->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_68->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj66=result_68->mTupleName;
        result_68->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* result_69;
void* __right_value122 = (void*)0;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result71__;
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_69=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj21=result_69->v1;
        result_69->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(result_69,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
char* __dec_obj26;
struct list$1sTypeph* __dec_obj27;
struct list$1sNodeph* __dec_obj29;
struct list$1sTypeph* __dec_obj31;
struct list$1charph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct sNode* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj37;
struct sNode* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj22=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj24=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj27=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj29=self->mArrayNum;
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj31=self->mParamTypes;
            come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj32=self->mParamNames;
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj34=self->mResultType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj36=self->mAlignas;
            /* U1 */ if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj37=self->mChannelType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj39=self->mSizeNum;
            /* U1 */ if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj40=self->mOriginalTypeName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj41=self->mAsmName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj42=self->mTupleName;
            /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_70;
struct list_item$1sTypeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_72;
struct list_item$1sTypeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj30;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            /* U1 */ if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_76;
struct list_item$1sNodeph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
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

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj43=self->v1;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result72__;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1sTypeph* result_82;
struct list_item$1sTypeph* it_83;
void* __right_value131 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_82=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sTypeph"))));
    it_83=self->head;
    while(it_83!=((void*)0)) {
        list$1sTypeph_add(result_82,(struct sType*)come_increment_ref_count(sType_clone(it_83->item)));
        it_83=it_83->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_82;
    /*i*/come_call_finalizer3(result_82,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj47;
void* __right_value129 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj48;
void* __right_value130 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj49;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj47=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1) {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sTypeph"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj48=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sTypeph"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj49=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_86;
        self->tail=litem_86;
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
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
void* __right_value139 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_87=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sNodeph"))));
    it_88=self->head;
    while(it_88!=((void*)0)) {
        list$1sNodeph_add(result_87,(struct sNode*)come_increment_ref_count(sNode_clone(it_88->item)));
        it_88=it_88->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_87;
    /*i*/come_call_finalizer3(result_87,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj51;
void* __right_value136 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj52;
void* __right_value137 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj51=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head=litem_89;
    }
    else if(    self->len==1) {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value136=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sNodeph"))));
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj52=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sNodeph"))));
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj53=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_91;
        self->tail=litem_91;
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
void* __right_value138 = (void*)0;
struct sNode* result_92;
struct sNode* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_92=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_92->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_92->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_92->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_92->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_92->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_92->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_92->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_92->kind=self->kind;
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_92;
    if(result_92) { result_92 = come_decrement_ref_count2(result_92, ((struct sNode*)result_92)->finalize, ((struct sNode*)result_92)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result82__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
void* __right_value147 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_93=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 135, "list$1charph"))));
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1charph_add(result_93,(char*)come_increment_ref_count(string_clone(it_94->item)));
        it_94=it_94->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj56;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj57;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj58;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj56=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else if(    self->len==1) {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1charph"))));
        litem_96->prev=self->head;
        litem_96->next=((void*)0);
        __dec_obj57=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_96;
        self->head->next=litem_96;
    }
    else {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1charph"))));
        litem_97->prev=self->tail;
        litem_97->next=((void*)0);
        __dec_obj58=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_97;
        self->tail=litem_97;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_108;
struct sVar* __result88__;
struct sVar* __result89__;
struct sVar* result_109;
struct sVar* __result90__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_108,0,sizeof(struct sVar*));
        __result88__ = gComeFunResultObject = __result_obj__ = result_108;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    self->it=self->head;
    if(    self->it) {
        __result89__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    memset(&result_109,0,sizeof(struct sVar*));
    __result90__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_111;
struct sVar* __result91__;
struct sVar* __result92__;
struct sVar* result_112;
struct sVar* __result93__;
result_111 = (void*)0;
result_112 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_111,0,sizeof(struct sVar*));
        __result91__ = gComeFunResultObject = __result_obj__ = result_111;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result92__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    memset(&result_112,0,sizeof(struct sVar*));
    __result93__ = gComeFunResultObject = __result_obj__ = result_112;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_113;
struct list_item$1sVarph* prev_it_114;
    it_113=self->head;
    while(it_113!=((void*)0)) {
        prev_it_114=it_113;
        it_113=it_113->next;
        /*i*/come_call_finalizer3(prev_it_114,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj69;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj69=self->item;
            come_call_finalizer3(__dec_obj69,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj70;
char* __dec_obj71;
struct sType* __dec_obj72;
char* __dec_obj73;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj70=self->mName;
            /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj71=self->mCValueName;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj72=self->mType;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj73=self->mFunName;
            /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_115;
struct list_item$1sVarph* prev_it_116;
    it_115=self->head;
    while(it_115!=((void*)0)) {
        prev_it_116=it_115;
        it_115=it_115->next;
        /*i*/come_call_finalizer3(prev_it_116,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj75;
struct sType* __dec_obj76;
char* __dec_obj77;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj75=self->c_value;
            /*G*/ __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj76=self->type;
            come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj77=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* __dec_obj79;
struct sInlineAssembler* __result94__;
    ((struct sNodeBase*)(__right_value168=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value168,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=self->source;
    self->source=(char*)come_increment_ref_count(source);
    /*G*/ __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
char* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=__builtin_string("sInlineAssembler")));
    /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_121;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct CVALUE* come_value_122;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct buffer* buf_123;
char* p_124;
_Bool dquort_125;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct buffer* var_name_126;
void* __right_value176 = (void*)0;
struct sVar* var__127;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __dec_obj82;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sType* __dec_obj83;
_Bool __result101__;
    source_121=(char*)come_increment_ref_count(self->source);
    come_value_122=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 169, "CVALUE"))));
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 171, "buffer"))));
    p_124=source_121;
    dquort_125=(_Bool)0;
    while(*p_124) {
        if(        *p_124==34) {
            buffer_append_char(buf_123,*p_124);
            p_124++;
            dquort_125=!dquort_125;
        }
        else if(        dquort_125) {
            buffer_append_char(buf_123,*p_124);
            p_124++;
        }
        else if(        *p_124==40) {
            buffer_append_char(buf_123,*p_124);
            p_124++;
            var_name_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 189, "buffer"))));
            while(xisalnum(*p_124)||*p_124==95) {
                buffer_append_char(var_name_126,*p_124);
                p_124++;
            }
            var__127=map$2charphsVarph_at(info->lv_table->mVars,((char*)(__right_value176=buffer_to_string(var_name_126))),((void*)0));
            /* U11 */__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            var__127) {
                buffer_append_str(buf_123,var__127->mCValueName);
            }
            if(            *p_124==41) {
                buffer_append_char(buf_123,*p_124);
                p_124++;
            }
            /*i*/come_call_finalizer3(var_name_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_123,*p_124);
            p_124++;
        }
    }
    __dec_obj82=come_value_122->c_value;
    come_value_122->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value177=buffer_to_string(buf_123)))));
    /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj83=come_value_122->type;
    come_value_122->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 213, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_122->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
    add_come_last_code(info,"%s",come_value_122->c_value);
    __result101__ = (_Bool)1;
    /* U13 */source_121 = come_decrement_ref_count2(source_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result101__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_128;
unsigned int it_129;
struct sVar* __result96__;
struct sVar* __result97__;
struct sVar* __result98__;
struct sVar* __result99__;
    hash_128=string_get_hash_key(((char*)key))%self->size;
    it_129=hash_128;
    while((_Bool)1) {
        if(        self->item_existance[it_129]) {
            if(            string_equals(self->keys[it_129],key)) {
                __result96__ = gComeFunResultObject = __result_obj__ = self->items[it_129];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result96__;
            }
            it_129++;
            if(            it_129>=self->size) {
                it_129=0;
            }
            else if(            it_129==hash_128) {
                __result97__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result97__;
            }
        }
        else {
            __result98__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result98__;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value181 = (void*)0;
struct list_item$1CVALUEph* litem_130;
struct CVALUE* __dec_obj84;
void* __right_value182 = (void*)0;
struct list_item$1CVALUEph* litem_131;
struct CVALUE* __dec_obj85;
void* __right_value183 = (void*)0;
struct list_item$1CVALUEph* litem_132;
struct CVALUE* __dec_obj86;
struct list$1CVALUEph* __result100__;
    if(    self->len==0) {
        litem_130=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value181=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1CVALUEph"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        __dec_obj84=litem_130->item;
        litem_130->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value182=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1CVALUEph"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        __dec_obj85=litem_131->item;
        litem_131->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value183=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1CVALUEph"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        __dec_obj86=litem_132->item;
        litem_132->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
struct sCurrentNode2* __result102__;
    ((struct sNodeBase*)(__right_value184=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value184,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value185 = (void*)0;
char* __result103__;
    __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=__builtin_string(self->sname)));
    /* U11 */__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
char* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("sCurrentNode")));
    /* U11 */__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value187 = (void*)0;
char* class_name_133;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sClass* current_stack_134;
struct sVarTable* vtable_135;
struct map$2charphsVarph* o2_saved_136;
char* it_139;
char* key_142;
struct sVar* value_143;
void* __right_value190 = (void*)0;
struct sType* type2_147;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct tuple2$2charphsTypeph* item_148;
void* __right_value194 = (void*)0;
struct sType* type3_149;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct tuple2$2charphsTypeph* item2_152;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct map$2charphsVarph* o2_saved_204;
char* it_205;
char* key_206;
struct sVar* value_207;
void* __right_value209 = (void*)0;
struct sType* type2_208;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct tuple2$2charphsTypeph* item_209;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_210;
void* __right_value214 = (void*)0;
char* __dec_obj110;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sType* __dec_obj111;
_Bool __result141__;
    info->current_stack_num++;
    class_name_133=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_134=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 432, "sClass")),class_name_133,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_135=info->lv_table;
    while(vtable_135) {
        for(        o2_saved_136=(struct map$2charphsVarph*)come_increment_ref_count((vtable_135->mVars)),it_139=map$2charphsVarph_begin((o2_saved_136));        !map$2charphsVarph_end((o2_saved_136));        it_139=map$2charphsVarph_next((o2_saved_136))        ){
            key_142=it_139;
            value_143=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_135->mVars,key_142), "./common.h", 439, 0));
            type2_147=(struct sType*)come_increment_ref_count(sType_clone(value_143->mType));
            type2_147->mPointerNum++;
            item_148=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 445, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_143->mCValueName)),(struct sType*)come_increment_ref_count(type2_147)));
            if(            value_143->mCValueName!=((void*)0)) {
                if(                strcmp(value_143->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_143->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_143->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_143->mType->mClass->mName,"va_list")||string_operator_equals(value_143->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_147->mArrayNum)==1) {
                    type3_149=(struct sType*)come_increment_ref_count(sType_clone(type2_147));
                    list$1sNodeph_reset(type3_149->mArrayNum);
                    type3_149->mPointerNum=1;
                    type3_149->mOriginIsArray=(_Bool)1;
                    item2_152=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 465, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_143->mCValueName)),(struct sType*)come_increment_ref_count(type3_149)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_134->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_152)));
                    value_143->mType->mOriginIsArray=(_Bool)1;
                    /*i*/come_call_finalizer3(type3_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(item2_152,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_134->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_148)));
                }
            }
            /*i*/come_call_finalizer3(type2_147,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_148,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_136,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_135=vtable_135->mParent;
    }
    output_struct(current_stack_134,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_133),(struct sClass*)come_increment_ref_count(current_stack_134));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_133,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_133);
    vtable_135=info->lv_table;
    while(vtable_135) {
        for(        o2_saved_204=(struct map$2charphsVarph*)come_increment_ref_count((vtable_135->mVars)),it_205=map$2charphsVarph_begin((o2_saved_204));        !map$2charphsVarph_end((o2_saved_204));        it_205=map$2charphsVarph_next((o2_saved_204))        ){
            key_206=it_205;
            value_207=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_135->mVars,key_206), "./common.h", 490, 1));
            type2_208=(struct sType*)come_increment_ref_count(sType_clone(value_207->mType));
            item_209=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 494, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_207->mCValueName),(struct sType*)come_increment_ref_count(type2_208)));
            if(            value_207->mCValueName!=((void*)0)) {
                if(                strcmp(value_207->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_207->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_207->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_207->mType->mClass->mName,"va_list")||string_operator_equals(value_207->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_208->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_207->mCValueName,value_207->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_207->mCValueName,value_207->mCValueName);
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_208,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_209,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_204,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_135=vtable_135->mParent;
    }
    come_value_210=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 523, "CVALUE"))));
    __dec_obj110=come_value_210->c_value;
    come_value_210->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=come_value_210->type;
    come_value_210->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 526, "sType")),class_name_133,(_Bool)0,info));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_210->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_210->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_210));
    __result141__ = (_Bool)1;
    /* U13 */class_name_133 = come_decrement_ref_count2(class_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result141__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_137;
char* __result105__;
char* __result106__;
char* result_138;
char* __result107__;
result_137 = (void*)0;
result_138 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_137,0,sizeof(char*));
        __result105__ = gComeFunResultObject = __result_obj__ = result_137;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result106__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    memset(&result_138,0,sizeof(char*));
    __result107__ = gComeFunResultObject = __result_obj__ = result_138;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_140;
char* __result108__;
char* __result109__;
char* result_141;
char* __result110__;
result_140 = (void*)0;
result_141 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_140,0,sizeof(char*));
        __result108__ = gComeFunResultObject = __result_obj__ = result_140;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result109__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    memset(&result_141,0,sizeof(char*));
    __result110__ = gComeFunResultObject = __result_obj__ = result_141;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_144;
unsigned int hash_145;
unsigned int it_146;
struct sVar* __result111__;
struct sVar* __result112__;
struct sVar* __result113__;
struct sVar* __result114__;
default_value_144 = (void*)0;
    memset(&default_value_144,0,sizeof(struct sVar*));
    hash_145=string_get_hash_key(((char*)key))%self->size;
    it_146=hash_145;
    while((_Bool)1) {
        if(        self->item_existance[it_146]) {
            if(            string_equals(self->keys[it_146],key)) {
                __result111__ = gComeFunResultObject = __result_obj__ = self->items[it_146];
                /*i*/come_call_finalizer3(default_value_144,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result111__;
            }
            it_146++;
            if(            it_146>=self->size) {
                it_146=0;
            }
            else if(            it_146==hash_145) {
                __result112__ = gComeFunResultObject = __result_obj__ = default_value_144;
                /*i*/come_call_finalizer3(default_value_144,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result112__;
            }
        }
        else {
            __result113__ = gComeFunResultObject = __result_obj__ = default_value_144;
            /*i*/come_call_finalizer3(default_value_144,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result113__;
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = default_value_144;
    /*i*/come_call_finalizer3(default_value_144,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj88;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result115__;
    __dec_obj88=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_150;
struct list_item$1sNodeph* prev_it_151;
struct list$1sNodeph* __result116__;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        /*i*/come_call_finalizer3(prev_it_151,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_153;
struct tuple2$2charphsTypeph* __dec_obj92;
void* __right_value199 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_154;
struct tuple2$2charphsTypeph* __dec_obj95;
void* __right_value200 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_155;
struct tuple2$2charphsTypeph* __dec_obj98;
struct list$1tuple2$2charphsTypephph* __result117__;
    if(    self->len==0) {
        litem_153=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value198=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1tuple2$2charphsTypephph"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        __dec_obj92=litem_153->item;
        litem_153->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value199=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1tuple2$2charphsTypephph"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        __dec_obj95=litem_154->item;
        litem_154->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj95,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value200=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1tuple2$2charphsTypephph"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        __dec_obj98=litem_155->item;
        litem_155->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj99;
struct sType* __dec_obj100;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj99=self->v1;
            /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj100=self->v2;
            come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result118__;
void* __right_value201 = (void*)0;
struct tuple2$2charphsTypeph* result_156;
void* __right_value202 = (void*)0;
char* __dec_obj101;
void* __right_value203 = (void*)0;
struct sType* __dec_obj102;
struct tuple2$2charphsTypeph* __result119__;
    if(    self==(void*)0) {
        __result118__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    result_156=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj101=result_156->v1;
        result_156->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj102=result_156->v2;
        result_156->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_156;
    /*i*/come_call_finalizer3(result_156,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj103;
struct sType* __dec_obj104;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj103=self->v1;
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj104=self->v2;
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_157;
int i_158;
    for(    i_157=0;    i_157<self->size;    i_157++    ){
        if(        self->item_existance[i_157]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_157],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_158=0;    i_158<self->size;    i_158++    ){
        if(        self->item_existance[i_158]) {
            if(            1) {
                /* U13 */self->keys[i_158] = come_decrement_ref_count2(self->keys[i_158], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_180;
unsigned int it_181;
_Bool same_key_exist_198;
char* it2_201;
struct map$2charphsClassph* __result140__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_180=string_get_hash_key(key)%self->size;
    it_181=hash_180;
    while((_Bool)1) {
        if(        self->item_existance[it_181]) {
            if(            string_equals(self->keys[it_181],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_181]);
                    /* U13 */self->keys[it_181] = come_decrement_ref_count2(self->keys[it_181], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_181]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_181]);
                    self->keys[it_181]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_181],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_181]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_181]=item;
                }
                break;
            }
            it_181++;
            if(            it_181>=self->size) {
                it_181=0;
            }
            else if(            it_181==hash_180) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_181]=(_Bool)1;
            if(            1) {
                self->keys[it_181]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_181]=key;
            }
            if(            1) {
                self->items[it_181]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_181]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_198=(_Bool)0;
    for(    it2_201=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_201=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_201,key)) {
            same_key_exist_198=(_Bool)1;
        }
    }
    if(    !same_key_exist_198) {
        list$1charp_push_back(self->key_list,key);
    }
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_159;
void* __right_value206 = (void*)0;
char** keys_160;
void* __right_value207 = (void*)0;
struct sClass** items_161;
void* __right_value208 = (void*)0;
_Bool* item_existance_162;
int len_163;
char* it_166;
struct sClass* default_value_169;
struct sClass* it2_170;
unsigned int hash_177;
int n_178;
struct sClass* default_value_179;
default_value_169 = (void*)0;
default_value_179 = (void*)0;
    size_159=self->size*10;
    keys_160=(char**)come_increment_ref_count(((char**)(__right_value206=(char**)come_calloc(1, sizeof(char*)*(1*(size_159)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_161=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value207=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_159)), "/usr/local/include/comelang.h", 1625, "sClass*%"))));
    item_existance_162=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value208=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_159)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_163=0;
    for(    it_166=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_166=map$2charphsClassph_next(self)    ){
        memset(&default_value_169,0,sizeof(struct sClass*));
        it2_170=map$2charphsClassph_at(self,it_166,default_value_169);
        hash_177=string_get_hash_key(it_166)%size_159;
        n_178=hash_177;
        while((_Bool)1) {
            if(            item_existance_162[n_178]) {
                n_178++;
                if(                n_178>=size_159) {
                    n_178=0;
                }
                else if(                n_178==hash_177) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_162[n_178]=(_Bool)1;
                keys_160[n_178]=it_166;
                items_161[n_178]=map$2charphsClassph_at(self,it_166,default_value_179);
                len_163++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_160;
    self->items=items_161;
    self->item_existance=item_existance_162;
    self->size=size_159;
    self->len=len_163;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_164;
char* __result120__;
char* __result121__;
char* result_165;
char* __result122__;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_164,0,sizeof(char*));
        __result120__ = gComeFunResultObject = __result_obj__ = result_164;
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result121__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    memset(&result_165,0,sizeof(char*));
    __result122__ = gComeFunResultObject = __result_obj__ = result_165;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_167;
char* __result123__;
char* __result124__;
char* result_168;
char* __result125__;
result_167 = (void*)0;
result_168 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_167,0,sizeof(char*));
        __result123__ = gComeFunResultObject = __result_obj__ = result_167;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result124__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    memset(&result_168,0,sizeof(char*));
    __result125__ = gComeFunResultObject = __result_obj__ = result_168;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_171;
unsigned int it_172;
struct sClass* __result126__;
struct sClass* __result127__;
struct sClass* __result128__;
struct sClass* __result129__;
    hash_171=string_get_hash_key(((char*)key))%self->size;
    it_172=hash_171;
    while((_Bool)1) {
        if(        self->item_existance[it_172]) {
            if(            string_equals(self->keys[it_172],key)) {
                __result126__ = gComeFunResultObject = __result_obj__ = self->items[it_172];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result126__;
            }
            it_172++;
            if(            it_172>=self->size) {
                it_172=0;
            }
            else if(            it_172==hash_171) {
                __result127__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result127__;
            }
        }
        else {
            __result128__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result128__;
        }
    }
    __result129__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj105;
struct list$1tuple2$2charphsTypephph* __dec_obj106;
char* __dec_obj108;
char* __dec_obj109;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj105=self->mName;
            /*G*/ __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj106=self->mFields;
            come_call_finalizer3(__dec_obj106,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj108=self->mDeclareSName;
            /*G*/ __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj109=self->mParentClassName;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_173;
struct list_item$1tuple2$2charphsTypephph* prev_it_174;
    it_173=self->head;
    while(it_173!=((void*)0)) {
        prev_it_174=it_173;
        it_173=it_173->next;
        /*i*/come_call_finalizer3(prev_it_174,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj107;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj107=self->item;
            come_call_finalizer3(__dec_obj107,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_175;
struct list_item$1tuple2$2charphsTypephph* prev_it_176;
    it_175=self->head;
    while(it_175!=((void*)0)) {
        prev_it_176=it_175;
        it_175=it_175->next;
        /*i*/come_call_finalizer3(prev_it_176,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_182;
struct list_item$1charp* it_183;
struct list$1charp* __result133__;
    it2_182=0;
    it_183=self->head;
    while(it_183!=((void*)0)) {
        if(        charp_equals(it_183->item,item)) {
            list$1charp_delete(self,it2_182,it2_182+1);
            break;
        }
        it2_182++;
        it_183=it_183->next;
    }
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_184;
struct list$1charp* __result130__;
struct list_item$1charp* it_187;
int i_188;
struct list_item$1charp* prev_it_189;
struct list_item$1charp* it_190;
int i_191;
struct list_item$1charp* prev_it_192;
struct list_item$1charp* it_193;
struct list_item$1charp* head_prev_it_194;
struct list_item$1charp* tail_it_195;
int i_196;
struct list_item$1charp* prev_it_197;
struct list$1charp* __result132__;
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
        __result130__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_187=self->head;
        i_188=0;
        while(it_187!=((void*)0)) {
            if(            i_188<tail) {
                prev_it_189=it_187;
                it_187=it_187->next;
                i_188++;
                /*i*/come_call_finalizer3(prev_it_189,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
                /*i*/come_call_finalizer3(prev_it_192,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
                /*i*/come_call_finalizer3(prev_it_197,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
struct list$1charp* __result131__;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        /*i*/come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_199;
char* __result134__;
char* __result135__;
char* result_200;
char* __result136__;
result_199 = (void*)0;
result_200 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_199,0,sizeof(char*));
        __result134__ = gComeFunResultObject = __result_obj__ = result_199;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    self->it=self->head;
    if(    self->it) {
        __result135__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    memset(&result_200,0,sizeof(char*));
    __result136__ = gComeFunResultObject = __result_obj__ = result_200;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_202;
char* __result137__;
char* __result138__;
char* result_203;
char* __result139__;
result_202 = (void*)0;
result_203 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_202,0,sizeof(char*));
        __result137__ = gComeFunResultObject = __result_obj__ = result_202;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result138__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    memset(&result_203,0,sizeof(char*));
    __result139__ = gComeFunResultObject = __result_obj__ = result_203;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
struct sLineNode* __result142__;
    ((struct sNodeBase*)(__right_value217=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value217,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value218 = (void*)0;
char* __result143__;
    __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value218=__builtin_string("sLineNode")));
    /* U11 */__right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct CVALUE* come_value_211;
void* __right_value221 = (void*)0;
char* __dec_obj113;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sType* __dec_obj114;
_Bool __result144__;
    come_value_211=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 243, "CVALUE"))));
    __dec_obj113=come_value_211->c_value;
    come_value_211->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=come_value_211->type;
    come_value_211->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 246, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_211->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_211));
    add_come_last_code(info,"%s",come_value_211->c_value);
    __result144__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
struct sSNameNode* __result145__;
    ((struct sNodeBase*)(__right_value224=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value224,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
char* __result146__;
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=__builtin_string("sSNameNode")));
    /* U11 */__right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value228 = (void*)0;
char* __dec_obj116;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* __dec_obj117;
_Bool __result147__;
    come_value_212=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 271, "CVALUE"))));
    __dec_obj116=come_value_212->c_value;
    come_value_212->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=come_value_212->type;
    come_value_212->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 274, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_212->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
    add_come_last_code(info,"%s",come_value_212->c_value);
    __result147__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result147__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
struct sFuncNode* __result148__;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result148__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
char* __result149__;
    __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value232=__builtin_string("sFuncNode")));
    /* U11 */__right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct CVALUE* come_value_213;
void* __right_value235 = (void*)0;
char* __dec_obj119;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct sType* __dec_obj120;
_Bool __result150__;
    come_value_213=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 299, "CVALUE"))));
    __dec_obj119=come_value_213->c_value;
    come_value_213->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=come_value_213->type;
    come_value_213->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 302, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_213->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
    add_come_last_code(info,"%s",come_value_213->c_value);
    __result150__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result150__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
struct sWildCard* __result151__;
    ((struct sNodeBase*)(__right_value238=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value238,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
char* __result152__;
    __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string("sWildCard")));
    /* U11 */__right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sNode* value_node_214;
_Bool Value_215;
_Bool __result153__;
_Bool __result154__;
    value_node_214=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value240=xsprintf("Value"))),info));
    /* U11 */__right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_215=node_compile(value_node_214,info);
    if(    !Value_215) {
        __result153__ = (_Bool)0;
        if(value_node_214) { value_node_214 = come_decrement_ref_count2(value_node_214, ((struct sNode*)value_node_214)->finalize, ((struct sNode*)value_node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result153__;
    }
    else {
    }
    __result154__ = (_Bool)1;
    if(value_node_214) { value_node_214 = come_decrement_ref_count2(value_node_214, ((struct sNode*)value_node_214)->finalize, ((struct sNode*)value_node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result154__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
struct sCallerFuncNode* __result155__;
    ((struct sNodeBase*)(__right_value242=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value242,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result156__;
    __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=__builtin_string("sCallerFuncNode")));
    /* U11 */__right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct CVALUE* come_value_216;
void* __right_value246 = (void*)0;
char* __dec_obj123;
void* __right_value247 = (void*)0;
char* __dec_obj124;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sType* __dec_obj125;
_Bool __result157__;
    come_value_216=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 351, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj123=come_value_216->c_value;
        come_value_216->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj124=come_value_216->c_value;
        come_value_216->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj125=come_value_216->type;
    come_value_216->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 359, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_216->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_216));
    add_come_last_code(info,"%s",come_value_216->c_value);
    __result157__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result157__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
struct sCallerLineNode* __result158__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* come_value_217;
void* __right_value253 = (void*)0;
char* __dec_obj127;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sType* __dec_obj128;
_Bool __result159__;
    come_value_217=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 380, "CVALUE"))));
    __dec_obj127=come_value_217->c_value;
    come_value_217->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj128=come_value_217->type;
    come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 383, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_217->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_217));
    add_come_last_code(info,"%s",come_value_217->c_value);
    __result159__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result159__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=__builtin_string("sCallerLineNode")));
    /* U11 */__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
struct sCallerSNameNode* __result161__;
    ((struct sNodeBase*)(__right_value257=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value257,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value_218;
void* __right_value260 = (void*)0;
char* __dec_obj130;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj131;
_Bool __result162__;
    come_value_218=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 408, "CVALUE"))));
    __dec_obj130=come_value_218->c_value;
    come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj131=come_value_218->type;
    come_value_218->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 411, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_218->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_218));
    add_come_last_code(info,"%s",come_value_218->c_value);
    __result162__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
char* __result163__;
    __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value263=__builtin_string("sCallerSNameNode")));
    /* U11 */__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
char* fun_name3_220;
struct list$1sTypeph* method_generics_types_before_221;
struct list$1sTypeph* __dec_obj132;
struct sGenericsFun* generics_fun_222;
void* __right_value265 = (void*)0;
_Bool _if_conditional2;
void* __right_value266 = (void*)0;
char* __result168__;
struct list$1sTypeph* __dec_obj143;
char* __result169__;
    static int num_method_generics_219=0;
    fun_name3_220=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_219++));
    method_generics_types_before_221=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj132=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj132,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_222=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_222) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_220)),generics_fun_222,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_220);
            __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value266=__builtin_string("")));
            /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name3_220 = come_decrement_ref_count2(fun_name3_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_221,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result168__;
        }
    }
    __dec_obj143=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_221);
    come_call_finalizer3(__dec_obj143,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result169__ = gComeFunResultObject = __result_obj__ = fun_name3_220;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name3_220 = come_decrement_ref_count2(fun_name3_220, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_221,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_223;
unsigned int it_224;
struct sGenericsFun* __result164__;
struct sGenericsFun* __result165__;
struct sGenericsFun* __result166__;
struct sGenericsFun* __result167__;
    hash_223=string_get_hash_key(((char*)key))%self->size;
    it_224=hash_223;
    while((_Bool)1) {
        if(        self->item_existance[it_224]) {
            if(            string_equals(self->keys[it_224],key)) {
                __result164__ = gComeFunResultObject = __result_obj__ = self->items[it_224];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result164__;
            }
            it_224++;
            if(            it_224>=self->size) {
                it_224=0;
            }
            else if(            it_224==hash_223) {
                __result165__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result165__;
            }
        }
        else {
            __result166__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result166__;
        }
    }
    __result167__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj133;
struct list$1charph* __dec_obj134;
struct list$1charph* __dec_obj135;
char* __dec_obj136;
struct sType* __dec_obj137;
struct list$1sTypeph* __dec_obj138;
struct list$1charph* __dec_obj139;
struct list$1charph* __dec_obj140;
char* __dec_obj141;
char* __dec_obj142;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj133=self->mImplType;
            come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj134=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj134,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj135=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj135,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj136=self->mName;
            /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj137=self->mResultType;
            come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj138=self->mParamTypes;
            come_call_finalizer3(__dec_obj138,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj139=self->mParamNames;
            come_call_finalizer3(__dec_obj139,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj140=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj140,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj141=self->mBlock;
            /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj142=self->mGenericsSName;
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
char* __dec_obj144;
void* __right_value278 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj161;
struct list$1sTypeph* __dec_obj162;
struct buffer* __dec_obj163;
struct sFunCallNode* __result176__;
    ((struct sNodeBase*)(__right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value267,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj144=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj161,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj162=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj162,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj163=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result176__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
char* __result177__;
    __result177__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value279=__builtin_string("sFunCallNode")));
    /* U11 */__right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_235;
struct list$1tuple2$2charphsNodephph* params_236;
struct buffer* method_block_237;
int method_block_sline_238;
struct sVar* var__239;
struct sType* lambda_type_240;
_Bool __result178__;
void* __right_value280 = (void*)0;
struct sType* result_type_241;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1CVALUEph* come_params_242;
_Bool __result180__;
int i_245;
struct list$1tuple2$2charphsNodephph* o2_saved_246;
struct tuple2$2charphsNodeph* it_249;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_252=0;
struct sNode* node_253=0;
_Bool Value_254;
_Bool __result187__;
void* __right_value283 = (void*)0;
struct CVALUE* come_value_255;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct buffer* buf_259;
int j_260;
struct list$1CVALUEph* o2_saved_261;
struct CVALUE* it_264;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct CVALUE* come_value_267;
void* __right_value291 = (void*)0;
char* __dec_obj170;
void* __right_value292 = (void*)0;
struct sType* __dec_obj171;
struct sGenericsFun* generics_fun_268;
_Bool method_generics_269;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sTypeph* method_generics_types_270;
void* __right_value295 = (void*)0;
char* generics_fun_name_271;
struct sFun* fun_272;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1CVALUEph* come_params_275;
struct sFun* fun_276;
_Bool no_output_come_code_277;
_Bool __result200__;
struct CVALUE* method_block_node_278;
void* __right_value298 = (void*)0;
struct sType* method_block_lambda_type_282;
void* __right_value299 = (void*)0;
struct sType* method_block_result_type_283;
struct sType* generics_fun_method_block_lambda_type_284;
struct sType* generics_fun_method_block_result_type_285;
int method_generics_num_286;
void* __right_value300 = (void*)0;
int n_295;
struct list$1sTypeph* o2_saved_296;
struct sType* it_299;
int method_generics_num_302;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1CVALUEph* come_params_303;
int i_304;
struct sType* result_type_305;
struct list$1tuple2$2charphsNodephph* o2_saved_306;
struct tuple2$2charphsNodeph* it_307;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_308=0;
struct sNode* node_309=0;
_Bool Value_310;
_Bool __result213__;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_311;
int method_generics_num_315;
void* __right_value311 = (void*)0;
int n_316;
struct list$1sTypeph* o2_saved_317;
struct sType* it_318;
int method_generics_num_319;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* __dec_obj194;
void* __right_value314 = (void*)0;
char* __dec_obj195;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1CVALUEph* come_params_322;
struct list$1tuple2$2charphsNodephph* o2_saved_323;
struct tuple2$2charphsNodeph* it_324;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_325=0;
struct sNode* node_326=0;
_Bool Value_327;
_Bool __result216__;
void* __right_value317 = (void*)0;
struct CVALUE* come_value_328;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct buffer* buf_329;
int j_330;
struct list$1CVALUEph* o2_saved_331;
struct CVALUE* it_332;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_333;
void* __right_value322 = (void*)0;
char* __dec_obj196;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj197;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sType* __dec_obj198;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj199;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj200;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj201;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __dec_obj202;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj203;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* __dec_obj204;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* __dec_obj205;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj206;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __dec_obj207;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj208;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sType* __dec_obj209;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* __dec_obj210;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* __dec_obj211;
_Bool __result217__;
void* __right_value353 = (void*)0;
char* __dec_obj212;
void* __right_value354 = (void*)0;
char* __dec_obj213;
char* p_334;
int version_335;
char* p2_336;
int i_338;
void* __right_value355 = (void*)0;
char* new_fun_name_339;
void* __right_value356 = (void*)0;
char* __dec_obj214;
void* __right_value357 = (void*)0;
char* new_fun_name_343;
void* __right_value358 = (void*)0;
char* __dec_obj215;
_Bool __result222__;
int i_344;
void* __right_value359 = (void*)0;
char* new_fun_name_345;
void* __right_value360 = (void*)0;
char* __dec_obj216;
struct sFun* fun_346;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1CVALUEph* come_params_347;
int i_348;
struct sType* result_type_349;
struct list$1tuple2$2charphsNodephph* o2_saved_350;
struct tuple2$2charphsNodeph* it_351;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_352=0;
struct sNode* node_353=0;
_Bool Value_354;
_Bool __result223__;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_355;
struct sType* __dec_obj217;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct buffer* buf_356;
int j_357;
struct list$1CVALUEph* o2_saved_358;
struct CVALUE* it_359;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_360;
void* __right_value368 = (void*)0;
char* __dec_obj218;
struct sType* __dec_obj219;
_Bool __result224__;
void* __right_value369 = (void*)0;
struct sType* result_type_361;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sTypeph* param_types_362;
struct list$1sTypeph* o2_saved_363;
struct sType* it_364;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sType* it2_365;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sType* __dec_obj220;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1CVALUEph* come_params_366;
int i_367;
struct list$1tuple2$2charphsNodephph* o2_saved_368;
struct tuple2$2charphsNodeph* it_369;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_370=0;
struct sNode* node_371=0;
_Bool Value_372;
_Bool __result225__;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_373;
int n_374;
struct list$1charph* o2_saved_375;
char* it_378;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
int i_386;
struct list$1tuple2$2charphsNodephph* o2_saved_387;
struct tuple2$2charphsNodeph* it_388;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_389=0;
struct sNode* node_390=0;
_Bool Value_391;
_Bool __result234__;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_392;
_Bool Value_393;
_Bool __result235__;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
char* default_param_395;
char* param_name_399;
struct buffer* source_400;
char* p_401;
char* head_402;
int sline_403;
void* __right_value388 = (void*)0;
struct buffer* __dec_obj222;
void* __right_value389 = (void*)0;
struct sNode* node_404;
_Bool Value_405;
_Bool __result238__;
struct buffer* __dec_obj223;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_406;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
_Bool __result239__;
_Bool __result240__;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value398 = (void*)0;
struct sNode* current_stack_frame_node_407;
_Bool Value_409;
_Bool __result243__;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_410;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct buffer* method_block2_411;
void* __right_value402 = (void*)0;
struct sType* method_block_type_412;
void* __right_value403 = (void*)0;
char* class_name_413;
struct sClass* current_stack_frame_struct_417;
_Bool __result248__;
void* __right_value404 = (void*)0;
struct sType* result_type_418;
void* __right_value405 = (void*)0;
struct list$1sTypeph* param_types_419;
struct list$1charph* param_names_420;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct buffer* all_alhabet_sname_421;
char* p_422;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct list$1sTypeph* o2_saved_423;
struct sType* it_424;
struct sType* param_type_425;
void* __right_value410 = (void*)0;
char* param_name_426;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
char* param_name_427;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* param_name_428;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct buffer* source3_429;
char* p_430;
char* head_431;
int sline_432;
struct buffer* __dec_obj226;
void* __right_value417 = (void*)0;
struct sNode* node_433;
_Bool Value_434;
_Bool __result249__;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* method_block_name_435;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct CVALUE* come_value2_436;
struct sFun* fun2_437;
_Bool __result250__;
struct sType* method_block_type2_438;
void* __right_value422 = (void*)0;
char* __dec_obj227;
void* __right_value423 = (void*)0;
struct sType* __dec_obj228;
struct buffer* __dec_obj229;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct buffer* buf_439;
int j_440;
struct list$1CVALUEph* o2_saved_441;
struct CVALUE* it_442;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value428 = (void*)0;
char* __dec_obj230;
void* __right_value429 = (void*)0;
struct sType* __dec_obj231;
void* __right_value430 = (void*)0;
char* __dec_obj232;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
char* __dec_obj233;
_Bool __result251__;
memset(&i_338, 0, sizeof(int));
    fun_name_235=(char*)come_increment_ref_count(self->fun_name);
    params_236=self->params;
    method_block_237=self->method_block;
    method_block_sline_238=self->method_block_sline;
    var__239=get_variable_from_table(info->lv_table,fun_name_235);
    if(    var__239==((void*)0)) {
        var__239=get_variable_from_table(info->gv_table,fun_name_235);
    }
    if(    var__239) {
        lambda_type_240=var__239->mType;
        if(        string_operator_not_equals(lambda_type_240->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_235);
            __result178__ = (_Bool)0;
            /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result178__;
        }
        result_type_241=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_240->mResultType->v1));
        result_type_241->mStatic=(_Bool)0;
        come_params_242=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 502, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_240->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_236)&&!lambda_type_240->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_235,list$1sTypeph_length(lambda_type_240->mParamTypes),list$1tuple2$2charphsNodephph_length(params_236));
            __result180__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        i_245=0;
        for(        o2_saved_246=(params_236),it_249=list$1tuple2$2charphsNodephph_begin((o2_saved_246));        !list$1tuple2$2charphsNodephph_end((o2_saved_246));        it_249=list$1tuple2$2charphsNodephph_next((o2_saved_246))        ){
            multiple_assign_var1=it_249;
            label_252=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_253=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_254=node_compile(node_253,info);
            if(            !Value_254) {
                __result187__ = (_Bool)0;
                /* U13 */label_252 = come_decrement_ref_count2(label_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result187__;
            }
            else {
            }
            come_value_255=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            lambda_type_240->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_240->mParamTypes,i_245), "05call.c", 518, 2))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(__right_value286=xsprintf("\%s calling param #\%s",((char*)(__right_value284=string_to_string(fun_name_235))),((char*)(__right_value285=int_to_string(i_245)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_240->mParamTypes,i_245), "05call.c", 521, 3)),come_value_255->type,come_value_255,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_240->mParamTypes,i_245), "05call.c", 522, 4))->mHeap&&come_value_255->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_240->mParamTypes,i_245), "05call.c", 523, 5)),come_value_255->type,come_value_255,info,(_Bool)1);
                }
            }
            list$1CVALUEph_push_back(come_params_242,(struct CVALUE*)come_increment_ref_count(come_value_255));
            dec_stack_ptr(1,info);
            i_245++;
            /* U13 */label_252 = come_decrement_ref_count2(label_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_259=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 534, "buffer"))));
        buffer_append_str(buf_259,var__239->mCValueName);
        buffer_append_str(buf_259,"(");
        j_260=0;
        for(        o2_saved_261=(struct list$1CVALUEph*)come_increment_ref_count((come_params_242)),it_264=list$1CVALUEph_begin((o2_saved_261));        !list$1CVALUEph_end((o2_saved_261));        it_264=list$1CVALUEph_next((o2_saved_261))        ){
            buffer_append_str(buf_259,it_264->c_value);
            if(            j_260!=list$1CVALUEph_length(come_params_242)-1) {
                buffer_append_str(buf_259,",");
            }
            j_260++;
        }
        /*i*/come_call_finalizer3(o2_saved_261,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_259,")");
        come_value_267=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 551, "CVALUE"))));
        __dec_obj170=come_value_267->c_value;
        come_value_267->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_259));
        /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj171=come_value_267->type;
        come_value_267->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_241));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_267->type->mStatic=(_Bool)0;
        come_value_267->var=((void*)0);
        if(        lambda_type_240->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_267,(struct sType*)come_increment_ref_count(lambda_type_240->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_267->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_267));
        info->calling_fun=((void*)0);
        /*i*/come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_259,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_268=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_235,((void*)0));
        method_generics_269=(_Bool)0;
        if(        generics_fun_268) {
            method_generics_269=list$1charph_length(generics_fun_268->mMethodGenericsTypeNames)>0;
        }
        if(        list$1sTypeph_length(self->method_generics_types)>0||method_generics_269) {
            if(            list$1sTypeph_length(self->method_generics_types)==0) {
                method_generics_types_270=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 575, "list$1sTypeph"))));
                generics_fun_name_271=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_235),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_270),info));
                fun_272=map$2charphsFunph_at(info->funcs,generics_fun_name_271,((void*)0));
                if(                method_block_237) {
                    come_params_275=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 581, "list$1CVALUEph"))));
                    fun_276=map$2charphsFunph_at(info->funcs,generics_fun_name_271,((void*)0));
                    no_output_come_code_277=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_237,(struct list$1CVALUEph*)come_increment_ref_count(come_params_275),fun_276,fun_name_235,method_block_sline_238,info,(_Bool)1)) {
                        __result200__ = (_Bool)0;
                        /*i*/come_call_finalizer3(come_params_275,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_270,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_271 = come_decrement_ref_count2(generics_fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result200__;
                    }
                    info->no_output_come_code=no_output_come_code_277;
                    method_block_node_278=list$1CVALUEphp_operator_load_element(come_params_275,-1);
                    method_block_lambda_type_282=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_278->type));
                    method_block_result_type_283=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_284=list$1sTypephp_operator_load_element(generics_fun_268->mParamTypes,-1);
                    generics_fun_method_block_result_type_285=generics_fun_method_block_lambda_type_284->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_285->mClass->mMethodGenerics) {
                        method_generics_num_286=generics_fun_method_block_result_type_285->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_270,method_generics_num_286,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_283)));
                    }
                    n_295=0;
                    for(                    o2_saved_296=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_284->mParamTypes)),it_299=list$1sTypeph_begin((o2_saved_296));                    !list$1sTypeph_end((o2_saved_296));                    it_299=list$1sTypeph_next((o2_saved_296))                    ){
                        if(                        it_299->mClass->mMethodGenerics) {
                            method_generics_num_302=it_299->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(method_generics_types_270,method_generics_num_302,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_282->mParamTypes,n_295), "05call.c", 607, 6)))));
                        }
                        n_295++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_296,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_275,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_282,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_params_303=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 613, "list$1CVALUEph"))));
                i_304=0;
                result_type_305=((void*)0);
                for(                o2_saved_306=(params_236),it_307=list$1tuple2$2charphsNodephph_begin((o2_saved_306));                !list$1tuple2$2charphsNodephph_end((o2_saved_306));                it_307=list$1tuple2$2charphsNodephph_next((o2_saved_306))                ){
                    multiple_assign_var2=it_307;
                    label_308=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                    node_309=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                    Value_310=node_compile(node_309,info);
                    if(                    !Value_310) {
                        __result213__ = (_Bool)0;
                        /* U13 */label_308 = come_decrement_ref_count2(label_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_generics_types_270,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_271 = come_decrement_ref_count2(generics_fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result213__;
                    }
                    else {
                    }
                    come_value_311=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    list$1CVALUEph_add(come_params_303,(struct CVALUE*)come_increment_ref_count(come_value_311));
                    /* U13 */label_308 = come_decrement_ref_count2(label_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                generics_fun_268->mResultType->mClass->mMethodGenerics) {
                    method_generics_num_315=generics_fun_268->mResultType->mClass->mMethodGenericsNum;
                    if(                    info->function_result_type) {
                        list$1sTypephp_operator_store_element(method_generics_types_270,method_generics_num_315,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    }
                }
                n_316=0;
                for(                o2_saved_317=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_268->mParamTypes)),it_318=list$1sTypeph_begin((o2_saved_317));                !list$1sTypeph_end((o2_saved_317));                it_318=list$1sTypeph_next((o2_saved_317))                ){
                    if(                    it_318->mClass->mMethodGenerics) {
                        method_generics_num_319=it_318->mClass->mMethodGenericsNum;
                        if(                        n_316<list$1CVALUEph_length(come_params_303)) {
                            list$1sTypephp_operator_store_element(method_generics_types_270,method_generics_num_319,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_303,n_316)->type)));
                        }
                    }
                    n_316++;
                }
                /*i*/come_call_finalizer3(o2_saved_317,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                map$2charphsFunph_remove(info->funcs,generics_fun_name_271);
                __dec_obj194=fun_name_235;
                fun_name_235=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_235),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_270),info));
                /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_270,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */generics_fun_name_271 = come_decrement_ref_count2(generics_fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj195=fun_name_235;
                fun_name_235=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_235),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
                /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        if(        string_operator_equals(fun_name_235,"__builtin_memmove")||string_operator_equals(fun_name_235,"__builtin_memset")||string_operator_equals(fun_name_235,"__builtin_ffs")||string_operator_equals(fun_name_235,"__builtin_ffsl")||string_operator_equals(fun_name_235,"__builtin_ffsll")||string_operator_equals(fun_name_235,"__builtin_bswap16")||string_operator_equals(fun_name_235,"__builtin_bswap32")||string_operator_equals(fun_name_235,"__builtin_bswap64")||string_operator_equals(fun_name_235,"__builtin_constant_p")||string_operator_equals(fun_name_235,"__builtin_expect")||string_operator_equals(fun_name_235,"__builtin___memset_chk")||string_operator_equals(fun_name_235,"__builtin_object_size")||string_operator_equals(fun_name_235,"__builtin___memcpy_chk")||string_operator_equals(fun_name_235,"__builtin___strncpy_chk")||string_operator_equals(fun_name_235,"__builtin___strncat_chk")||string_operator_equals(fun_name_235,"__builtin___vsnprintf_chk")) {
            come_params_322=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 659, "list$1CVALUEph"))));
            for(            o2_saved_323=(params_236),it_324=list$1tuple2$2charphsNodephph_begin((o2_saved_323));            !list$1tuple2$2charphsNodephph_end((o2_saved_323));            it_324=list$1tuple2$2charphsNodephph_next((o2_saved_323))            ){
                multiple_assign_var3=it_324;
                label_325=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_326=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_327=node_compile(node_326,info);
                if(                !Value_327) {
                    __result216__ = (_Bool)0;
                    /* U13 */label_325 = come_decrement_ref_count2(label_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result216__;
                }
                else {
                }
                come_value_328=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_322,(struct CVALUE*)come_increment_ref_count(come_value_328));
                /* U13 */label_325 = come_decrement_ref_count2(label_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 673, "buffer"))));
            buffer_append_str(buf_329,fun_name_235);
            buffer_append_str(buf_329,"(");
            j_330=0;
            for(            o2_saved_331=(struct list$1CVALUEph*)come_increment_ref_count((come_params_322)),it_332=list$1CVALUEph_begin((o2_saved_331));            !list$1CVALUEph_end((o2_saved_331));            it_332=list$1CVALUEph_next((o2_saved_331))            ){
                buffer_append_str(buf_329,it_332->c_value);
                if(                j_330!=list$1CVALUEph_length(come_params_322)-1) {
                    buffer_append_str(buf_329,",");
                }
                j_330++;
            }
            /*i*/come_call_finalizer3(o2_saved_331,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_329,")");
            come_value_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 690, "CVALUE"))));
            __dec_obj196=come_value_333->c_value;
            come_value_333->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_329));
            /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(fun_name_235,"__builtin_memmove")||string_operator_equals(fun_name_235,"__builtin_memset")) {
                __dec_obj197=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 694, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_ffs")) {
                __dec_obj198=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 697, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_ffsl")) {
                __dec_obj199=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 700, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_ffsll")) {
                __dec_obj200=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 703, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_bswap16")) {
                __dec_obj201=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 706, "sType")),"short",(_Bool)0,info));
                come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_bswap32")) {
                __dec_obj202=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 709, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_bswap64")) {
                __dec_obj203=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 712, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_constant_p")) {
                __dec_obj204=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 715, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_expect")) {
                __dec_obj205=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 718, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin___memset_chk")) {
                __dec_obj206=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 721, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_333->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_235,"__builtin_object_size")) {
                __dec_obj207=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 725, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_235,"__builtin___memcpy_chk")) {
                __dec_obj208=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 728, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_333->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_235,"__builtin___strncpy_chk")) {
                __dec_obj209=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 732, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_333->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_235,"__builtin___strncat_chk")) {
                __dec_obj210=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 736, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_333->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_235,"__builtin___vsnprintf_chk")) {
                __dec_obj211=come_value_333->type;
                come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 740, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_value_333->var=((void*)0);
            add_come_last_code(info,"%s",come_value_333->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_333));
            __result217__ = (_Bool)1;
            /*i*/come_call_finalizer3(come_params_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result217__;
            /*i*/come_call_finalizer3(come_params_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_235,"string")) {
            __dec_obj212=fun_name_235;
            fun_name_235=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
            /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_235,"wstring")) {
            __dec_obj213=fun_name_235;
            fun_name_235=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
            /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_235,"inherit")) {
            p_334=info->come_fun->mName;
            version_335=0;
            while(*p_334) {
                if(                *p_334==95&&*(p_334+1)==118&&xisdigit(*(p_334+2))) {
                    p2_336=p_334+2;
                    version_335=0;
                    while(xisdigit(*p2_336)) {
                        version_335=version_335*10+(*p2_336-48);
                        p2_336++;
                    }
                    break;
                }
                else {
                    p_334++;
                }
            }
            char real_fun_name_337[2048];
            memset(&real_fun_name_337, 0, sizeof(char)            *(2048)            );
            memcpy(real_fun_name_337,info->come_fun->mName,p_334-info->come_fun->mName);
            real_fun_name_337[p_334-info->come_fun->mName]=0;
            for(            i_338=version_335-1;            i_338>=1;            i_338--            ){
                new_fun_name_339=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_337,i_338));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_339)) {
                    __dec_obj214=fun_name_235;
                    fun_name_235=(char*)come_increment_ref_count(__builtin_string(new_fun_name_339));
                    /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_339 = come_decrement_ref_count2(new_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_339 = come_decrement_ref_count2(new_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_338==0) {
                new_fun_name_343=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_337));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_343)) {
                    __dec_obj215=fun_name_235;
                    fun_name_235=(char*)come_increment_ref_count(__builtin_string(new_fun_name_343));
                    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(                string_operator_equals(fun_name_235,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    __result222__ = (_Bool)0;
                    /* U13 */new_fun_name_343 = come_decrement_ref_count2(new_fun_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result222__;
                }
                /* U13 */new_fun_name_343 = come_decrement_ref_count2(new_fun_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_344=128;            i_344>=1;            i_344--            ){
                new_fun_name_345=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_235,i_344));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_345)) {
                    __dec_obj216=fun_name_235;
                    fun_name_235=(char*)come_increment_ref_count(__builtin_string(new_fun_name_345));
                    /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_345 = come_decrement_ref_count2(new_fun_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_345 = come_decrement_ref_count2(new_fun_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        fun_346=map$2charphsFunph_at(info->funcs,fun_name_235,((void*)0));
        if(        string_operator_equals(fun_name_235,"__builtin_va_arg")) {
            come_params_347=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 818, "list$1CVALUEph"))));
            i_348=0;
            result_type_349=((void*)0);
            for(            o2_saved_350=(params_236),it_351=list$1tuple2$2charphsNodephph_begin((o2_saved_350));            !list$1tuple2$2charphsNodephph_end((o2_saved_350));            it_351=list$1tuple2$2charphsNodephph_next((o2_saved_350))            ){
                multiple_assign_var4=it_351;
                label_352=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                node_353=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                Value_354=node_compile(node_353,info);
                if(                !Value_354) {
                    __result223__ = (_Bool)0;
                    /* U13 */label_352 = come_decrement_ref_count2(label_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_347,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result223__;
                }
                else {
                }
                come_value_355=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_347,(struct CVALUE*)come_increment_ref_count(come_value_355));
                __dec_obj217=result_type_349;
                result_type_349=(struct sType*)come_increment_ref_count(come_value_355->type);
                come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */label_352 = come_decrement_ref_count2(label_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_356=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 837, "buffer"))));
            buffer_append_str(buf_356,fun_name_235);
            buffer_append_str(buf_356,"(");
            j_357=0;
            for(            o2_saved_358=(struct list$1CVALUEph*)come_increment_ref_count((come_params_347)),it_359=list$1CVALUEph_begin((o2_saved_358));            !list$1CVALUEph_end((o2_saved_358));            it_359=list$1CVALUEph_next((o2_saved_358))            ){
                buffer_append_str(buf_356,it_359->c_value);
                if(                j_357!=list$1CVALUEph_length(come_params_347)-1) {
                    buffer_append_str(buf_356,",");
                }
                j_357++;
            }
            /*i*/come_call_finalizer3(o2_saved_358,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_356,")");
            come_value_360=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 854, "CVALUE"))));
            __dec_obj218=come_value_360->c_value;
            come_value_360->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_356));
            /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj219=come_value_360->type;
            come_value_360->type=(struct sType*)come_increment_ref_count(result_type_349);
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_360->var=((void*)0);
            add_come_last_code(info,"%s",come_value_360->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_360));
            /*i*/come_call_finalizer3(come_params_347,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_356,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_346==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_235);
            __result224__ = (_Bool)1;
            /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result224__;
        }
        else {
            result_type_361=(struct sType*)come_increment_ref_count(sType_clone(fun_346->mResultType));
            result_type_361->mStatic=(_Bool)0;
            param_types_362=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 871, "list$1sTypeph"))));
            for(            o2_saved_363=(struct list$1sTypeph*)come_increment_ref_count((fun_346->mParamTypes)),it_364=list$1sTypeph_begin((o2_saved_363));            !list$1sTypeph_end((o2_saved_363));            it_364=list$1sTypeph_next((o2_saved_363))            ){
                it2_365=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value372=sType_clone(it_364))),info->generics_type,info));
                /*g*/come_call_finalizer3(__right_value372,sType_finalize, 0, 1, 0, 0, (void*)0);
                list$1sTypeph_push_back(param_types_362,(struct sType*)come_increment_ref_count(sType_clone(it2_365)));
                /*i*/come_call_finalizer3(it2_365,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_363,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj220=result_type_361;
            result_type_361=(struct sType*)come_increment_ref_count(solve_generics(result_type_361,info->generics_type,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_params_366=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 880, "list$1CVALUEph"))));
            for(            i_367=0;            i_367<list$1sTypeph_length(fun_346->mParamTypes)-(((method_block_237)?(2):(0)));            i_367++            ){
                list$1CVALUEph_add(come_params_366,((void*)0));
            }
            for(            o2_saved_368=(params_236),it_369=list$1tuple2$2charphsNodephph_begin((o2_saved_368));            !list$1tuple2$2charphsNodephph_end((o2_saved_368));            it_369=list$1tuple2$2charphsNodephph_next((o2_saved_368))            ){
                multiple_assign_var5=it_369;
                label_370=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                node_371=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                fun_346->mVarArgs||string_operator_equals(fun_name_235,"__builtin_va_start")) {
                }
                else if(                label_370) {
                    Value_372=node_compile(node_371,info);
                    if(                    !Value_372) {
                        __result225__ = (_Bool)0;
                        /* U13 */label_370 = come_decrement_ref_count2(label_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result225__;
                    }
                    else {
                    }
                    come_value_373=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    n_374=0;
                    for(                    o2_saved_375=(struct list$1charph*)come_increment_ref_count((fun_346->mParamNames)),it_378=list$1charph_begin((o2_saved_375));                    !list$1charph_end((o2_saved_375));                    it_378=list$1charph_next((o2_saved_375))                    ){
                        if(                        string_operator_equals(label_370,it_378)) {
                            break;
                        }
                        n_374++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_375,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    list$1sTypephp_operator_load_element(param_types_362,n_374)) {
                        check_assign_type(((char*)(__right_value381=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value379=string_to_string(fun_name_235))),((char*)(__right_value380=int_to_string(n_374)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,n_374), "05call.c", 909, 7)),come_value_373->type,come_value_373,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_362,n_374)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,n_374), "05call.c", 911, 8))->mHeap&&come_value_373->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,n_374), "05call.c", 912, 9)),come_value_373->type,come_value_373,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_366,n_374,(struct CVALUE*)come_increment_ref_count(come_value_373));
                    /*i*/come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                /* U13 */label_370 = come_decrement_ref_count2(label_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            i_386=0;
            for(            o2_saved_387=(params_236),it_388=list$1tuple2$2charphsNodephph_begin((o2_saved_387));            !list$1tuple2$2charphsNodephph_end((o2_saved_387));            it_388=list$1tuple2$2charphsNodephph_next((o2_saved_387))            ){
                multiple_assign_var6=it_388;
                label_389=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_390=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                fun_346->mVarArgs||string_operator_equals(fun_name_235,"__builtin_va_start")) {
                    Value_391=node_compile(node_390,info);
                    if(                    !Value_391) {
                        __result234__ = (_Bool)0;
                        /* U13 */label_389 = come_decrement_ref_count2(label_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result234__;
                    }
                    else {
                    }
                    come_value_392=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_366,i_386)==((void*)0)) {
                            break;
                        }
                        else {
                            i_386++;
                        }
                    }
                    list$1CVALUEph_replace(come_params_366,i_386,(struct CVALUE*)come_increment_ref_count(come_value_392));
                    i_386++;
                    /*i*/come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                label_389) {
                }
                else {
                    Value_393=node_compile(node_390,info);
                    if(                    !Value_393) {
                        __result235__ = (_Bool)0;
                        /* U13 */label_389 = come_decrement_ref_count2(label_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result235__;
                    }
                    else {
                    }
                    come_value_394=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_366,i_386)==((void*)0)) {
                            break;
                        }
                        else {
                            i_386++;
                        }
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_362,i_386)) {
                        check_assign_type(((char*)(__right_value386=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value384=string_to_string(fun_name_235))),((char*)(__right_value385=int_to_string(i_386)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 963, 10)),come_value_394->type,come_value_394,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_362,i_386)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 965, 11))->mHeap&&come_value_394->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 966, 12)),come_value_394->type,come_value_394,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_366,i_386,(struct CVALUE*)come_increment_ref_count(come_value_394));
                    i_386++;
                    /*i*/come_call_finalizer3(come_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                /* U13 */label_389 = come_decrement_ref_count2(label_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            while((_Bool)1) {
                if(                list$1CVALUEphp_operator_load_element(come_params_366,i_386)==((void*)0)) {
                    break;
                }
                else {
                    i_386++;
                }
            }
            if(            list$1tuple2$2charphsNodephph_length(params_236)<list$1sTypeph_length(fun_346->mParamTypes)) {
                for(                ;                i_386<list$1sTypeph_length(fun_346->mParamTypes)-(((method_block_237)?(2):(0)));                i_386++                ){
                    default_param_395=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_346->mParamDefaultParametors,i_386)));
                    param_name_399=((char*)come_null_check(list$1charphp_operator_load_element(fun_346->mParamNames,i_386), "05call.c", 987, 13));
                    if(                    default_param_395&&string_operator_not_equals(default_param_395,"")&&list$1CVALUEphp_operator_load_element(come_params_366,i_386)==((void*)0)) {
                        source_400=(struct buffer*)come_increment_ref_count(info->source);
                        p_401=info->p;
                        head_402=info->head;
                        sline_403=info->sline;
                        __dec_obj222=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_395));
                        come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=info->source->buf;
                        info->head=info->source->buf;
                        node_404=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        Value_405=node_compile(node_404,info);
                        if(                        !Value_405) {
                            __result238__ = (_Bool)0;
                            /*i*/come_call_finalizer3(source_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_404) { node_404 = come_decrement_ref_count2(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /* U13 */default_param_395 = come_decrement_ref_count2(default_param_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result238__;
                        }
                        else {
                        }
                        __dec_obj223=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(source_400);
                        come_call_finalizer3(__dec_obj223,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=p_401;
                        info->head=head_402;
                        info->sline=sline_403;
                        come_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 1011, 14))) {
                            check_assign_type(((char*)(__right_value393=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value391=string_to_string(fun_name_235))),((char*)(__right_value392=int_to_string(i_386)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 1012, 15)),come_value_406->type,come_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
                            /* U11 */__right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /* U11 */__right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /* U11 */__right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 1014, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 1014, 17))->mHeap&&come_value_406->type->mHeap) {
                            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_362,i_386), "05call.c", 1015, 18)),come_value_406->type,come_value_406,info,(_Bool)1);
                        }
                        list$1CVALUEph_replace(come_params_366,i_386,(struct CVALUE*)come_increment_ref_count(come_value_406));
                        dec_stack_ptr(1,info);
                        /*i*/come_call_finalizer3(source_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_404) { node_404 = come_decrement_ref_count2(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_366,i_386)==((void*)0)) {
                            err_msg(info,"require parametor(%s)(1) %d",fun_346->mName,i_386);
                            __result239__ = (_Bool)0;
                            /* U13 */default_param_395 = come_decrement_ref_count2(default_param_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result239__;
                        }
                    }
                    /* U13 */default_param_395 = come_decrement_ref_count2(default_param_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            list$1sTypeph_length(fun_346->mParamTypes)-(((method_block_237)?(2):(0)))!=list$1CVALUEph_length(come_params_366)&&!fun_346->mVarArgs&&string_operator_not_equals(fun_name_235,"__builtin_va_start")&&string_operator_not_equals(fun_name_235,"__builtin_va_end")) {
                err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_235,list$1sTypeph_length(fun_346->mParamTypes),list$1tuple2$2charphsNodephph_length(params_236));
                __result240__ = (_Bool)0;
                /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result240__;
            }
            if(            method_block_237) {
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1036, "struct sNode");
                _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value395=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1036, "sCurrentNode2")),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sCurrentNode2_finalize;
                _inf_value1->clone=(void*)sCurrentNode2_clone;
                _inf_value1->compile=(void*)sCurrentNode2_compile;
                _inf_value1->sline=(void*)sCurrentNode2_sline;
                _inf_value1->sname=(void*)sCurrentNode2_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sCurrentNode2_kind;
                current_stack_frame_node_407=(struct sNode*)come_increment_ref_count(_inf_value1);
                /*g*/come_call_finalizer3(__right_value395,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
                Value_409=node_compile(current_stack_frame_node_407,info);
                if(                !Value_409) {
                    __result243__ = (_Bool)0;
                    if(current_stack_frame_node_407) { current_stack_frame_node_407 = come_decrement_ref_count2(current_stack_frame_node_407, ((struct sNode*)current_stack_frame_node_407)->finalize, ((struct sNode*)current_stack_frame_node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result243__;
                }
                else {
                }
                come_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUEph_push_back(come_params_366,(struct CVALUE*)come_increment_ref_count(come_value_410));
                dec_stack_ptr(1,info);
                method_block2_411=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1046, "buffer"))));
                method_block_type_412=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_346->mParamTypes,-1), "05call.c", 1047, 19))));
                class_name_413=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_412->mParamTypes,0), "05call.c", 1051, 20))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_413);
                current_stack_frame_struct_417=info->current_stack_frame_struct;
                info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_413);
                info->num_method_block++;
                if(                string_operator_not_equals(method_block_type_412->mClass->mName,"lambda")) {
                    err_msg(info,"This function does not have method block(%s)",fun_name_235);
                    __result248__ = (_Bool)0;
                    if(current_stack_frame_node_407) { current_stack_frame_node_407 = come_decrement_ref_count2(current_stack_frame_node_407, ((struct sNode*)current_stack_frame_node_407)->finalize, ((struct sNode*)current_stack_frame_node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_411,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_413 = come_decrement_ref_count2(class_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result248__;
                }
                result_type_418=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_412->mResultType->v1));
                result_type_418->mStatic=(_Bool)0;
                param_types_419=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_412->mParamTypes));
                param_names_420=method_block_type_412->mParamNames;
                all_alhabet_sname_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1067, "buffer"))));
                {
                    p_422=info->sname;
                    while(*p_422) {
                        if(                        xisalnum(*p_422)) {
                            buffer_append_char(all_alhabet_sname_421,*p_422++);
                        }
                        else {
                            p_422++;
                        }
                    }
                }
                buffer_append_format(method_block2_411,"%s fun_block%d_%s(",((char*)(__right_value408=make_type_name_string(result_type_418,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value409=buffer_to_string(all_alhabet_sname_421))));
                /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_386=0;
                for(                o2_saved_423=(struct list$1sTypeph*)come_increment_ref_count((param_types_419)),it_424=list$1sTypeph_begin((o2_saved_423));                !list$1sTypeph_end((o2_saved_423));                it_424=list$1sTypeph_next((o2_saved_423))                ){
                    param_type_425=it_424;
                    if(                    i_386==0) {
                        param_name_426=(char*)come_increment_ref_count(xsprintf("parent"));
                        buffer_append_format(method_block2_411,"%s",((char*)(__right_value411=make_define_var(param_type_425,param_name_426,(_Bool)0,info))));
                        /* U11 */__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_426 = come_decrement_ref_count2(param_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else if(                    i_386==1) {
                        param_name_427=(char*)come_increment_ref_count(xsprintf("it"));
                        buffer_append_format(method_block2_411,"%s",((char*)(__right_value413=make_define_var_no_solved(param_type_425,param_name_427,(_Bool)0,(_Bool)1,info))));
                        /* U11 */__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_427 = come_decrement_ref_count2(param_name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_428=(char*)come_increment_ref_count(xsprintf("it%d",i_386));
                        buffer_append_format(method_block2_411,"%s",((char*)(__right_value415=make_define_var_no_solved(param_type_425,param_name_428,(_Bool)0,(_Bool)1,info))));
                        /* U11 */__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_428 = come_decrement_ref_count2(param_name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    i_386!=list$1sTypeph_length(param_types_419)-1) {
                        buffer_append_str(method_block2_411,",");
                    }
                    i_386++;
                }
                /*i*/come_call_finalizer3(o2_saved_423,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(method_block2_411,")\n");
                buffer_append_str(method_block2_411,((char*)(__right_value416=buffer_to_string(method_block_237))));
                /* U11 */__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                source3_429=(struct buffer*)come_increment_ref_count(info->source);
                p_430=info->p;
                head_431=info->head;
                sline_432=info->sline;
                __dec_obj226=info->source;
                info->source=(struct buffer*)come_increment_ref_count(method_block2_411);
                come_call_finalizer3(__dec_obj226,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                info->sline=method_block_sline_238;
                node_433=(struct sNode*)come_increment_ref_count(parse_function(info));
                Value_434=node_compile(node_433,info);
                if(                !Value_434) {
                    __result249__ = (_Bool)0;
                    if(current_stack_frame_node_407) { current_stack_frame_node_407 = come_decrement_ref_count2(current_stack_frame_node_407, ((struct sNode*)current_stack_frame_node_407)->finalize, ((struct sNode*)current_stack_frame_node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_411,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_413 = come_decrement_ref_count2(class_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_419,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_429,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_433) { node_433 = come_decrement_ref_count2(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result249__;
                }
                else {
                }
                method_block_name_435=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value418=buffer_to_string(all_alhabet_sname_421)))));
                /* U11 */__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_value2_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1132, "CVALUE"))));
                fun2_437=map$2charphsFunph_at(info->funcs,method_block_name_435,((void*)0));
                if(                fun2_437==((void*)0)) {
                    err_msg(info,"method block function not found(%s)",method_block_name_435);
                    __result250__ = (_Bool)1;
                    if(current_stack_frame_node_407) { current_stack_frame_node_407 = come_decrement_ref_count2(current_stack_frame_node_407, ((struct sNode*)current_stack_frame_node_407)->finalize, ((struct sNode*)current_stack_frame_node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_411,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_413 = come_decrement_ref_count2(class_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_419,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_429,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_433) { node_433 = come_decrement_ref_count2(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */method_block_name_435 = come_decrement_ref_count2(method_block_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value2_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result250__;
                }
                method_block_type2_438=fun2_437->mLambdaType;
                __dec_obj227=come_value2_436->c_value;
                come_value2_436->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_435));
                /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj228=come_value2_436->type;
                come_value2_436->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_438));
                come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_436->var=((void*)0);
                list$1CVALUEph_push_back(come_params_366,(struct CVALUE*)come_increment_ref_count(come_value2_436));
                __dec_obj229=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source3_429);
                come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_430;
                info->head=head_431;
                info->sline=sline_432;
                info->current_stack_frame_struct=current_stack_frame_struct_417;
                if(current_stack_frame_node_407) { current_stack_frame_node_407 = come_decrement_ref_count2(current_stack_frame_node_407, ((struct sNode*)current_stack_frame_node_407)->finalize, ((struct sNode*)current_stack_frame_node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block2_411,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */class_name_413 = come_decrement_ref_count2(class_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_419,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(all_alhabet_sname_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(source3_429,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_433) { node_433 = come_decrement_ref_count2(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */method_block_name_435 = come_decrement_ref_count2(method_block_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value2_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_439=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1157, "buffer"))));
            buffer_append_str(buf_439,fun_name_235);
            buffer_append_str(buf_439,"(");
            j_440=0;
            for(            o2_saved_441=(struct list$1CVALUEph*)come_increment_ref_count((come_params_366)),it_442=list$1CVALUEph_begin((o2_saved_441));            !list$1CVALUEph_end((o2_saved_441));            it_442=list$1CVALUEph_next((o2_saved_441))            ){
                buffer_append_str(buf_439,it_442->c_value);
                if(                j_440!=list$1CVALUEph_length(come_params_366)-1) {
                    buffer_append_str(buf_439,",");
                }
                j_440++;
            }
            /*i*/come_call_finalizer3(o2_saved_441,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_439,")");
            come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1174, "CVALUE"))));
            __dec_obj230=come_value_443->c_value;
            come_value_443->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_439));
            /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj231=come_value_443->type;
            come_value_443->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_361));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_443->type->mStatic=(_Bool)0;
            come_value_443->var=((void*)0);
            if(            fun_346->mResultType->mHeap) {
                append_object_to_right_values2(come_value_443,(struct sType*)come_increment_ref_count(result_type_361),info,(_Bool)0);
            }
            if(            string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                if(                string_operator_not_equals(fun_name_235,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_235,"null_check")&&string_operator_not_equals(fun_name_235,"come_push_stackframe")&&string_operator_not_equals(fun_name_235,"come_pop_stackframe")) {
                    __dec_obj232=come_value_443->c_value;
                    come_value_443->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_443->c_value,come_value_443->type,info));
                    /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            if(            !self->guard_break&&result_type_361->mGuardValue&&result_type_361->mPointerNum>0) {
                __dec_obj233=come_value_443->c_value;
                come_value_443->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value431=make_type_name_string(result_type_361,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_443->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            add_come_last_code(info,"%s",come_value_443->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_443));
            /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        info->calling_fun=fun_346;
    }
    __result251__ = (_Bool)1;
    /* U13 */fun_name_235 = come_decrement_ref_count2(fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result251__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result170__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_227;
struct list_item$1tuple2$2charphsNodephph* it_228;
void* __right_value277 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result175__;
    if(    self==((void*)0)) {
        __result170__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    result_227=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 135, "list$1tuple2$2charphsNodephph"))));
    it_228=self->head;
    while(it_228!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_227,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_228->item)));
        it_228=it_228->next;
    }
    __result175__ = gComeFunResultObject = __result_obj__ = result_227;
    /*i*/come_call_finalizer3(result_227,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_225;
struct list_item$1tuple2$2charphsNodephph* prev_it_226;
    it_225=self->head;
    while(it_225!=((void*)0)) {
        prev_it_226=it_225;
        it_225=it_225->next;
        /*i*/come_call_finalizer3(prev_it_226,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj145;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj145=self->item;
            come_call_finalizer3(__dec_obj145,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_229;
struct tuple2$2charphsNodeph* __dec_obj148;
void* __right_value272 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_230;
struct tuple2$2charphsNodeph* __dec_obj151;
void* __right_value273 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_231;
struct tuple2$2charphsNodeph* __dec_obj154;
struct list$1tuple2$2charphsNodephph* __result172__;
    if(    self->len==0) {
        litem_229=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value271=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1tuple2$2charphsNodephph"))));
        litem_229->prev=((void*)0);
        litem_229->next=((void*)0);
        __dec_obj148=litem_229->item;
        litem_229->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_229;
        self->head=litem_229;
    }
    else if(    self->len==1) {
        litem_230=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value272=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1tuple2$2charphsNodephph"))));
        litem_230->prev=self->head;
        litem_230->next=((void*)0);
        __dec_obj151=litem_230->item;
        litem_230->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj151,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_230;
        self->head->next=litem_230;
    }
    else {
        litem_231=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value273=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1tuple2$2charphsNodephph"))));
        litem_231->prev=self->tail;
        litem_231->next=((void*)0);
        __dec_obj154=litem_231->item;
        litem_231->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj154,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_231;
        self->tail=litem_231;
    }
    self->len++;
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj155;
struct sNode* __dec_obj156;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj155=self->v1;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj156=self->v2;
            /* U1 */ if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result173__;
void* __right_value274 = (void*)0;
struct tuple2$2charphsNodeph* result_232;
void* __right_value275 = (void*)0;
char* __dec_obj157;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj158;
struct tuple2$2charphsNodeph* __result174__;
    if(    self==(void*)0) {
        __result173__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    result_232=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj157=result_232->v1;
        result_232->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj158=result_232->v2;
        result_232->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result174__ = gComeFunResultObject = __result_obj__ = result_232;
    /*i*/come_call_finalizer3(result_232,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj159;
struct sNode* __dec_obj160;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj159=self->v1;
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj160=self->v2;
            /* U1 */ if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_233;
struct list_item$1tuple2$2charphsNodephph* prev_it_234;
    it_233=self->head;
    while(it_233!=((void*)0)) {
        prev_it_234=it_233;
        it_233=it_233->next;
        /*i*/come_call_finalizer3(prev_it_234,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result179__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_243;
struct list_item$1CVALUEph* prev_it_244;
    it_243=self->head;
    while(it_243!=((void*)0)) {
        prev_it_244=it_243;
        it_243=it_243->next;
        /*i*/come_call_finalizer3(prev_it_244,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj169;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj169=self->item;
            come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_247;
struct tuple2$2charphsNodeph* __result181__;
struct tuple2$2charphsNodeph* __result182__;
struct tuple2$2charphsNodeph* result_248;
struct tuple2$2charphsNodeph* __result183__;
result_247 = (void*)0;
result_248 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_247,0,sizeof(struct tuple2$2charphsNodeph*));
        __result181__ = gComeFunResultObject = __result_obj__ = result_247;
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    self->it=self->head;
    if(    self->it) {
        __result182__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    memset(&result_248,0,sizeof(struct tuple2$2charphsNodeph*));
    __result183__ = gComeFunResultObject = __result_obj__ = result_248;
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_250;
struct tuple2$2charphsNodeph* __result184__;
struct tuple2$2charphsNodeph* __result185__;
struct tuple2$2charphsNodeph* result_251;
struct tuple2$2charphsNodeph* __result186__;
result_250 = (void*)0;
result_251 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_250,0,sizeof(struct tuple2$2charphsNodeph*));
        __result184__ = gComeFunResultObject = __result_obj__ = result_250;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result185__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    memset(&result_251,0,sizeof(struct tuple2$2charphsNodeph*));
    __result186__ = gComeFunResultObject = __result_obj__ = result_251;
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_256;
int i_257;
struct sType* __result188__;
struct sType* default_value_258;
struct sType* __result189__;
default_value_258 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_256=self->head;
    i_257=0;
    while(it_256!=((void*)0)) {
        if(        position==i_257) {
            __result188__ = gComeFunResultObject = __result_obj__ = it_256->item;
            gComeFunResultObject = (void*)0;
            return __result188__;
        }
        it_256=it_256->next;
        i_257++;
    }
    memset(&default_value_258,0,sizeof(struct sType*));
    __result189__ = gComeFunResultObject = __result_obj__ = default_value_258;
    /*i*/come_call_finalizer3(default_value_258,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_262;
struct CVALUE* __result190__;
struct CVALUE* __result191__;
struct CVALUE* result_263;
struct CVALUE* __result192__;
result_262 = (void*)0;
result_263 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_262,0,sizeof(struct CVALUE*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_262;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->head;
    if(    self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_263,0,sizeof(struct CVALUE*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_263;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_265;
struct CVALUE* __result193__;
struct CVALUE* __result194__;
struct CVALUE* result_266;
struct CVALUE* __result195__;
result_265 = (void*)0;
result_266 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_265,0,sizeof(struct CVALUE*));
        __result193__ = gComeFunResultObject = __result_obj__ = result_265;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result194__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    memset(&result_266,0,sizeof(struct CVALUE*));
    __result195__ = gComeFunResultObject = __result_obj__ = result_266;
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_273;
unsigned int it_274;
struct sFun* __result196__;
struct sFun* __result197__;
struct sFun* __result198__;
struct sFun* __result199__;
    hash_273=string_get_hash_key(((char*)key))%self->size;
    it_274=hash_273;
    while((_Bool)1) {
        if(        self->item_existance[it_274]) {
            if(            string_equals(self->keys[it_274],key)) {
                __result196__ = gComeFunResultObject = __result_obj__ = self->items[it_274];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result196__;
            }
            it_274++;
            if(            it_274>=self->size) {
                it_274=0;
            }
            else if(            it_274==hash_273) {
                __result197__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result197__;
            }
        }
        else {
            __result198__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result198__;
        }
    }
    __result199__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj172;
struct sType* __dec_obj173;
struct list$1sTypeph* __dec_obj174;
struct list$1charph* __dec_obj175;
struct list$1charph* __dec_obj176;
struct sType* __dec_obj177;
struct sBlock* __dec_obj178;
struct buffer* __dec_obj181;
struct buffer* __dec_obj182;
struct buffer* __dec_obj183;
struct buffer* __dec_obj184;
char* __dec_obj185;
char* __dec_obj186;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj172=self->mName;
            /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj173=self->mResultType;
            come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj174=self->mParamTypes;
            come_call_finalizer3(__dec_obj174,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj175=self->mParamNames;
            come_call_finalizer3(__dec_obj175,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj176=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj176,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj177=self->mLambdaType;
            come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj178=self->mBlock;
            come_call_finalizer3(__dec_obj178,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj181=self->mSource;
            come_call_finalizer3(__dec_obj181,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj182=self->mSourceHead;
            come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj183=self->mSourceHead2;
            come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj184=self->mSourceDefer;
            come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj185=self->mComeHeader;
            /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj186=self->mDeclareSName;
            /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj179;
struct sVarTable* __dec_obj180;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj179=self->mNodes;
            come_call_finalizer3(__dec_obj179,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj180=self->mVarTable;
            come_call_finalizer3(__dec_obj180,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_279;
int i_280;
struct CVALUE* __result201__;
struct CVALUE* default_value_281;
struct CVALUE* __result202__;
default_value_281 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_279=self->head;
    i_280=0;
    while(it_279!=((void*)0)) {
        if(        position==i_280) {
            __result201__ = gComeFunResultObject = __result_obj__ = it_279->item;
            gComeFunResultObject = (void*)0;
            return __result201__;
        }
        it_279=it_279->next;
        i_280++;
    }
    memset(&default_value_281,0,sizeof(struct CVALUE*));
    __result202__ = gComeFunResultObject = __result_obj__ = default_value_281;
    /*i*/come_call_finalizer3(default_value_281,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result206__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result206__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_287;
int i_288;
struct sType* default_value_289;
struct list$1sTypeph* __result204__;
struct list_item$1sTypeph* it_293;
int i_294;
struct sType* __dec_obj190;
struct list$1sTypeph* __result205__;
default_value_289 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_287=self->len;
        for(        i_288=0;        i_288<position-len_287;        i_288++        ){
            memset(&default_value_289,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_289));
            /*i*/come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result204__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    it_293=self->head;
    i_294=0;
    while(it_293!=((void*)0)) {
        if(        position==i_294) {
            __dec_obj190=it_293->item;
            it_293->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_293=it_293->next;
        i_294++;
    }
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_290;
struct sType* __dec_obj187;
void* __right_value302 = (void*)0;
struct list_item$1sTypeph* litem_291;
struct sType* __dec_obj188;
void* __right_value303 = (void*)0;
struct list_item$1sTypeph* litem_292;
struct sType* __dec_obj189;
struct list$1sTypeph* __result203__;
    if(    self->len==0) {
        litem_290=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sTypeph"))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj187=litem_290->item;
        litem_290->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value302=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sTypeph"))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj188=litem_291->item;
        litem_291->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value303=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sTypeph"))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj189=litem_292->item;
        litem_292->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_297;
struct sType* __result207__;
struct sType* __result208__;
struct sType* result_298;
struct sType* __result209__;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_297,0,sizeof(struct sType*));
        __result207__ = gComeFunResultObject = __result_obj__ = result_297;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    self->it=self->head;
    if(    self->it) {
        __result208__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    memset(&result_298,0,sizeof(struct sType*));
    __result209__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_300;
struct sType* __result210__;
struct sType* __result211__;
struct sType* result_301;
struct sType* __result212__;
result_300 = (void*)0;
result_301 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_300,0,sizeof(struct sType*));
        __result210__ = gComeFunResultObject = __result_obj__ = result_300;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result211__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    memset(&result_301,0,sizeof(struct sType*));
    __result212__ = gComeFunResultObject = __result_obj__ = result_301;
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value308 = (void*)0;
struct list_item$1CVALUEph* litem_312;
struct CVALUE* __dec_obj191;
void* __right_value309 = (void*)0;
struct list_item$1CVALUEph* litem_313;
struct CVALUE* __dec_obj192;
void* __right_value310 = (void*)0;
struct list_item$1CVALUEph* litem_314;
struct CVALUE* __dec_obj193;
struct list$1CVALUEph* __result214__;
    if(    self->len==0) {
        litem_312=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value308=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1CVALUEph"))));
        litem_312->prev=((void*)0);
        litem_312->next=((void*)0);
        __dec_obj191=litem_312->item;
        litem_312->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_312;
        self->head=litem_312;
    }
    else if(    self->len==1) {
        litem_313=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value309=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1CVALUEph"))));
        litem_313->prev=self->head;
        litem_313->next=((void*)0);
        __dec_obj192=litem_313->item;
        litem_313->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_313;
        self->head->next=litem_313;
    }
    else {
        litem_314=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value310=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1CVALUEph"))));
        litem_314->prev=self->tail;
        litem_314->next=((void*)0);
        __dec_obj193=litem_314->item;
        litem_314->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_314;
        self->tail=litem_314;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_320;
unsigned int it_321;
struct map$2charphsFunph* __result215__;
    hash_320=string_get_hash_key(((char*)key))%self->size;
    it_321=hash_320;
    while((_Bool)1) {
        if(        self->item_existance[it_321]) {
            if(            string_equals(self->keys[it_321],key)) {
                list$1charp_remove(self->key_list,self->keys[it_321]);
                self->item_existance[it_321]=(_Bool)0;
                if(                1) {
                    /* U13 */self->keys[it_321] = come_decrement_ref_count2(self->keys[it_321], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_321]=((void*)0);
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_321],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_321]=((void*)0);
                self->len--;
                break;
            }
            it_321++;
            if(            it_321>=self->size) {
                it_321=0;
            }
            else if(            it_321==hash_320) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_340;
unsigned int hash_341;
unsigned int it_342;
struct sFun* __result218__;
struct sFun* __result219__;
struct sFun* __result220__;
struct sFun* __result221__;
default_value_340 = (void*)0;
    memset(&default_value_340,0,sizeof(struct sFun*));
    hash_341=string_get_hash_key(((char*)key))%self->size;
    it_342=hash_341;
    while((_Bool)1) {
        if(        self->item_existance[it_342]) {
            if(            string_equals(self->keys[it_342],key)) {
                __result218__ = gComeFunResultObject = __result_obj__ = self->items[it_342];
                /*i*/come_call_finalizer3(default_value_340,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result218__;
            }
            it_342++;
            if(            it_342>=self->size) {
                it_342=0;
            }
            else if(            it_342==hash_341) {
                __result219__ = gComeFunResultObject = __result_obj__ = default_value_340;
                /*i*/come_call_finalizer3(default_value_340,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result219__;
            }
        }
        else {
            __result220__ = gComeFunResultObject = __result_obj__ = default_value_340;
            /*i*/come_call_finalizer3(default_value_340,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result220__;
        }
    }
    __result221__ = gComeFunResultObject = __result_obj__ = default_value_340;
    /*i*/come_call_finalizer3(default_value_340,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_376;
char* __result226__;
char* __result227__;
char* result_377;
char* __result228__;
result_376 = (void*)0;
result_377 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_376,0,sizeof(char*));
        __result226__ = gComeFunResultObject = __result_obj__ = result_376;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    self->it=self->head;
    if(    self->it) {
        __result227__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    memset(&result_377,0,sizeof(char*));
    __result228__ = gComeFunResultObject = __result_obj__ = result_377;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_379;
char* __result229__;
char* __result230__;
char* result_380;
char* __result231__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_379,0,sizeof(char*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_379;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_380,0,sizeof(char*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_381;
int i_382;
struct CVALUE* default_value_383;
struct list$1CVALUEph* __result232__;
struct list_item$1CVALUEph* it_384;
int i_385;
struct CVALUE* __dec_obj221;
struct list$1CVALUEph* __result233__;
default_value_383 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_381=self->len;
        for(        i_382=0;        i_382<position-len_381;        i_382++        ){
            memset(&default_value_383,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_383));
            /*i*/come_call_finalizer3(default_value_383,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result232__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    it_384=self->head;
    i_385=0;
    while(it_384!=((void*)0)) {
        if(        position==i_385) {
            __dec_obj221=it_384->item;
            it_384->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_384=it_384->next;
        i_385++;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_396;
int i_397;
char* __result236__;
char* default_value_398;
char* __result237__;
default_value_398 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_396=self->head;
    i_397=0;
    while(it_396!=((void*)0)) {
        if(        position==i_397) {
            __result236__ = gComeFunResultObject = __result_obj__ = it_396->item;
            gComeFunResultObject = (void*)0;
            return __result236__;
        }
        it_396=it_396->next;
        i_397++;
    }
    memset(&default_value_398,0,sizeof(char*));
    __result237__ = gComeFunResultObject = __result_obj__ = default_value_398;
    /* U13 */default_value_398 = come_decrement_ref_count2(default_value_398, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_414;
unsigned int hash_415;
unsigned int it_416;
struct sClass* __result244__;
struct sClass* __result245__;
struct sClass* __result246__;
struct sClass* __result247__;
default_value_414 = (void*)0;
    memset(&default_value_414,0,sizeof(struct sClass*));
    hash_415=string_get_hash_key(((char*)key))%self->size;
    it_416=hash_415;
    while((_Bool)1) {
        if(        self->item_existance[it_416]) {
            if(            string_equals(self->keys[it_416],key)) {
                __result244__ = gComeFunResultObject = __result_obj__ = self->items[it_416];
                /*i*/come_call_finalizer3(default_value_414,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
            it_416++;
            if(            it_416>=self->size) {
                it_416=0;
            }
            else if(            it_416==hash_415) {
                __result245__ = gComeFunResultObject = __result_obj__ = default_value_414;
                /*i*/come_call_finalizer3(default_value_414,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
        }
        else {
            __result246__ = gComeFunResultObject = __result_obj__ = default_value_414;
            /*i*/come_call_finalizer3(default_value_414,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result246__;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = default_value_414;
    /*i*/come_call_finalizer3(default_value_414,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct buffer* __dec_obj234;
struct sComeCallNode* __result252__;
    ((struct sNodeBase*)(__right_value433=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value433,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj234=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
char* __result253__;
    __result253__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value434=__builtin_string("sComeCallNode")));
    /* U11 */__right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_444;
struct buffer* come_block_445;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1CVALUEph* come_params_446;
void* __right_value437 = (void*)0;
char* var_name_448;
void* __right_value438 = (void*)0;
struct sType* type__449;
_Bool __result258__;
void* __right_value439 = (void*)0;
struct sNode* var_node_452;
_Bool Value_453;
_Bool __result259__;
void* __right_value440 = (void*)0;
struct CVALUE* thread_var_value_454;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_455;
void* __right_value443 = (void*)0;
char* __dec_obj237;
struct sType* __dec_obj238;
void* __right_value444 = (void*)0;
struct sNode* null_node_456;
_Bool Value_457;
_Bool __result260__;
void* __right_value445 = (void*)0;
struct CVALUE* __dec_obj239;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value450 = (void*)0;
struct sNode* current_stack_frame_node_458;
_Bool Value_460;
_Bool __result263__;
void* __right_value451 = (void*)0;
struct CVALUE* current_stack_frame_value_461;
void* __right_value452 = (void*)0;
char* fun_name_462;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct buffer* come_block2_463;
void* __right_value455 = (void*)0;
char* class_name_464;
void* __right_value456 = (void*)0;
struct sClass* current_stack_frame_struct_465;
struct buffer* source3_466;
char* p_467;
char* head_468;
int sline_469;
struct buffer* __dec_obj242;
void* __right_value457 = (void*)0;
struct sNode* node_470;
_Bool Value_471;
_Bool __result264__;
struct buffer* __dec_obj243;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct CVALUE* fun_value_472;
void* __right_value460 = (void*)0;
char* __dec_obj244;
struct sType* __dec_obj245;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* buf_473;
void* __right_value463 = (void*)0;
char* fun_name_474;
int j_475;
struct list$1CVALUEph* o2_saved_476;
struct CVALUE* it_477;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value466 = (void*)0;
char* __dec_obj246;
void* __right_value467 = (void*)0;
struct sType* type_479;
_Bool __result265__;
struct sType* __dec_obj247;
_Bool __result266__;
    come_block_sline_444=self->come_block_sline;
    come_block_445=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_446=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1232, "list$1CVALUEph"))));
    static int thread_num_447=0;
    thread_num_447++;
    var_name_448=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_447));
    type__449=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type__449==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result258__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result258__;
    }
    var_node_452=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_448),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__449),(_Bool)1,((void*)0),info));
    Value_453=node_compile(var_node_452,info);
    if(    !Value_453) {
        __result259__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_452) { var_node_452 = come_decrement_ref_count2(var_node_452, ((struct sNode*)var_node_452)->finalize, ((struct sNode*)var_node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result259__;
    }
    else {
    }
    thread_var_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_455=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1255, "CVALUE"))));
    __dec_obj237=come_value_455->c_value;
    come_value_455->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_454->c_value));
    /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj238=come_value_455->type;
    come_value_455->type=(struct sType*)come_increment_ref_count(thread_var_value_454->type);
    come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_455->var=((void*)0);
    list$1CVALUEph_push_back(come_params_446,(struct CVALUE*)come_increment_ref_count(come_value_455));
    null_node_456=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_457=node_compile(null_node_456,info);
    if(    !Value_457) {
        __result260__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_452) { var_node_452 = come_decrement_ref_count2(var_node_452, ((struct sNode*)var_node_452)->finalize, ((struct sNode*)var_node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_456) { null_node_456 = come_decrement_ref_count2(null_node_456, ((struct sNode*)null_node_456)->finalize, ((struct sNode*)null_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result260__;
    }
    else {
    }
    __dec_obj239=come_value_455;
    come_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_446,(struct CVALUE*)come_increment_ref_count(come_value_455));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1273, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value447=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1273, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_458=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value447,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_460=node_compile(current_stack_frame_node_458,info);
    if(    !Value_460) {
        __result263__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_452) { var_node_452 = come_decrement_ref_count2(var_node_452, ((struct sNode*)var_node_452)->finalize, ((struct sNode*)var_node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_456) { null_node_456 = come_decrement_ref_count2(null_node_456, ((struct sNode*)null_node_456)->finalize, ((struct sNode*)null_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_458) { current_stack_frame_node_458 = come_decrement_ref_count2(current_stack_frame_node_458, ((struct sNode*)current_stack_frame_node_458)->finalize, ((struct sNode*)current_stack_frame_node_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result263__;
    }
    else {
    }
    current_stack_frame_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_462=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_447));
    come_block2_463=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1284, "buffer"))));
    class_name_464=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_463,"void* %s(%s* parent)\n",fun_name_462,class_name_464);
    buffer_append_str(come_block2_463,((char*)(__right_value456=buffer_to_string(come_block_445))));
    /* U11 */__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_465=info->current_stack_frame_struct;
    info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_464);
    source3_466=(struct buffer*)come_increment_ref_count(info->source);
    p_467=info->p;
    head_468=info->head;
    sline_469=info->sline;
    __dec_obj242=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_463);
    come_call_finalizer3(__dec_obj242,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_444;
    node_470=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_471=node_compile(node_470,info);
    if(    !Value_471) {
        __result264__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_452) { var_node_452 = come_decrement_ref_count2(var_node_452, ((struct sNode*)var_node_452)->finalize, ((struct sNode*)var_node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_456) { null_node_456 = come_decrement_ref_count2(null_node_456, ((struct sNode*)null_node_456)->finalize, ((struct sNode*)null_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_458) { current_stack_frame_node_458 = come_decrement_ref_count2(current_stack_frame_node_458, ((struct sNode*)current_stack_frame_node_458)->finalize, ((struct sNode*)current_stack_frame_node_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(current_stack_frame_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_462 = come_decrement_ref_count2(fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_block2_463,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_464 = come_decrement_ref_count2(class_name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_470) { node_470 = come_decrement_ref_count2(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result264__;
    }
    else {
    }
    __dec_obj243=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_466);
    come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_467;
    info->head=head_468;
    info->sline=sline_469;
    info->current_stack_frame_struct=current_stack_frame_struct_465;
    fun_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1318, "CVALUE"))));
    __dec_obj244=fun_value_472->c_value;
    fun_value_472->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_462));
    /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj245=come_value_455->type;
    come_value_455->type=((void*)0);
    come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_455->var=((void*)0);
    list$1CVALUEph_add(come_params_446,(struct CVALUE*)come_increment_ref_count(fun_value_472));
    list$1CVALUEph_add(come_params_446,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_461));
    buf_473=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1328, "buffer"))));
    /* U13 */fun_name_462 = come_decrement_ref_count2(fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_474=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_473,"(");
    buffer_append_str(buf_473,fun_name_474);
    buffer_append_str(buf_473,"(");
    j_475=0;
    for(    o2_saved_476=(struct list$1CVALUEph*)come_increment_ref_count((come_params_446)),it_477=list$1CVALUEph_begin((o2_saved_476));    !list$1CVALUEph_end((o2_saved_476));    it_477=list$1CVALUEph_next((o2_saved_476))    ){
        buffer_append_str(buf_473,it_477->c_value);
        if(        j_475!=list$1CVALUEph_length(come_params_446)-1) {
            buffer_append_str(buf_473,",");
        }
        j_475++;
    }
    /*i*/come_call_finalizer3(o2_saved_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_473,")");
    buffer_append_str(buf_473,", ");
    buffer_append_str(buf_473,thread_var_value_454->c_value);
    buffer_append_str(buf_473,")");
    /*i*/come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1351, "CVALUE"))));
    __dec_obj246=come_value_478->c_value;
    come_value_478->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_473));
    /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_479=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type_479==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result265__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_452) { var_node_452 = come_decrement_ref_count2(var_node_452, ((struct sNode*)var_node_452)->finalize, ((struct sNode*)var_node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_456) { null_node_456 = come_decrement_ref_count2(null_node_456, ((struct sNode*)null_node_456)->finalize, ((struct sNode*)null_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_458) { current_stack_frame_node_458 = come_decrement_ref_count2(current_stack_frame_node_458, ((struct sNode*)current_stack_frame_node_458)->finalize, ((struct sNode*)current_stack_frame_node_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(current_stack_frame_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_block2_463,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_464 = come_decrement_ref_count2(class_name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_470) { node_470 = come_decrement_ref_count2(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(fun_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_473,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_474 = come_decrement_ref_count2(fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result265__;
    }
    __dec_obj247=come_value_478->type;
    come_value_478->type=(struct sType*)come_increment_ref_count(type_479);
    come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_478->var=((void*)0);
    add_come_last_code(info,"%s",come_value_478->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
    __result266__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_block_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_448 = come_decrement_ref_count2(var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type__449,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_452) { var_node_452 = come_decrement_ref_count2(var_node_452, ((struct sNode*)var_node_452)->finalize, ((struct sNode*)var_node_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(thread_var_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_456) { null_node_456 = come_decrement_ref_count2(null_node_456, ((struct sNode*)null_node_456)->finalize, ((struct sNode*)null_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_458) { current_stack_frame_node_458 = come_decrement_ref_count2(current_stack_frame_node_458, ((struct sNode*)current_stack_frame_node_458)->finalize, ((struct sNode*)current_stack_frame_node_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(current_stack_frame_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_block2_463,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */class_name_464 = come_decrement_ref_count2(class_name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source3_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_470) { node_470 = come_decrement_ref_count2(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(fun_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_473,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_474 = come_decrement_ref_count2(fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_450;
unsigned int it_451;
struct sType* __result254__;
struct sType* __result255__;
struct sType* __result256__;
struct sType* __result257__;
    hash_450=string_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            string_equals(self->keys[it_451],key)) {
                __result254__ = gComeFunResultObject = __result_obj__ = self->items[it_451];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                __result255__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
        }
        else {
            __result256__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result256__;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj240;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj240=self->sname;
            /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result261__;
void* __right_value448 = (void*)0;
struct sCurrentNode2* result_459;
void* __right_value449 = (void*)0;
char* __dec_obj241;
struct sCurrentNode2* __result262__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_459=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_459->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj241=result_459->sname;
        result_459->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_459;
    /*i*/come_call_finalizer3(result_459,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj248;
struct sComeJoinNode* __result267__;
    ((struct sNodeBase*)(__right_value468=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value468,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj248=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    /* U1 */ if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value469 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value469=__builtin_string("sComeJoinNode")));
    /* U11 */__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_480;
_Bool Value_481;
_Bool __result269__;
void* __right_value470 = (void*)0;
struct CVALUE* come_value_482;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct buffer* buf_483;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct CVALUE* come_value_484;
void* __right_value475 = (void*)0;
char* __dec_obj251;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj252;
_Bool __result270__;
    node_480=(struct sNode*)come_increment_ref_count(self->node);
    Value_481=node_compile(node_480,info);
    if(    !Value_481) {
        __result269__ = (_Bool)0;
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result269__;
    }
    else {
    }
    come_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_483=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1399, "buffer"))));
    buffer_append_str(buf_483,"pthread_join(");
    buffer_append_str(buf_483,come_value_482->c_value);
    buffer_append_str(buf_483,", 0)");
    /*i*/come_call_finalizer3(come_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1404, "CVALUE"))));
    __dec_obj251=come_value_484->c_value;
    come_value_484->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_483));
    /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj252=come_value_484->type;
    come_value_484->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1406, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_484->var=((void*)0);
    add_come_last_code(info,"%s",come_value_484->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_484));
    __result270__ = (_Bool)1;
    if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(buf_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result270__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
struct list$1sNodeph* __dec_obj253;
struct list$1sBlockph* __dec_obj254;
struct sComePollNode* __result271__;
    ((struct sNodeBase*)(__right_value478=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value478,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj253=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj253,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj254=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj254,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value479 = (void*)0;
char* __result272__;
    __result272__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value479=__builtin_string("sComePollNode")));
    /* U11 */__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_489;
struct list$1sBlockph* blocks_490;
int time_out_491;
int n_493;
struct list$1sNodeph* o2_saved_494;
struct sNode* it_497;
_Bool Value_500;
_Bool __result279__;
void* __right_value480 = (void*)0;
struct CVALUE* come_value_501;
int n_502;
struct list$1sNodeph* o2_saved_503;
struct sNode* it_504;
_Bool __result282__;
    vars_489=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_490=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_491=self->time_out;
    static int var_num_492=0;
    var_num_492++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_492,list$1sNodeph_length(vars_489));
    n_493=0;
    for(    o2_saved_494=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_497=list$1sNodeph_begin((o2_saved_494));    !list$1sNodeph_end((o2_saved_494));    it_497=list$1sNodeph_next((o2_saved_494))    ){
        Value_500=node_compile(it_497,info);
        if(        !Value_500) {
            __result279__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_494,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(vars_489,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_490,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result279__;
        }
        else {
        }
        come_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_492,n_493,come_value_501->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_492,n_493,1);
        n_493++;
        /*i*/come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_494,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_492,var_num_492,list$1sNodeph_length(vars_489),time_out_491);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_492);
    n_502=0;
    for(    o2_saved_503=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_504=list$1sNodeph_begin((o2_saved_503));    !list$1sNodeph_end((o2_saved_503));    it_504=list$1sNodeph_next((o2_saved_503))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_492,n_502,1);
        transpile_block(((struct sBlock*)come_null_check(list$1sBlockphp_operator_load_element(blocks_490,n_502), "05call.c", 1469, 21)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        add_come_code(info,"}\n");
        n_502++;
    }
    /*i*/come_call_finalizer3(o2_saved_503,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    __result282__ = (_Bool)1;
    /*i*/come_call_finalizer3(vars_489,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(blocks_490,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result282__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_485;
struct list_item$1sBlockph* prev_it_486;
    it_485=self->head;
    while(it_485!=((void*)0)) {
        prev_it_486=it_485;
        it_485=it_485->next;
        /*i*/come_call_finalizer3(prev_it_486,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj255;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj255=self->item;
            come_call_finalizer3(__dec_obj255,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_487;
struct list_item$1sBlockph* prev_it_488;
    it_487=self->head;
    while(it_487!=((void*)0)) {
        prev_it_488=it_487;
        it_487=it_487->next;
        /*i*/come_call_finalizer3(prev_it_488,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_495;
struct sNode* __result273__;
struct sNode* __result274__;
struct sNode* result_496;
struct sNode* __result275__;
result_495 = (void*)0;
result_496 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_495,0,sizeof(struct sNode*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_495;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->head;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_496,0,sizeof(struct sNode*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_496;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_498;
struct sNode* __result276__;
struct sNode* __result277__;
struct sNode* result_499;
struct sNode* __result278__;
result_498 = (void*)0;
result_499 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_498,0,sizeof(struct sNode*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_498;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_499,0,sizeof(struct sNode*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_499;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_505;
int i_506;
struct sBlock* __result280__;
struct sBlock* default_value_507;
struct sBlock* __result281__;
default_value_507 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_505=self->head;
    i_506=0;
    while(it_505!=((void*)0)) {
        if(        position==i_506) {
            __result280__ = gComeFunResultObject = __result_obj__ = it_505->item;
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
        it_505=it_505->next;
        i_506++;
    }
    memset(&default_value_507,0,sizeof(struct sBlock*));
    __result281__ = gComeFunResultObject = __result_obj__ = default_value_507;
    /*i*/come_call_finalizer3(default_value_507,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value489 = (void*)0;
struct sNode* node_508;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj269;
struct sNode* __result285__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1484, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value482=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1484, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_508=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value482,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj269=node_508;
    node_508=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_508),info));
    /* U1 */ if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    __result285__ = gComeFunResultObject = __result_obj__ = node_508;
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result285__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value491 = (void*)0;
struct sNode* __dec_obj270;
void* __right_value492 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj271;
struct sLambdaCall* __result286__;
    ((struct sNodeBase*)(__right_value491=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value491,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj270=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    /* U1 */ if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj271=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj271,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result286__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value493 = (void*)0;
char* __result287__;
    __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value493=__builtin_string("sLambdaCall")));
    /* U11 */__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_510;
struct list$1tuple2$2charphsNodephph* params_511;
_Bool Value_512;
_Bool __result288__;
void* __right_value494 = (void*)0;
struct CVALUE* come_value_513;
struct sType* lambda_type_514;
_Bool __result289__;
void* __right_value495 = (void*)0;
struct sType* result_type_515;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1CVALUEph* come_params_516;
_Bool __result290__;
int i_517;
struct list$1tuple2$2charphsNodephph* o2_saved_518;
struct tuple2$2charphsNodeph* it_519;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_520=0;
struct sNode* node_521=0;
_Bool Value_522;
_Bool __result291__;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_523;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct buffer* buf_524;
int j_525;
struct list$1CVALUEph* o2_saved_526;
struct CVALUE* it_527;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct CVALUE* come_value2_528;
void* __right_value505 = (void*)0;
char* __dec_obj275;
void* __right_value506 = (void*)0;
struct sType* __dec_obj276;
_Bool __result292__;
    node_510=(struct sNode*)come_increment_ref_count(self->node);
    params_511=self->params;
    Value_512=node_compile(node_510,info);
    if(    !Value_512) {
        __result288__ = (_Bool)0;
        if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result288__;
    }
    else {
    }
    come_value_513=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_514=come_value_513->type;
    if(    lambda_type_514->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result289__ = (_Bool)0;
        if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result289__;
    }
    result_type_515=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_514->mResultType->v1));
    result_type_515->mStatic=(_Bool)0;
    come_params_516=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1528, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_514->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_511)&&!lambda_type_514->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_514->mParamTypes),list$1tuple2$2charphsNodephph_length(params_511));
        __result290__ = (_Bool)0;
        if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result290__;
    }
    i_517=0;
    for(    o2_saved_518=(params_511),it_519=list$1tuple2$2charphsNodephph_begin((o2_saved_518));    !list$1tuple2$2charphsNodephph_end((o2_saved_518));    it_519=list$1tuple2$2charphsNodephph_next((o2_saved_518))    ){
        multiple_assign_var7=it_519;
        label_520=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_521=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        Value_522=node_compile(node_521,info);
        if(        !Value_522) {
            __result291__ = (_Bool)0;
            /* U13 */label_520 = come_decrement_ref_count2(label_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_521) { node_521 = come_decrement_ref_count2(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result291__;
        }
        else {
        }
        come_value_523=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        lambda_type_514->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_514->mParamTypes,i_517)==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(__right_value500=xsprintf("calling param #\%s",((char*)(__right_value499=int_to_string(i_517)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_514->mParamTypes,i_517), "05call.c", 1547, 22)),come_value_523->type,come_value_523,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_514->mParamTypes,i_517), "05call.c", 1548, 23))->mHeap&&come_value_523->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_514->mParamTypes,i_517), "05call.c", 1549, 24)),come_value_523->type,come_value_523,info,(_Bool)1);
            }
        }
        list$1CVALUEph_push_back(come_params_516,(struct CVALUE*)come_increment_ref_count(come_value_523));
        dec_stack_ptr(1,info);
        i_517++;
        /* U13 */label_520 = come_decrement_ref_count2(label_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_521) { node_521 = come_decrement_ref_count2(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_524=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1559, "buffer"))));
    buffer_append_str(buf_524,"(");
    buffer_append_str(buf_524,come_value_513->c_value);
    buffer_append_str(buf_524,")");
    buffer_append_str(buf_524,"(");
    j_525=0;
    for(    o2_saved_526=(struct list$1CVALUEph*)come_increment_ref_count((come_params_516)),it_527=list$1CVALUEph_begin((o2_saved_526));    !list$1CVALUEph_end((o2_saved_526));    it_527=list$1CVALUEph_next((o2_saved_526))    ){
        buffer_append_str(buf_524,it_527->c_value);
        if(        j_525!=list$1CVALUEph_length(come_params_516)-1) {
            buffer_append_str(buf_524,",");
        }
        j_525++;
    }
    /*i*/come_call_finalizer3(o2_saved_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_524,")");
    come_value2_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1578, "CVALUE"))));
    __dec_obj275=come_value2_528->c_value;
    come_value2_528->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_524));
    /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_514->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_528,(struct sType*)come_increment_ref_count(lambda_type_514->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj276=come_value2_528->type;
    come_value2_528->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_515));
    come_call_finalizer3(__dec_obj276,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_528->type->mStatic=(_Bool)0;
    come_value2_528->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_528->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_528));
    __result292__ = (_Bool)1;
    if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_524,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj277;
struct sVarArgTypeName* __result293__;
    ((struct sNodeBase*)(__right_value507=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value507,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj277=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value508=__builtin_string("sVarArgTypeName")));
    /* U11 */__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_529;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct CVALUE* come_value_530;
void* __right_value511 = (void*)0;
char* __dec_obj280;
struct sType* __dec_obj281;
_Bool __result295__;
    type_529=(struct sType*)come_increment_ref_count(self->type);
    come_value_530=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1615, "CVALUE"))));
    __dec_obj280=come_value_530->c_value;
    come_value_530->c_value=(char*)come_increment_ref_count(make_type_name_string(type_529,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=come_value_530->type;
    come_value_530->type=(struct sType*)come_increment_ref_count(type_529);
    come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_530->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_530));
    __result295__ = (_Bool)1;
    /*i*/come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1sTypeph* method_generics_types_531;
void* __right_value514 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type_532=0;
char* name_533=0;
_Bool err_534=0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_535;
_Bool _va_arg_536;
char* p_537;
int sline_538;
_Bool err_flag_539;
void* __right_value518 = (void*)0;
char* label_540;
void* __right_value519 = (void*)0;
char* __dec_obj284;
char* __dec_obj285;
_Bool no_comma_541;
_Bool in_fun_param_542;
void* __right_value520 = (void*)0;
struct sNode* node_543;
void* __right_value521 = (void*)0;
struct sNode* __dec_obj286;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
_Bool guard_break_547;
struct buffer* method_block_548;
int method_block_sline_549;
char* head_550;
void* __right_value527 = (void*)0;
char* tail_551;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct buffer* __dec_obj292;
int len_552;
void* __right_value530 = (void*)0;
char* mem_553;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value539 = (void*)0;
struct sNode* node_554;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj303;
struct sNode* __result300__;
    method_generics_types_531=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1629, "list$1sTypeph"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value514=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_532=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_533=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_534=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value514,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_534) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_531,(struct sType*)come_increment_ref_count(sType_clone(type_532)));
                /*i*/come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_535=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1667, "list$1tuple2$2charphsNodephph"))));
    _va_arg_536=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_537=info->p;
        sline_538=info->sline;
        err_flag_539=(_Bool)0;
        label_540=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj284=label_540;
            label_540=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_539=(_Bool)1;
        }
        if(        err_flag_539==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj285=label_540;
            label_540=((void*)0);
            /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_537;
            info->sline=sline_538;
        }
        no_comma_541=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_542=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_543=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj286=node_543;
        node_543=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_543),info));
        /* U1 */ if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_541;
        info->in_fun_param=in_fun_param_542;
        list$1tuple2$2charphsNodephph_push_back(params_535,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1715, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_540),(struct sNode*)come_increment_ref_count(node_543))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */label_540 = come_decrement_ref_count2(label_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */label_540 = come_decrement_ref_count2(label_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_536;
    guard_break_547=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_547=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_548=((void*)0);
    method_block_sline_549=0;
    if(    *info->p==123) {
        head_550=info->p;
        method_block_sline_549=info->sline;
        ((char*)(__right_value527=skip_block(info)));
        /* U11 */__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_551=info->p;
        __dec_obj292=method_block_548;
        method_block_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1752, "buffer"))));
        come_call_finalizer3(__dec_obj292,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_552=tail_551-head_550;
        mem_553=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_552+1)), "05call.c", 1755, "char"));
        memcpy(mem_553,head_550,len_552);
        mem_553[len_552]=0;
        buffer_append_str(method_block_548,mem_553);
        buffer_append_str(method_block_548,"\n");
        /* U13 */mem_553 = come_decrement_ref_count2(mem_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1765, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value532=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1765, "sFunCallNode")),fun_name,params_535,guard_break_547,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_531),(struct buffer*)come_increment_ref_count(method_block_548),method_block_sline_549,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_554=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value532,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj303=node_554;
    node_554=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_554),info));
    /* U1 */ if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    __result300__ = gComeFunResultObject = __result_obj__ = node_554;
    /*i*/come_call_finalizer3(method_generics_types_531,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_535,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_554) { node_554 = come_decrement_ref_count2(node_554, ((struct sNode*)node_554)->finalize, ((struct sNode*)node_554)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj282;
char* __dec_obj283;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj282=self->v1;
            come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value522 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_544;
struct tuple2$2charphsNodeph* __dec_obj287;
void* __right_value523 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_545;
struct tuple2$2charphsNodeph* __dec_obj288;
void* __right_value524 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_546;
struct tuple2$2charphsNodeph* __dec_obj289;
struct list$1tuple2$2charphsNodephph* __result296__;
    if(    self->len==0) {
        litem_544=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value522=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1tuple2$2charphsNodephph"))));
        litem_544->prev=((void*)0);
        litem_544->next=((void*)0);
        __dec_obj287=litem_544->item;
        litem_544->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj287,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_544;
        self->head=litem_544;
    }
    else if(    self->len==1) {
        litem_545=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value523=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1tuple2$2charphsNodephph"))));
        litem_545->prev=self->head;
        litem_545->next=((void*)0);
        __dec_obj288=litem_545->item;
        litem_545->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj288,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_545;
        self->head->next=litem_545;
    }
    else {
        litem_546=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value524=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1tuple2$2charphsNodephph"))));
        litem_546->prev=self->tail;
        litem_546->next=((void*)0);
        __dec_obj289=litem_546->item;
        litem_546->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj289,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_546;
        self->tail=litem_546;
    }
    self->len++;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj290;
struct sNode* __dec_obj291;
struct tuple2$2charphsNodeph* __result297__;
    __dec_obj290=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj293;
char* __dec_obj294;
struct list$1tuple2$2charphsNodephph* __dec_obj295;
struct list$1sTypeph* __dec_obj296;
struct buffer* __dec_obj297;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj294=self->fun_name;
            /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj295=self->params;
            come_call_finalizer3(__dec_obj295,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj296=self->method_generics_types;
            come_call_finalizer3(__dec_obj296,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj297=self->method_block;
            come_call_finalizer3(__dec_obj297,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result298__;
void* __right_value533 = (void*)0;
struct sFunCallNode* result_555;
void* __right_value534 = (void*)0;
char* __dec_obj298;
void* __right_value535 = (void*)0;
char* __dec_obj299;
void* __right_value536 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj300;
void* __right_value537 = (void*)0;
struct list$1sTypeph* __dec_obj301;
void* __right_value538 = (void*)0;
struct buffer* __dec_obj302;
struct sFunCallNode* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_555=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_555->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj298=result_555->sname;
        result_555->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj299=result_555->fun_name;
        result_555->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj300=result_555->params;
        result_555->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj300,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_555->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj301=result_555->method_generics_types;
        result_555->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj301,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj302=result_555->method_block;
        result_555->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_555->method_block_sline=self->method_block_sline;
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_555;
    /*i*/come_call_finalizer3(result_555,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result301__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result301__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value547 = (void*)0;
struct sNode* __result304__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1786, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value542=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1786, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result304__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value547=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value542,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value547) { __right_value547 = come_decrement_ref_count2(__right_value547, ((struct sNode*)__right_value547)->finalize, ((struct sNode*)__right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value555 = (void*)0;
struct sNode* __result307__;
char* head_558;
void* __right_value556 = (void*)0;
struct sNode* value_559;
char* tail_560;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value565 = (void*)0;
struct sNode* __result310__;
char* head_563;
int head_sline_564;
void* __right_value566 = (void*)0;
char* buf_565;
_Bool is_type_name__566;
_Bool is_special_word_568;
_Bool define_function_pointer_flag_569;
void* __right_value567 = (void*)0;
_Bool lambda_flag_570;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
char* word2_571;
_Bool fun_name_with_type_name_572;
void* __right_value570 = (void*)0;
char* word2_573;
_Bool call_method_generics_fun_call_574;
void* __right_value571 = (void*)0;
char* __dec_obj323;
int nest_575;
_Bool new__576;
void* __right_value572 = (void*)0;
char* __dec_obj324;
struct sClass* klass_577;
struct sClass* generics_class_578;
int nest_579;
_Bool inline_asm_580;
void* __right_value573 = (void*)0;
char* __dec_obj325;
void* __right_value574 = (void*)0;
char* __dec_obj326;
void* __right_value575 = (void*)0;
char* __dec_obj327;
void* __right_value576 = (void*)0;
struct sNode* node_581;
struct sNode* __result311__;
void* __right_value577 = (void*)0;
struct sNode* node_582;
struct sNode* __result312__;
struct buffer* come_block_583;
int come_block_sline_584;
char* head_585;
void* __right_value578 = (void*)0;
char* tail_586;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct buffer* __dec_obj328;
int len_587;
void* __right_value581 = (void*)0;
char* mem_588;
char* head_589;
_Bool no_output_come_code_590;
void* __right_value582 = (void*)0;
char* tail_591;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* __dec_obj329;
int len_592;
void* __right_value585 = (void*)0;
char* mem_593;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value8;
struct sComeCallNode* _inf_obj_value8;
void* __right_value591 = (void*)0;
struct sNode* node_594;
struct sNode* __result315__;
struct buffer* come_block_596;
int come_block_sline_597;
void* __right_value592 = (void*)0;
struct sNode* node_598;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value9;
struct sComeJoinNode* _inf_obj_value9;
void* __right_value598 = (void*)0;
struct sNode* __result318__;
int time_out_600;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1sNodeph* vars_601;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1sBlockph* blocks_602;
void* __right_value603 = (void*)0;
struct sNode* var_name_603;
void* __right_value604 = (void*)0;
struct sBlock* block_604;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value10;
struct sComePollNode* _inf_obj_value10;
void* __right_value637 = (void*)0;
struct sNode* __result336__;
void* __right_value638 = (void*)0;
struct sNode* node_637;
struct sNode* __result337__;
void* __right_value639 = (void*)0;
struct sNode* node_638;
struct sNode* __result338__;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* _inf_value11;
struct sFuncNode* _inf_obj_value11;
void* __right_value644 = (void*)0;
struct sNode* __result341__;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value12;
struct sWildCard* _inf_obj_value12;
void* __right_value649 = (void*)0;
struct sNode* __result344__;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
void* __right_value654 = (void*)0;
struct sNode* __result347__;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
void* __right_value659 = (void*)0;
struct sNode* __result350__;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
void* __right_value664 = (void*)0;
struct sNode* __result353__;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
void* __right_value669 = (void*)0;
struct sNode* __result356__;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
void* __right_value674 = (void*)0;
struct sNode* __result359__;
void* __right_value675 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_646=0;
char* name_647=0;
_Bool err_648=0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
void* __right_value681 = (void*)0;
struct sNode* __result362__;
void* __right_value682 = (void*)0;
struct sNode* node_650;
struct sNode* __result363__;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct buffer* buf2_651;
void* __right_value685 = (void*)0;
char* word_652;
int nest_653;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
void* __right_value692 = (void*)0;
struct sNode* __result366__;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct buffer* fun_name_655;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sType* type_656;
void* __right_value697 = (void*)0;
struct sClass* klass_660;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sType* __dec_obj374;
void* __right_value700 = (void*)0;
char* buf2_661;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* node_662;
struct sNode* __result371__;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct buffer* fun_name_663;
void* __right_value705 = (void*)0;
char* buf2_664;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sNode* node_665;
struct sNode* __result372__;
void* __right_value708 = (void*)0;
struct sNode* node_666;
struct sNode* __result373__;
void* __right_value709 = (void*)0;
struct sNode* node_667;
struct sNode* __result374__;
void* __right_value710 = (void*)0;
struct sNode* node_668;
struct sNode* __result375__;
void* __right_value711 = (void*)0;
struct sNode* node_669;
struct sNode* __result376__;
struct sNode* __result377__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1799, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value550=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1799, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result307__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value555=_inf_value6));
            /*g*/come_call_finalizer3(__right_value550,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value555) { __right_value555 = come_decrement_ref_count2(__right_value555, ((struct sNode*)__right_value555)->finalize, ((struct sNode*)__right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result307__;
        }
        else {
            head_558=info->p;
            value_559=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_560=info->p;
            __dec_obj316=value_559;
            value_559=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_559),info));
            /* U1 */ if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_561[tail_560-head_558+1];
            memset(&buf_561, 0, sizeof(char)            *(tail_560-head_558+1)            );
            memcpy(buf_561,head_558,tail_560-head_558);
            buf_561[tail_560-head_558]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1811, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value560=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1811, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_559),(char*)come_increment_ref_count(__builtin_string(buf_561)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value565=_inf_value7));
            if(value_559) { value_559 = come_decrement_ref_count2(value_559, ((struct sNode*)value_559)->finalize, ((struct sNode*)value_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value560,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value565) { __right_value565 = come_decrement_ref_count2(__right_value565, ((struct sNode*)__right_value565)->finalize, ((struct sNode*)__right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result310__;
            if(value_559) { value_559 = come_decrement_ref_count2(value_559, ((struct sNode*)value_559)->finalize, ((struct sNode*)value_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_563=info->p;
        head_sline_564=info->sline;
        buf_565=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__566=is_type_name(buf_565,info);
        static char* is_special_word_array_567[18]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__"};
        is_special_word_568=charppa_contained(is_special_word_array_567,18,buf_565);
        define_function_pointer_flag_569=(_Bool)0;
        if(        !is_special_word_568&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value567=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value567,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_569=(_Bool)1;
                }
            }
            info->p=head_563;
            info->sline=head_sline_564;
        }
        lambda_flag_570=(_Bool)0;
        if(        !is_special_word_568&&is_type_name__566) {
            info->p=head_563;
            info->sline=head_sline_564;
            ((struct tuple3$3sTypephcharphbool*)(__right_value568=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value568,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_571=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_571,"lambda")) {
                lambda_flag_570=(_Bool)1;
            }
            info->p=head_563;
            info->sline=head_sline_564;
            /* U13 */word2_571 = come_decrement_ref_count2(word2_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_572=(_Bool)0;
        if(        !is_special_word_568) {
            info->p=head_563;
            info->sline=head_sline_564;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_573=(char*)come_increment_ref_count(parse_word(info));
                /* U13 */word2_573 = come_decrement_ref_count2(word2_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_572=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_563;
            info->sline=head_sline_564;
        }
        call_method_generics_fun_call_574=(_Bool)0;
        {
            info->p=head_563;
            info->sline=head_sline_564;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj323=buf_565;
                buf_565=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            !is_type_name(buf_565,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_565)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_565)==((void*)0)&&*info->p==60) {
                nest_575=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_575++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_575==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_574=(_Bool)1;
                }
            }
            info->p=head_563;
            info->sline=head_sline_564;
        }
        new__576=(_Bool)0;
        if(        !is_special_word_568) {
            info->p=head_563;
            info->sline=head_sline_564;
            __dec_obj324=buf_565;
            buf_565=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_577=map$2charphsClassphp_operator_load_element(info->classes,buf_565);
            if(            klass_577&&*info->p==123) {
                new__576=(_Bool)1;
            }
            generics_class_578=map$2charphsClassphp_operator_load_element(info->generics_classes,buf_565);
            if(            generics_class_578&&*info->p==60) {
                nest_579=0;
                while((_Bool)1) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_579++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        nest_579--;
                        if(                        nest_579==0) {
                            skip_spaces_and_lf(info);
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==123) {
                    new__576=(_Bool)1;
                }
            }
            info->p=head_563;
            info->sline=head_sline_564;
        }
        inline_asm_580=(_Bool)0;
        {
            info->p=head_563;
            info->sline=head_sline_564;
            __dec_obj325=buf_565;
            buf_565=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_565,"asm")||string_operator_equals(buf_565,"__asm")||string_operator_equals(buf_565,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_580=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj326=buf_565;
                        buf_565=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_580=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_563;
            info->sline=head_sline_564;
        }
        parse_sharp_v5(info);
        __dec_obj327=buf_565;
        buf_565=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_570) {
            info->p=head_563;
            info->sline=head_sline_564;
            node_581=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result311__ = gComeFunResultObject = __result_obj__ = node_581;
            if(node_581) { node_581 = come_decrement_ref_count2(node_581, ((struct sNode*)node_581)->finalize, ((struct sNode*)node_581)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result311__;
            if(node_581) { node_581 = come_decrement_ref_count2(node_581, ((struct sNode*)node_581)->finalize, ((struct sNode*)node_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_565,"string")||string_operator_equals(buf_565,"wstring"))&&*info->p==40) {
            node_582=(struct sNode*)come_increment_ref_count(parse_function_call(buf_565,info,(_Bool)0));
            __result312__ = gComeFunResultObject = __result_obj__ = node_582;
            if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result312__;
            if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_565,"come")) {
            come_block_583=((void*)0);
            come_block_sline_584=0;
            if(            *info->p==123) {
                head_585=info->p;
                come_block_sline_584=info->sline;
                ((char*)(__right_value578=skip_block(info)));
                /* U11 */__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_586=info->p;
                __dec_obj328=come_block_583;
                come_block_583=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2044, "buffer"))));
                come_call_finalizer3(__dec_obj328,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_587=tail_586-head_585;
                mem_588=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_587+1)), "05call.c", 2047, "char"));
                memcpy(mem_588,head_585,len_587);
                mem_588[len_587]=0;
                buffer_append_str(come_block_583,mem_588);
                buffer_append_str(come_block_583,"\n");
                /* U13 */mem_588 = come_decrement_ref_count2(mem_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_589=info->p;
                come_block_sline_584=info->sline;
                no_output_come_code_590=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value582=expression_v13(info)));
                if(__right_value582) { __right_value582 = come_decrement_ref_count2(__right_value582, ((struct sNode*)__right_value582)->finalize, ((struct sNode*)__right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_590;
                tail_591=info->p;
                __dec_obj329=come_block_583;
                come_block_583=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2065, "buffer"))));
                come_call_finalizer3(__dec_obj329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_592=tail_591-head_589;
                mem_593=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_592+1)), "05call.c", 2068, "char"));
                memcpy(mem_593,head_589,len_592);
                mem_593[len_592]=0;
                buffer_append_str(come_block_583,"{");
                buffer_append_str(come_block_583,mem_593);
                buffer_append_str(come_block_583,"; }");
                buffer_append_str(come_block_583,"}");
                buffer_append_str(come_block_583,"\n");
                /* U13 */mem_593 = come_decrement_ref_count2(mem_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2079, "struct sNode");
            _inf_obj_value8=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value587=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2079, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_583),come_block_sline_584,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeCallNode_finalize;
            _inf_value8->clone=(void*)sComeCallNode_clone;
            _inf_value8->compile=(void*)sComeCallNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeCallNode_terminated;
            _inf_value8->kind=(void*)sComeCallNode_kind;
            node_594=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*g*/come_call_finalizer3(__right_value587,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            __result315__ = gComeFunResultObject = __result_obj__ = node_594;
            /*i*/come_call_finalizer3(come_block_583,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_594) { node_594 = come_decrement_ref_count2(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result315__;
            /*i*/come_call_finalizer3(come_block_583,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_594) { node_594 = come_decrement_ref_count2(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_565,"come_join")&&*info->p==40) {
            come_block_596=((void*)0);
            come_block_sline_597=0;
            expected_next_character(40,info);
            node_598=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2091, "struct sNode");
            _inf_obj_value9=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value594=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2091, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_598),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeJoinNode_finalize;
            _inf_value9->clone=(void*)sComeJoinNode_clone;
            _inf_value9->compile=(void*)sComeJoinNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeJoinNode_terminated;
            _inf_value9->kind=(void*)sComeJoinNode_kind;
            __result318__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value598=_inf_value9));
            /*i*/come_call_finalizer3(come_block_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_598) { node_598 = come_decrement_ref_count2(node_598, ((struct sNode*)node_598)->finalize, ((struct sNode*)node_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value594,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value598) { __right_value598 = come_decrement_ref_count2(__right_value598, ((struct sNode*)__right_value598)->finalize, ((struct sNode*)__right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result318__;
            /*i*/come_call_finalizer3(come_block_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_598) { node_598 = come_decrement_ref_count2(node_598, ((struct sNode*)node_598)->finalize, ((struct sNode*)node_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_565,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_600=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_600=time_out_600*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_601=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2109, "list$1sNodeph"))));
            blocks_602=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2110, "list$1sBlockph"))));
            while(1) {
                var_name_603=(struct sNode*)come_increment_ref_count(expression_v13(info));
                block_604=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sNodeph_add(vars_601,(struct sNode*)come_increment_ref_count(var_name_603));
                list$1sBlockph_add(blocks_602,(struct sBlock*)come_increment_ref_count(block_604));
                if(                *info->p==125) {
                    if(var_name_603) { var_name_603 = come_decrement_ref_count2(var_name_603, ((struct sNode*)var_name_603)->finalize, ((struct sNode*)var_name_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(block_604,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                if(var_name_603) { var_name_603 = come_decrement_ref_count2(var_name_603, ((struct sNode*)var_name_603)->finalize, ((struct sNode*)var_name_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(block_604,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            expected_next_character(125,info);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2127, "struct sNode");
            _inf_obj_value10=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value609=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2127, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_601),(struct list$1sBlockph*)come_increment_ref_count(blocks_602),time_out_600,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComePollNode_finalize;
            _inf_value10->clone=(void*)sComePollNode_clone;
            _inf_value10->compile=(void*)sComePollNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComePollNode_terminated;
            _inf_value10->kind=(void*)sComePollNode_kind;
            __result336__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value10));
            /*i*/come_call_finalizer3(vars_601,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_602,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value609,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value637) { __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result336__;
            /*i*/come_call_finalizer3(vars_601,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_602,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_565,"none")&&*info->p==40) {
            node_637=(struct sNode*)come_increment_ref_count(parse_none(info));
            __result337__ = gComeFunResultObject = __result_obj__ = node_637;
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result337__;
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_565,"some")&&*info->p==40) {
            node_638=(struct sNode*)come_increment_ref_count(parse_some(info));
            __result338__ = gComeFunResultObject = __result_obj__ = node_638;
            if(node_638) { node_638 = come_decrement_ref_count2(node_638, ((struct sNode*)node_638)->finalize, ((struct sNode*)node_638)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result338__;
            if(node_638) { node_638 = come_decrement_ref_count2(node_638, ((struct sNode*)node_638)->finalize, ((struct sNode*)node_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_565,"__func__")||string_operator_equals(buf_565,"__FUNCTION__")) {
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2141, "struct sNode");
            _inf_obj_value11=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value641=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2141, "sFuncNode")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFuncNode_finalize;
            _inf_value11->clone=(void*)sFuncNode_clone;
            _inf_value11->compile=(void*)sFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFuncNode_kind;
            __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value11));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value641,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result341__;
        }
        else if(        string_operator_equals(buf_565,"wildcard")) {
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2144, "struct sNode");
            _inf_obj_value12=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value646=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2144, "sWildCard")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWildCard_finalize;
            _inf_value12->clone=(void*)sWildCard_clone;
            _inf_value12->compile=(void*)sWildCard_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWildCard_kind;
            __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value649=_inf_value12));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value646,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value649) { __right_value649 = come_decrement_ref_count2(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result344__;
        }
        else if(        string_operator_equals(buf_565,"__line__")||string_operator_equals(buf_565,"__LINE__")) {
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2147, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value651=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2147, "sLineNode")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            __result347__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value654=_inf_value13));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value651,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value654) { __right_value654 = come_decrement_ref_count2(__right_value654, ((struct sNode*)__right_value654)->finalize, ((struct sNode*)__right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result347__;
        }
        else if(        string_operator_equals(buf_565,"__sname__")) {
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2150, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value656=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2150, "sSNameNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value14));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value656,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result350__;
        }
        else if(        string_operator_equals(buf_565,"__caller_func__")) {
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2153, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value661=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2153, "sCallerFuncNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value664=_inf_value15));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value661,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value664) { __right_value664 = come_decrement_ref_count2(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result353__;
        }
        else if(        string_operator_equals(buf_565,"__caller_line__")) {
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2156, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value666=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2156, "sCallerLineNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value16));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value666,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
        else if(        string_operator_equals(buf_565,"__caller_sname__")) {
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2159, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value671=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2159, "sCallerSNameNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value674=_inf_value17));
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value671,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value674) { __right_value674 = come_decrement_ref_count2(__right_value674, ((struct sNode*)__right_value674)->finalize, ((struct sNode*)__right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result359__;
        }
        else if(        info->va_arg&&is_type_name(buf_565,info)) {
            info->p=head_563;
            info->sline=head_sline_564;
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value675=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_646=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_647=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_648=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value675,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2167, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value677=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2167, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_646),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value681=_inf_value18));
            /*i*/come_call_finalizer3(type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_647 = come_decrement_ref_count2(name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value677,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value681) { __right_value681 = come_decrement_ref_count2(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result362__;
            /*i*/come_call_finalizer3(type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_647 = come_decrement_ref_count2(name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        new__576||string_operator_equals(buf_565,"sizeof")||string_operator_equals(buf_565,"_Alignof")||string_operator_equals(buf_565,"_Alignas")||string_operator_equals(buf_565,"__alignof__")) {
            info->new_=new__576;
            node_650=(struct sNode*)come_increment_ref_count(string_node_v21(buf_565,head_563,head_sline_564,info));
            info->new_=(_Bool)0;
            __result363__ = gComeFunResultObject = __result_obj__ = node_650;
            if(node_650) { node_650 = come_decrement_ref_count2(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result363__;
            if(node_650) { node_650 = come_decrement_ref_count2(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_580) {
            buf2_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2177, "buffer"))));
            if(            *info->p!=40) {
                word_652=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_651,word_652);
                /* U13 */word_652 = come_decrement_ref_count2(word_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            nest_653=0;
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_651,40);
                    info->p++;
                    nest_653++;
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_651,41);
                    info->p++;
                    nest_653--;
                    if(                    nest_653==0) {
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_651,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_651,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2218, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value688=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2218, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_651)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            __result366__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value692=_inf_value19));
            /*i*/come_call_finalizer3(buf2_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value688,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value692) { __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result366__;
            /*i*/come_call_finalizer3(buf2_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_572) {
            fun_name_655=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2221, "buffer"))));
            buffer_append_str(fun_name_655,buf_565);
            type_656=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value695=buffer_to_string(fun_name_655))))));
            /* U11 */__right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            type_656==((void*)0)) {
                klass_660=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value697=buffer_to_string(fun_name_655))));
                /* U11 */__right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                klass_660) {
                    __dec_obj374=type_656;
                    type_656=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2231, "sType")),buf_565,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj374,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_565);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_656->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_655,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_655,"_");
            buf2_661=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_655,buf2_661);
            node_662=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value701=buffer_to_string(fun_name_655))),info,(_Bool)0));
            /* U11 */__right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result371__ = gComeFunResultObject = __result_obj__ = node_662;
            /*i*/come_call_finalizer3(fun_name_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_661 = come_decrement_ref_count2(buf2_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_662) { node_662 = come_decrement_ref_count2(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result371__;
            /*i*/come_call_finalizer3(fun_name_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_661 = come_decrement_ref_count2(buf2_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_662) { node_662 = come_decrement_ref_count2(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2265, "buffer"))));
            buffer_append_str(fun_name_663,buf_565);
            buffer_append_str(fun_name_663,"_");
            buf2_664=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_663,buf2_664);
            node_665=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value706=buffer_to_string(fun_name_663))),info,(_Bool)0));
            /* U11 */__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result372__ = gComeFunResultObject = __result_obj__ = node_665;
            /*i*/come_call_finalizer3(fun_name_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_664 = come_decrement_ref_count2(buf2_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_665) { node_665 = come_decrement_ref_count2(node_665, ((struct sNode*)node_665)->finalize, ((struct sNode*)node_665)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result372__;
            /*i*/come_call_finalizer3(fun_name_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_664 = come_decrement_ref_count2(buf2_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_665) { node_665 = come_decrement_ref_count2(node_665, ((struct sNode*)node_665)->finalize, ((struct sNode*)node_665)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_574) {
            node_666=(struct sNode*)come_increment_ref_count(parse_function_call(buf_565,info,(_Bool)0));
            __result373__ = gComeFunResultObject = __result_obj__ = node_666;
            if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result373__;
            if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_568&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__566)) {
            node_667=(struct sNode*)come_increment_ref_count(parse_function_call(buf_565,info,(_Bool)0));
            __result374__ = gComeFunResultObject = __result_obj__ = node_667;
            if(node_667) { node_667 = come_decrement_ref_count2(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result374__;
            if(node_667) { node_667 = come_decrement_ref_count2(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->new_=new__576;
            node_668=(struct sNode*)come_increment_ref_count(string_node_v21(buf_565,head_563,head_sline_564,info));
            info->new_=(_Bool)0;
            __result375__ = gComeFunResultObject = __result_obj__ = node_668;
            if(node_668) { node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result375__;
            if(node_668) { node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */buf_565 = come_decrement_ref_count2(buf_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_669=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result376__ = gComeFunResultObject = __result_obj__ = node_669;
        if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result376__;
        if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result377__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj317;
struct sNode* __dec_obj318;
char* __dec_obj319;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj317=self->sname;
            /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj318=self->value;
            /* U1 */ if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj319=self->value_source;
            /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result308__;
void* __right_value561 = (void*)0;
struct sReturnNode* result_562;
void* __right_value562 = (void*)0;
char* __dec_obj320;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj321;
void* __right_value564 = (void*)0;
char* __dec_obj322;
struct sReturnNode* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_562=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_562->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj320=result_562->sname;
        result_562->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj321=result_562->value;
        result_562->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        /* U1 */ if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj322=result_562->value_source;
        result_562->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_562;
    /*i*/come_call_finalizer3(result_562,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj330;
struct buffer* __dec_obj331;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj330=self->sname;
            /*G*/ __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj331=self->come_block;
            come_call_finalizer3(__dec_obj331,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result313__;
void* __right_value588 = (void*)0;
struct sComeCallNode* result_595;
void* __right_value589 = (void*)0;
char* __dec_obj332;
void* __right_value590 = (void*)0;
struct buffer* __dec_obj333;
struct sComeCallNode* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_595=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_595->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj332=result_595->sname;
        result_595->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj333=result_595->come_block;
        result_595->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj333,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_595->come_block_sline=self->come_block_sline;
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_595;
    /*i*/come_call_finalizer3(result_595,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj334;
struct sNode* __dec_obj335;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj334=self->sname;
            /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj335=self->node;
            /* U1 */ if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result316__;
void* __right_value595 = (void*)0;
struct sComeJoinNode* result_599;
void* __right_value596 = (void*)0;
char* __dec_obj336;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj337;
struct sComeJoinNode* __result317__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_599=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_599->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_599->sname;
        result_599->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj337=result_599->node;
        result_599->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_599;
    /*i*/come_call_finalizer3(result_599,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result319__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
struct list_item$1sBlockph* litem_605;
struct sBlock* __dec_obj338;
void* __right_value606 = (void*)0;
struct list_item$1sBlockph* litem_606;
struct sBlock* __dec_obj339;
void* __right_value607 = (void*)0;
struct list_item$1sBlockph* litem_607;
struct sBlock* __dec_obj340;
struct list$1sBlockph* __result320__;
    if(    self->len==0) {
        litem_605=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value605=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sBlockph"))));
        litem_605->prev=((void*)0);
        litem_605->next=((void*)0);
        __dec_obj338=litem_605->item;
        litem_605->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj338,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_605;
        self->head=litem_605;
    }
    else if(    self->len==1) {
        litem_606=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value606=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sBlockph"))));
        litem_606->prev=self->head;
        litem_606->next=((void*)0);
        __dec_obj339=litem_606->item;
        litem_606->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj339,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_606;
        self->head->next=litem_606;
    }
    else {
        litem_607=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value607=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sBlockph"))));
        litem_607->prev=self->tail;
        litem_607->next=((void*)0);
        __dec_obj340=litem_607->item;
        litem_607->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj340,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_607;
        self->tail=litem_607;
    }
    self->len++;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj341;
struct list$1sNodeph* __dec_obj342;
struct list$1sBlockph* __dec_obj343;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj341=self->sname;
            /*G*/ __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj342=self->vars;
            come_call_finalizer3(__dec_obj342,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj343=self->blocks;
            come_call_finalizer3(__dec_obj343,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result321__;
void* __right_value610 = (void*)0;
struct sComePollNode* result_608;
void* __right_value611 = (void*)0;
char* __dec_obj344;
void* __right_value612 = (void*)0;
struct list$1sNodeph* __dec_obj345;
void* __right_value636 = (void*)0;
struct list$1sBlockph* __dec_obj351;
struct sComePollNode* __result335__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_608=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_608->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj344=result_608->sname;
        result_608->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj345=result_608->vars;
        result_608->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj345,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj351=result_608->blocks;
        result_608->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj351,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_608->time_out=self->time_out;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_608;
    /*i*/come_call_finalizer3(result_608,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result322__;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1sBlockph* result_609;
struct list_item$1sBlockph* it_610;
void* __right_value635 = (void*)0;
struct list$1sBlockph* __result334__;
    if(    self==((void*)0)) {
        __result322__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_609=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 135, "list$1sBlockph"))));
    it_610=self->head;
    while(it_610!=((void*)0)) {
        list$1sBlockph_add(result_609,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_610->item)));
        it_610=it_610->next;
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_609;
    /*i*/come_call_finalizer3(result_609,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result323__;
void* __right_value615 = (void*)0;
struct sBlock* result_611;
void* __right_value619 = (void*)0;
struct list$1sNodeph* __dec_obj346;
void* __right_value634 = (void*)0;
struct sVarTable* __dec_obj350;
struct sBlock* __result333__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_611=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj346=result_611->mNodes;
        result_611->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj346,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj350=result_611->mVarTable;
        result_611->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj350,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_611->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_611;
    /*i*/come_call_finalizer3(result_611,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result324__;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1sNodeph* result_612;
struct list_item$1sNodeph* it_613;
void* __right_value618 = (void*)0;
struct list$1sNodeph* __result325__;
    if(    self==((void*)0)) {
        __result324__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    result_612=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sNodeph"))));
    it_613=self->head;
    while(it_613!=((void*)0)) {
        list$1sNodeph_add(result_612,(struct sNode*)come_increment_ref_count(sNode_clone(it_613->item)));
        it_613=it_613->next;
    }
    __result325__ = gComeFunResultObject = __result_obj__ = result_612;
    /*i*/come_call_finalizer3(result_612,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result326__;
void* __right_value620 = (void*)0;
struct sVarTable* result_614;
void* __right_value633 = (void*)0;
struct map$2charphsVarph* __dec_obj349;
struct sVarTable* __result332__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_614=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj349=result_614->mVars;
        result_614->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj349,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_614->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_614->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_614->mID=self->mID;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_614;
    /*i*/come_call_finalizer3(result_614,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result327__;
void* __right_value621 = (void*)0;
void* __right_value627 = (void*)0;
struct map$2charphsVarph* result_616;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1charp* __dec_obj348;
char* it_617;
struct sVar* default_value_618;
struct sVar* it2_619;
struct map$2charphsVarph* __result331__;
default_value_618 = (void*)0;
    if(    self==((void*)0)) {
        __result327__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_616=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1467, "map$2charphsVarph"))));
    __dec_obj348=result_616->key_list;
    result_616->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1469, "list$1charp"))));
    come_call_finalizer3(__dec_obj348,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_617=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_617=map$2charphsVarph_next(self)    ){
        memset(&default_value_618,0,sizeof(struct sVar*));
        it2_619=map$2charphsVarph_at(self,it_617,default_value_618);
        map$2charphsVarph_put(result_616,it_617,it2_619);
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_616;
    /*i*/come_call_finalizer3(result_616,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
int i_615;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1charp* __dec_obj347;
struct map$2charphsVarph* __result329__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value622=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1396, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value623=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1397, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value624=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1398, "bool"))));
    for(    i_615=0;    i_615<128;    i_615++    ){
        self->item_existance[i_615]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj347=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1408, "list$1charp"))));
    come_call_finalizer3(__dec_obj347,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result328__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_631;
int it_632;
_Bool same_key_exist_633;
char* it2_634;
struct map$2charphsVarph* __result330__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_631=string_get_hash_key(key)%self->size;
    it_632=hash_631;
    while((_Bool)1) {
        if(        self->item_existance[it_632]) {
            if(            string_equals(self->keys[it_632],key)) {
                if(                1) {
                    /* U13 */self->keys[it_632] = come_decrement_ref_count2(self->keys[it_632], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_632]);
                    self->keys[it_632]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_632]);
                    self->keys[it_632]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_632],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_632]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_632]=item;
                }
                break;
            }
            it_632++;
            if(            it_632>=self->size) {
                it_632=0;
            }
            else if(            it_632==hash_631) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_632]=(_Bool)1;
            if(            1) {
                self->keys[it_632]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_632]=key;
            }
            if(            1) {
                self->items[it_632]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_632]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_633=(_Bool)0;
    for(    it2_634=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_634=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_634,key)) {
            same_key_exist_633=(_Bool)1;
        }
    }
    if(    !same_key_exist_633) {
        list$1charp_push_back(self->key_list,key);
    }
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_620;
void* __right_value630 = (void*)0;
char** keys_621;
void* __right_value631 = (void*)0;
struct sVar** items_622;
void* __right_value632 = (void*)0;
_Bool* item_existance_623;
int len_624;
char* it_625;
struct sVar* default_value_626;
struct sVar* it2_627;
unsigned int hash_628;
int n_629;
struct sVar* default_value_630;
default_value_626 = (void*)0;
default_value_630 = (void*)0;
    size_620=self->size*10;
    keys_621=(char**)come_increment_ref_count(((char**)(__right_value630=(char**)come_calloc(1, sizeof(char*)*(1*(size_620)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_622=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value631=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_620)), "/usr/local/include/comelang.h", 1625, "sVar*%"))));
    item_existance_623=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value632=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_620)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_624=0;
    for(    it_625=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_625=map$2charphsVarph_next(self)    ){
        memset(&default_value_626,0,sizeof(struct sVar*));
        it2_627=map$2charphsVarph_at(self,it_625,default_value_626);
        hash_628=string_get_hash_key(it_625)%size_620;
        n_629=hash_628;
        while((_Bool)1) {
            if(            item_existance_623[n_629]) {
                n_629++;
                if(                n_629>=size_620) {
                    n_629=0;
                }
                else if(                n_629==hash_628) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_623[n_629]=(_Bool)1;
                keys_621[n_629]=it_625;
                items_622[n_629]=map$2charphsVarph_at(self,it_625,default_value_630);
                len_624++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_621;
    self->items=items_622;
    self->item_existance=item_existance_623;
    self->size=size_620;
    self->len=len_624;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_635;
int i_636;
    for(    i_635=0;    i_635<self->size;    i_635++    ){
        if(        self->item_existance[i_635]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_635],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_636=0;    i_636<self->size;    i_636++    ){
        if(        self->item_existance[i_636]) {
            if(            1) {
                /* U13 */self->keys[i_636] = come_decrement_ref_count2(self->keys[i_636], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj352;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj352=self->sname;
            /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result339__;
void* __right_value642 = (void*)0;
struct sFuncNode* result_639;
void* __right_value643 = (void*)0;
char* __dec_obj353;
struct sFuncNode* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_639=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj353=result_639->sname;
        result_639->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_639;
    /*i*/come_call_finalizer3(result_639,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj354;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj354=self->sname;
            /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result342__;
void* __right_value647 = (void*)0;
struct sWildCard* result_640;
void* __right_value648 = (void*)0;
char* __dec_obj355;
struct sWildCard* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_640=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj355=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_640;
    /*i*/come_call_finalizer3(result_640,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj356;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj356=self->sname;
            /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result345__;
void* __right_value652 = (void*)0;
struct sLineNode* result_641;
void* __right_value653 = (void*)0;
char* __dec_obj357;
struct sLineNode* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_641=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_641->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj357=result_641->sname;
        result_641->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_641;
    /*i*/come_call_finalizer3(result_641,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj358;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj358=self->sname;
            /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result348__;
void* __right_value657 = (void*)0;
struct sSNameNode* result_642;
void* __right_value658 = (void*)0;
char* __dec_obj359;
struct sSNameNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_642=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_642->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj359=result_642->sname;
        result_642->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_642;
    /*i*/come_call_finalizer3(result_642,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj360;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj360=self->sname;
            /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result351__;
void* __right_value662 = (void*)0;
struct sCallerFuncNode* result_643;
void* __right_value663 = (void*)0;
char* __dec_obj361;
struct sCallerFuncNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_643=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_643->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj361=result_643->sname;
        result_643->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_643;
    /*i*/come_call_finalizer3(result_643,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj362;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj362=self->sname;
            /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result354__;
void* __right_value667 = (void*)0;
struct sCallerLineNode* result_644;
void* __right_value668 = (void*)0;
char* __dec_obj363;
struct sCallerLineNode* __result355__;
    if(    self==(void*)0) {
        __result354__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    result_644=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_644->sname;
        result_644->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_644;
    /*i*/come_call_finalizer3(result_644,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj364;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj364=self->sname;
            /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result357__;
void* __right_value672 = (void*)0;
struct sCallerSNameNode* result_645;
void* __right_value673 = (void*)0;
char* __dec_obj365;
struct sCallerSNameNode* __result358__;
    if(    self==(void*)0) {
        __result357__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    result_645=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj365=result_645->sname;
        result_645->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result358__ = gComeFunResultObject = __result_obj__ = result_645;
    /*i*/come_call_finalizer3(result_645,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj366;
struct sType* __dec_obj367;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj366=self->sname;
            /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj367=self->type;
            come_call_finalizer3(__dec_obj367,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result360__;
void* __right_value678 = (void*)0;
struct sVarArgTypeName* result_649;
void* __right_value679 = (void*)0;
char* __dec_obj368;
void* __right_value680 = (void*)0;
struct sType* __dec_obj369;
struct sVarArgTypeName* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_649=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_649->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_649->sname;
        result_649->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj369=result_649->type;
        result_649->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj369,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_649;
    /*i*/come_call_finalizer3(result_649,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj370;
char* __dec_obj371;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj370=self->sname;
            /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj371=self->source;
            /*G*/ __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result364__;
void* __right_value689 = (void*)0;
struct sInlineAssembler* result_654;
void* __right_value690 = (void*)0;
char* __dec_obj372;
void* __right_value691 = (void*)0;
char* __dec_obj373;
struct sInlineAssembler* __result365__;
    if(    self==(void*)0) {
        __result364__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    result_654=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_654->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj372=result_654->sname;
        result_654->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj373=result_654->source;
        result_654->source=(char*)come_increment_ref_count(string_clone(self->source));
        /*G*/ __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result365__ = gComeFunResultObject = __result_obj__ = result_654;
    /*i*/come_call_finalizer3(result_654,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_657;
unsigned int hash_658;
unsigned int it_659;
struct sType* __result367__;
struct sType* __result368__;
struct sType* __result369__;
struct sType* __result370__;
default_value_657 = (void*)0;
    memset(&default_value_657,0,sizeof(struct sType*));
    hash_658=string_get_hash_key(((char*)key))%self->size;
    it_659=hash_658;
    while((_Bool)1) {
        if(        self->item_existance[it_659]) {
            if(            string_equals(self->keys[it_659],key)) {
                __result367__ = gComeFunResultObject = __result_obj__ = self->items[it_659];
                /*i*/come_call_finalizer3(default_value_657,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result367__;
            }
            it_659++;
            if(            it_659>=self->size) {
                it_659=0;
            }
            else if(            it_659==hash_658) {
                __result368__ = gComeFunResultObject = __result_obj__ = default_value_657;
                /*i*/come_call_finalizer3(default_value_657,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result368__;
            }
        }
        else {
            __result369__ = gComeFunResultObject = __result_obj__ = default_value_657;
            /*i*/come_call_finalizer3(default_value_657,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result369__;
        }
    }
    __result370__ = gComeFunResultObject = __result_obj__ = default_value_657;
    /*i*/come_call_finalizer3(default_value_657,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value712 = (void*)0;
struct sNode* __result378__;
    __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value712=expression_node_v99(info)));
    if(__right_value712) { __right_value712 = come_decrement_ref_count2(__right_value712, ((struct sNode*)__right_value712)->finalize, ((struct sNode*)__right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* __dec_obj375;
struct sNode* __result379__;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sNode* __dec_obj376;
struct sNode* __result380__;
struct sNode* __result381__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj375=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        /* U1 */ if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
        __result379__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj376=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        /* U1 */ if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); };
        __result380__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    __result381__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value717 = (void*)0;
struct sNode* node_670;
void* __right_value718 = (void*)0;
struct sNode* __dec_obj377;
struct sNode* __result382__;
    node_670=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj377=node_670;
    node_670=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_670),info));
    /* U1 */ if(__dec_obj377) { __dec_obj377 = come_decrement_ref_count2(__dec_obj377, ((struct sNode*)__dec_obj377)->finalize, ((struct sNode*)__dec_obj377)->_protocol_obj, 0,0,0, (void*)0); };
    __result382__ = gComeFunResultObject = __result_obj__ = node_670;
    if(node_670) { node_670 = come_decrement_ref_count2(node_670, ((struct sNode*)node_670)->finalize, ((struct sNode*)node_670)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result382__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_671;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct buffer* buf_672;
void* __right_value721 = (void*)0;
char* __dec_obj378;
int i_673;
void* __right_value722 = (void*)0;
char* __dec_obj379;
void* __right_value723 = (void*)0;
char* __dec_obj380;
int i_674;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
char* __result383__;
struct_name_671 = (void*)0;
    buf_672=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2349, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj378=struct_name_671;
        struct_name_671=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_673=0;            i_673<obj_type->mOriginalTypeNamePointerNum;            i_673++            ){
                buffer_append_str(buf_672,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj379=struct_name_671;
        struct_name_671=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj380=struct_name_671;
        struct_name_671=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_674=0;        i_674<obj_type->mPointerNum;        i_674++        ){
            buffer_append_str(buf_672,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_672,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_672,"pa");
    }
    __result383__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value725=xsprintf("%s%s_%s",struct_name_671,((char*)(__right_value724=buffer_to_string(buf_672))),fun_name)));
    /* U13 */struct_name_671 = come_decrement_ref_count2(struct_name_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_672,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_675;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct buffer* buf_676;
void* __right_value728 = (void*)0;
char* __dec_obj381;
int i_677;
void* __right_value729 = (void*)0;
char* __dec_obj382;
void* __right_value730 = (void*)0;
char* __dec_obj383;
int i_678;
void* __right_value731 = (void*)0;
int len_680;
void* __right_value732 = (void*)0;
char* __result384__;
struct_name_675 = (void*)0;
    buf_676=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2384, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj381=struct_name_675;
        struct_name_675=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_677=0;            i_677<obj_type->mOriginalTypeNamePointerNum;            i_677++            ){
                buffer_append_str(buf_676,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj382=struct_name_675;
        struct_name_675=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj383=struct_name_675;
        struct_name_675=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_678=0;        i_678<obj_type->mPointerNum;        i_678++        ){
            buffer_append_str(buf_676,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_676,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_676,"pa");
    }
    char none_method_name_679[charp_length(fun_name)+1];
    memset(&none_method_name_679, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_680=string_length(struct_name_675)+string_length(((char*)(__right_value731=buffer_to_string(buf_676))));
    /* U11 */__right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_679,fun_name+len_680+1,charp_length(fun_name)-len_680-1);
    none_method_name_679[charp_length(fun_name)-len_680-1]=0;
    __result384__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value732=__builtin_string(none_method_name_679)));
    /* U13 */struct_name_675 = come_decrement_ref_count2(struct_name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_676,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value733 = (void*)0;
char* struct_name_681;
void* __right_value734 = (void*)0;
char* __result385__;
    struct_name_681=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result385__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value734=xsprintf("%s_%s",struct_name_681,fun_name)));
    /* U13 */struct_name_681 = come_decrement_ref_count2(struct_name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result386__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result386__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_682;
char* p_683;
int sline_684;
_Bool err_flag_685;
void* __right_value737 = (void*)0;
char* label_686;
void* __right_value738 = (void*)0;
char* __dec_obj384;
char* __dec_obj385;
_Bool no_comma_687;
_Bool in_fun_param_688;
void* __right_value739 = (void*)0;
struct sNode* node_689;
void* __right_value740 = (void*)0;
struct sNode* __dec_obj386;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value749 = (void*)0;
struct sNode* __result389__;
struct sNode* __result390__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_682=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2448, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_683=info->p;
            sline_684=info->sline;
            err_flag_685=(_Bool)0;
            label_686=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj384=label_686;
                label_686=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_685=(_Bool)1;
            }
            if(            err_flag_685==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj385=label_686;
                label_686=((void*)0);
                /*G*/ __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_683;
                info->sline=sline_684;
            }
            no_comma_687=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_688=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_689=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj386=node_689;
            node_689=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_689),info));
            /* U1 */ if(__dec_obj386) { __dec_obj386 = come_decrement_ref_count2(__dec_obj386, ((struct sNode*)__dec_obj386)->finalize, ((struct sNode*)__dec_obj386)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_687;
            info->in_fun_param=in_fun_param_688;
            list$1tuple2$2charphsNodephph_push_back(params_682,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2491, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_686),(struct sNode*)come_increment_ref_count(node_689))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /* U13 */label_686 = come_decrement_ref_count2(label_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            /* U13 */label_686 = come_decrement_ref_count2(label_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2509, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value744=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2509, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_682,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value749=_inf_value20));
        /*i*/come_call_finalizer3(params_682,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value744,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value749) { __right_value749 = come_decrement_ref_count2(__right_value749, ((struct sNode*)__right_value749)->finalize, ((struct sNode*)__right_value749)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result389__;
        /*i*/come_call_finalizer3(params_682,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result390__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj387;
struct sNode* __dec_obj388;
struct list$1tuple2$2charphsNodephph* __dec_obj389;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj387=self->sname;
            /*G*/ __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj388=self->node;
            /* U1 */ if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj389=self->params;
            come_call_finalizer3(__dec_obj389,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result387__;
void* __right_value745 = (void*)0;
struct sLambdaCall* result_690;
void* __right_value746 = (void*)0;
char* __dec_obj390;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj391;
void* __right_value748 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj392;
struct sLambdaCall* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_690=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_690->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj390=result_690->sname;
        result_690->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj391=result_690->node;
        result_690->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj391) { __dec_obj391 = come_decrement_ref_count2(__dec_obj391, ((struct sNode*)__dec_obj391)->finalize, ((struct sNode*)__dec_obj391)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj392=result_690->params;
        result_690->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj392,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_690;
    /*i*/come_call_finalizer3(result_690,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

