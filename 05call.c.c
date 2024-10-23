// source head
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long  long __int64_t;
typedef unsigned long unsigned  long __uint64_t;
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
typedef unsigned long unsigned  int __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long unsigned  int __darwin_clock_t;
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
typedef unsigned long unsigned  long __darwin_ino64_t;
typedef unsigned long unsigned  long __darwin_ino_t;
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
typedef unsigned long unsigned  int __darwin_pthread_key_t;
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
typedef short short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long unsigned  long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long unsigned  int uintptr_t;
typedef unsigned long unsigned  long user_addr_t;
typedef unsigned long unsigned  long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long unsigned  long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long unsigned  long syscall_arg_t;
typedef __darwin_va_list va_list;
typedef unsigned long unsigned  int size_t;
typedef long  long fpos_t;
struct __sbuf
{
    unsigned char* _base;
    int _size;
};
struct __sFILEX;
struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short short _flags;
    short short _file;
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
    unsigned long unsigned  long __far;
    unsigned int __esr;
    unsigned int __exception;
};
struct __darwin_arm_exception_state64_v2
{
    unsigned long unsigned  long __far;
    unsigned long unsigned  long __esr;
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
    unsigned long unsigned  long __x[29];
    unsigned long unsigned  long __fp;
    unsigned long unsigned  long __lr;
    unsigned long unsigned  long __sp;
    unsigned long unsigned  long __pc;
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
    unsigned long unsigned  long __mdscr_el1;
};
struct __darwin_arm_debug_state64
{
    unsigned long unsigned  long __bvr[16];
    unsigned long unsigned  long __bcr[16];
    unsigned long unsigned  long __wvr[16];
    unsigned long unsigned  long __wcr[16];
    unsigned long unsigned  long __mdscr_el1;
};
struct __darwin_arm_cpmu_state64
{
    unsigned long unsigned  long __ctrs[16];
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
    unsigned long unsigned  int ss_size;
    int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    unsigned long unsigned  int uc_mcsize;
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
    unsigned long unsigned  int __pad[7];
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
typedef unsigned long unsigned  long uint64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long unsigned  long uint_least64_t;
typedef char int_fast8_t;
typedef short short int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned short int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long unsigned  long uint_fast64_t;
typedef long  int intmax_t;
typedef unsigned long unsigned  int uintmax_t;
struct timeval
{
    long tv_sec;
    int tv_usec;
};
typedef unsigned long unsigned  long rlim_t;
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
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
};
struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
    unsigned long unsigned  long ri_child_user_time;
    unsigned long unsigned  long ri_child_system_time;
    unsigned long unsigned  long ri_child_pkg_idle_wkups;
    unsigned long unsigned  long ri_child_interrupt_wkups;
    unsigned long unsigned  long ri_child_pageins;
    unsigned long unsigned  long ri_child_elapsed_abstime;
};
struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
    unsigned long unsigned  long ri_child_user_time;
    unsigned long unsigned  long ri_child_system_time;
    unsigned long unsigned  long ri_child_pkg_idle_wkups;
    unsigned long unsigned  long ri_child_interrupt_wkups;
    unsigned long unsigned  long ri_child_pageins;
    unsigned long unsigned  long ri_child_elapsed_abstime;
    unsigned long unsigned  long ri_diskio_bytesread;
    unsigned long unsigned  long ri_diskio_byteswritten;
};
struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
    unsigned long unsigned  long ri_child_user_time;
    unsigned long unsigned  long ri_child_system_time;
    unsigned long unsigned  long ri_child_pkg_idle_wkups;
    unsigned long unsigned  long ri_child_interrupt_wkups;
    unsigned long unsigned  long ri_child_pageins;
    unsigned long unsigned  long ri_child_elapsed_abstime;
    unsigned long unsigned  long ri_diskio_bytesread;
    unsigned long unsigned  long ri_diskio_byteswritten;
    unsigned long unsigned  long ri_cpu_time_qos_default;
    unsigned long unsigned  long ri_cpu_time_qos_maintenance;
    unsigned long unsigned  long ri_cpu_time_qos_background;
    unsigned long unsigned  long ri_cpu_time_qos_utility;
    unsigned long unsigned  long ri_cpu_time_qos_legacy;
    unsigned long unsigned  long ri_cpu_time_qos_user_initiated;
    unsigned long unsigned  long ri_cpu_time_qos_user_interactive;
    unsigned long unsigned  long ri_billed_system_time;
    unsigned long unsigned  long ri_serviced_system_time;
};
struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
    unsigned long unsigned  long ri_child_user_time;
    unsigned long unsigned  long ri_child_system_time;
    unsigned long unsigned  long ri_child_pkg_idle_wkups;
    unsigned long unsigned  long ri_child_interrupt_wkups;
    unsigned long unsigned  long ri_child_pageins;
    unsigned long unsigned  long ri_child_elapsed_abstime;
    unsigned long unsigned  long ri_diskio_bytesread;
    unsigned long unsigned  long ri_diskio_byteswritten;
    unsigned long unsigned  long ri_cpu_time_qos_default;
    unsigned long unsigned  long ri_cpu_time_qos_maintenance;
    unsigned long unsigned  long ri_cpu_time_qos_background;
    unsigned long unsigned  long ri_cpu_time_qos_utility;
    unsigned long unsigned  long ri_cpu_time_qos_legacy;
    unsigned long unsigned  long ri_cpu_time_qos_user_initiated;
    unsigned long unsigned  long ri_cpu_time_qos_user_interactive;
    unsigned long unsigned  long ri_billed_system_time;
    unsigned long unsigned  long ri_serviced_system_time;
    unsigned long unsigned  long ri_logical_writes;
    unsigned long unsigned  long ri_lifetime_max_phys_footprint;
    unsigned long unsigned  long ri_instructions;
    unsigned long unsigned  long ri_cycles;
    unsigned long unsigned  long ri_billed_energy;
    unsigned long unsigned  long ri_serviced_energy;
    unsigned long unsigned  long ri_interval_max_phys_footprint;
    unsigned long unsigned  long ri_runnable_time;
};
struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
    unsigned long unsigned  long ri_child_user_time;
    unsigned long unsigned  long ri_child_system_time;
    unsigned long unsigned  long ri_child_pkg_idle_wkups;
    unsigned long unsigned  long ri_child_interrupt_wkups;
    unsigned long unsigned  long ri_child_pageins;
    unsigned long unsigned  long ri_child_elapsed_abstime;
    unsigned long unsigned  long ri_diskio_bytesread;
    unsigned long unsigned  long ri_diskio_byteswritten;
    unsigned long unsigned  long ri_cpu_time_qos_default;
    unsigned long unsigned  long ri_cpu_time_qos_maintenance;
    unsigned long unsigned  long ri_cpu_time_qos_background;
    unsigned long unsigned  long ri_cpu_time_qos_utility;
    unsigned long unsigned  long ri_cpu_time_qos_legacy;
    unsigned long unsigned  long ri_cpu_time_qos_user_initiated;
    unsigned long unsigned  long ri_cpu_time_qos_user_interactive;
    unsigned long unsigned  long ri_billed_system_time;
    unsigned long unsigned  long ri_serviced_system_time;
    unsigned long unsigned  long ri_logical_writes;
    unsigned long unsigned  long ri_lifetime_max_phys_footprint;
    unsigned long unsigned  long ri_instructions;
    unsigned long unsigned  long ri_cycles;
    unsigned long unsigned  long ri_billed_energy;
    unsigned long unsigned  long ri_serviced_energy;
    unsigned long unsigned  long ri_interval_max_phys_footprint;
    unsigned long unsigned  long ri_runnable_time;
    unsigned long unsigned  long ri_flags;
};
struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long unsigned  long ri_user_time;
    unsigned long unsigned  long ri_system_time;
    unsigned long unsigned  long ri_pkg_idle_wkups;
    unsigned long unsigned  long ri_interrupt_wkups;
    unsigned long unsigned  long ri_pageins;
    unsigned long unsigned  long ri_wired_size;
    unsigned long unsigned  long ri_resident_size;
    unsigned long unsigned  long ri_phys_footprint;
    unsigned long unsigned  long ri_proc_start_abstime;
    unsigned long unsigned  long ri_proc_exit_abstime;
    unsigned long unsigned  long ri_child_user_time;
    unsigned long unsigned  long ri_child_system_time;
    unsigned long unsigned  long ri_child_pkg_idle_wkups;
    unsigned long unsigned  long ri_child_interrupt_wkups;
    unsigned long unsigned  long ri_child_pageins;
    unsigned long unsigned  long ri_child_elapsed_abstime;
    unsigned long unsigned  long ri_diskio_bytesread;
    unsigned long unsigned  long ri_diskio_byteswritten;
    unsigned long unsigned  long ri_cpu_time_qos_default;
    unsigned long unsigned  long ri_cpu_time_qos_maintenance;
    unsigned long unsigned  long ri_cpu_time_qos_background;
    unsigned long unsigned  long ri_cpu_time_qos_utility;
    unsigned long unsigned  long ri_cpu_time_qos_legacy;
    unsigned long unsigned  long ri_cpu_time_qos_user_initiated;
    unsigned long unsigned  long ri_cpu_time_qos_user_interactive;
    unsigned long unsigned  long ri_billed_system_time;
    unsigned long unsigned  long ri_serviced_system_time;
    unsigned long unsigned  long ri_logical_writes;
    unsigned long unsigned  long ri_lifetime_max_phys_footprint;
    unsigned long unsigned  long ri_instructions;
    unsigned long unsigned  long ri_cycles;
    unsigned long unsigned  long ri_billed_energy;
    unsigned long unsigned  long ri_serviced_energy;
    unsigned long unsigned  long ri_interval_max_phys_footprint;
    unsigned long unsigned  long ri_runnable_time;
    unsigned long unsigned  long ri_flags;
    unsigned long unsigned  long ri_user_ptime;
    unsigned long unsigned  long ri_system_ptime;
    unsigned long unsigned  long ri_pinstructions;
    unsigned long unsigned  long ri_pcycles;
    unsigned long unsigned  long ri_energy_nj;
    unsigned long unsigned  long ri_penergy_nj;
    unsigned long unsigned  long ri_secure_time_in_system;
    unsigned long unsigned  long ri_secure_ptime_in_system;
    unsigned long unsigned  long ri_neural_footprint;
    unsigned long unsigned  long ri_lifetime_max_neural_footprint;
    unsigned long unsigned  long ri_interval_max_neural_footprint;
    unsigned long unsigned  long ri_reserved[9];
};
typedef struct rusage_info_v6 rusage_info_current;
struct rlimit
{
    unsigned long unsigned  long rlim_cur;
    unsigned long unsigned  long rlim_max;
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
typedef unsigned long unsigned  long malloc_type_id_t;
typedef struct _malloc_zone_t malloc_zone_t;
typedef int dev_t;
typedef unsigned short int mode_t;
extern char* suboptarg;
typedef unsigned long unsigned  int rsize_t;
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
    short short* p;
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
    short short item;
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
    short short* items;
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
struct integer
{
    long value;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
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
struct sInfo;
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
struct sVar;
struct sRightValueObject;
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
struct sVarTable;
struct sBlock;
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
struct sVarTable;
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
    _Bool no_output_err;
    _Bool no_output_come_code;
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
struct sReturnNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
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
    _Bool throw_or_rescue;
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
unsigned long unsigned  int fread(void* __ptr, unsigned long unsigned  int __size, unsigned long unsigned  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long  long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long unsigned  int fwrite(const void* __ptr, unsigned long unsigned  int __size, unsigned long unsigned  int __nitems, struct __sFILE* __stream);
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
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long unsigned  int anonymous_var_nameX79);
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
int snprintf(char* __str, unsigned long unsigned  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);
int vscanf(const char* __format, va_list anonymous_var_nameX119);
int vsnprintf(char* __str, unsigned long unsigned  int __size, const char* __format, va_list anonymous_var_nameX120);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
long getdelim(char** __linep, unsigned long unsigned  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long unsigned  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long unsigned  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long unsigned  int* __sizep);
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long unsigned  int* anonymous_var_nameX131);
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
void* alloca(unsigned long unsigned  int anonymous_var_nameX204);
void* malloc_type_malloc(unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void malloc_type_free(void* ptr, unsigned long unsigned  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_valloc(unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_aligned_alloc(unsigned long unsigned  int alignment, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long unsigned  int alignment, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long unsigned  int count, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long unsigned  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long unsigned  int alignment, unsigned long unsigned  int size, unsigned long unsigned  long type_id);
void* malloc(unsigned long unsigned  int __size);
void* calloc(unsigned long unsigned  int __count, unsigned long unsigned  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long unsigned  int __size);
void* reallocf(void* __ptr, unsigned long unsigned  int __size);
void* valloc(unsigned long unsigned  int __size);
void* aligned_alloc(unsigned long unsigned  int __alignment, unsigned long unsigned  int __size);
int posix_memalign(void** __memptr, unsigned long unsigned  int __alignment, unsigned long unsigned  int __size);
void abort();
int abs(int anonymous_var_nameX206);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214);
void exit(int anonymous_var_nameX215);
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219);
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long unsigned  int __n);
unsigned long unsigned  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long unsigned  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long unsigned  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231);
int rand();
void srand(unsigned int anonymous_var_nameX232);
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long unsigned  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long unsigned  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX239);
unsigned long unsigned  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long unsigned  int anonymous_var_nameX242);
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
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long unsigned  int anonymous_var_nameX265);
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
int ptsname_r(int fildes, char* buffer, unsigned long unsigned  int buflen);
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
void arc4random_buf(void* __buf, unsigned long unsigned  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
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
int heapsort(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long unsigned  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long unsigned  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long unsigned  int __n);
void* memcpy(void* __dst, const void* __src, unsigned long unsigned  int __n);
void* memmove(void* __dst, const void* __src, unsigned long unsigned  int __len);
void* memset(void* __b, int __c, unsigned long unsigned  int __len);
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long unsigned  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
unsigned long unsigned  int strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long unsigned  int __n);
int strncmp(const char* __s1, const char* __s2, unsigned long unsigned  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long unsigned  int __n);
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long unsigned  int strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long unsigned  int strxfrm(char* __s1, const char* __s2, unsigned long unsigned  int __n);
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long unsigned  int __buflen);
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long unsigned  int __n);
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long unsigned  int __n);
char* strndup(const char* __s1, unsigned long unsigned  int __n);
unsigned long unsigned  int strnlen(const char* __s1, unsigned long unsigned  int __n);
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long unsigned  int __smax, int __c, unsigned long unsigned  int __n);
void* memmem(const void* __big, unsigned long unsigned  int __big_len, const void* __little, unsigned long unsigned  int __little_len);
void memset_pattern4(void* __b, const void* __pattern4, unsigned long unsigned  int __len);
void memset_pattern8(void* __b, const void* __pattern8, unsigned long unsigned  int __len);
void memset_pattern16(void* __b, const void* __pattern16, unsigned long unsigned  int __len);
char* strcasestr(const char* __big, const char* __little);
char* strnstr(const char* __big, const char* __little, unsigned long unsigned  int __len);
unsigned long unsigned  int strlcat(char* __dst, const char* __source, unsigned long unsigned  int __size);
unsigned long unsigned  int strlcpy(char* __dst, const char* __source, unsigned long unsigned  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long unsigned  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long unsigned  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long unsigned  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long unsigned  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long unsigned  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long unsigned  int anonymous_var_nameX365);
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
void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name);
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
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
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
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
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
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
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
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, long right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long unsigned  int size_t_clone(long self);
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
char* short_to_string(short short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long unsigned  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short short left, short short right);
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
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
struct integer* integer_operator_add(struct integer* left, struct integer* right);
struct integer* integer_operator_sub(struct integer* left, struct integer* right);
struct integer* integer_operator_mult(struct integer* left, struct integer* right);
struct integer* integer_operator_div(struct integer* left, struct integer* right);
struct integer* integer_operator_mod(struct integer* left, struct integer* right);
struct integer* integer_operator_lshift(struct integer* left, struct integer* right);
struct integer* integer_operator_rshift(struct integer* left, struct integer* right);
struct integer* integer_operator_gteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lt(struct integer* left, struct integer* right);
struct integer* integer_operator_gt(struct integer* left, struct integer* right);
struct integer* integer_operator_and(struct integer* left, struct integer* right);
struct integer* integer_operator_xor(struct integer* left, struct integer* right);
struct integer* integer_operator_or(struct integer* left, struct integer* right);
struct integer* integer_operator_andand(struct integer* left, struct integer* right);
struct integer* integer_operator_oror(struct integer* left, struct integer* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
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
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
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
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
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
struct sNode* create_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_catch_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool throw_or_rescue, struct sInfo* info);
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
static void CVALUE_finalize(struct CVALUE* self);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
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
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info);
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
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
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
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2205, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2212, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2221, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2228, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2235, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2242, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2249, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2549, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2554, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2559, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2564, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2569, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2602, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2604, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2609, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2611, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2616, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2618, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2623, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2625, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2630, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2632, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2637, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2639, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2644, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2646, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2651, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2656, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2661, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2666, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2671, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2676, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2681, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2686, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2691, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2696, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2701, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2706, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2711, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2716, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int shortpa_length(short short* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int intpa_length(int* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int longpa_length(long* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int floatpa_length(float* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int doublepa_length(double* self, unsigned long unsigned  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    /* a*/come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            /* a*/come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            /* a*/come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            /* a*/come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            /* a*/come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            /* a*/come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            /* a*/come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            /* a*/come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 221, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else {
        if(self->len==1) {
            litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 231, "list_item$1char"))));
            litem_17->prev=self->head;
            litem_17->next=((void*)0);
            litem_17->item=item;
            self->tail=litem_17;
            self->head->next=litem_17;
        }
        else {
            litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 241, "list_item$1char"))));
            litem_18->prev=self->tail;
            litem_18->next=((void*)0);
            litem_18->item=item;
            self->tail->next=litem_18;
            self->tail=litem_18;
        }
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
    if(self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else {
        if(self->len==1) {
            litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charp"))));
            litem_23->prev=self->head;
            litem_23->next=((void*)0);
            litem_23->item=item;
            self->tail=litem_23;
            self->head->next=litem_23;
        }
        else {
            litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charp"))));
            litem_24->prev=self->tail;
            litem_24->next=((void*)0);
            litem_24->item=item;
            self->tail->next=litem_24;
            self->tail=litem_24;
        }
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


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
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

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 221, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else {
        if(self->len==1) {
            litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 231, "list_item$1short"))));
            litem_29->prev=self->head;
            litem_29->next=((void*)0);
            litem_29->item=item;
            self->tail=litem_29;
            self->head->next=litem_29;
        }
        else {
            litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 241, "list_item$1short"))));
            litem_30->prev=self->tail;
            litem_30->next=((void*)0);
            litem_30->item=item;
            self->tail->next=litem_30;
            self->tail=litem_30;
        }
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
    if(self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 221, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else {
        if(self->len==1) {
            litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 231, "list_item$1int"))));
            litem_35->prev=self->head;
            litem_35->next=((void*)0);
            litem_35->item=item;
            self->tail=litem_35;
            self->head->next=litem_35;
        }
        else {
            litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 241, "list_item$1int"))));
            litem_36->prev=self->tail;
            litem_36->next=((void*)0);
            litem_36->item=item;
            self->tail->next=litem_36;
            self->tail=litem_36;
        }
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
    if(self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 221, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else {
        if(self->len==1) {
            litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 231, "list_item$1long"))));
            litem_41->prev=self->head;
            litem_41->next=((void*)0);
            litem_41->item=item;
            self->tail=litem_41;
            self->head->next=litem_41;
        }
        else {
            litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 241, "list_item$1long"))));
            litem_42->prev=self->tail;
            litem_42->next=((void*)0);
            litem_42->item=item;
            self->tail->next=litem_42;
            self->tail=litem_42;
        }
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
    if(self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 221, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else {
        if(self->len==1) {
            litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 231, "list_item$1float"))));
            litem_47->prev=self->head;
            litem_47->next=((void*)0);
            litem_47->item=item;
            self->tail=litem_47;
            self->head->next=litem_47;
        }
        else {
            litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 241, "list_item$1float"))));
            litem_48->prev=self->tail;
            litem_48->next=((void*)0);
            litem_48->item=item;
            self->tail->next=litem_48;
            self->tail=litem_48;
        }
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
    if(self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 221, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else {
        if(self->len==1) {
            litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 231, "list_item$1double"))));
            litem_53->prev=self->head;
            litem_53->next=((void*)0);
            litem_53->item=item;
            self->tail=litem_53;
            self->head->next=litem_53;
        }
        else {
            litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 241, "list_item$1double"))));
            litem_54->prev=self->tail;
            litem_54->next=((void*)0);
            litem_54->item=item;
            self->tail->next=litem_54;
            self->tail=litem_54;
        }
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "short")));
    memcpy(self->items,values,sizeof(short short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(self&&self->items) {
        come_free((char*)self->items);
    }
}










struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value117 = (void*)0;
char* __dec_obj17;
struct sReturnNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj17=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sReturnNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_64;
void* __right_value154 = (void*)0;
struct sType* result_type_65;
void* __right_value155 = (void*)0;
struct sType* result_type2_96;
struct sType* result_type3_97;
void* __right_value156 = (void*)0;
_Bool _if_conditional1;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj65;
_Bool __result85__;
void* __right_value158 = (void*)0;
struct CVALUE* come_value_98;
void* __right_value159 = (void*)0;
struct sType* come_value_type_99;
void* __right_value160 = (void*)0;
struct sType* __dec_obj66;
void* __right_value161 = (void*)0;
char* var_name_101;
int num_result_stack_102;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct sFun* come_fun_103;
void* __right_value165 = (void*)0;
    if(self->value) {
        come_fun_64=info->come_fun;
        result_type_65=(struct sType*)come_increment_ref_count(sType_clone(come_fun_64->mResultType));
        result_type2_96=(struct sType*)come_increment_ref_count(solve_generics(result_type_65,info->generics_type,info));
        result_type3_97=result_type2_96->mNoSolvedGenericsType->v1;
        if(result_type2_96->mNoSolvedGenericsType->v1) {
            result_type3_97=result_type2_96->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_97=result_type2_96;
        }
        if(result_type_65->mException) {
            if((_if_conditional1=(string_operator_equals(((char*)(__right_value156=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj65=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
            }
        }
        if(!node_compile(self->value,info)) {
            __result85__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_65,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_96,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result85__;
        }
        come_value_98=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_99=(struct sType*)come_increment_ref_count(solve_generics(come_value_98->type,info->generics_type,info));
        __dec_obj66=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_98->type));
        /* a*/come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(gComeC) {
            add_come_code(info,"return %s;\n",come_value_98->c_value);
        }
        else {
            if(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_64->mBlock,info,come_value_98->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
                add_come_code(info,"return %s;\n",come_value_98->c_value);
            }
            else {
                static int num_result_100=0;
                var_name_101=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_100));
                num_result_stack_102=num_result_100;
                if(!info->come_fun->mNoResultType) {
                    if(!(strlen(result_type2_96->mClass->mName)>strlen("tuple")&&memcmp(result_type2_96->mClass->mName,"tuple",strlen("tuple"))==0)) {
                        check_assign_type("result type",result_type2_96,come_value_type_99,come_value_98,(_Bool)0,(_Bool)1,info);
                    }
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value162=make_define_var(result_type2_96,var_name_101,(_Bool)0,info))));
                    __right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_101,come_value_98->c_value);
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value163=make_define_var(result_type2_96,var_name_101,(_Bool)0,info))));
                    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s = %s;\n",var_name_101,come_value_98->c_value);
                }
                add_last_code_to_source(info);
                free_objects_on_return(come_fun_64->mBlock,info,come_value_98->var,(_Bool)0);
                free_right_value_objects(info,(_Bool)0);
                if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                    free_objects(info->gv_table,((void*)0),info);
                    add_come_code(info,((char*)(__right_value164=xsprintf("come_heap_final();\n"))));
                    __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                if(info->block_level==1) {
                    info->inhibits_output_code=(_Bool)1;
                }
                if(!info->come_fun->mNoResultType) {
                    add_come_code(info,"gComeFunResultObject = (void*)0;\n");
                }
                add_come_code(info,"return __result%d__;\n",num_result_stack_102);
                var_name_101 = come_decrement_ref_count2(var_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        /*i*/come_call_finalizer3(result_type_65,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_96,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_type_99,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_103=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_103->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value165=xsprintf("come_heap_final();\n"))));
            __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result67__;
void* __right_value119 = (void*)0;
struct sType* result_66;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
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
struct sNode* __dec_obj62;
void* __right_value152 = (void*)0;
char* __dec_obj63;
void* __right_value153 = (void*)0;
char* __dec_obj64;
struct sType* __result84__;
    if(self==(void*)0) {
        __result67__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    result_66=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_66->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj43=result_66->mNoSolvedGenericsType;
        result_66->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_66->mOriginalLoadVarType;
        result_66->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj45=result_66->mNoExceptionType;
        result_66->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj46=result_66->mGenericsName;
        result_66->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result_66->mGenericsTypes;
        result_66->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj54=result_66->mArrayNum;
        result_66->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_66->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj55=result_66->mParamTypes;
        result_66->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj59=result_66->mParamNames;
        result_66->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj60=result_66->mResultType;
        result_66->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_66->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj61=result_66->mAlignas;
        result_66->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_66->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_66->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_66->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_66->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_66->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_66->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_66->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_66->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_66->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_66->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_66->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_66->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_66->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_66->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_66->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_66->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_66->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_66->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_66->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_66->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_66->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_66->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_66->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_66->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_66->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_66->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_66->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj62=result_66->mSizeNum;
        result_66->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_66->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_66->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_66->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj63=result_66->mOriginalTypeName;
        result_66->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_66->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_66->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_66->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_66->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_66->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_66->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_66->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_66->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_66->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj64=result_66->mAsmName;
        result_66->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_66->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_66->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_66->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_66->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_66->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_66->mOriginIsArray=self->mOriginIsArray;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_66;
    /*i*/come_call_finalizer3(result_66,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result68__;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* result_67;
void* __right_value121 = (void*)0;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result69__;
    if(self==(void*)0) {
        __result68__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_67=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj21=result_67->v1;
        result_67->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
struct tuple1$1sTypeph* __dec_obj26;
char* __dec_obj28;
struct list$1sTypeph* __dec_obj29;
struct list$1sNodeph* __dec_obj31;
struct list$1sTypeph* __dec_obj33;
struct list$1charph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj36;
struct sNode* __dec_obj38;
struct sNode* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj22=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj24=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj26=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj26,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj28=self->mGenericsName;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj29=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj31=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj31,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj33=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj33,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj34=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj34,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj36=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj38=self->mAlignas;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj39=self->mSizeNum;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj40=self->mOriginalTypeName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj41=self->mAsmName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_68;
struct list_item$1sTypeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj30;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            /* a*/come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_70;
struct list_item$1sTypeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_72;
struct list_item$1sNodeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj32;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj35;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj37;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj37=self->v1;
            /* a*/come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj42;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj42=self->v1;
            /* a*/come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result70__;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1sTypeph* result_80;
struct list_item$1sTypeph* it_81;
void* __right_value131 = (void*)0;
struct list$1sTypeph* __result73__;
    if(self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_80=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_81=self->head;
    while(it_81!=((void*)0)) {
        list$1sTypeph_add(result_80,(struct sType*)come_increment_ref_count(sType_clone(it_81->item)));
        it_81=it_81->next;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_80;
    /*i*/come_call_finalizer3(result_80,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result71__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj47;
void* __right_value129 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj48;
void* __right_value130 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj49;
struct list$1sTypeph* __result72__;
    if(self->len==0) {
        litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_82->prev=((void*)0);
        litem_82->next=((void*)0);
        __dec_obj47=litem_82->item;
        litem_82->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_82;
        self->head=litem_82;
    }
    else {
        if(self->len==1) {
            litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_83->prev=self->head;
            litem_83->next=((void*)0);
            __dec_obj48=litem_83->item;
            litem_83->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_83;
            self->head->next=litem_83;
        }
        else {
            litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_84->prev=self->tail;
            litem_84->next=((void*)0);
            __dec_obj49=litem_84->item;
            litem_84->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_84;
            self->tail=litem_84;
        }
    }
    self->len++;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result74__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sNodeph* result_85;
struct list_item$1sNodeph* it_86;
void* __right_value139 = (void*)0;
struct list$1sNodeph* __result79__;
    if(self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_85=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_86=self->head;
    while(it_86!=((void*)0)) {
        list$1sNodeph_add(result_85,(struct sNode*)come_increment_ref_count(sNode_clone(it_86->item)));
        it_86=it_86->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_85;
    /*i*/come_call_finalizer3(result_85,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result75__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj51;
void* __right_value136 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj52;
void* __right_value137 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result76__;
    if(self->len==0) {
        litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_87->prev=((void*)0);
        litem_87->next=((void*)0);
        __dec_obj51=litem_87->item;
        litem_87->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_87;
        self->head=litem_87;
    }
    else {
        if(self->len==1) {
            litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value136=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_88->prev=self->head;
            litem_88->next=((void*)0);
            __dec_obj52=litem_88->item;
            litem_88->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_88;
            self->head->next=litem_88;
        }
        else {
            litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_89->prev=self->tail;
            litem_89->next=((void*)0);
            __dec_obj53=litem_89->item;
            litem_89->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_89;
            self->tail=litem_89;
        }
    }
    self->len++;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result77__;
void* __right_value138 = (void*)0;
struct sNode* result_90;
struct sNode* __result78__;
    if(self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_90=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_90->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_90->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_90->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_90->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_90->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_90->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_90->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_90->kind=self->kind;
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_90;
    if(result_90) { result_90 = come_decrement_ref_count2(result_90, ((struct sNode*)result_90)->finalize, ((struct sNode*)result_90)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result80__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1charph* result_91;
struct list_item$1charph* it_92;
void* __right_value147 = (void*)0;
struct list$1charph* __result83__;
    if(self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_91=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_92=self->head;
    while(it_92!=((void*)0)) {
        list$1charph_add(result_91,(char*)come_increment_ref_count(string_clone(it_92->item)));
        it_92=it_92->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_91;
    /*i*/come_call_finalizer3(result_91,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj56;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj57;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj58;
struct list$1charph* __result82__;
    if(self->len==0) {
        litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj56=litem_93->item;
        litem_93->item=(char*)come_increment_ref_count(item);
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_93;
        self->head=litem_93;
    }
    else {
        if(self->len==1) {
            litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_94->prev=self->head;
            litem_94->next=((void*)0);
            __dec_obj57=litem_94->item;
            litem_94->item=(char*)come_increment_ref_count(item);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_94;
            self->head->next=litem_94;
        }
        else {
            litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_95->prev=self->tail;
            litem_95->next=((void*)0);
            __dec_obj58=litem_95->item;
            litem_95->item=(char*)come_increment_ref_count(item);
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_95;
            self->tail=litem_95;
        }
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj67;
struct sType* __dec_obj68;
char* __dec_obj69;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj67=self->c_value;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj68=self->type;
            /* a*/come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj69=self->c_value_without_right_value_objects;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
struct sCurrentNode2* __result86__;
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value166,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string(self->sname)));
    __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string("sCurrentNode")));
    __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value169 = (void*)0;
char* class_name_104;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sClass* current_stack_105;
struct sVarTable* vtable_106;
struct map$2charphsVarph* o2_saved_107;
char* it_110;
char* key_113;
struct sVar* value_114;
void* __right_value172 = (void*)0;
struct sType* type2_118;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct tuple2$2charphsTypeph* item_119;
void* __right_value176 = (void*)0;
struct sType* type3_120;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct tuple2$2charphsTypeph* item2_123;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct map$2charphsVarph* o2_saved_175;
char* it_176;
char* key_177;
struct sVar* value_178;
void* __right_value191 = (void*)0;
struct sType* type2_179;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct tuple2$2charphsTypeph* item_180;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct CVALUE* come_value_181;
void* __right_value196 = (void*)0;
char* __dec_obj97;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct sType* __dec_obj98;
_Bool __result126__;
    info->current_stack_num++;
    class_name_104=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_105=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 422, "sClass")),class_name_104,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_106=info->lv_table;
    while(vtable_106) {
        for(        o2_saved_107=(struct map$2charphsVarph*)come_increment_ref_count((vtable_106->mVars)),it_110=map$2charphsVarph_begin((o2_saved_107));        !map$2charphsVarph_end((o2_saved_107));        it_110=map$2charphsVarph_next((o2_saved_107))        ){
            key_113=it_110;
            value_114=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_106->mVars,key_113), "./common.h", 429, 0));
            type2_118=(struct sType*)come_increment_ref_count(sType_clone(value_114->mType));
            type2_118->mPointerNum++;
            item_119=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 435, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_114->mCValueName)),(struct sType*)come_increment_ref_count(type2_118)));
            if(value_114->mCValueName!=((void*)0)) {
                if(strcmp(value_114->mCValueName,"__list_values")==0) {
                }
                else {
                    if(strcmp(value_114->mCValueName,"__map_keys")==0) {
                    }
                    else {
                        if(strcmp(value_114->mCValueName,"__map_element")==0) {
                        }
                        else {
                            if(string_operator_equals(value_114->mType->mClass->mName,"va_list")||string_operator_equals(value_114->mType->mClass->mName,"__builtin_va_list")) {
                            }
                            else {
                                if(list$1sNodeph_length(type2_118->mArrayNum)==1) {
                                    type3_120=(struct sType*)come_increment_ref_count(sType_clone(type2_118));
                                    list$1sNodeph_reset(type3_120->mArrayNum);
                                    type3_120->mPointerNum++;
                                    type3_120->mOriginIsArray=(_Bool)1;
                                    item2_123=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 455, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_114->mCValueName)),(struct sType*)come_increment_ref_count(type3_120)));
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_105->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_123)));
                                    value_114->mType->mOriginIsArray=(_Bool)1;
                                    /*i*/come_call_finalizer3(type3_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(item2_123,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_105->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_119)));
                                }
                            }
                        }
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_119,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_107,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_106=vtable_106->mParent;
    }
    output_struct(current_stack_105,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_104),(struct sClass*)come_increment_ref_count(current_stack_105));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_104,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_104);
    vtable_106=info->lv_table;
    while(vtable_106) {
        for(        o2_saved_175=(struct map$2charphsVarph*)come_increment_ref_count((vtable_106->mVars)),it_176=map$2charphsVarph_begin((o2_saved_175));        !map$2charphsVarph_end((o2_saved_175));        it_176=map$2charphsVarph_next((o2_saved_175))        ){
            key_177=it_176;
            value_178=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_106->mVars,key_177), "./common.h", 480, 1));
            type2_179=(struct sType*)come_increment_ref_count(sType_clone(value_178->mType));
            item_180=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 484, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_178->mCValueName),(struct sType*)come_increment_ref_count(type2_179)));
            if(value_178->mCValueName!=((void*)0)) {
                if(strcmp(value_178->mCValueName,"__list_values")==0) {
                }
                else {
                    if(strcmp(value_178->mCValueName,"__map_keys")==0) {
                    }
                    else {
                        if(strcmp(value_178->mCValueName,"__map_element")==0) {
                        }
                        else {
                            if(string_operator_equals(value_178->mType->mClass->mName,"va_list")||string_operator_equals(value_178->mType->mClass->mName,"__builtin_va_list")) {
                            }
                            else {
                                if(string_operator_equals(type2_179->mClass->mName,"lambda")) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_178->mCValueName,value_178->mCValueName);
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_178->mCValueName,value_178->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_179,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_180,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_175,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_106=vtable_106->mParent;
    }
    come_value_181=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 513, "CVALUE"))));
    __dec_obj97=come_value_181->c_value;
    come_value_181->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj98=come_value_181->type;
    come_value_181->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 516, "sType")),class_name_104,(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_181->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_181->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
    __result126__ = (_Bool)1;
    class_name_104 = come_decrement_ref_count2(class_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_105,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result126__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_108;
char* __result89__;
char* __result90__;
char* result_109;
char* __result91__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_108,0,sizeof(char*));
        __result89__ = gComeFunResultObject = __result_obj__ = result_108;
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result90__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    memset(&result_109,0,sizeof(char*));
    __result91__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_111;
char* __result92__;
char* __result93__;
char* result_112;
char* __result94__;
result_111 = (void*)0;
result_112 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_111,0,sizeof(char*));
        __result92__ = gComeFunResultObject = __result_obj__ = result_111;
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result93__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    memset(&result_112,0,sizeof(char*));
    __result94__ = gComeFunResultObject = __result_obj__ = result_112;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_115;
unsigned int hash_116;
unsigned int it_117;
struct sVar* __result95__;
struct sVar* __result96__;
struct sVar* __result97__;
struct sVar* __result98__;
default_value_115 = (void*)0;
    memset(&default_value_115,0,sizeof(struct sVar*));
    hash_116=string_get_hash_key(((char*)key))%self->size;
    it_117=hash_116;
    while((_Bool)1) {
        if(self->item_existance[it_117]) {
            if(string_equals(self->keys[it_117],key)) {
                __result95__ = gComeFunResultObject = __result_obj__ = self->items[it_117];
                /*i*/come_call_finalizer3(default_value_115,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result95__;
            }
            it_117++;
            if(it_117>=self->size) {
                it_117=0;
            }
            else {
                if(it_117==hash_116) {
                    __result96__ = gComeFunResultObject = __result_obj__ = default_value_115;
                    /*i*/come_call_finalizer3(default_value_115,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result96__;
                }
            }
        }
        else {
            __result97__ = gComeFunResultObject = __result_obj__ = default_value_115;
            /*i*/come_call_finalizer3(default_value_115,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result97__;
        }
    }
    __result98__ = gComeFunResultObject = __result_obj__ = default_value_115;
    /*i*/come_call_finalizer3(default_value_115,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj71;
char* __dec_obj72;
struct sType* __dec_obj73;
char* __dec_obj74;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj72=self->mCValueName;
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj73=self->mType;
            /* a*/come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj74=self->mFunName;
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj75;
struct sType* __dec_obj76;
struct tuple2$2charphsTypeph* __result99__;
    __dec_obj75=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj76=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_121;
struct list_item$1sNodeph* prev_it_122;
struct list$1sNodeph* __result100__;
    it_121=self->head;
    while(it_121!=((void*)0)) {
        prev_it_122=it_121;
        it_121=it_121->next;
        /*i*/come_call_finalizer3(prev_it_122,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_124;
struct tuple2$2charphsTypeph* __dec_obj79;
void* __right_value181 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_125;
struct tuple2$2charphsTypeph* __dec_obj82;
void* __right_value182 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_126;
struct tuple2$2charphsTypeph* __dec_obj85;
struct list$1tuple2$2charphsTypephph* __result101__;
    if(self->len==0) {
        litem_124=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value180=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple2$2charphsTypephph"))));
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        __dec_obj79=litem_124->item;
        litem_124->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj79,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_124;
        self->head=litem_124;
    }
    else {
        if(self->len==1) {
            litem_125=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value181=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple2$2charphsTypephph"))));
            litem_125->prev=self->head;
            litem_125->next=((void*)0);
            __dec_obj82=litem_125->item;
            litem_125->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj82,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_125;
            self->head->next=litem_125;
        }
        else {
            litem_126=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value182=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple2$2charphsTypephph"))));
            litem_126->prev=self->tail;
            litem_126->next=((void*)0);
            __dec_obj85=litem_126->item;
            litem_126->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj85,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_126;
            self->tail=litem_126;
        }
    }
    self->len++;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj86;
struct sType* __dec_obj87;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj86=self->v1;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj87=self->v2;
            /* a*/come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result102__;
void* __right_value183 = (void*)0;
struct tuple2$2charphsTypeph* result_127;
void* __right_value184 = (void*)0;
char* __dec_obj88;
void* __right_value185 = (void*)0;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result103__;
    if(self==(void*)0) {
        __result102__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    result_127=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_127->v1;
        result_127->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj89=result_127->v2;
        result_127->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /* a*/come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = result_127;
    /*i*/come_call_finalizer3(result_127,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj90;
struct sType* __dec_obj91;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_128;
int i_129;
    for(    i_128=0;    i_128<self->size;    i_128++    ){
        if(self->item_existance[i_128]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_128],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_129=0;    i_129<self->size;    i_129++    ){
        if(self->item_existance[i_129]) {
            if(1) {
                self->keys[i_129] = come_decrement_ref_count2(self->keys[i_129], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_151;
unsigned int it_152;
_Bool same_key_exist_169;
char* it2_172;
struct map$2charphsClassph* __result124__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_151=string_get_hash_key(key)%self->size;
    it_152=hash_151;
    while((_Bool)1) {
        if(self->item_existance[it_152]) {
            if(string_equals(self->keys[it_152],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_152]);
                    self->keys[it_152] = come_decrement_ref_count2(self->keys[it_152], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_152]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_152]);
                    self->keys[it_152]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_152],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_152]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_152]=item;
                }
                break;
            }
            it_152++;
            if(it_152>=self->size) {
                it_152=0;
            }
            else {
                if(it_152==hash_151) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_152]=(_Bool)1;
            if(1) {
                self->keys[it_152]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_152]=key;
            }
            if(1) {
                self->items[it_152]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_152]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_169=(_Bool)0;
    for(    it2_172=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_172=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_172,key)) {
            same_key_exist_169=(_Bool)1;
        }
    }
    if(!same_key_exist_169) {
        list$1charp_push_back(self->key_list,key);
    }
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_130;
void* __right_value188 = (void*)0;
char** keys_131;
void* __right_value189 = (void*)0;
struct sClass** items_132;
void* __right_value190 = (void*)0;
_Bool* item_existance_133;
int len_134;
char* it_137;
struct sClass* default_value_140;
struct sClass* it2_141;
unsigned int hash_148;
int n_149;
struct sClass* default_value_150;
default_value_140 = (void*)0;
default_value_150 = (void*)0;
    size_130=self->size*10;
    keys_131=(char**)come_increment_ref_count(((char**)(__right_value188=(char**)come_calloc(1, sizeof(char*)*(1*(size_130)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_132=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value189=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_130)), "/usr/local/include/comelang.h", 1622, "sClass*%"))));
    item_existance_133=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value190=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_130)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_134=0;
    for(    it_137=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_137=map$2charphsClassph_next(self)    ){
        memset(&default_value_140,0,sizeof(struct sClass*));
        it2_141=map$2charphsClassph_at(self,it_137,default_value_140);
        hash_148=string_get_hash_key(it_137)%size_130;
        n_149=hash_148;
        while((_Bool)1) {
            if(item_existance_133[n_149]) {
                n_149++;
                if(n_149>=size_130) {
                    n_149=0;
                }
                else {
                    if(n_149==hash_148) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_133[n_149]=(_Bool)1;
                keys_131[n_149]=it_137;
                items_132[n_149]=map$2charphsClassph_at(self,it_137,default_value_150);
                len_134++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_131;
    self->items=items_132;
    self->item_existance=item_existance_133;
    self->size=size_130;
    self->len=len_134;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_135;
char* __result104__;
char* __result105__;
char* result_136;
char* __result106__;
result_135 = (void*)0;
result_136 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_135,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_135;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_136,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_136;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_138;
char* __result107__;
char* __result108__;
char* result_139;
char* __result109__;
result_138 = (void*)0;
result_139 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_138,0,sizeof(char*));
        __result107__ = gComeFunResultObject = __result_obj__ = result_138;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result108__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    memset(&result_139,0,sizeof(char*));
    __result109__ = gComeFunResultObject = __result_obj__ = result_139;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_142;
unsigned int it_143;
struct sClass* __result110__;
struct sClass* __result111__;
struct sClass* __result112__;
struct sClass* __result113__;
    hash_142=string_get_hash_key(((char*)key))%self->size;
    it_143=hash_142;
    while((_Bool)1) {
        if(self->item_existance[it_143]) {
            if(string_equals(self->keys[it_143],key)) {
                __result110__ = gComeFunResultObject = __result_obj__ = self->items[it_143];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result110__;
            }
            it_143++;
            if(it_143>=self->size) {
                it_143=0;
            }
            else {
                if(it_143==hash_142) {
                    __result111__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result111__;
                }
            }
        }
        else {
            __result112__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result112__;
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj92;
struct list$1tuple2$2charphsTypephph* __dec_obj93;
char* __dec_obj95;
char* __dec_obj96;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj92=self->mName;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj93=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj93,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj95=self->mDeclareSName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj96=self->mParentClassName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_144;
struct list_item$1tuple2$2charphsTypephph* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj94;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj94=self->item;
            /* a*/come_call_finalizer3(__dec_obj94,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_146;
struct list_item$1tuple2$2charphsTypephph* prev_it_147;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        /*i*/come_call_finalizer3(prev_it_147,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_153;
struct list_item$1charp* it_154;
struct list$1charp* __result117__;
    it2_153=0;
    it_154=self->head;
    while(it_154!=((void*)0)) {
        if(charp_equals(it_154->item,item)) {
            list$1charp_delete(self,it2_153,it2_153+1);
            break;
        }
        it2_153++;
        it_154=it_154->next;
    }
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_155;
struct list$1charp* __result114__;
struct list_item$1charp* it_158;
int i_159;
struct list_item$1charp* prev_it_160;
struct list_item$1charp* it_161;
int i_162;
struct list_item$1charp* prev_it_163;
struct list_item$1charp* it_164;
struct list_item$1charp* head_prev_it_165;
struct list_item$1charp* tail_it_166;
int i_167;
struct list_item$1charp* prev_it_168;
struct list$1charp* __result116__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_155=tail;
        tail=head;
        head=tmp_155;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result114__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_158=self->head;
            i_159=0;
            while(it_158!=((void*)0)) {
                if(i_159<tail) {
                    prev_it_160=it_158;
                    it_158=it_158->next;
                    i_159++;
                    /*i*/come_call_finalizer3(prev_it_160,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_159==tail) {
                        self->head=it_158;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_158=it_158->next;
                        i_159++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_161=self->head;
                i_162=0;
                while(it_161!=((void*)0)) {
                    if(i_162==head) {
                        self->tail=it_161->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_162>=head) {
                        prev_it_163=it_161;
                        it_161=it_161->next;
                        i_162++;
                        /*i*/come_call_finalizer3(prev_it_163,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_161=it_161->next;
                        i_162++;
                    }
                }
            }
            else {
                it_164=self->head;
                head_prev_it_165=((void*)0);
                tail_it_166=((void*)0);
                i_167=0;
                while(it_164!=((void*)0)) {
                    if(i_167==head) {
                        head_prev_it_165=it_164->prev;
                    }
                    if(i_167==tail) {
                        tail_it_166=it_164;
                    }
                    if(i_167>=head&&i_167<tail) {
                        prev_it_168=it_164;
                        it_164=it_164->next;
                        i_167++;
                        /*i*/come_call_finalizer3(prev_it_168,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_164=it_164->next;
                        i_167++;
                    }
                }
                if(head_prev_it_165!=((void*)0)) {
                    head_prev_it_165->next=tail_it_166;
                }
                if(tail_it_166!=((void*)0)) {
                    tail_it_166->prev=head_prev_it_165;
                }
            }
        }
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_156;
struct list_item$1charp* prev_it_157;
struct list$1charp* __result115__;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_170;
char* __result118__;
char* __result119__;
char* result_171;
char* __result120__;
result_170 = (void*)0;
result_171 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_170,0,sizeof(char*));
        __result118__ = gComeFunResultObject = __result_obj__ = result_170;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    self->it=self->head;
    if(self->it) {
        __result119__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    memset(&result_171,0,sizeof(char*));
    __result120__ = gComeFunResultObject = __result_obj__ = result_171;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_173;
char* __result121__;
char* __result122__;
char* result_174;
char* __result123__;
result_173 = (void*)0;
result_174 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_173,0,sizeof(char*));
        __result121__ = gComeFunResultObject = __result_obj__ = result_173;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result122__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    memset(&result_174,0,sizeof(char*));
    __result123__ = gComeFunResultObject = __result_obj__ = result_174;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
struct list_item$1CVALUEph* litem_182;
struct CVALUE* __dec_obj99;
void* __right_value200 = (void*)0;
struct list_item$1CVALUEph* litem_183;
struct CVALUE* __dec_obj100;
void* __right_value201 = (void*)0;
struct list_item$1CVALUEph* litem_184;
struct CVALUE* __dec_obj101;
struct list$1CVALUEph* __result125__;
    if(self->len==0) {
        litem_182=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value199=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        __dec_obj99=litem_182->item;
        litem_182->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_182;
        self->head=litem_182;
    }
    else {
        if(self->len==1) {
            litem_183=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value200=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_183->prev=self->head;
            litem_183->next=((void*)0);
            __dec_obj100=litem_183->item;
            litem_183->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_183;
            self->head->next=litem_183;
        }
        else {
            litem_184=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value201=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_184->prev=self->tail;
            litem_184->next=((void*)0);
            __dec_obj101=litem_184->item;
            litem_184->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_184;
            self->tail=litem_184;
        }
    }
    self->len++;
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
struct sLineNode* __result127__;
    ((struct sNodeBase*)(__right_value202=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value202,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
char* __result128__;
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value203=__builtin_string("sLineNode")));
    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct CVALUE* come_value_185;
void* __right_value206 = (void*)0;
char* __dec_obj103;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct sType* __dec_obj104;
_Bool __result129__;
    come_value_185=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 156, "CVALUE"))));
    __dec_obj103=come_value_185->c_value;
    come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj104=come_value_185->type;
    come_value_185->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 159, "sType")),"int",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_185->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
    add_come_last_code(info,"%s;\n",come_value_185->c_value);
    __result129__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result129__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
struct sSNameNode* __result130__;
    ((struct sNodeBase*)(__right_value209=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value209,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
char* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=__builtin_string("sSNameNode")));
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct CVALUE* come_value_186;
void* __right_value213 = (void*)0;
char* __dec_obj106;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sType* __dec_obj107;
_Bool __result132__;
    come_value_186=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 184, "CVALUE"))));
    __dec_obj106=come_value_186->c_value;
    come_value_186->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=come_value_186->type;
    come_value_186->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 187, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_186->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
    add_come_last_code(info,"%s;\n",come_value_186->c_value);
    __result132__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value216 = (void*)0;
struct sFuncNode* __result133__;
    ((struct sNodeBase*)(__right_value216=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value216,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value217=__builtin_string("sFuncNode")));
    __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct CVALUE* come_value_187;
void* __right_value220 = (void*)0;
char* __dec_obj109;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct sType* __dec_obj110;
_Bool __result135__;
    come_value_187=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 212, "CVALUE"))));
    __dec_obj109=come_value_187->c_value;
    come_value_187->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=come_value_187->type;
    come_value_187->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 215, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_187->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
    add_come_last_code(info,"%s;\n",come_value_187->c_value);
    __result135__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result135__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
struct sCallerFuncNode* __result136__;
    ((struct sNodeBase*)(__right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=__builtin_string("sCallerFuncNode")));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct CVALUE* come_value_188;
void* __right_value227 = (void*)0;
char* __dec_obj112;
void* __right_value228 = (void*)0;
char* __dec_obj113;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* __dec_obj114;
_Bool __result138__;
    come_value_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 241, "CVALUE"))));
    if(info->caller_fun) {
        __dec_obj112=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj113=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj114=come_value_188->type;
    come_value_188->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 249, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_188->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
    add_come_last_code(info,"%s;\n",come_value_188->c_value);
    __result138__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
struct sCallerLineNode* __result139__;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct CVALUE* come_value_189;
void* __right_value234 = (void*)0;
char* __dec_obj116;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* __dec_obj117;
_Bool __result140__;
    come_value_189=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 270, "CVALUE"))));
    __dec_obj116=come_value_189->c_value;
    come_value_189->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=come_value_189->type;
    come_value_189->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 273, "sType")),"int",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_189->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_189));
    add_come_last_code(info,"%s;\n",come_value_189->c_value);
    __result140__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
char* __result141__;
    __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=__builtin_string("sCallerLineNode")));
    __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
struct sCallerSNameNode* __result142__;
    ((struct sNodeBase*)(__right_value238=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value238,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value_190;
void* __right_value241 = (void*)0;
char* __dec_obj119;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj120;
_Bool __result143__;
    come_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 298, "CVALUE"))));
    __dec_obj119=come_value_190->c_value;
    come_value_190->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=come_value_190->type;
    come_value_190->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 301, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_190->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
    add_come_last_code(info,"%s;\n",come_value_190->c_value);
    __result143__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result143__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
char* __result144__;
    __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string("sCallerSNameNode")));
    __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* fun_name3_192;
struct list$1sTypeph* method_generics_types_before_193;
struct list$1sTypeph* __dec_obj121;
struct sGenericsFun* generics_fun_194;
void* __right_value246 = (void*)0;
_Bool _if_conditional2;
void* __right_value247 = (void*)0;
char* __result149__;
struct list$1sTypeph* __dec_obj132;
char* __result150__;
    static int num_method_generics_191=0;
    fun_name3_192=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_191++));
    method_generics_types_before_193=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj121=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    /* a*/come_call_finalizer3(__dec_obj121,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_194=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(generics_fun_194) {
        if((_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_192)),generics_fun_194,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_192);
            __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_192 = come_decrement_ref_count2(fun_name3_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_193,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result149__;
        }
    }
    __dec_obj132=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_193);
    /* a*/come_call_finalizer3(__dec_obj132,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result150__ = gComeFunResultObject = __result_obj__ = fun_name3_192;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_192 = come_decrement_ref_count2(fun_name3_192, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_193,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_195;
unsigned int it_196;
struct sGenericsFun* __result145__;
struct sGenericsFun* __result146__;
struct sGenericsFun* __result147__;
struct sGenericsFun* __result148__;
    hash_195=string_get_hash_key(((char*)key))%self->size;
    it_196=hash_195;
    while((_Bool)1) {
        if(self->item_existance[it_196]) {
            if(string_equals(self->keys[it_196],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_196];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_196++;
            if(it_196>=self->size) {
                it_196=0;
            }
            else {
                if(it_196==hash_195) {
                    __result146__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result146__;
                }
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj122;
struct list$1charph* __dec_obj123;
struct list$1charph* __dec_obj124;
char* __dec_obj125;
struct sType* __dec_obj126;
struct list$1sTypeph* __dec_obj127;
struct list$1charph* __dec_obj128;
struct list$1charph* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj122=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj123=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj124=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj124,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj125=self->mName;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj126=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj127=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj127,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj128=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj129=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj130=self->mBlock;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj131=self->mGenericsSName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* __dec_obj133;
void* __right_value259 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj150;
struct list$1sTypeph* __dec_obj151;
struct buffer* __dec_obj152;
struct sFunCallNode* __result157__;
    ((struct sNodeBase*)(__right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value248,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj133=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj150=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    /* a*/come_call_finalizer3(__dec_obj150,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj151=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    /* a*/come_call_finalizer3(__dec_obj151,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj152=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /* a*/come_call_finalizer3(__dec_obj152,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    self->throw_or_rescue=throw_or_rescue;
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result158__;
    __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string("sFunCallNode")));
    __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_207;
struct list$1tuple2$2charphsNodephph* params_208;
struct buffer* method_block_209;
int method_block_sline_210;
_Bool throw_or_rescue_211;
struct sVar* var__212;
struct sType* lambda_type_213;
_Bool __result159__;
void* __right_value261 = (void*)0;
struct sType* result_type_214;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1CVALUEph* come_params_215;
_Bool __result161__;
int i_218;
struct list$1tuple2$2charphsNodephph* o2_saved_219;
struct tuple2$2charphsNodeph* it_222;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_225;
struct sNode* node_226;
_Bool __result168__;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_227;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct buffer* buf_231;
int j_232;
struct list$1CVALUEph* o2_saved_233;
struct CVALUE* it_236;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value272 = (void*)0;
char* __dec_obj159;
void* __right_value273 = (void*)0;
struct sType* __dec_obj160;
struct sGenericsFun* generics_fun_240;
_Bool method_generics_241;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sTypeph* method_generics_types_242;
void* __right_value276 = (void*)0;
char* generics_fun_name_243;
struct sFun* fun_244;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1CVALUEph* come_params_247;
struct sFun* fun_248;
_Bool no_output_come_code_249;
_Bool __result181__;
struct CVALUE* method_block_node_250;
void* __right_value279 = (void*)0;
struct sType* method_block_lambda_type_254;
void* __right_value280 = (void*)0;
struct sType* method_block_result_type_255;
struct sType* generics_fun_method_block_lambda_type_256;
struct sType* generics_fun_method_block_result_type_257;
int method_generics_num_258;
void* __right_value281 = (void*)0;
int n_267;
struct list$1sTypeph* o2_saved_268;
struct sType* it_271;
int method_generics_num_274;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1CVALUEph* come_params_275;
int i_276;
struct sType* result_type_277;
struct list$1tuple2$2charphsNodephph* o2_saved_278;
struct tuple2$2charphsNodeph* it_279;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_280;
struct sNode* node_281;
_Bool __result194__;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_282;
int method_generics_num_286;
void* __right_value292 = (void*)0;
int n_287;
struct list$1sTypeph* o2_saved_288;
struct sType* it_289;
int method_generics_num_290;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj183;
void* __right_value295 = (void*)0;
char* __dec_obj184;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1CVALUEph* come_params_293;
struct list$1tuple2$2charphsNodephph* o2_saved_294;
struct tuple2$2charphsNodeph* it_295;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_296;
struct sNode* node_297;
_Bool __result197__;
void* __right_value298 = (void*)0;
struct CVALUE* come_value_298;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct buffer* buf_299;
int j_300;
struct list$1CVALUEph* o2_saved_301;
struct CVALUE* it_302;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_303;
void* __right_value303 = (void*)0;
char* __dec_obj185;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* __dec_obj186;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj187;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj188;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj189;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj190;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj191;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj192;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj193;
_Bool __result198__;
void* __right_value320 = (void*)0;
char* __dec_obj194;
void* __right_value321 = (void*)0;
char* __dec_obj195;
char* p_304;
int version_305;
char* p2_306;
int i_308;
void* __right_value322 = (void*)0;
char* new_fun_name_309;
void* __right_value323 = (void*)0;
char* __dec_obj196;
void* __right_value324 = (void*)0;
char* new_fun_name_313;
void* __right_value325 = (void*)0;
char* __dec_obj197;
_Bool __result203__;
int i_314;
void* __right_value326 = (void*)0;
char* new_fun_name_315;
void* __right_value327 = (void*)0;
char* __dec_obj198;
struct sFun* fun_316;
void* __right_value328 = (void*)0;
struct sType* result_type_317;
void* __right_value329 = (void*)0;
struct sType* __dec_obj199;
void* __right_value330 = (void*)0;
struct sType* come_fun_result_type_319;
void* __right_value331 = (void*)0;
struct sType* come_fun_result_type2_320;
void* __right_value338 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value345 = (void*)0;
struct sNode* expression_node_321;
void* __right_value346 = (void*)0;
struct sNode* node_324;
_Bool __result208__;
void* __right_value347 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value354 = (void*)0;
struct sNode* expression_node_325;
void* __right_value355 = (void*)0;
struct sNode* node_327;
_Bool __result211__;
_Bool __result212__;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1CVALUEph* come_params_328;
int i_329;
struct sType* result_type_330;
struct list$1tuple2$2charphsNodephph* o2_saved_331;
struct tuple2$2charphsNodeph* it_332;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_333;
struct sNode* node_334;
_Bool __result213__;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_335;
struct sType* __dec_obj225;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct buffer* buf_336;
int j_337;
struct list$1CVALUEph* o2_saved_338;
struct CVALUE* it_339;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct CVALUE* come_value_340;
void* __right_value363 = (void*)0;
char* __dec_obj226;
struct sType* __dec_obj227;
_Bool __result214__;
void* __right_value364 = (void*)0;
struct sType* result_type_341;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1sTypeph* param_types_342;
struct list$1sTypeph* o2_saved_343;
struct sType* it_344;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* it2_345;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj228;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1CVALUEph* come_params_346;
int i_347;
struct list$1tuple2$2charphsNodephph* o2_saved_348;
struct tuple2$2charphsNodeph* it_349;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_350;
struct sNode* node_351;
_Bool __result215__;
void* __right_value373 = (void*)0;
struct CVALUE* come_value_352;
int n_353;
struct list$1charph* o2_saved_354;
char* it_357;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
int i_365;
struct list$1tuple2$2charphsNodephph* o2_saved_366;
struct tuple2$2charphsNodeph* it_367;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_368;
struct sNode* node_369;
_Bool __result224__;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_370;
_Bool __result225__;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_371;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* default_param_372;
char* param_name_376;
struct buffer* source_377;
char* p_378;
char* head_379;
int sline_380;
void* __right_value383 = (void*)0;
struct buffer* __dec_obj230;
void* __right_value384 = (void*)0;
struct sNode* node_381;
_Bool __result228__;
struct buffer* __dec_obj231;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_382;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
_Bool __result229__;
_Bool __result230__;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value393 = (void*)0;
struct sNode* current_stack_frame_node_383;
_Bool __result233__;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct buffer* method_block2_386;
void* __right_value397 = (void*)0;
struct sType* method_block_type_387;
void* __right_value398 = (void*)0;
char* class_name_388;
struct sClass* current_stack_frame_struct_392;
_Bool __result238__;
void* __right_value399 = (void*)0;
struct sType* result_type_393;
void* __right_value400 = (void*)0;
struct list$1sTypeph* param_types_394;
struct list$1charph* param_names_395;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct buffer* all_alhabet_sname_396;
char* p_397;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1sTypeph* o2_saved_398;
struct sType* it_399;
struct sType* param_type_400;
void* __right_value406 = (void*)0;
char* param_name_401;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* param_name_402;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
char* param_name_403;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct buffer* source3_404;
char* p_405;
char* head_406;
int sline_407;
struct buffer* __dec_obj234;
void* __right_value416 = (void*)0;
struct sNode* node_408;
_Bool __result239__;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* method_block_name_409;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct CVALUE* come_value2_410;
struct sFun* fun2_411;
_Bool __result240__;
struct sType* method_block_type2_412;
void* __right_value421 = (void*)0;
char* __dec_obj235;
void* __right_value422 = (void*)0;
struct sType* __dec_obj236;
struct buffer* __dec_obj237;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct buffer* buf_413;
int j_414;
struct list$1CVALUEph* o2_saved_415;
struct CVALUE* it_416;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value427 = (void*)0;
char* __dec_obj238;
void* __right_value428 = (void*)0;
struct sType* __dec_obj239;
void* __right_value429 = (void*)0;
char* __dec_obj240;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* __dec_obj241;
_Bool __result241__;
memset(&i_308, 0, sizeof(int));
    fun_name_207=(char*)come_increment_ref_count(self->fun_name);
    params_208=self->params;
    method_block_209=self->method_block;
    method_block_sline_210=self->method_block_sline;
    throw_or_rescue_211=self->throw_or_rescue;
    var__212=get_variable_from_table(info->lv_table,fun_name_207);
    if(var__212==((void*)0)) {
        var__212=get_variable_from_table(info->gv_table,fun_name_207);
    }
    if(var__212) {
        lambda_type_213=var__212->mType;
        if(string_operator_not_equals(lambda_type_213->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_207);
            __result159__ = (_Bool)0;
            fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result159__;
        }
        result_type_214=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_213->mResultType->v1));
        result_type_214->mStatic=(_Bool)0;
        come_params_215=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 394, "list$1CVALUEph"))));
        if(list$1sTypeph_length(lambda_type_213->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_208)&&!lambda_type_213->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_207,list$1sTypeph_length(lambda_type_213->mParamTypes),list$1tuple2$2charphsNodephph_length(params_208));
            __result161__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_215,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result161__;
        }
        i_218=0;
        for(        o2_saved_219=(params_208),it_222=list$1tuple2$2charphsNodephph_begin((o2_saved_219));        !list$1tuple2$2charphsNodephph_end((o2_saved_219));        it_222=list$1tuple2$2charphsNodephph_next((o2_saved_219))        ){
            multiple_assign_var1=it_222;
            label_225=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_226=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(!node_compile(node_226,info)) {
                __result168__ = (_Bool)0;
                label_225 = come_decrement_ref_count2(label_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(result_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_215,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result168__;
            }
            come_value_227=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(lambda_type_213->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_213->mParamTypes,i_218), "05call.c", 410, 2))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(__right_value267=xsprintf("\%s calling param #\%s",((char*)(__right_value265=string_to_string(fun_name_207))),((char*)(__right_value266=int_to_string(i_218)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_213->mParamTypes,i_218), "05call.c", 413, 3)),come_value_227->type,come_value_227,(_Bool)0,(_Bool)1,info);
                __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_213->mParamTypes,i_218), "05call.c", 414, 4))->mHeap&&come_value_227->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_213->mParamTypes,i_218), "05call.c", 415, 5)),come_value_227->type,come_value_227,info,(_Bool)1);
                }
            }
            list$1CVALUEph_push_back(come_params_215,(struct CVALUE*)come_increment_ref_count(come_value_227));
            dec_stack_ptr(1,info);
            i_218++;
            label_225 = come_decrement_ref_count2(label_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_231=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 426, "buffer"))));
        buffer_append_str(buf_231,var__212->mCValueName);
        buffer_append_str(buf_231,"(");
        j_232=0;
        for(        o2_saved_233=(struct list$1CVALUEph*)come_increment_ref_count((come_params_215)),it_236=list$1CVALUEph_begin((o2_saved_233));        !list$1CVALUEph_end((o2_saved_233));        it_236=list$1CVALUEph_next((o2_saved_233))        ){
            buffer_append_str(buf_231,it_236->c_value);
            if(j_232!=list$1CVALUEph_length(come_params_215)-1) {
                buffer_append_str(buf_231,",");
            }
            j_232++;
        }
        /*i*/come_call_finalizer3(o2_saved_233,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_231,")");
        come_value_239=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 443, "CVALUE"))));
        __dec_obj159=come_value_239->c_value;
        come_value_239->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_231));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj160=come_value_239->type;
        come_value_239->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_214));
        /* a*/come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_239->type->mStatic=(_Bool)0;
        come_value_239->var=((void*)0);
        if(lambda_type_213->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_239,(struct sType*)come_increment_ref_count(lambda_type_213->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s;\n",come_value_239->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
        /*i*/come_call_finalizer3(result_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_215,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_240=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_207,((void*)0));
        method_generics_241=(_Bool)0;
        if(generics_fun_240) {
            method_generics_241=list$1charph_length(generics_fun_240->mMethodGenericsTypeNames)>0;
        }
        if(list$1sTypeph_length(self->method_generics_types)>0||method_generics_241) {
            if(list$1sTypeph_length(self->method_generics_types)==0) {
                method_generics_types_242=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 465, "list$1sTypeph"))));
                generics_fun_name_243=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_207),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_242),info));
                fun_244=map$2charphsFunph_at(info->funcs,generics_fun_name_243,((void*)0));
                if(method_block_209) {
                    come_params_247=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 471, "list$1CVALUEph"))));
                    fun_248=map$2charphsFunph_at(info->funcs,generics_fun_name_243,((void*)0));
                    no_output_come_code_249=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(!compile_method_block(method_block_209,(struct list$1CVALUEph*)come_increment_ref_count(come_params_247),fun_248,fun_name_207,method_block_sline_210,info,(_Bool)1)) {
                        __result181__ = (_Bool)0;
                        /*i*/come_call_finalizer3(come_params_247,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_243 = come_decrement_ref_count2(generics_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result181__;
                    }
                    info->no_output_come_code=no_output_come_code_249;
                    method_block_node_250=list$1CVALUEphp_operator_load_element(come_params_247,-1);
                    method_block_lambda_type_254=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_250->type));
                    method_block_result_type_255=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_256=list$1sTypephp_operator_load_element(generics_fun_240->mParamTypes,-1);
                    generics_fun_method_block_result_type_257=generics_fun_method_block_lambda_type_256->mResultType->v1;
                    if(generics_fun_method_block_result_type_257->mClass->mMethodGenerics) {
                        method_generics_num_258=generics_fun_method_block_result_type_257->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_242,method_generics_num_258,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_255)));
                    }
                    n_267=0;
                    for(                    o2_saved_268=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_256->mParamTypes)),it_271=list$1sTypeph_begin((o2_saved_268));                    !list$1sTypeph_end((o2_saved_268));                    it_271=list$1sTypeph_next((o2_saved_268))                    ){
                        if(it_271->mClass->mMethodGenerics) {
                            method_generics_num_274=it_271->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(method_generics_types_242,method_generics_num_274,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_254->mParamTypes,n_267), "05call.c", 497, 6)))));
                        }
                        n_267++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_268,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_247,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_255,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_params_275=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 503, "list$1CVALUEph"))));
                i_276=0;
                result_type_277=((void*)0);
                for(                o2_saved_278=(params_208),it_279=list$1tuple2$2charphsNodephph_begin((o2_saved_278));                !list$1tuple2$2charphsNodephph_end((o2_saved_278));                it_279=list$1tuple2$2charphsNodephph_next((o2_saved_278))                ){
                    multiple_assign_var2=it_279;
                    label_280=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                    node_281=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                    if(!node_compile(node_281,info)) {
                        __result194__ = (_Bool)0;
                        label_280 = come_decrement_ref_count2(label_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_generics_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_243 = come_decrement_ref_count2(generics_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_275,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result194__;
                    }
                    come_value_282=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    list$1CVALUEph_add(come_params_275,(struct CVALUE*)come_increment_ref_count(come_value_282));
                    label_280 = come_decrement_ref_count2(label_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(generics_fun_240->mResultType->mClass->mMethodGenerics) {
                    method_generics_num_286=generics_fun_240->mResultType->mClass->mMethodGenericsNum;
                    if(info->function_result_type) {
                        list$1sTypephp_operator_store_element(method_generics_types_242,method_generics_num_286,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    }
                }
                n_287=0;
                for(                o2_saved_288=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_240->mParamTypes)),it_289=list$1sTypeph_begin((o2_saved_288));                !list$1sTypeph_end((o2_saved_288));                it_289=list$1sTypeph_next((o2_saved_288))                ){
                    if(it_289->mClass->mMethodGenerics) {
                        method_generics_num_290=it_289->mClass->mMethodGenericsNum;
                        if(n_287<list$1CVALUEph_length(come_params_275)) {
                            list$1sTypephp_operator_store_element(method_generics_types_242,method_generics_num_290,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_275,n_287)->type)));
                        }
                    }
                    n_287++;
                }
                /*i*/come_call_finalizer3(o2_saved_288,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                map$2charphsFunph_remove(info->funcs,generics_fun_name_243);
                __dec_obj183=fun_name_207;
                fun_name_207=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_207),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_242),info));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_243 = come_decrement_ref_count2(generics_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_275,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj184=fun_name_207;
                fun_name_207=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_207),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        if(string_operator_equals(fun_name_207,"__builtin_memmove")||string_operator_equals(fun_name_207,"__builtin_memset")||string_operator_equals(fun_name_207,"__builtin_ffs")||string_operator_equals(fun_name_207,"__builtin_ffsl")||string_operator_equals(fun_name_207,"__builtin_ffsll")||string_operator_equals(fun_name_207,"__builtin_bswap16")||string_operator_equals(fun_name_207,"__builtin_bswap32")||string_operator_equals(fun_name_207,"__builtin_bswap64")||string_operator_equals(fun_name_207,"__builtin_constant_p")) {
            come_params_293=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 549, "list$1CVALUEph"))));
            for(            o2_saved_294=(params_208),it_295=list$1tuple2$2charphsNodephph_begin((o2_saved_294));            !list$1tuple2$2charphsNodephph_end((o2_saved_294));            it_295=list$1tuple2$2charphsNodephph_next((o2_saved_294))            ){
                multiple_assign_var3=it_295;
                label_296=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_297=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                if(!node_compile(node_297,info)) {
                    __result197__ = (_Bool)0;
                    label_296 = come_decrement_ref_count2(label_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_293,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result197__;
                }
                come_value_298=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_293,(struct CVALUE*)come_increment_ref_count(come_value_298));
                label_296 = come_decrement_ref_count2(label_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_298,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_299=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 563, "buffer"))));
            buffer_append_str(buf_299,fun_name_207);
            buffer_append_str(buf_299,"(");
            j_300=0;
            for(            o2_saved_301=(struct list$1CVALUEph*)come_increment_ref_count((come_params_293)),it_302=list$1CVALUEph_begin((o2_saved_301));            !list$1CVALUEph_end((o2_saved_301));            it_302=list$1CVALUEph_next((o2_saved_301))            ){
                buffer_append_str(buf_299,it_302->c_value);
                if(j_300!=list$1CVALUEph_length(come_params_293)-1) {
                    buffer_append_str(buf_299,",");
                }
                j_300++;
            }
            /*i*/come_call_finalizer3(o2_saved_301,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_299,")");
            come_value_303=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 580, "CVALUE"))));
            __dec_obj185=come_value_303->c_value;
            come_value_303->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_299));
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(string_operator_equals(fun_name_207,"__builtin_memmove")||string_operator_equals(fun_name_207,"__builtin_memset")) {
                __dec_obj186=come_value_303->type;
                come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 584, "sType")),"void",(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(fun_name_207,"__builtin_ffs")) {
                    __dec_obj187=come_value_303->type;
                    come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 587, "sType")),"int",(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(string_operator_equals(fun_name_207,"__builtin_ffsl")) {
                        __dec_obj188=come_value_303->type;
                        come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 590, "sType")),"int",(_Bool)0,info));
                        /* a*/come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(string_operator_equals(fun_name_207,"__builtin_ffsll")) {
                            __dec_obj189=come_value_303->type;
                            come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 593, "sType")),"int",(_Bool)0,info));
                            /* a*/come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(string_operator_equals(fun_name_207,"__builtin_bswap16")) {
                                __dec_obj190=come_value_303->type;
                                come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 596, "sType")),"short",(_Bool)0,info));
                                /* a*/come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(string_operator_equals(fun_name_207,"__builtin_bswap32")) {
                                    __dec_obj191=come_value_303->type;
                                    come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 599, "sType")),"int",(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    if(string_operator_equals(fun_name_207,"__builtin_bswap64")) {
                                        __dec_obj192=come_value_303->type;
                                        come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 602, "sType")),"long",(_Bool)0,info));
                                        /* a*/come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        if(string_operator_equals(fun_name_207,"__builtin_constant_p")) {
                                            __dec_obj193=come_value_303->type;
                                            come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 605, "sType")),"int",(_Bool)0,info));
                                            /* a*/come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            come_value_303->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_303->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_303));
            __result198__ = (_Bool)1;
            /*i*/come_call_finalizer3(come_params_293,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result198__;
            /*i*/come_call_finalizer3(come_params_293,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(string_operator_equals(fun_name_207,"string")) {
                __dec_obj194=fun_name_207;
                fun_name_207=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
                __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(string_operator_equals(fun_name_207,"wstring")) {
                    __dec_obj195=fun_name_207;
                    fun_name_207=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
                    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(string_operator_equals(fun_name_207,"inherit")) {
                        p_304=info->come_fun->mName;
                        version_305=0;
                        while(*p_304) {
                            if(*p_304==95&&*(p_304+1)==118&&xisdigit(*(p_304+2))) {
                                p2_306=p_304+2;
                                version_305=0;
                                while(xisdigit(*p2_306)) {
                                    version_305=version_305*10+(*p2_306-48);
                                    p2_306++;
                                }
                                break;
                            }
                            else {
                                p_304++;
                            }
                        }
                        char real_fun_name_307[2048];
                        memset(&real_fun_name_307, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_307,info->come_fun->mName,p_304-info->come_fun->mName);
                        real_fun_name_307[p_304-info->come_fun->mName]=0;
                        for(                        i_308=version_305-1;                        i_308>=1;                        i_308--                        ){
                            new_fun_name_309=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_307,i_308));
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_309)) {
                                __dec_obj196=fun_name_207;
                                fun_name_207=(char*)come_increment_ref_count(__builtin_string(new_fun_name_309));
                                __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                                new_fun_name_309 = come_decrement_ref_count2(new_fun_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_309 = come_decrement_ref_count2(new_fun_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(i_308==0) {
                            new_fun_name_313=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_307));
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_313)) {
                                __dec_obj197=fun_name_207;
                                fun_name_207=(char*)come_increment_ref_count(__builtin_string(new_fun_name_313));
                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            if(string_operator_equals(fun_name_207,info->come_fun->mName)) {
                                err_msg(info,"invalid inherit");
                                __result203__ = (_Bool)0;
                                new_fun_name_313 = come_decrement_ref_count2(new_fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result203__;
                            }
                            new_fun_name_313 = come_decrement_ref_count2(new_fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_314=128;                        i_314>=1;                        i_314--                        ){
                            new_fun_name_315=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_207,i_314));
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_315)) {
                                __dec_obj198=fun_name_207;
                                fun_name_207=(char*)come_increment_ref_count(__builtin_string(new_fun_name_315));
                                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                                new_fun_name_315 = come_decrement_ref_count2(new_fun_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_315 = come_decrement_ref_count2(new_fun_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_316=map$2charphsFunph_at(info->funcs,fun_name_207,((void*)0));
        if(fun_316) {
            result_type_317=(struct sType*)come_increment_ref_count(sType_clone(fun_316->mResultType));
            result_type_317->mStatic=(_Bool)0;
            __dec_obj199=result_type_317;
            result_type_317=(struct sType*)come_increment_ref_count(solve_generics(result_type_317,info->generics_type,info));
            /* a*/come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
            static _Bool recursive_318=(_Bool)0;
            if(result_type_317->mException&&!throw_or_rescue_211&&!recursive_318) {
                come_fun_result_type_319=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
                come_fun_result_type2_320=(struct sType*)come_increment_ref_count(solve_generics(come_fun_result_type_319,info->generics_type,info));
                if(come_fun_result_type2_320->mException) {
                    recursive_318=(_Bool)1;
                    dec_stack_ptr(1,info);
                    transpiler_clear_last_code(info);
                    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 698, "struct sNode");
                    _inf_obj_value1=come_increment_ref_count((((struct sFunCallNode*)(__right_value338=sFunCallNode_clone(self)))));
                    _inf_value1->_protocol_obj=_inf_obj_value1;
                    _inf_value1->finalize=(void*)sFunCallNode_finalize;
                    _inf_value1->clone=(void*)sFunCallNode_clone;
                    _inf_value1->compile=(void*)sFunCallNode_compile;
                    _inf_value1->sline=(void*)sNodeBase_sline;
                    _inf_value1->sname=(void*)sNodeBase_sname;
                    _inf_value1->terminated=(void*)sFunCallNode_terminated;
                    _inf_value1->kind=(void*)sFunCallNode_kind;
                    expression_node_321=(struct sNode*)come_increment_ref_count(_inf_value1);
                    /*g*/come_call_finalizer3(__right_value338,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
                    node_324=(struct sNode*)come_increment_ref_count(create_throw((struct sNode*)come_increment_ref_count(expression_node_321),info));
                    if(!node_compile(node_324,info)) {
                        __result208__ = (_Bool)0;
                        if(expression_node_321) { expression_node_321 = come_decrement_ref_count2(expression_node_321, ((struct sNode*)expression_node_321)->finalize, ((struct sNode*)expression_node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_fun_result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_fun_result_type2_320,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result208__;
                    }
                    recursive_318=(_Bool)0;
                    if(expression_node_321) { expression_node_321 = come_decrement_ref_count2(expression_node_321, ((struct sNode*)expression_node_321)->finalize, ((struct sNode*)expression_node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    recursive_318=(_Bool)1;
                    dec_stack_ptr(1,info);
                    transpiler_clear_last_code(info);
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 712, "struct sNode");
                    _inf_obj_value2=come_increment_ref_count((((struct sFunCallNode*)(__right_value347=sFunCallNode_clone(self)))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sFunCallNode_finalize;
                    _inf_value2->clone=(void*)sFunCallNode_clone;
                    _inf_value2->compile=(void*)sFunCallNode_compile;
                    _inf_value2->sline=(void*)sNodeBase_sline;
                    _inf_value2->sname=(void*)sNodeBase_sname;
                    _inf_value2->terminated=(void*)sFunCallNode_terminated;
                    _inf_value2->kind=(void*)sFunCallNode_kind;
                    expression_node_325=(struct sNode*)come_increment_ref_count(_inf_value2);
                    /*g*/come_call_finalizer3(__right_value347,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
                    node_327=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(expression_node_325),info));
                    if(!node_compile(node_327,info)) {
                        __result211__ = (_Bool)0;
                        if(expression_node_325) { expression_node_325 = come_decrement_ref_count2(expression_node_325, ((struct sNode*)expression_node_325)->finalize, ((struct sNode*)expression_node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_fun_result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_fun_result_type2_320,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result211__;
                    }
                    recursive_318=(_Bool)0;
                    if(expression_node_325) { expression_node_325 = come_decrement_ref_count2(expression_node_325, ((struct sNode*)expression_node_325)->finalize, ((struct sNode*)expression_node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                __result212__ = (_Bool)1;
                /*i*/come_call_finalizer3(come_fun_result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_fun_result_type2_320,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result212__;
                /*i*/come_call_finalizer3(come_fun_result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_fun_result_type2_320,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(result_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(string_operator_equals(fun_name_207,"__builtin_va_arg")) {
            come_params_328=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 727, "list$1CVALUEph"))));
            i_329=0;
            result_type_330=((void*)0);
            for(            o2_saved_331=(params_208),it_332=list$1tuple2$2charphsNodephph_begin((o2_saved_331));            !list$1tuple2$2charphsNodephph_end((o2_saved_331));            it_332=list$1tuple2$2charphsNodephph_next((o2_saved_331))            ){
                multiple_assign_var4=it_332;
                label_333=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                node_334=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                if(!node_compile(node_334,info)) {
                    __result213__ = (_Bool)0;
                    label_333 = come_decrement_ref_count2(label_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_328,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result213__;
                }
                come_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_328,(struct CVALUE*)come_increment_ref_count(come_value_335));
                __dec_obj225=result_type_330;
                result_type_330=(struct sType*)come_increment_ref_count(come_value_335->type);
                /* a*/come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
                label_333 = come_decrement_ref_count2(label_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_336=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 746, "buffer"))));
            buffer_append_str(buf_336,fun_name_207);
            buffer_append_str(buf_336,"(");
            j_337=0;
            for(            o2_saved_338=(struct list$1CVALUEph*)come_increment_ref_count((come_params_328)),it_339=list$1CVALUEph_begin((o2_saved_338));            !list$1CVALUEph_end((o2_saved_338));            it_339=list$1CVALUEph_next((o2_saved_338))            ){
                buffer_append_str(buf_336,it_339->c_value);
                if(j_337!=list$1CVALUEph_length(come_params_328)-1) {
                    buffer_append_str(buf_336,",");
                }
                j_337++;
            }
            /*i*/come_call_finalizer3(o2_saved_338,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_336,")");
            come_value_340=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 763, "CVALUE"))));
            __dec_obj226=come_value_340->c_value;
            come_value_340->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_336));
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj227=come_value_340->type;
            come_value_340->type=(struct sType*)come_increment_ref_count(result_type_330);
            /* a*/come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_340->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_340->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_340));
            /*i*/come_call_finalizer3(come_params_328,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(fun_316==((void*)0)) {
                err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_207);
                __result214__ = (_Bool)1;
                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result214__;
            }
            else {
                result_type_341=(struct sType*)come_increment_ref_count(sType_clone(fun_316->mResultType));
                result_type_341->mStatic=(_Bool)0;
                param_types_342=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 780, "list$1sTypeph"))));
                for(                o2_saved_343=(struct list$1sTypeph*)come_increment_ref_count((fun_316->mParamTypes)),it_344=list$1sTypeph_begin((o2_saved_343));                !list$1sTypeph_end((o2_saved_343));                it_344=list$1sTypeph_next((o2_saved_343))                ){
                    it2_345=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value367=sType_clone(it_344))),info->generics_type,info));
                    /*g*/come_call_finalizer3(__right_value367,sType_finalize, 0, 1, 0, 0, (void*)0);
                    list$1sTypeph_push_back(param_types_342,(struct sType*)come_increment_ref_count(sType_clone(it2_345)));
                    /*i*/come_call_finalizer3(it2_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_343,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj228=result_type_341;
                result_type_341=(struct sType*)come_increment_ref_count(solve_generics(result_type_341,info->generics_type,info));
                /* a*/come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_params_346=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 789, "list$1CVALUEph"))));
                for(                i_347=0;                i_347<list$1sTypeph_length(fun_316->mParamTypes)-(method_block_209?2:0);                i_347++                ){
                    list$1CVALUEph_add(come_params_346,((void*)0));
                }
                for(                o2_saved_348=(params_208),it_349=list$1tuple2$2charphsNodephph_begin((o2_saved_348));                !list$1tuple2$2charphsNodephph_end((o2_saved_348));                it_349=list$1tuple2$2charphsNodephph_next((o2_saved_348))                ){
                    multiple_assign_var5=it_349;
                    label_350=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    node_351=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(fun_316->mVarArgs||string_operator_equals(fun_name_207,"__builtin_va_start")) {
                    }
                    else {
                        if(label_350) {
                            if(!node_compile(node_351,info)) {
                                __result215__ = (_Bool)0;
                                label_350 = come_decrement_ref_count2(label_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result215__;
                            }
                            come_value_352=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            n_353=0;
                            for(                            o2_saved_354=(struct list$1charph*)come_increment_ref_count((fun_316->mParamNames)),it_357=list$1charph_begin((o2_saved_354));                            !list$1charph_end((o2_saved_354));                            it_357=list$1charph_next((o2_saved_354))                            ){
                                if(string_operator_equals(label_350,it_357)) {
                                    break;
                                }
                                n_353++;
                            }
                            /*i*/come_call_finalizer3(o2_saved_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(list$1sTypephp_operator_load_element(param_types_342,n_353)) {
                                check_assign_type(((char*)(__right_value376=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value374=string_to_string(fun_name_207))),((char*)(__right_value375=int_to_string(n_353)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,n_353), "05call.c", 818, 7)),come_value_352->type,come_value_352,(_Bool)0,(_Bool)1,info);
                                __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(list$1sTypephp_operator_load_element(param_types_342,n_353)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,n_353), "05call.c", 820, 8))->mHeap&&come_value_352->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,n_353), "05call.c", 821, 9)),come_value_352->type,come_value_352,info,(_Bool)1);
                            }
                            list$1CVALUEph_replace(come_params_346,n_353,(struct CVALUE*)come_increment_ref_count(come_value_352));
                            /*i*/come_call_finalizer3(come_value_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_350 = come_decrement_ref_count2(label_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                i_365=0;
                for(                o2_saved_366=(params_208),it_367=list$1tuple2$2charphsNodephph_begin((o2_saved_366));                !list$1tuple2$2charphsNodephph_end((o2_saved_366));                it_367=list$1tuple2$2charphsNodephph_next((o2_saved_366))                ){
                    multiple_assign_var6=it_367;
                    label_368=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    node_369=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                    if(fun_316->mVarArgs||string_operator_equals(fun_name_207,"__builtin_va_start")) {
                        if(!node_compile(node_369,info)) {
                            __result224__ = (_Bool)0;
                            label_368 = come_decrement_ref_count2(label_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_369) { node_369 = come_decrement_ref_count2(node_369, ((struct sNode*)node_369)->finalize, ((struct sNode*)node_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result224__;
                        }
                        come_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        while((_Bool)1) {
                            if(list$1CVALUEphp_operator_load_element(come_params_346,i_365)==((void*)0)) {
                                break;
                            }
                            else {
                                i_365++;
                            }
                        }
                        list$1CVALUEph_replace(come_params_346,i_365,(struct CVALUE*)come_increment_ref_count(come_value_370));
                        i_365++;
                        /*i*/come_call_finalizer3(come_value_370,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(label_368) {
                        }
                        else {
                            if(!node_compile(node_369,info)) {
                                __result225__ = (_Bool)0;
                                label_368 = come_decrement_ref_count2(label_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_369) { node_369 = come_decrement_ref_count2(node_369, ((struct sNode*)node_369)->finalize, ((struct sNode*)node_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result225__;
                            }
                            come_value_371=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            while((_Bool)1) {
                                if(list$1CVALUEphp_operator_load_element(come_params_346,i_365)==((void*)0)) {
                                    break;
                                }
                                else {
                                    i_365++;
                                }
                            }
                            if(list$1sTypephp_operator_load_element(param_types_342,i_365)) {
                                check_assign_type(((char*)(__right_value381=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value379=string_to_string(fun_name_207))),((char*)(__right_value380=int_to_string(i_365)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 872, 10)),come_value_371->type,come_value_371,(_Bool)0,(_Bool)1,info);
                                __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(list$1sTypephp_operator_load_element(param_types_342,i_365)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 874, 11))->mHeap&&come_value_371->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 875, 12)),come_value_371->type,come_value_371,info,(_Bool)1);
                            }
                            list$1CVALUEph_replace(come_params_346,i_365,(struct CVALUE*)come_increment_ref_count(come_value_371));
                            i_365++;
                            /*i*/come_call_finalizer3(come_value_371,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_368 = come_decrement_ref_count2(label_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_369) { node_369 = come_decrement_ref_count2(node_369, ((struct sNode*)node_369)->finalize, ((struct sNode*)node_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                while((_Bool)1) {
                    if(list$1CVALUEphp_operator_load_element(come_params_346,i_365)==((void*)0)) {
                        break;
                    }
                    else {
                        i_365++;
                    }
                }
                if(list$1tuple2$2charphsNodephph_length(params_208)<list$1sTypeph_length(fun_316->mParamTypes)) {
                    for(                    ;                    i_365<list$1sTypeph_length(fun_316->mParamTypes)-(method_block_209?2:0);                    i_365++                    ){
                        default_param_372=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_316->mParamDefaultParametors,i_365)));
                        param_name_376=((char*)come_null_check(list$1charphp_operator_load_element(fun_316->mParamNames,i_365), "05call.c", 896, 13));
                        if(default_param_372&&string_operator_not_equals(default_param_372,"")&&list$1CVALUEphp_operator_load_element(come_params_346,i_365)==((void*)0)) {
                            source_377=(struct buffer*)come_increment_ref_count(info->source);
                            p_378=info->p;
                            head_379=info->head;
                            sline_380=info->sline;
                            __dec_obj230=info->source;
                            info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_372));
                            /* a*/come_call_finalizer3(__dec_obj230,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=info->source->buf;
                            info->head=info->source->buf;
                            node_381=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            if(!node_compile(node_381,info)) {
                                __result228__ = (_Bool)0;
                                /*i*/come_call_finalizer3(source_377,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                default_param_372 = come_decrement_ref_count2(default_param_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result228__;
                            }
                            __dec_obj231=info->source;
                            info->source=(struct buffer*)come_increment_ref_count(source_377);
                            /* a*/come_call_finalizer3(__dec_obj231,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=p_378;
                            info->head=head_379;
                            info->sline=sline_380;
                            come_value_382=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 920, 14))) {
                                check_assign_type(((char*)(__right_value388=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value386=string_to_string(fun_name_207))),((char*)(__right_value387=int_to_string(i_365)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 921, 15)),come_value_382->type,come_value_382,(_Bool)0,(_Bool)1,info);
                                __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 923, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 923, 17))->mHeap&&come_value_382->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_342,i_365), "05call.c", 924, 18)),come_value_382->type,come_value_382,info,(_Bool)1);
                            }
                            list$1CVALUEph_replace(come_params_346,i_365,(struct CVALUE*)come_increment_ref_count(come_value_382));
                            dec_stack_ptr(1,info);
                            /*i*/come_call_finalizer3(source_377,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(come_value_382,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(list$1CVALUEphp_operator_load_element(come_params_346,i_365)==((void*)0)) {
                                err_msg(info,"require parametor(%s)(1) %d",fun_316->mName,i_365);
                                __result229__ = (_Bool)0;
                                default_param_372 = come_decrement_ref_count2(default_param_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result229__;
                            }
                        }
                        default_param_372 = come_decrement_ref_count2(default_param_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(list$1sTypeph_length(fun_316->mParamTypes)-(method_block_209?2:0)!=list$1CVALUEph_length(come_params_346)&&!fun_316->mVarArgs&&string_operator_not_equals(fun_name_207,"__builtin_va_start")&&string_operator_not_equals(fun_name_207,"__builtin_va_end")) {
                    err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_207,list$1sTypeph_length(fun_316->mParamTypes),list$1tuple2$2charphsNodephph_length(params_208));
                    __result230__ = (_Bool)0;
                    /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result230__;
                }
                if(method_block_209) {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 945, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode2*)(__right_value390=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 945, "sCurrentNode2")),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sCurrentNode2_finalize;
                    _inf_value3->clone=(void*)sCurrentNode2_clone;
                    _inf_value3->compile=(void*)sCurrentNode2_compile;
                    _inf_value3->sline=(void*)sCurrentNode2_sline;
                    _inf_value3->sname=(void*)sCurrentNode2_sname;
                    _inf_value3->terminated=(void*)sNodeBase_terminated;
                    _inf_value3->kind=(void*)sCurrentNode2_kind;
                    current_stack_frame_node_383=(struct sNode*)come_increment_ref_count(_inf_value3);
                    /*g*/come_call_finalizer3(__right_value390,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
                    if(!node_compile(current_stack_frame_node_383,info)) {
                        __result233__ = (_Bool)0;
                        if(current_stack_frame_node_383) { current_stack_frame_node_383 = come_decrement_ref_count2(current_stack_frame_node_383, ((struct sNode*)current_stack_frame_node_383)->finalize, ((struct sNode*)current_stack_frame_node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result233__;
                    }
                    come_value_385=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    list$1CVALUEph_push_back(come_params_346,(struct CVALUE*)come_increment_ref_count(come_value_385));
                    dec_stack_ptr(1,info);
                    method_block2_386=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 955, "buffer"))));
                    method_block_type_387=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_316->mParamTypes,-1), "05call.c", 956, 19))));
                    class_name_388=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
                    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_387->mParamTypes,0), "05call.c", 960, 20))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_388);
                    current_stack_frame_struct_392=info->current_stack_frame_struct;
                    info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_388);
                    info->num_method_block++;
                    if(string_operator_not_equals(method_block_type_387->mClass->mName,"lambda")) {
                        err_msg(info,"This function does not have method block(%s)",fun_name_207);
                        __result238__ = (_Bool)0;
                        if(current_stack_frame_node_383) { current_stack_frame_node_383 = come_decrement_ref_count2(current_stack_frame_node_383, ((struct sNode*)current_stack_frame_node_383)->finalize, ((struct sNode*)current_stack_frame_node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_block2_386,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_block_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                        class_name_388 = come_decrement_ref_count2(class_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result238__;
                    }
                    result_type_393=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_387->mResultType->v1));
                    result_type_393->mStatic=(_Bool)0;
                    param_types_394=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_387->mParamTypes));
                    param_names_395=method_block_type_387->mParamNames;
                    all_alhabet_sname_396=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 976, "buffer"))));
                    {
                        p_397=info->sname;
                        while(*p_397) {
                            if(xisalnum(*p_397)) {
                                buffer_append_char(all_alhabet_sname_396,*p_397++);
                            }
                            else {
                                p_397++;
                            }
                        }
                    }
                    buffer_append_str(method_block2_386,((char*)(__right_value405=xsprintf("%s fun_block%d_%s(",((char*)(__right_value403=make_type_name_string(result_type_393,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value404=buffer_to_string(all_alhabet_sname_396)))))));
                    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    i_365=0;
                    for(                    o2_saved_398=(struct list$1sTypeph*)come_increment_ref_count((param_types_394)),it_399=list$1sTypeph_begin((o2_saved_398));                    !list$1sTypeph_end((o2_saved_398));                    it_399=list$1sTypeph_next((o2_saved_398))                    ){
                        param_type_400=it_399;
                        if(i_365==0) {
                            param_name_401=(char*)come_increment_ref_count(xsprintf("parent"));
                            buffer_append_str(method_block2_386,((char*)(__right_value408=xsprintf("%s",((char*)(__right_value407=make_define_var(param_type_400,param_name_401,(_Bool)0,info)))))));
                            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            param_name_401 = come_decrement_ref_count2(param_name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(i_365==1) {
                                param_name_402=(char*)come_increment_ref_count(xsprintf("it"));
                                buffer_append_str(method_block2_386,((char*)(__right_value411=xsprintf("%s",((char*)(__right_value410=make_define_var_no_solved(param_type_400,param_name_402,(_Bool)0,(_Bool)1,info)))))));
                                __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                param_name_402 = come_decrement_ref_count2(param_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                param_name_403=(char*)come_increment_ref_count(xsprintf("it%d",i_365));
                                buffer_append_str(method_block2_386,((char*)(__right_value414=xsprintf("%s",((char*)(__right_value413=make_define_var_no_solved(param_type_400,param_name_403,(_Bool)0,(_Bool)1,info)))))));
                                __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                param_name_403 = come_decrement_ref_count2(param_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        if(i_365!=list$1sTypeph_length(param_types_394)-1) {
                            buffer_append_str(method_block2_386,",");
                        }
                        i_365++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_398,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    buffer_append_str(method_block2_386,")\n");
                    buffer_append_str(method_block2_386,((char*)(__right_value415=buffer_to_string(method_block_209))));
                    __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    source3_404=(struct buffer*)come_increment_ref_count(info->source);
                    p_405=info->p;
                    head_406=info->head;
                    sline_407=info->sline;
                    __dec_obj234=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(method_block2_386);
                    /* a*/come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    info->sline=method_block_sline_210;
                    node_408=(struct sNode*)come_increment_ref_count(parse_function(info));
                    if(!node_compile(node_408,info)) {
                        __result239__ = (_Bool)0;
                        if(current_stack_frame_node_383) { current_stack_frame_node_383 = come_decrement_ref_count2(current_stack_frame_node_383, ((struct sNode*)current_stack_frame_node_383)->finalize, ((struct sNode*)current_stack_frame_node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_block2_386,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_block_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                        class_name_388 = come_decrement_ref_count2(class_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_394,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(all_alhabet_sname_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(source3_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_408) { node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result239__;
                    }
                    method_block_name_409=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value417=buffer_to_string(all_alhabet_sname_396)))));
                    __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_value2_410=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1041, "CVALUE"))));
                    fun2_411=map$2charphsFunph_at(info->funcs,method_block_name_409,((void*)0));
                    if(fun2_411==((void*)0)) {
                        err_msg(info,"method block function not found(%s)",method_block_name_409);
                        __result240__ = (_Bool)1;
                        if(current_stack_frame_node_383) { current_stack_frame_node_383 = come_decrement_ref_count2(current_stack_frame_node_383, ((struct sNode*)current_stack_frame_node_383)->finalize, ((struct sNode*)current_stack_frame_node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_block2_386,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_block_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                        class_name_388 = come_decrement_ref_count2(class_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_394,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(all_alhabet_sname_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(source3_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_408) { node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        method_block_name_409 = come_decrement_ref_count2(method_block_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result240__;
                    }
                    method_block_type2_412=fun2_411->mLambdaType;
                    __dec_obj235=come_value2_410->c_value;
                    come_value2_410->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_409));
                    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj236=come_value2_410->type;
                    come_value2_410->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_412));
                    /* a*/come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_value2_410->var=((void*)0);
                    list$1CVALUEph_push_back(come_params_346,(struct CVALUE*)come_increment_ref_count(come_value2_410));
                    __dec_obj237=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source3_404);
                    /* a*/come_call_finalizer3(__dec_obj237,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_405;
                    info->head=head_406;
                    info->sline=sline_407;
                    info->current_stack_frame_struct=current_stack_frame_struct_392;
                    if(current_stack_frame_node_383) { current_stack_frame_node_383 = come_decrement_ref_count2(current_stack_frame_node_383, ((struct sNode*)current_stack_frame_node_383)->finalize, ((struct sNode*)current_stack_frame_node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_386,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_388 = come_decrement_ref_count2(class_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_394,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_408) { node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    method_block_name_409 = come_decrement_ref_count2(method_block_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value2_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                buf_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1066, "buffer"))));
                buffer_append_str(buf_413,fun_name_207);
                buffer_append_str(buf_413,"(");
                j_414=0;
                for(                o2_saved_415=(struct list$1CVALUEph*)come_increment_ref_count((come_params_346)),it_416=list$1CVALUEph_begin((o2_saved_415));                !list$1CVALUEph_end((o2_saved_415));                it_416=list$1CVALUEph_next((o2_saved_415))                ){
                    buffer_append_str(buf_413,it_416->c_value);
                    if(j_414!=list$1CVALUEph_length(come_params_346)-1) {
                        buffer_append_str(buf_413,",");
                    }
                    j_414++;
                }
                /*i*/come_call_finalizer3(o2_saved_415,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(buf_413,")");
                come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1083, "CVALUE"))));
                __dec_obj238=come_value_417->c_value;
                come_value_417->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_413));
                __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj239=come_value_417->type;
                come_value_417->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_341));
                /* a*/come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_417->type->mStatic=(_Bool)0;
                come_value_417->var=((void*)0);
                if(fun_316->mResultType->mHeap) {
                    append_object_to_right_values2(come_value_417,(struct sType*)come_increment_ref_count(result_type_341),info,(_Bool)0);
                }
                if(string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                    if(string_operator_not_equals(fun_name_207,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_207,"null_check")&&string_operator_not_equals(fun_name_207,"come_push_stackframe")&&string_operator_not_equals(fun_name_207,"come_pop_stackframe")) {
                        __dec_obj240=come_value_417->c_value;
                        come_value_417->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_417->c_value,come_value_417->type,info));
                        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(!self->guard_break&&result_type_341->mGuardValue&&result_type_341->mPointerNum>0) {
                    __dec_obj241=come_value_417->c_value;
                    come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value430=make_type_name_string(result_type_341,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_417->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                add_come_last_code(info,"%s;\n",come_value_417->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
                /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result241__ = (_Bool)1;
    fun_name_207 = come_decrement_ref_count2(fun_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result241__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result151__;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_199;
struct list_item$1tuple2$2charphsNodephph* it_200;
void* __right_value258 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result156__;
    if(self==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    result_199=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 137, "list$1tuple2$2charphsNodephph"))));
    it_200=self->head;
    while(it_200!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_199,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_200->item)));
        it_200=it_200->next;
    }
    __result156__ = gComeFunResultObject = __result_obj__ = result_199;
    /*i*/come_call_finalizer3(result_199,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result152__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_197;
struct list_item$1tuple2$2charphsNodephph* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        /*i*/come_call_finalizer3(prev_it_198,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj134;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj134=self->item;
            /* a*/come_call_finalizer3(__dec_obj134,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_201;
struct tuple2$2charphsNodeph* __dec_obj137;
void* __right_value253 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_202;
struct tuple2$2charphsNodeph* __dec_obj140;
void* __right_value254 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_203;
struct tuple2$2charphsNodeph* __dec_obj143;
struct list$1tuple2$2charphsNodephph* __result153__;
    if(self->len==0) {
        litem_201=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value252=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1tuple2$2charphsNodephph"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj137=litem_201->item;
        litem_201->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj137,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else {
        if(self->len==1) {
            litem_202=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value253=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1tuple2$2charphsNodephph"))));
            litem_202->prev=self->head;
            litem_202->next=((void*)0);
            __dec_obj140=litem_202->item;
            litem_202->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj140,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_202;
            self->head->next=litem_202;
        }
        else {
            litem_203=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value254=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1tuple2$2charphsNodephph"))));
            litem_203->prev=self->tail;
            litem_203->next=((void*)0);
            __dec_obj143=litem_203->item;
            litem_203->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj143,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_203;
            self->tail=litem_203;
        }
    }
    self->len++;
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj144;
struct sNode* __dec_obj145;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj144=self->v1;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj145=self->v2;
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result154__;
void* __right_value255 = (void*)0;
struct tuple2$2charphsNodeph* result_204;
void* __right_value256 = (void*)0;
char* __dec_obj146;
void* __right_value257 = (void*)0;
struct sNode* __dec_obj147;
struct tuple2$2charphsNodeph* __result155__;
    if(self==(void*)0) {
        __result154__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    result_204=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj146=result_204->v1;
        result_204->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj147=result_204->v2;
        result_204->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result155__ = gComeFunResultObject = __result_obj__ = result_204;
    /*i*/come_call_finalizer3(result_204,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj148;
struct sNode* __dec_obj149;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj148=self->v1;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj149=self->v2;
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_205;
struct list_item$1tuple2$2charphsNodephph* prev_it_206;
    it_205=self->head;
    while(it_205!=((void*)0)) {
        prev_it_206=it_205;
        it_205=it_205->next;
        /*i*/come_call_finalizer3(prev_it_206,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result160__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_216;
struct list_item$1CVALUEph* prev_it_217;
    it_216=self->head;
    while(it_216!=((void*)0)) {
        prev_it_217=it_216;
        it_216=it_216->next;
        /*i*/come_call_finalizer3(prev_it_217,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj158;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj158=self->item;
            /* a*/come_call_finalizer3(__dec_obj158,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_220;
struct tuple2$2charphsNodeph* __result162__;
struct tuple2$2charphsNodeph* __result163__;
struct tuple2$2charphsNodeph* result_221;
struct tuple2$2charphsNodeph* __result164__;
result_220 = (void*)0;
result_221 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_220,0,sizeof(struct tuple2$2charphsNodeph*));
        __result162__ = gComeFunResultObject = __result_obj__ = result_220;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    self->it=self->head;
    if(self->it) {
        __result163__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    memset(&result_221,0,sizeof(struct tuple2$2charphsNodeph*));
    __result164__ = gComeFunResultObject = __result_obj__ = result_221;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_223;
struct tuple2$2charphsNodeph* __result165__;
struct tuple2$2charphsNodeph* __result166__;
struct tuple2$2charphsNodeph* result_224;
struct tuple2$2charphsNodeph* __result167__;
result_223 = (void*)0;
result_224 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_223,0,sizeof(struct tuple2$2charphsNodeph*));
        __result165__ = gComeFunResultObject = __result_obj__ = result_223;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result166__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    memset(&result_224,0,sizeof(struct tuple2$2charphsNodeph*));
    __result167__ = gComeFunResultObject = __result_obj__ = result_224;
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_228;
int i_229;
struct sType* __result169__;
struct sType* default_value_230;
struct sType* __result170__;
default_value_230 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_228=self->head;
    i_229=0;
    while(it_228!=((void*)0)) {
        if(position==i_229) {
            __result169__ = gComeFunResultObject = __result_obj__ = it_228->item;
            gComeFunResultObject = (void*)0;
            return __result169__;
        }
        it_228=it_228->next;
        i_229++;
    }
    memset(&default_value_230,0,sizeof(struct sType*));
    __result170__ = gComeFunResultObject = __result_obj__ = default_value_230;
    /*i*/come_call_finalizer3(default_value_230,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_234;
struct CVALUE* __result171__;
struct CVALUE* __result172__;
struct CVALUE* result_235;
struct CVALUE* __result173__;
result_234 = (void*)0;
result_235 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_234,0,sizeof(struct CVALUE*));
        __result171__ = gComeFunResultObject = __result_obj__ = result_234;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    self->it=self->head;
    if(self->it) {
        __result172__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    memset(&result_235,0,sizeof(struct CVALUE*));
    __result173__ = gComeFunResultObject = __result_obj__ = result_235;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_237;
struct CVALUE* __result174__;
struct CVALUE* __result175__;
struct CVALUE* result_238;
struct CVALUE* __result176__;
result_237 = (void*)0;
result_238 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_237,0,sizeof(struct CVALUE*));
        __result174__ = gComeFunResultObject = __result_obj__ = result_237;
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result175__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    memset(&result_238,0,sizeof(struct CVALUE*));
    __result176__ = gComeFunResultObject = __result_obj__ = result_238;
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_245;
unsigned int it_246;
struct sFun* __result177__;
struct sFun* __result178__;
struct sFun* __result179__;
struct sFun* __result180__;
    hash_245=string_get_hash_key(((char*)key))%self->size;
    it_246=hash_245;
    while((_Bool)1) {
        if(self->item_existance[it_246]) {
            if(string_equals(self->keys[it_246],key)) {
                __result177__ = gComeFunResultObject = __result_obj__ = self->items[it_246];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result177__;
            }
            it_246++;
            if(it_246>=self->size) {
                it_246=0;
            }
            else {
                if(it_246==hash_245) {
                    __result178__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result178__;
                }
            }
        }
        else {
            __result179__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result179__;
        }
    }
    __result180__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj161;
struct sType* __dec_obj162;
struct list$1sTypeph* __dec_obj163;
struct list$1charph* __dec_obj164;
struct list$1charph* __dec_obj165;
struct sType* __dec_obj166;
struct sBlock* __dec_obj167;
struct buffer* __dec_obj170;
struct buffer* __dec_obj171;
struct buffer* __dec_obj172;
struct buffer* __dec_obj173;
char* __dec_obj174;
char* __dec_obj175;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj161=self->mName;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj162=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj163=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj163,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj164=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj165=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj165,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj166=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj167=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj167,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj170=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj170,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj171=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj171,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj172=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj173=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj173,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj174=self->mComeHeader;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj175=self->mDeclareSName;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj168;
struct sVarTable* __dec_obj169;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj168=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj168,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj169=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj169,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_251;
int i_252;
struct CVALUE* __result182__;
struct CVALUE* default_value_253;
struct CVALUE* __result183__;
default_value_253 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_251=self->head;
    i_252=0;
    while(it_251!=((void*)0)) {
        if(position==i_252) {
            __result182__ = gComeFunResultObject = __result_obj__ = it_251->item;
            gComeFunResultObject = (void*)0;
            return __result182__;
        }
        it_251=it_251->next;
        i_252++;
    }
    memset(&default_value_253,0,sizeof(struct CVALUE*));
    __result183__ = gComeFunResultObject = __result_obj__ = default_value_253;
    /*i*/come_call_finalizer3(default_value_253,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result187__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result187__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_259;
int i_260;
struct sType* default_value_261;
struct list$1sTypeph* __result185__;
struct list_item$1sTypeph* it_265;
int i_266;
struct sType* __dec_obj179;
struct list$1sTypeph* __result186__;
default_value_261 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_259=self->len;
        for(        i_260=0;        i_260<position-len_259;        i_260++        ){
            memset(&default_value_261,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_261));
            /*i*/come_call_finalizer3(default_value_261,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result185__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    it_265=self->head;
    i_266=0;
    while(it_265!=((void*)0)) {
        if(position==i_266) {
            __dec_obj179=it_265->item;
            it_265->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_265=it_265->next;
        i_266++;
    }
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1sTypeph* litem_262;
struct sType* __dec_obj176;
void* __right_value283 = (void*)0;
struct list_item$1sTypeph* litem_263;
struct sType* __dec_obj177;
void* __right_value284 = (void*)0;
struct list_item$1sTypeph* litem_264;
struct sType* __dec_obj178;
struct list$1sTypeph* __result184__;
    if(self->len==0) {
        litem_262=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value282=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj176=litem_262->item;
        litem_262->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else {
        if(self->len==1) {
            litem_263=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value283=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_263->prev=self->head;
            litem_263->next=((void*)0);
            __dec_obj177=litem_263->item;
            litem_263->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_263;
            self->head->next=litem_263;
        }
        else {
            litem_264=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value284=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_264->prev=self->tail;
            litem_264->next=((void*)0);
            __dec_obj178=litem_264->item;
            litem_264->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_264;
            self->tail=litem_264;
        }
    }
    self->len++;
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_269;
struct sType* __result188__;
struct sType* __result189__;
struct sType* result_270;
struct sType* __result190__;
result_269 = (void*)0;
result_270 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_269,0,sizeof(struct sType*));
        __result188__ = gComeFunResultObject = __result_obj__ = result_269;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    self->it=self->head;
    if(self->it) {
        __result189__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    memset(&result_270,0,sizeof(struct sType*));
    __result190__ = gComeFunResultObject = __result_obj__ = result_270;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_272;
struct sType* __result191__;
struct sType* __result192__;
struct sType* result_273;
struct sType* __result193__;
result_272 = (void*)0;
result_273 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_272,0,sizeof(struct sType*));
        __result191__ = gComeFunResultObject = __result_obj__ = result_272;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result192__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    memset(&result_273,0,sizeof(struct sType*));
    __result193__ = gComeFunResultObject = __result_obj__ = result_273;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1CVALUEph* litem_283;
struct CVALUE* __dec_obj180;
void* __right_value290 = (void*)0;
struct list_item$1CVALUEph* litem_284;
struct CVALUE* __dec_obj181;
void* __right_value291 = (void*)0;
struct list_item$1CVALUEph* litem_285;
struct CVALUE* __dec_obj182;
struct list$1CVALUEph* __result195__;
    if(self->len==0) {
        litem_283=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value289=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1CVALUEph"))));
        litem_283->prev=((void*)0);
        litem_283->next=((void*)0);
        __dec_obj180=litem_283->item;
        litem_283->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head=litem_283;
    }
    else {
        if(self->len==1) {
            litem_284=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value290=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1CVALUEph"))));
            litem_284->prev=self->head;
            litem_284->next=((void*)0);
            __dec_obj181=litem_284->item;
            litem_284->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_284;
            self->head->next=litem_284;
        }
        else {
            litem_285=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value291=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1CVALUEph"))));
            litem_285->prev=self->tail;
            litem_285->next=((void*)0);
            __dec_obj182=litem_285->item;
            litem_285->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_285;
            self->tail=litem_285;
        }
    }
    self->len++;
    __result195__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_291;
unsigned int it_292;
struct map$2charphsFunph* __result196__;
    hash_291=string_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while((_Bool)1) {
        if(self->item_existance[it_292]) {
            if(string_equals(self->keys[it_292],key)) {
                list$1charp_remove(self->key_list,self->keys[it_292]);
                self->item_existance[it_292]=(_Bool)0;
                if(1) {
                    self->keys[it_292] = come_decrement_ref_count2(self->keys[it_292], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_292]=((void*)0);
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_292],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_292]=((void*)0);
                self->len--;
                break;
            }
            it_292++;
            if(it_292>=self->size) {
                it_292=0;
            }
            else {
                if(it_292==hash_291) {
                    break;
                }
            }
        }
        else {
            break;
        }
    }
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_310;
unsigned int hash_311;
unsigned int it_312;
struct sFun* __result199__;
struct sFun* __result200__;
struct sFun* __result201__;
struct sFun* __result202__;
default_value_310 = (void*)0;
    memset(&default_value_310,0,sizeof(struct sFun*));
    hash_311=string_get_hash_key(((char*)key))%self->size;
    it_312=hash_311;
    while((_Bool)1) {
        if(self->item_existance[it_312]) {
            if(string_equals(self->keys[it_312],key)) {
                __result199__ = gComeFunResultObject = __result_obj__ = self->items[it_312];
                /*i*/come_call_finalizer3(default_value_310,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result199__;
            }
            it_312++;
            if(it_312>=self->size) {
                it_312=0;
            }
            else {
                if(it_312==hash_311) {
                    __result200__ = gComeFunResultObject = __result_obj__ = default_value_310;
                    /*i*/come_call_finalizer3(default_value_310,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result200__;
                }
            }
        }
        else {
            __result201__ = gComeFunResultObject = __result_obj__ = default_value_310;
            /*i*/come_call_finalizer3(default_value_310,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result201__;
        }
    }
    __result202__ = gComeFunResultObject = __result_obj__ = default_value_310;
    /*i*/come_call_finalizer3(default_value_310,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_355;
char* __result216__;
char* __result217__;
char* result_356;
char* __result218__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result216__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    self->it=self->head;
    if(self->it) {
        __result217__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    memset(&result_356,0,sizeof(char*));
    __result218__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_358;
char* __result219__;
char* __result220__;
char* result_359;
char* __result221__;
result_358 = (void*)0;
result_359 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_358,0,sizeof(char*));
        __result219__ = gComeFunResultObject = __result_obj__ = result_358;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result220__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    memset(&result_359,0,sizeof(char*));
    __result221__ = gComeFunResultObject = __result_obj__ = result_359;
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_360;
int i_361;
struct CVALUE* default_value_362;
struct list$1CVALUEph* __result222__;
struct list_item$1CVALUEph* it_363;
int i_364;
struct CVALUE* __dec_obj229;
struct list$1CVALUEph* __result223__;
default_value_362 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_360=self->len;
        for(        i_361=0;        i_361<position-len_360;        i_361++        ){
            memset(&default_value_362,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_362));
            /*i*/come_call_finalizer3(default_value_362,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result222__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    it_363=self->head;
    i_364=0;
    while(it_363!=((void*)0)) {
        if(position==i_364) {
            __dec_obj229=it_363->item;
            it_363->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_363=it_363->next;
        i_364++;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_373;
int i_374;
char* __result226__;
char* default_value_375;
char* __result227__;
default_value_375 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_373=self->head;
    i_374=0;
    while(it_373!=((void*)0)) {
        if(position==i_374) {
            __result226__ = gComeFunResultObject = __result_obj__ = it_373->item;
            gComeFunResultObject = (void*)0;
            return __result226__;
        }
        it_373=it_373->next;
        i_374++;
    }
    memset(&default_value_375,0,sizeof(char*));
    __result227__ = gComeFunResultObject = __result_obj__ = default_value_375;
    default_value_375 = come_decrement_ref_count2(default_value_375, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj232;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj232=self->sname;
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result231__;
void* __right_value391 = (void*)0;
struct sCurrentNode2* result_384;
void* __right_value392 = (void*)0;
char* __dec_obj233;
struct sCurrentNode2* __result232__;
    if(self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_384=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(self!=((void*)0)) {
        result_384->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_384->sname;
        result_384->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_384;
    /*i*/come_call_finalizer3(result_384,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_389;
unsigned int hash_390;
unsigned int it_391;
struct sClass* __result234__;
struct sClass* __result235__;
struct sClass* __result236__;
struct sClass* __result237__;
default_value_389 = (void*)0;
    memset(&default_value_389,0,sizeof(struct sClass*));
    hash_390=string_get_hash_key(((char*)key))%self->size;
    it_391=hash_390;
    while((_Bool)1) {
        if(self->item_existance[it_391]) {
            if(string_equals(self->keys[it_391],key)) {
                __result234__ = gComeFunResultObject = __result_obj__ = self->items[it_391];
                /*i*/come_call_finalizer3(default_value_389,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
            it_391++;
            if(it_391>=self->size) {
                it_391=0;
            }
            else {
                if(it_391==hash_390) {
                    __result235__ = gComeFunResultObject = __result_obj__ = default_value_389;
                    /*i*/come_call_finalizer3(default_value_389,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result235__;
                }
            }
        }
        else {
            __result236__ = gComeFunResultObject = __result_obj__ = default_value_389;
            /*i*/come_call_finalizer3(default_value_389,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result236__;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = default_value_389;
    /*i*/come_call_finalizer3(default_value_389,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value440 = (void*)0;
struct sNode* __result244__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1117, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunCallNode*)(__right_value433=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1117, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,throw_or_rescue,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value440=_inf_value4));
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value433,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value440) { __right_value440 = come_decrement_ref_count2(__right_value440, ((struct sNode*)__right_value440)->finalize, ((struct sNode*)__right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result244__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj252;
void* __right_value442 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj253;
struct sLambdaCall* __result245__;
    ((struct sNodeBase*)(__right_value441=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value441,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj252=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj253=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    /* a*/come_call_finalizer3(__dec_obj253,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result245__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value443=__builtin_string("sLambdaCall")));
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_419;
struct list$1tuple2$2charphsNodephph* params_420;
_Bool __result247__;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_421;
struct sType* lambda_type_422;
void* __right_value445 = (void*)0;
struct sType* result_type_423;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1CVALUEph* come_params_424;
_Bool __result248__;
int i_425;
struct list$1tuple2$2charphsNodephph* o2_saved_426;
struct tuple2$2charphsNodeph* it_427;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_428;
struct sNode* node_429;
_Bool __result249__;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_430;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct buffer* buf_431;
int j_432;
struct list$1CVALUEph* o2_saved_433;
struct CVALUE* it_434;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct CVALUE* come_value2_435;
void* __right_value455 = (void*)0;
char* __dec_obj257;
void* __right_value456 = (void*)0;
struct sType* __dec_obj258;
_Bool __result250__;
    node_419=(struct sNode*)come_increment_ref_count(self->node);
    params_420=self->params;
    if(!node_compile(node_419,info)) {
        __result247__ = (_Bool)0;
        if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result247__;
    }
    come_value_421=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_422=come_value_421->type;
    result_type_423=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_422->mResultType->v1));
    result_type_423->mStatic=(_Bool)0;
    come_params_424=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1152, "list$1CVALUEph"))));
    if(list$1sTypeph_length(lambda_type_422->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_420)&&!lambda_type_422->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_422->mParamTypes),list$1tuple2$2charphsNodephph_length(params_420));
        __result248__ = (_Bool)0;
        if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result248__;
    }
    i_425=0;
    for(    o2_saved_426=(params_420),it_427=list$1tuple2$2charphsNodephph_begin((o2_saved_426));    !list$1tuple2$2charphsNodephph_end((o2_saved_426));    it_427=list$1tuple2$2charphsNodephph_next((o2_saved_426))    ){
        multiple_assign_var7=it_427;
        label_428=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_429=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(!node_compile(node_429,info)) {
            __result249__ = (_Bool)0;
            label_428 = come_decrement_ref_count2(label_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result249__;
        }
        come_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(lambda_type_422->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_425), "05call.c", 1168, 21))==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(__right_value450=xsprintf("calling param #\%s",((char*)(__right_value449=int_to_string(i_425)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_425), "05call.c", 1171, 22)),come_value_430->type,come_value_430,(_Bool)0,(_Bool)1,info);
            __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_425), "05call.c", 1172, 23))->mHeap&&come_value_430->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_425), "05call.c", 1173, 24)),come_value_430->type,come_value_430,info,(_Bool)1);
            }
        }
        list$1CVALUEph_push_back(come_params_424,(struct CVALUE*)come_increment_ref_count(come_value_430));
        dec_stack_ptr(1,info);
        i_425++;
        label_428 = come_decrement_ref_count2(label_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_431=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1183, "buffer"))));
    buffer_append_str(buf_431,"(");
    buffer_append_str(buf_431,come_value_421->c_value);
    buffer_append_str(buf_431,")");
    buffer_append_str(buf_431,"(");
    j_432=0;
    for(    o2_saved_433=(struct list$1CVALUEph*)come_increment_ref_count((come_params_424)),it_434=list$1CVALUEph_begin((o2_saved_433));    !list$1CVALUEph_end((o2_saved_433));    it_434=list$1CVALUEph_next((o2_saved_433))    ){
        buffer_append_str(buf_431,it_434->c_value);
        if(j_432!=list$1CVALUEph_length(come_params_424)-1) {
            buffer_append_str(buf_431,",");
        }
        j_432++;
    }
    /*i*/come_call_finalizer3(o2_saved_433,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_431,")");
    come_value2_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1202, "CVALUE"))));
    __dec_obj257=come_value2_435->c_value;
    come_value2_435->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_431));
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(lambda_type_422->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_435,(struct sType*)come_increment_ref_count(lambda_type_422->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj258=come_value2_435->type;
    come_value2_435->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_423));
    /* a*/come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_435->type->mStatic=(_Bool)0;
    come_value2_435->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_435->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_435));
    __result250__ = (_Bool)1;
    if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_431,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result250__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value457 = (void*)0;
struct sType* __dec_obj259;
struct sVarArgTypeName* __result251__;
    ((struct sNodeBase*)(__right_value457=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value457,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj259=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    /* a*/come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value458 = (void*)0;
char* __result252__;
    __result252__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value458=__builtin_string("sVarArgTypeName")));
    __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_436;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value461 = (void*)0;
char* __dec_obj262;
struct sType* __dec_obj263;
_Bool __result253__;
    type_436=(struct sType*)come_increment_ref_count(self->type);
    come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1239, "CVALUE"))));
    __dec_obj262=come_value_437->c_value;
    come_value_437->c_value=(char*)come_increment_ref_count(make_type_name_string(type_436,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj263=come_value_437->type;
    come_value_437->type=(struct sType*)come_increment_ref_count(type_436);
    /* a*/come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_437->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_437));
    __result253__ = (_Bool)1;
    /*i*/come_call_finalizer3(type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result253__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1sTypeph* method_generics_types_438;
void* __right_value464 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_439;
char* name_440;
_Bool err_441;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_442;
_Bool _va_arg_443;
char* p_444;
int sline_445;
_Bool err_flag_446;
void* __right_value468 = (void*)0;
char* label_447;
void* __right_value469 = (void*)0;
char* __dec_obj266;
char* __dec_obj267;
_Bool no_comma_448;
_Bool in_fun_param_449;
void* __right_value470 = (void*)0;
struct sNode* node_450;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj268;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
_Bool guard_break_454;
struct buffer* method_block_455;
int method_block_sline_456;
char* head_457;
void* __right_value477 = (void*)0;
char* tail_458;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct buffer* __dec_obj274;
int len_459;
void* __right_value480 = (void*)0;
char* mem_460;
_Bool throw_or_rescue_461;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value489 = (void*)0;
struct sNode* node_462;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj285;
struct sNode* __result258__;
    method_generics_types_438=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1253, "list$1sTypeph"))));
    if(*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(*info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value464=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_439=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                        name_440=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                        err_441=multiple_assign_var8->v3;
                        /*g*/come_call_finalizer3(__right_value464,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_441) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_438,(struct sType*)come_increment_ref_count(sType_clone(type_439)));
                        /*i*/come_call_finalizer3(type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_440 = come_decrement_ref_count2(name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_442=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1291, "list$1tuple2$2charphsNodephph"))));
    _va_arg_443=info->va_arg;
    if(charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_444=info->p;
        sline_445=info->sline;
        err_flag_446=(_Bool)0;
        label_447=(char*)come_increment_ref_count(__builtin_string(""));
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj266=label_447;
            label_447=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_446=(_Bool)1;
        }
        if(err_flag_446==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj267=label_447;
            label_447=((void*)0);
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_444;
            info->sline=sline_445;
        }
        no_comma_448=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_449=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_450=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj268=node_450;
        node_450=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_450),info));
        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); }
        info->no_comma=no_comma_448;
        info->in_fun_param=in_fun_param_449;
        list$1tuple2$2charphsNodephph_push_back(params_442,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1339, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_447),(struct sNode*)come_increment_ref_count(node_450))));
        parse_sharp_v5(info);
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_447 = come_decrement_ref_count2(label_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_447 = come_decrement_ref_count2(label_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_443;
    guard_break_454=(_Bool)0;
    if(*info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_454=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_455=((void*)0);
    method_block_sline_456=0;
    if(*info->p==123) {
        head_457=info->p;
        method_block_sline_456=info->sline;
        ((char*)(__right_value477=skip_block(info)));
        __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_458=info->p;
        __dec_obj274=method_block_455;
        method_block_455=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1376, "buffer"))));
        /* a*/come_call_finalizer3(__dec_obj274,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_459=tail_458-head_457;
        mem_460=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_459+1)), "05call.c", 1379, "char"));
        memcpy(mem_460,head_457,len_459);
        mem_460[len_459]=0;
        buffer_append_str(method_block_455,mem_460);
        buffer_append_str(method_block_455,"\n");
        mem_460 = come_decrement_ref_count2(mem_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    throw_or_rescue_461=(_Bool)0;
    if(strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0) {
        throw_or_rescue_461=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1396, "struct sNode");
    _inf_obj_value5=come_increment_ref_count(((struct sFunCallNode*)(__right_value482=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1396, "sFunCallNode")),fun_name,params_442,guard_break_454,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_438),(struct buffer*)come_increment_ref_count(method_block_455),method_block_sline_456,throw_or_rescue_461,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_462=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*g*/come_call_finalizer3(__right_value482,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj285=node_462;
    node_462=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_462),info));
    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); }
    __result258__ = gComeFunResultObject = __result_obj__ = node_462;
    /*i*/come_call_finalizer3(method_generics_types_438,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_442,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_455,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_462) { node_462 = come_decrement_ref_count2(node_462, ((struct sNode*)node_462)->finalize, ((struct sNode*)node_462)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj264;
char* __dec_obj265;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj264=self->v1;
            /* a*/come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj265=self->v2;
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value472 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_451;
struct tuple2$2charphsNodeph* __dec_obj269;
void* __right_value473 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_452;
struct tuple2$2charphsNodeph* __dec_obj270;
void* __right_value474 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_453;
struct tuple2$2charphsNodeph* __dec_obj271;
struct list$1tuple2$2charphsNodephph* __result254__;
    if(self->len==0) {
        litem_451=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value472=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple2$2charphsNodephph"))));
        litem_451->prev=((void*)0);
        litem_451->next=((void*)0);
        __dec_obj269=litem_451->item;
        litem_451->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj269,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_451;
        self->head=litem_451;
    }
    else {
        if(self->len==1) {
            litem_452=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value473=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple2$2charphsNodephph"))));
            litem_452->prev=self->head;
            litem_452->next=((void*)0);
            __dec_obj270=litem_452->item;
            litem_452->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj270,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_452;
            self->head->next=litem_452;
        }
        else {
            litem_453=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value474=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple2$2charphsNodephph"))));
            litem_453->prev=self->tail;
            litem_453->next=((void*)0);
            __dec_obj271=litem_453->item;
            litem_453->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj271,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_453;
            self->tail=litem_453;
        }
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj272;
struct sNode* __dec_obj273;
struct tuple2$2charphsNodeph* __result255__;
    __dec_obj272=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj273=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); }
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj275;
char* __dec_obj276;
struct list$1tuple2$2charphsNodephph* __dec_obj277;
struct list$1sTypeph* __dec_obj278;
struct buffer* __dec_obj279;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj275=self->sname;
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(self->fun_name==gComeFunResultObject) {
            __dec_obj276=self->fun_name;
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        if(self->params==gComeFunResultObject) {
            __dec_obj277=self->params;
            /* a*/come_call_finalizer3(__dec_obj277,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(self->method_generics_types==gComeFunResultObject) {
            __dec_obj278=self->method_generics_types;
            /* a*/come_call_finalizer3(__dec_obj278,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(self->method_block==gComeFunResultObject) {
            __dec_obj279=self->method_block;
            /* a*/come_call_finalizer3(__dec_obj279,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result256__;
void* __right_value483 = (void*)0;
struct sFunCallNode* result_463;
void* __right_value484 = (void*)0;
char* __dec_obj280;
void* __right_value485 = (void*)0;
char* __dec_obj281;
void* __right_value486 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj282;
void* __right_value487 = (void*)0;
struct list$1sTypeph* __dec_obj283;
void* __right_value488 = (void*)0;
struct buffer* __dec_obj284;
struct sFunCallNode* __result257__;
    if(self==(void*)0) {
        __result256__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_463=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(self!=((void*)0)) {
        result_463->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_463->sname;
        result_463->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj281=result_463->fun_name;
        result_463->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj282=result_463->params;
        result_463->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        /* a*/come_call_finalizer3(__dec_obj282,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_463->guard_break=self->guard_break;
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj283=result_463->method_generics_types;
        result_463->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        /* a*/come_call_finalizer3(__dec_obj283,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj284=result_463->method_block;
        result_463->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /* a*/come_call_finalizer3(__dec_obj284,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_463->method_block_sline=self->method_block_sline;
    }
    if(self!=((void*)0)) {
        result_463->throw_or_rescue=self->throw_or_rescue;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_463;
    /*i*/come_call_finalizer3(result_463,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result259__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result259__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value497 = (void*)0;
struct sNode* __result262__;
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1417, "struct sNode");
    _inf_obj_value6=come_increment_ref_count(((struct sReturnNode*)(__right_value492=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1417, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sReturnNode_finalize;
    _inf_value6->clone=(void*)sReturnNode_clone;
    _inf_value6->compile=(void*)sReturnNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sReturnNode_kind;
    __result262__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value497=_inf_value6));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value492,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value497) { __right_value497 = come_decrement_ref_count2(__right_value497, ((struct sNode*)__right_value497)->finalize, ((struct sNode*)__right_value497)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result262__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value505 = (void*)0;
struct sNode* __result265__;
char* head_466;
void* __right_value506 = (void*)0;
struct sNode* value_467;
char* tail_468;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value515 = (void*)0;
struct sNode* __result268__;
char* head_471;
int head_sline_472;
void* __right_value516 = (void*)0;
char* buf_473;
_Bool is_type_name__474;
_Bool define_function_pointer_flag_475;
void* __right_value517 = (void*)0;
_Bool lambda_flag_476;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* word2_477;
_Bool fun_name_with_type_name_478;
void* __right_value520 = (void*)0;
char* word2_479;
_Bool call_method_generics_fun_call_480;
void* __right_value521 = (void*)0;
char* __dec_obj305;
int nest_481;
void* __right_value522 = (void*)0;
char* __dec_obj306;
void* __right_value523 = (void*)0;
struct sNode* node_482;
struct sNode* __result269__;
void* __right_value524 = (void*)0;
struct sNode* node_483;
struct sNode* __result270__;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value9;
struct sFuncNode* _inf_obj_value9;
void* __right_value529 = (void*)0;
struct sNode* __result273__;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sNode* _inf_value10;
struct sLineNode* _inf_obj_value10;
void* __right_value534 = (void*)0;
struct sNode* __result276__;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* _inf_value11;
struct sSNameNode* _inf_obj_value11;
void* __right_value539 = (void*)0;
struct sNode* __result279__;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sNode* _inf_value12;
struct sCallerFuncNode* _inf_obj_value12;
void* __right_value544 = (void*)0;
struct sNode* __result282__;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* _inf_value13;
struct sCallerLineNode* _inf_obj_value13;
void* __right_value549 = (void*)0;
struct sNode* __result285__;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* _inf_value14;
struct sCallerSNameNode* _inf_obj_value14;
void* __right_value554 = (void*)0;
struct sNode* __result288__;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_490;
char* name_491;
_Bool err_492;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* _inf_value15;
struct sVarArgTypeName* _inf_obj_value15;
void* __right_value561 = (void*)0;
struct sNode* __result291__;
void* __right_value562 = (void*)0;
struct sNode* node_494;
struct sNode* __result292__;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct buffer* fun_name_495;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* type_496;
void* __right_value567 = (void*)0;
struct sClass* klass_500;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sType* __dec_obj323;
void* __right_value570 = (void*)0;
char* buf2_501;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sNode* node_502;
struct sNode* __result297__;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* fun_name_503;
void* __right_value575 = (void*)0;
char* buf2_504;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* node_505;
struct sNode* __result298__;
void* __right_value578 = (void*)0;
struct sNode* node_506;
struct sNode* __result299__;
void* __right_value579 = (void*)0;
struct sNode* node_507;
struct sNode* __result300__;
void* __right_value580 = (void*)0;
struct sNode* __result301__;
void* __right_value581 = (void*)0;
struct sNode* __result302__;
void* __right_value582 = (void*)0;
struct sNode* node_508;
struct sNode* __result303__;
void* __right_value583 = (void*)0;
struct sNode* node_509;
struct sNode* __result304__;
struct sNode* __result305__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p==59) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1430, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sReturnNode*)(__right_value500=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1430, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result265__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value505=_inf_value7));
            /*g*/come_call_finalizer3(__right_value500,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value505) { __right_value505 = come_decrement_ref_count2(__right_value505, ((struct sNode*)__right_value505)->finalize, ((struct sNode*)__right_value505)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result265__;
        }
        else {
            head_466=info->p;
            value_467=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_468=info->p;
            __dec_obj298=value_467;
            value_467=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_467),info));
            if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
            char buf_469[tail_468-head_466+1];
            memset(&buf_469, 0, sizeof(char)            *(tail_468-head_466+1)            );
            memcpy(buf_469,head_466,tail_468-head_466);
            buf_469[tail_468-head_466]=0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1442, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sReturnNode*)(__right_value510=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1442, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_467),(char*)come_increment_ref_count(__builtin_string(buf_469)),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result268__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value515=_inf_value8));
            if(value_467) { value_467 = come_decrement_ref_count2(value_467, ((struct sNode*)value_467)->finalize, ((struct sNode*)value_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value510,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value515) { __right_value515 = come_decrement_ref_count2(__right_value515, ((struct sNode*)__right_value515)->finalize, ((struct sNode*)__right_value515)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result268__;
            if(value_467) { value_467 = come_decrement_ref_count2(value_467, ((struct sNode*)value_467)->finalize, ((struct sNode*)value_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        if((xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
            head_471=info->p;
            head_sline_472=info->sline;
            buf_473=(char*)come_increment_ref_count(backtrace_parse_word(info));
            is_type_name__474=is_type_name(buf_473,info);
            define_function_pointer_flag_475=(_Bool)0;
            if(string_operator_not_equals(buf_473,"throw")&&string_operator_not_equals(buf_473,"rescue")&&string_operator_not_equals(buf_473,"some")&&string_operator_not_equals(buf_473,"none")&&string_operator_not_equals(buf_473,"if")&&string_operator_not_equals(buf_473,"while")&&string_operator_not_equals(buf_473,"for")&&string_operator_not_equals(buf_473,"switch")&&string_operator_not_equals(buf_473,"return")&&string_operator_not_equals(buf_473,"sizeof")&&string_operator_not_equals(buf_473,"isheap")&&string_operator_not_equals(buf_473,"guard")&&string_operator_not_equals(buf_473,"ispointer")&&string_operator_not_equals(buf_473,"__typeof__")&&string_operator_not_equals(buf_473,"dynamic_typeof")&&string_operator_not_equals(buf_473,"typeof")&&string_operator_not_equals(buf_473,"gc_inc")&&string_operator_not_equals(buf_473,"gc_dec")&&string_operator_not_equals(buf_473,"gc_dec_nofree")&&string_operator_not_equals(buf_473,"case")&&string_operator_not_equals(buf_473,"_Alignof")&&string_operator_not_equals(buf_473,"_Alignas")&&string_operator_not_equals(buf_473,"__alignof__")&&*info->p==40&&*(info->p+1)!=42) {
                ((struct tuple3$3sTypephcharphbool*)(__right_value517=backtrace_parse_type((_Bool)0,info)));
                /*g*/come_call_finalizer3(__right_value517,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        define_function_pointer_flag_475=(_Bool)1;
                    }
                }
                info->p=head_471;
                info->sline=head_sline_472;
            }
            lambda_flag_476=(_Bool)0;
            if(string_operator_not_equals(buf_473,"throw")&&string_operator_not_equals(buf_473,"rescue")&&string_operator_not_equals(buf_473,"some")&&string_operator_not_equals(buf_473,"none")&&string_operator_not_equals(buf_473,"if")&&string_operator_not_equals(buf_473,"while")&&string_operator_not_equals(buf_473,"for")&&string_operator_not_equals(buf_473,"switch")&&string_operator_not_equals(buf_473,"return")&&string_operator_not_equals(buf_473,"sizeof")&&string_operator_not_equals(buf_473,"_Alignof")&&string_operator_not_equals(buf_473,"__alignof__")&&string_operator_not_equals(buf_473,"_Alignas")&&string_operator_not_equals(buf_473,"isheap")&&string_operator_not_equals(buf_473,"guard")&&string_operator_not_equals(buf_473,"ispointer")&&string_operator_not_equals(buf_473,"__typeof__")&&string_operator_not_equals(buf_473,"dynamic_typeof")&&string_operator_not_equals(buf_473,"typeof")&&string_operator_not_equals(buf_473,"gc_inc")&&string_operator_not_equals(buf_473,"gc_dec")&&string_operator_not_equals(buf_473,"gc_dec_nofree")&&string_operator_not_equals(buf_473,"case")&&is_type_name__474) {
                info->p=head_471;
                info->sline=head_sline_472;
                ((struct tuple3$3sTypephcharphbool*)(__right_value518=backtrace_parse_type((_Bool)0,info)));
                /*g*/come_call_finalizer3(__right_value518,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                word2_477=(char*)come_increment_ref_count(backtrace_parse_word(info));
                if(string_operator_equals(word2_477,"lambda")) {
                    lambda_flag_476=(_Bool)1;
                }
                info->p=head_471;
                info->sline=head_sline_472;
                word2_477 = come_decrement_ref_count2(word2_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            fun_name_with_type_name_478=(_Bool)0;
            if(string_operator_not_equals(buf_473,"throw")&&string_operator_not_equals(buf_473,"rescue")&&string_operator_not_equals(buf_473,"some")&&string_operator_not_equals(buf_473,"none")&&string_operator_not_equals(buf_473,"if")&&string_operator_not_equals(buf_473,"while")&&string_operator_not_equals(buf_473,"for")&&string_operator_not_equals(buf_473,"switch")&&string_operator_not_equals(buf_473,"return")&&string_operator_not_equals(buf_473,"sizeof")&&string_operator_not_equals(buf_473,"_Alignof")&&string_operator_not_equals(buf_473,"__alignof__")&&string_operator_not_equals(buf_473,"_Alignas")&&string_operator_not_equals(buf_473,"isheap")&&string_operator_not_equals(buf_473,"guard")&&string_operator_not_equals(buf_473,"ispointer")&&string_operator_not_equals(buf_473,"dynamic_typeof")&&string_operator_not_equals(buf_473,"__typeof__")&&string_operator_not_equals(buf_473,"typeof")&&string_operator_not_equals(buf_473,"gc_inc")&&string_operator_not_equals(buf_473,"gc_dec")&&string_operator_not_equals(buf_473,"gc_dec_nofree")&&string_operator_not_equals(buf_473,"case")) {
                info->p=head_471;
                info->sline=head_sline_472;
                info->no_output_err=(_Bool)1;
                if(xisalpha(*info->p)||*info->p==95) {
                    word2_479=(char*)come_increment_ref_count(parse_word(info));
                    word2_479 = come_decrement_ref_count2(word2_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                while(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p==58&&*(info->p+1)==58) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        fun_name_with_type_name_478=(_Bool)1;
                    }
                }
                info->no_output_err=(_Bool)0;
                info->p=head_471;
                info->sline=head_sline_472;
            }
            call_method_generics_fun_call_480=(_Bool)0;
            {
                info->p=head_471;
                info->sline=head_sline_472;
                if(xisalpha(*info->p)||*info->p==95) {
                    __dec_obj305=buf_473;
                    buf_473=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(!is_type_name(buf_473,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_473)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_473)==((void*)0)&&*info->p==60) {
                    nest_481=0;
                    while(*info->p) {
                        if(*info->p==60) {
                            info->p++;
                            nest_481++;
                        }
                        else {
                            if(*info->p==62) {
                                info->p++;
                                nest_481--;
                                if(nest_481==0) {
                                    break;
                                }
                            }
                            else {
                                if(*info->p==10||*info->p==59) {
                                    break;
                                }
                                else {
                                    info->p++;
                                }
                            }
                        }
                    }
                    if(*info->p==40) {
                        call_method_generics_fun_call_480=(_Bool)1;
                    }
                }
                info->p=head_471;
                info->sline=head_sline_472;
            }
            parse_sharp_v5(info);
            __dec_obj306=buf_473;
            buf_473=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(lambda_flag_476) {
                info->p=head_471;
                info->sline=head_sline_472;
                node_482=(struct sNode*)come_increment_ref_count(parse_function(info));
                __result269__ = gComeFunResultObject = __result_obj__ = node_482;
                if(node_482) { node_482 = come_decrement_ref_count2(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0, 1, 0, (void*)0); } 
                buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result269__;
                if(node_482) { node_482 = come_decrement_ref_count2(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if((string_operator_equals(buf_473,"string")||string_operator_equals(buf_473,"wstring"))&&*info->p==40) {
                    node_483=(struct sNode*)come_increment_ref_count(parse_function_call(buf_473,info));
                    __result270__ = gComeFunResultObject = __result_obj__ = node_483;
                    if(node_483) { node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result270__;
                    if(node_483) { node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(string_operator_equals(buf_473,"__func__")||string_operator_equals(buf_473,"__FUNCTION__")) {
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1585, "struct sNode");
                        _inf_obj_value9=come_increment_ref_count(((struct sFuncNode*)(__right_value526=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1585, "sFuncNode")),info))));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sFuncNode_finalize;
                        _inf_value9->clone=(void*)sFuncNode_clone;
                        _inf_value9->compile=(void*)sFuncNode_compile;
                        _inf_value9->sline=(void*)sNodeBase_sline;
                        _inf_value9->sname=(void*)sNodeBase_sname;
                        _inf_value9->terminated=(void*)sNodeBase_terminated;
                        _inf_value9->kind=(void*)sFuncNode_kind;
                        __result273__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value529=_inf_value9));
                        buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value526,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value529) { __right_value529 = come_decrement_ref_count2(__right_value529, ((struct sNode*)__right_value529)->finalize, ((struct sNode*)__right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result273__;
                    }
                    else {
                        if(string_operator_equals(buf_473,"__line__")||string_operator_equals(buf_473,"__LINE__")) {
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1588, "struct sNode");
                            _inf_obj_value10=come_increment_ref_count(((struct sLineNode*)(__right_value531=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1588, "sLineNode")),info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sLineNode_finalize;
                            _inf_value10->clone=(void*)sLineNode_clone;
                            _inf_value10->compile=(void*)sLineNode_compile;
                            _inf_value10->sline=(void*)sNodeBase_sline;
                            _inf_value10->sname=(void*)sNodeBase_sname;
                            _inf_value10->terminated=(void*)sNodeBase_terminated;
                            _inf_value10->kind=(void*)sLineNode_kind;
                            __result276__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value534=_inf_value10));
                            buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value531,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value534) { __right_value534 = come_decrement_ref_count2(__right_value534, ((struct sNode*)__right_value534)->finalize, ((struct sNode*)__right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result276__;
                        }
                        else {
                            if(string_operator_equals(buf_473,"__sname__")) {
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1591, "struct sNode");
                                _inf_obj_value11=come_increment_ref_count(((struct sSNameNode*)(__right_value536=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1591, "sSNameNode")),info))));
                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                _inf_value11->finalize=(void*)sSNameNode_finalize;
                                _inf_value11->clone=(void*)sSNameNode_clone;
                                _inf_value11->compile=(void*)sSNameNode_compile;
                                _inf_value11->sline=(void*)sNodeBase_sline;
                                _inf_value11->sname=(void*)sNodeBase_sname;
                                _inf_value11->terminated=(void*)sNodeBase_terminated;
                                _inf_value11->kind=(void*)sSNameNode_kind;
                                __result279__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value539=_inf_value11));
                                buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*g*/come_call_finalizer3(__right_value536,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value539) { __right_value539 = come_decrement_ref_count2(__right_value539, ((struct sNode*)__right_value539)->finalize, ((struct sNode*)__right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result279__;
                            }
                            else {
                                if(string_operator_equals(buf_473,"__caller_func__")) {
                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1594, "struct sNode");
                                    _inf_obj_value12=come_increment_ref_count(((struct sCallerFuncNode*)(__right_value541=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1594, "sCallerFuncNode")),info))));
                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                    _inf_value12->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value12->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value12->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                                    _inf_value12->kind=(void*)sCallerFuncNode_kind;
                                    __result282__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value544=_inf_value12));
                                    buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    /*g*/come_call_finalizer3(__right_value541,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value544) { __right_value544 = come_decrement_ref_count2(__right_value544, ((struct sNode*)__right_value544)->finalize, ((struct sNode*)__right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    gComeFunResultObject = (void*)0;
                                    return __result282__;
                                }
                                else {
                                    if(string_operator_equals(buf_473,"__caller_line__")) {
                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1597, "struct sNode");
                                        _inf_obj_value13=come_increment_ref_count(((struct sCallerLineNode*)(__right_value546=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1597, "sCallerLineNode")),info))));
                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                        _inf_value13->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value13->clone=(void*)sCallerLineNode_clone;
                                        _inf_value13->compile=(void*)sCallerLineNode_compile;
                                        _inf_value13->sline=(void*)sNodeBase_sline;
                                        _inf_value13->sname=(void*)sNodeBase_sname;
                                        _inf_value13->terminated=(void*)sNodeBase_terminated;
                                        _inf_value13->kind=(void*)sCallerLineNode_kind;
                                        __result285__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value549=_inf_value13));
                                        buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*g*/come_call_finalizer3(__right_value546,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value549) { __right_value549 = come_decrement_ref_count2(__right_value549, ((struct sNode*)__right_value549)->finalize, ((struct sNode*)__right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result285__;
                                    }
                                    else {
                                        if(string_operator_equals(buf_473,"__caller_sname__")) {
                                            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1600, "struct sNode");
                                            _inf_obj_value14=come_increment_ref_count(((struct sCallerSNameNode*)(__right_value551=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1600, "sCallerSNameNode")),info))));
                                            _inf_value14->_protocol_obj=_inf_obj_value14;
                                            _inf_value14->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value14->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value14->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value14->sline=(void*)sNodeBase_sline;
                                            _inf_value14->sname=(void*)sNodeBase_sname;
                                            _inf_value14->terminated=(void*)sNodeBase_terminated;
                                            _inf_value14->kind=(void*)sCallerSNameNode_kind;
                                            __result288__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value554=_inf_value14));
                                            buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            /*g*/come_call_finalizer3(__right_value551,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value554) { __right_value554 = come_decrement_ref_count2(__right_value554, ((struct sNode*)__right_value554)->finalize, ((struct sNode*)__right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            gComeFunResultObject = (void*)0;
                                            return __result288__;
                                        }
                                        else {
                                            if(info->va_arg&&is_type_name(buf_473,info)) {
                                                info->p=head_471;
                                                info->sline=head_sline_472;
                                                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                                type_490=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                name_491=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                err_492=multiple_assign_var9->v3;
                                                /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1608, "struct sNode");
                                                _inf_obj_value15=come_increment_ref_count(((struct sVarArgTypeName*)(__right_value557=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 1608, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_490),info))));
                                                _inf_value15->_protocol_obj=_inf_obj_value15;
                                                _inf_value15->finalize=(void*)sVarArgTypeName_finalize;
                                                _inf_value15->clone=(void*)sVarArgTypeName_clone;
                                                _inf_value15->compile=(void*)sVarArgTypeName_compile;
                                                _inf_value15->sline=(void*)sNodeBase_sline;
                                                _inf_value15->sname=(void*)sNodeBase_sname;
                                                _inf_value15->terminated=(void*)sNodeBase_terminated;
                                                _inf_value15->kind=(void*)sVarArgTypeName_kind;
                                                __result291__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value561=_inf_value15));
                                                /*i*/come_call_finalizer3(type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                /*g*/come_call_finalizer3(__right_value557,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(__right_value561) { __right_value561 = come_decrement_ref_count2(__right_value561, ((struct sNode*)__right_value561)->finalize, ((struct sNode*)__right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                gComeFunResultObject = (void*)0;
                                                return __result291__;
                                                /*i*/come_call_finalizer3(type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            else {
                                                if((string_operator_equals(buf_473,"sizeof")||string_operator_equals(buf_473,"_Alignof")||string_operator_equals(buf_473,"_Alignas")||string_operator_equals(buf_473,"__alignof__"))&&*info->p==40) {
                                                    node_494=(struct sNode*)come_increment_ref_count(string_node_v21(buf_473,head_471,head_sline_472,info));
                                                    __result292__ = gComeFunResultObject = __result_obj__ = node_494;
                                                    if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    gComeFunResultObject = (void*)0;
                                                    return __result292__;
                                                    if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(fun_name_with_type_name_478) {
                                                        fun_name_495=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1616, "buffer"))));
                                                        buffer_append_str(fun_name_495,buf_473);
                                                        type_496=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value565=buffer_to_string(fun_name_495))))));
                                                        __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(type_496==((void*)0)) {
                                                            klass_500=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value567=buffer_to_string(fun_name_495))));
                                                            __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            if(klass_500) {
                                                                __dec_obj323=type_496;
                                                                type_496=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1626, "sType")),buf_473,(_Bool)0,info));
                                                                /* a*/come_call_finalizer3(__dec_obj323,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                err_msg(info,"null type(%s)",buf_473);
                                                                exit(2);
                                                            }
                                                        }
                                                        while(*info->p==42) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(type_496->mClass->mStruct==(_Bool)0) {
                                                                buffer_append_str(fun_name_495,"p");
                                                            }
                                                        }
                                                        expected_next_character(58,info);
                                                        expected_next_character(58,info);
                                                        buffer_append_str(fun_name_495,"_");
                                                        buf2_501=(char*)come_increment_ref_count(parse_word(info));
                                                        buffer_append_str(fun_name_495,buf2_501);
                                                        node_502=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value571=buffer_to_string(fun_name_495))),info));
                                                        __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        __result297__ = gComeFunResultObject = __result_obj__ = node_502;
                                                        /*i*/come_call_finalizer3(fun_name_495,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        /*i*/come_call_finalizer3(type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_501 = come_decrement_ref_count2(buf2_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_502) { node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        gComeFunResultObject = (void*)0;
                                                        return __result297__;
                                                        /*i*/come_call_finalizer3(fun_name_495,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        /*i*/come_call_finalizer3(type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_501 = come_decrement_ref_count2(buf2_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_502) { node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(*info->p==58&&*(info->p+1)==58) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            fun_name_503=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1660, "buffer"))));
                                                            buffer_append_str(fun_name_503,buf_473);
                                                            buffer_append_str(fun_name_503,"_");
                                                            buf2_504=(char*)come_increment_ref_count(parse_word(info));
                                                            buffer_append_str(fun_name_503,buf2_504);
                                                            node_505=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value576=buffer_to_string(fun_name_503))),info));
                                                            __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            __result298__ = gComeFunResultObject = __result_obj__ = node_505;
                                                            /*i*/come_call_finalizer3(fun_name_503,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_504 = come_decrement_ref_count2(buf2_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            gComeFunResultObject = (void*)0;
                                                            return __result298__;
                                                            /*i*/come_call_finalizer3(fun_name_503,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_504 = come_decrement_ref_count2(buf2_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            if(call_method_generics_fun_call_480) {
                                                                node_506=(struct sNode*)come_increment_ref_count(parse_function_call(buf_473,info));
                                                                __result299__ = gComeFunResultObject = __result_obj__ = node_506;
                                                                if(node_506) { node_506 = come_decrement_ref_count2(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                gComeFunResultObject = (void*)0;
                                                                return __result299__;
                                                                if(node_506) { node_506 = come_decrement_ref_count2(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(string_operator_not_equals(buf_473,"throw")&&string_operator_not_equals(buf_473,"rescue")&&string_operator_not_equals(buf_473,"some")&&string_operator_not_equals(buf_473,"none")&&string_operator_not_equals(buf_473,"if")&&string_operator_not_equals(buf_473,"while")&&string_operator_not_equals(buf_473,"for")&&string_operator_not_equals(buf_473,"switch")&&string_operator_not_equals(buf_473,"return")&&string_operator_not_equals(buf_473,"sizeof")&&string_operator_not_equals(buf_473,"isheap")&&string_operator_not_equals(buf_473,"ispointer")&&string_operator_not_equals(buf_473,"guard")&&string_operator_not_equals(buf_473,"__typeof__")&&string_operator_not_equals(buf_473,"dynamic_typeof")&&string_operator_not_equals(buf_473,"typeof")&&string_operator_not_equals(buf_473,"gc_inc")&&string_operator_not_equals(buf_473,"gc_dec")&&string_operator_not_equals(buf_473,"gc_dec_nofree")&&string_operator_not_equals(buf_473,"case")&&string_operator_not_equals(buf_473,"_Alignof")&&string_operator_not_equals(buf_473,"__alignof__")&&string_operator_not_equals(buf_473,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__474)) {
                                                                    node_507=(struct sNode*)come_increment_ref_count(parse_function_call(buf_473,info));
                                                                    __result300__ = gComeFunResultObject = __result_obj__ = node_507;
                                                                    if(node_507) { node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    gComeFunResultObject = (void*)0;
                                                                    return __result300__;
                                                                    if(node_507) { node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    if(string_operator_equals(buf_473,"some")&&*info->p==40) {
                                                                        __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value580=parse_some(info)));
                                                                        buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        if(__right_value580) { __right_value580 = come_decrement_ref_count2(__right_value580, ((struct sNode*)__right_value580)->finalize, ((struct sNode*)__right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        gComeFunResultObject = (void*)0;
                                                                        return __result301__;
                                                                    }
                                                                    else {
                                                                        if(string_operator_equals(buf_473,"none")&&*info->p==40) {
                                                                            __result302__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value581=parse_none(info)));
                                                                            buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            if(__right_value581) { __right_value581 = come_decrement_ref_count2(__right_value581, ((struct sNode*)__right_value581)->finalize, ((struct sNode*)__right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            gComeFunResultObject = (void*)0;
                                                                            return __result302__;
                                                                        }
                                                                        else {
                                                                            node_508=(struct sNode*)come_increment_ref_count(string_node_v21(buf_473,head_471,head_sline_472,info));
                                                                            __result303__ = gComeFunResultObject = __result_obj__ = node_508;
                                                                            if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                            buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            gComeFunResultObject = (void*)0;
                                                                            return __result303__;
                                                                            if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node_509=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
            __result304__ = gComeFunResultObject = __result_obj__ = node_509;
            if(node_509) { node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0, 1, 0, (void*)0); } 
            gComeFunResultObject = (void*)0;
            return __result304__;
            if(node_509) { node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result305__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj299;
struct sNode* __dec_obj300;
char* __dec_obj301;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj299=self->sname;
            __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        if(self->value==gComeFunResultObject) {
            __dec_obj300=self->value;
            if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(self->value_source==gComeFunResultObject) {
            __dec_obj301=self->value_source;
            __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result266__;
void* __right_value511 = (void*)0;
struct sReturnNode* result_470;
void* __right_value512 = (void*)0;
char* __dec_obj302;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj303;
void* __right_value514 = (void*)0;
char* __dec_obj304;
struct sReturnNode* __result267__;
    if(self==(void*)0) {
        __result266__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_470=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(self!=((void*)0)) {
        result_470->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj302=result_470->sname;
        result_470->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj303=result_470->value;
        result_470->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj304=result_470->value_source;
        result_470->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_470;
    /*i*/come_call_finalizer3(result_470,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj307;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj307=self->sname;
            __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result271__;
void* __right_value527 = (void*)0;
struct sFuncNode* result_484;
void* __right_value528 = (void*)0;
char* __dec_obj308;
struct sFuncNode* __result272__;
    if(self==(void*)0) {
        __result271__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_484=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(self!=((void*)0)) {
        result_484->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj308=result_484->sname;
        result_484->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_484;
    /*i*/come_call_finalizer3(result_484,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj309;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj309=self->sname;
            __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result274__;
void* __right_value532 = (void*)0;
struct sLineNode* result_485;
void* __right_value533 = (void*)0;
char* __dec_obj310;
struct sLineNode* __result275__;
    if(self==(void*)0) {
        __result274__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    result_485=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(self!=((void*)0)) {
        result_485->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj310=result_485->sname;
        result_485->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_485;
    /*i*/come_call_finalizer3(result_485,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj311;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj311=self->sname;
            __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result277__;
void* __right_value537 = (void*)0;
struct sSNameNode* result_486;
void* __right_value538 = (void*)0;
char* __dec_obj312;
struct sSNameNode* __result278__;
    if(self==(void*)0) {
        __result277__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    result_486=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(self!=((void*)0)) {
        result_486->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_486->sname;
        result_486->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_486;
    /*i*/come_call_finalizer3(result_486,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj313;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj313=self->sname;
            __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result280__;
void* __right_value542 = (void*)0;
struct sCallerFuncNode* result_487;
void* __right_value543 = (void*)0;
char* __dec_obj314;
struct sCallerFuncNode* __result281__;
    if(self==(void*)0) {
        __result280__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    result_487=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(self!=((void*)0)) {
        result_487->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj314=result_487->sname;
        result_487->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_487;
    /*i*/come_call_finalizer3(result_487,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj315;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj315=self->sname;
            __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result283__;
void* __right_value547 = (void*)0;
struct sCallerLineNode* result_488;
void* __right_value548 = (void*)0;
char* __dec_obj316;
struct sCallerLineNode* __result284__;
    if(self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_488=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(self!=((void*)0)) {
        result_488->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj316=result_488->sname;
        result_488->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_488;
    /*i*/come_call_finalizer3(result_488,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj317;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj317=self->sname;
            __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result286__;
void* __right_value552 = (void*)0;
struct sCallerSNameNode* result_489;
void* __right_value553 = (void*)0;
char* __dec_obj318;
struct sCallerSNameNode* __result287__;
    if(self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_489=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(self!=((void*)0)) {
        result_489->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_489->sname;
        result_489->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_489;
    /*i*/come_call_finalizer3(result_489,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj319;
struct sType* __dec_obj320;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj319=self->sname;
            __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj320=self->type;
            /* a*/come_call_finalizer3(__dec_obj320,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result289__;
void* __right_value558 = (void*)0;
struct sVarArgTypeName* result_493;
void* __right_value559 = (void*)0;
char* __dec_obj321;
void* __right_value560 = (void*)0;
struct sType* __dec_obj322;
struct sVarArgTypeName* __result290__;
    if(self==(void*)0) {
        __result289__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    result_493=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(self!=((void*)0)) {
        result_493->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_493->sname;
        result_493->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj322=result_493->type;
        result_493->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj322,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result290__ = gComeFunResultObject = __result_obj__ = result_493;
    /*i*/come_call_finalizer3(result_493,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_497;
unsigned int hash_498;
unsigned int it_499;
struct sType* __result293__;
struct sType* __result294__;
struct sType* __result295__;
struct sType* __result296__;
default_value_497 = (void*)0;
    memset(&default_value_497,0,sizeof(struct sType*));
    hash_498=string_get_hash_key(((char*)key))%self->size;
    it_499=hash_498;
    while((_Bool)1) {
        if(self->item_existance[it_499]) {
            if(string_equals(self->keys[it_499],key)) {
                __result293__ = gComeFunResultObject = __result_obj__ = self->items[it_499];
                /*i*/come_call_finalizer3(default_value_497,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
            it_499++;
            if(it_499>=self->size) {
                it_499=0;
            }
            else {
                if(it_499==hash_498) {
                    __result294__ = gComeFunResultObject = __result_obj__ = default_value_497;
                    /*i*/come_call_finalizer3(default_value_497,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result294__;
                }
            }
        }
        else {
            __result295__ = gComeFunResultObject = __result_obj__ = default_value_497;
            /*i*/come_call_finalizer3(default_value_497,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
    }
    __result296__ = gComeFunResultObject = __result_obj__ = default_value_497;
    /*i*/come_call_finalizer3(default_value_497,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
struct sNode* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value584=expression_node_v99(info)));
    if(__right_value584) { __right_value584 = come_decrement_ref_count2(__right_value584, ((struct sNode*)__right_value584)->finalize, ((struct sNode*)__right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* __dec_obj324;
struct sNode* __result307__;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj325;
struct sNode* __result308__;
struct sNode* __result309__;
    if(parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj324=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); }
        __result307__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    else {
        if(parsecmp("and",info)) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj325=node;
            node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
            if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); }
            __result308__ = gComeFunResultObject = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
    }
    __result309__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result309__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value589 = (void*)0;
struct sNode* node_510;
void* __right_value590 = (void*)0;
struct sNode* __dec_obj326;
struct sNode* __result310__;
    node_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj326=node_510;
    node_510=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_510),info));
    if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); }
    __result310__ = gComeFunResultObject = __result_obj__ = node_510;
    if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_511;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct buffer* buf_512;
void* __right_value593 = (void*)0;
char* __dec_obj327;
int i_513;
void* __right_value594 = (void*)0;
char* __dec_obj328;
void* __right_value595 = (void*)0;
char* __dec_obj329;
int i_514;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
char* __result311__;
struct_name_511 = (void*)0;
    buf_512=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1748, "buffer"))));
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj327=struct_name_511;
        struct_name_511=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(!obj_type->mClass->mStruct) {
            for(            i_513=0;            i_513<obj_type->mOriginalTypeNamePointerNum;            i_513++            ){
                buffer_append_str(buf_512,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj328=struct_name_511;
            struct_name_511=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
            __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj329=struct_name_511;
            struct_name_511=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
            __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
            for(            i_514=0;            i_514<obj_type->mPointerNum;            i_514++            ){
                buffer_append_str(buf_512,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_512,"a");
    }
    if(!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_512,"pa");
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value597=xsprintf("%s%s_%s",struct_name_511,((char*)(__right_value596=buffer_to_string(buf_512))),fun_name)));
    struct_name_511 = come_decrement_ref_count2(struct_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_515;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct buffer* buf_516;
void* __right_value600 = (void*)0;
char* __dec_obj330;
int i_517;
void* __right_value601 = (void*)0;
char* __dec_obj331;
void* __right_value602 = (void*)0;
char* __dec_obj332;
int i_518;
void* __right_value603 = (void*)0;
int len_520;
void* __right_value604 = (void*)0;
char* __result312__;
struct_name_515 = (void*)0;
    buf_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1783, "buffer"))));
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj330=struct_name_515;
        struct_name_515=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(!obj_type->mClass->mStruct) {
            for(            i_517=0;            i_517<obj_type->mOriginalTypeNamePointerNum;            i_517++            ){
                buffer_append_str(buf_516,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj331=struct_name_515;
            struct_name_515=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
            __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj332=struct_name_515;
            struct_name_515=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
            __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
            for(            i_518=0;            i_518<obj_type->mPointerNum;            i_518++            ){
                buffer_append_str(buf_516,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_516,"a");
    }
    if(!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_516,"pa");
    }
    char none_method_name_519[charp_length(fun_name)+1];
    memset(&none_method_name_519, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_520=string_length(struct_name_515)+string_length(((char*)(__right_value603=buffer_to_string(buf_516))));
    __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_519,fun_name+len_520+1,charp_length(fun_name)-len_520-1);
    none_method_name_519[charp_length(fun_name)-len_520-1]=0;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value604=__builtin_string(none_method_name_519)));
    struct_name_515 = come_decrement_ref_count2(struct_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
char* struct_name_521;
void* __right_value606 = (void*)0;
char* __result313__;
    struct_name_521=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value606=xsprintf("%s_%s",struct_name_521,fun_name)));
    struct_name_521 = come_decrement_ref_count2(struct_name_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result314__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result314__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_522;
char* p_523;
int sline_524;
_Bool err_flag_525;
void* __right_value609 = (void*)0;
char* label_526;
void* __right_value610 = (void*)0;
char* __dec_obj333;
char* __dec_obj334;
_Bool no_comma_527;
_Bool in_fun_param_528;
void* __right_value611 = (void*)0;
struct sNode* node_529;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj335;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* _inf_value16;
struct sLambdaCall* _inf_obj_value16;
void* __right_value621 = (void*)0;
struct sNode* __result317__;
struct sNode* __result318__;
    parse_sharp_v5(info);
    if(!node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_522=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1847, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_523=info->p;
            sline_524=info->sline;
            err_flag_525=(_Bool)0;
            label_526=(char*)come_increment_ref_count(__builtin_string(""));
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj333=label_526;
                label_526=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_525=(_Bool)1;
            }
            if(err_flag_525==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj334=label_526;
                label_526=((void*)0);
                __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_523;
                info->sline=sline_524;
            }
            no_comma_527=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_528=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_529=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj335=node_529;
            node_529=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_529),info));
            if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); }
            info->no_comma=no_comma_527;
            info->in_fun_param=in_fun_param_528;
            list$1tuple2$2charphsNodephph_push_back(params_522,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1890, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_526),(struct sNode*)come_increment_ref_count(node_529))));
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_526 = come_decrement_ref_count2(label_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_526 = come_decrement_ref_count2(label_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1908, "struct sNode");
        _inf_obj_value16=come_increment_ref_count(((struct sLambdaCall*)(__right_value616=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 1908, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_522,info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sLambdaCall_finalize;
        _inf_value16->clone=(void*)sLambdaCall_clone;
        _inf_value16->compile=(void*)sLambdaCall_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sLambdaCall_kind;
        __result317__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=_inf_value16));
        /*i*/come_call_finalizer3(params_522,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value616,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result317__;
        /*i*/come_call_finalizer3(params_522,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result318__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj336;
struct sNode* __dec_obj337;
struct list$1tuple2$2charphsNodephph* __dec_obj338;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj336=self->sname;
            __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj337=self->node;
            if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        if(self->params==gComeFunResultObject) {
            __dec_obj338=self->params;
            /* a*/come_call_finalizer3(__dec_obj338,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result315__;
void* __right_value617 = (void*)0;
struct sLambdaCall* result_530;
void* __right_value618 = (void*)0;
char* __dec_obj339;
void* __right_value619 = (void*)0;
struct sNode* __dec_obj340;
void* __right_value620 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj341;
struct sLambdaCall* __result316__;
    if(self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_530=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(self!=((void*)0)) {
        result_530->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_530->sname;
        result_530->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj340=result_530->node;
        result_530->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj341=result_530->params;
        result_530->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        /* a*/come_call_finalizer3(__dec_obj341,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_530;
    /*i*/come_call_finalizer3(result_530,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

