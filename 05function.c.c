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
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
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
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
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
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
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
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
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
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
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
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
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
    __right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_64;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* result_type_65;
void* __right_value122 = (void*)0;
int block_level_66;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value125 = (void*)0;
char* __dec_obj18;
void* __right_value160 = (void*)0;
struct sType* __dec_obj60;
_Bool __result88__;
    come_fun_64=info->come_fun;
    info->come_fun=self->mFun;
    result_type_65=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(!gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_65,"__result_obj__",(_Bool)0,info))));
        __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_66=info->block_level;
    info->block_level=0;
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_66;
    come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj60=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    /* a*/come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    info->come_fun=come_fun_64;
    __result88__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_65,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value126 = (void*)0;
struct sType* result_68;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value130 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value131 = (void*)0;
char* __dec_obj41;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __dec_obj45;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __dec_obj49;
void* __right_value147 = (void*)0;
struct list$1sTypeph* __dec_obj50;
void* __right_value154 = (void*)0;
struct list$1charph* __dec_obj54;
void* __right_value155 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value156 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj57;
void* __right_value158 = (void*)0;
char* __dec_obj58;
void* __right_value159 = (void*)0;
char* __dec_obj59;
struct sType* __result86__;
    if(self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_68=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_68->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj39=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj40=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj41=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj45=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj49=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj49,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj50=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj54=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj54,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj55=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj56=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_68->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_68->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_68->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_68->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_68->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_68->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_68->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_68->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_68->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_68->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_68->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_68->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_68->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_68->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_68->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_68->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_68->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_68->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_68->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_68->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_68->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_68->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_68->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_68->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj57=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_68->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_68->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj58=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_68->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_68->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_68->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_68->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_68->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_68->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_68->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj59=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_68->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_68->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_68->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_68->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_68->mOriginIsArray=self->mOriginIsArray;
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* result_69;
void* __right_value128 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result71__;
    if(self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_69=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_69->v1;
        result_69->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(result_69,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj20=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj22=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj24=self->mGenericsName;
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj25=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj27=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj29=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj30=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj32=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj34=self->mAlignas;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj35=self->mSizeNum;
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj36=self->mOriginalTypeName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj37=self->mAsmName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj26;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            /* a*/come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj28;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
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
char* __dec_obj31;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj33;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj33=self->v1;
            /* a*/come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj38;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            /* a*/come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list$1sTypeph* result_82;
struct list_item$1sTypeph* it_83;
void* __right_value137 = (void*)0;
struct list$1sTypeph* __result75__;
    if(self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_82=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
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
void* __right_value134 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj42;
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj43;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj44;
struct list$1sTypeph* __result74__;
    if(self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj42=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else {
        if(self->len==1) {
            litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_85->prev=self->head;
            litem_85->next=((void*)0);
            __dec_obj43=litem_85->item;
            litem_85->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_85;
            self->head->next=litem_85;
        }
        else {
            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_86->prev=self->tail;
            litem_86->next=((void*)0);
            __dec_obj44=litem_86->item;
            litem_86->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_86;
            self->tail=litem_86;
        }
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
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
void* __right_value145 = (void*)0;
struct list$1sNodeph* __result81__;
    if(self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_87=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
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
void* __right_value141 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj46;
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj47;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj48;
struct list$1sNodeph* __result78__;
    if(self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value141=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj46=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_89;
        self->head=litem_89;
    }
    else {
        if(self->len==1) {
            litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_90->prev=self->head;
            litem_90->next=((void*)0);
            __dec_obj47=litem_90->item;
            litem_90->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_90;
            self->head->next=litem_90;
        }
        else {
            litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_91->prev=self->tail;
            litem_91->next=((void*)0);
            __dec_obj48=litem_91->item;
            litem_91->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_91;
            self->tail=litem_91;
        }
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
struct sNode* result_92;
struct sNode* __result80__;
    if(self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_92=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_92->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_92->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_92->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_92->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_92->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_92->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_92->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
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
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
void* __right_value153 = (void*)0;
struct list$1charph* __result85__;
    if(self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_93=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
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
void* __right_value150 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj51;
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj52;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj53;
struct list$1charph* __result84__;
    if(self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value150=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj51=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj52=litem_96->item;
            litem_96->item=(char*)come_increment_ref_count(item);
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj53=litem_97->item;
            litem_97->item=(char*)come_increment_ref_count(item);
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_97;
            self->tail=litem_97;
        }
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
struct list_item$1CVALUEph* litem_98;
struct CVALUE* __dec_obj61;
void* __right_value162 = (void*)0;
struct list_item$1CVALUEph* litem_99;
struct CVALUE* __dec_obj65;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj66;
struct list$1CVALUEph* __result87__;
    if(self->len==0) {
        litem_98=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value161=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj61=litem_98->item;
        litem_98->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else {
        if(self->len==1) {
            litem_99=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_99->prev=self->head;
            litem_99->next=((void*)0);
            __dec_obj65=litem_99->item;
            litem_99->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_99;
            self->head->next=litem_99;
        }
        else {
            litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_100->prev=self->tail;
            litem_100->next=((void*)0);
            __dec_obj66=litem_100->item;
            litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj66,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_100;
            self->tail=litem_100;
        }
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj62;
struct sType* __dec_obj63;
char* __dec_obj64;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj62=self->c_value;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj63=self->type;
            /* a*/come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj64=self->c_value_without_right_value_objects;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value164 = (void*)0;
struct sFun* __dec_obj67;
struct sFunNode* __result89__;
    ((struct sNodeBase*)(__right_value164=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value164,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj67=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /* a*/come_call_finalizer3(__dec_obj67,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("sFunNode")));
    __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_101;
char* come_fun_name_102;
void* __right_value166 = (void*)0;
char* __dec_obj85;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct sType* result_type_103;
void* __right_value169 = (void*)0;
int block_level_104;
void* __right_value170 = (void*)0;
char* __dec_obj86;
_Bool __result91__;
    come_fun_101=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_102=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj85=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(self->mFun->mBlock) {
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_103=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(!gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value169=make_define_var(result_type_103,"__result_obj__",(_Bool)0,info))));
            __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_104=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        info->block_level=block_level_104;
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value170=xsprintf("come_heap_final();\n"))));
            __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_101;
    __dec_obj86=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_102);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    come_fun_name_102 = come_decrement_ref_count2(come_fun_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj68;
struct sType* __dec_obj69;
struct list$1sTypeph* __dec_obj70;
struct list$1charph* __dec_obj71;
struct list$1charph* __dec_obj72;
struct sType* __dec_obj73;
struct sBlock* __dec_obj74;
struct buffer* __dec_obj77;
struct buffer* __dec_obj78;
struct buffer* __dec_obj79;
struct buffer* __dec_obj80;
char* __dec_obj81;
char* __dec_obj82;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj68=self->mName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj69=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj70=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj71=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj72=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj73=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj74=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj74,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj77=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj77,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj78=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj78,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj79=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj79,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj80=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj81=self->mComeHeader;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj82=self->mDeclareSName;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj75;
struct sVarTable* __dec_obj76;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj75=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj75,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj76=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj76,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1sNodeph* __dec_obj87;
struct sBlock* __result92__;
    __dec_obj87=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 128, "list$1sNodeph"))));
    /* a*/come_call_finalizer3(__dec_obj87,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value173 = (void*)0;
struct sType* __dec_obj88;
void* __right_value174 = (void*)0;
struct list$1charph* __dec_obj89;
void* __right_value175 = (void*)0;
struct list$1charph* __dec_obj90;
char* __dec_obj91;
struct sType* __dec_obj92;
struct list$1sTypeph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct list$1charph* __dec_obj95;
char* __dec_obj96;
void* __right_value176 = (void*)0;
char* __dec_obj97;
struct sGenericsFun* __result93__;
    __dec_obj88=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    /* a*/come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj89=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    /* a*/come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj90=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    /* a*/come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj92=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    /* a*/come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    /* a*/come_call_finalizer3(__dec_obj93,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    /* a*/come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj95=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    /* a*/come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj96=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj97=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
char* __dec_obj101;
struct sType* __dec_obj102;
struct list$1sTypeph* __dec_obj103;
struct list$1charph* __dec_obj104;
struct list$1charph* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj98=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj99=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj100=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj101=self->mName;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj102=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj103=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj103,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj104=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj105=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj106=self->mBlock;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj107=self->mGenericsSName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct sBlock* result_105;
int block_level_106;
char* p_107;
int sline_108;
char* sname_109;
void* __right_value179 = (void*)0;
struct sNode* node_110;
void* __right_value180 = (void*)0;
char* __dec_obj108;
_Bool omit_semicolon_114;
void* __right_value184 = (void*)0;
char* __dec_obj112;
char* head_129;
void* __right_value185 = (void*)0;
struct sNode* value_130;
char* tail_131;
void* __right_value186 = (void*)0;
struct sNode* __dec_obj113;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sNode* node_133;
struct sNode* node_134;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value193 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value194 = (void*)0;
struct sNode* __dec_obj117;
char* p_136;
char* head_137;
void* __right_value195 = (void*)0;
char* source_138;
void* __right_value196 = (void*)0;
struct sNode* node_139;
struct sBlock* __result100__;
node_134 = (void*)0;
    result_105=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 158, "sBlock")),info));
    block_level_106=info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    if(*info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_107=info->p;
            sline_108=info->sline;
            sname_109=info->sname;
            node_110=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj108=info->sname;
            info->sname=(char*)come_increment_ref_count(node_110->sname(node_110->_protocol_obj));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_110->sline(node_110->_protocol_obj);
            if(node_110==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_110));
            parse_sharp_v5(info);
            if(node_110->terminated(node_110->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_114=(_Bool)1;
            if(node_110->terminated(node_110->_protocol_obj)) {
                omit_semicolon_114=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_114=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
                if(omit_semicolon_114&&in_function) {
                    list$1sNodeph_delete(result_105->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_107;
                    info->sline=sline_108;
                    __dec_obj112=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_109));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_129=info->p;
                    value_130=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_131=info->p;
                    __dec_obj113=value_130;
                    value_130=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_130),info));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                    char buf_132[tail_131-head_129+1];
                    memset(&buf_132, 0, sizeof(char)                    *(tail_131-head_129+1)                    );
                    memcpy(buf_132,head_129,tail_131-head_129);
                    buf_132[tail_131-head_129]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_133=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_130),(char*)come_increment_ref_count(__builtin_string(buf_132)),info));
                    list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_133));
                    if(value_130) { value_130 = come_decrement_ref_count2(value_130, ((struct sNode*)value_130)->finalize, ((struct sNode*)value_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_133) { node_133 = come_decrement_ref_count2(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_110) { node_110 = come_decrement_ref_count2(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_130) { value_130 = come_decrement_ref_count2(value_130, ((struct sNode*)value_130)->finalize, ((struct sNode*)value_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_133) { node_133 = come_decrement_ref_count2(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_110) { node_110 = come_decrement_ref_count2(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_110) { node_110 = come_decrement_ref_count2(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 262, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value190=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 262, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj116=node_134;
            node_134=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
            /*g*/come_call_finalizer3(__right_value190,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj117=node_134;
            node_134=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
            parse_sharp_v5(info);
            if(node_134==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            if(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_134));
        if(node_134) { node_134 = come_decrement_ref_count2(node_134, ((struct sNode*)node_134)->finalize, ((struct sNode*)node_134)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_136=info->p;
        head_137=info->head;
        source_138=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_138;
        info->head=source_138;
        node_139=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(node_139==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_139));
        info->p=p_136;
        info->head=head_137;
        source_138 = come_decrement_ref_count2(source_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_106;
    __result100__ = gComeFunResultObject = __result_obj__ = result_105;
    /*i*/come_call_finalizer3(result_105,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value181 = (void*)0;
struct list_item$1sNodeph* litem_111;
struct sNode* __dec_obj109;
void* __right_value182 = (void*)0;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj110;
void* __right_value183 = (void*)0;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj111;
struct list$1sNodeph* __result94__;
    if(self->len==0) {
        litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value181=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj109=litem_111->item;
        litem_111->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_111;
        self->head=litem_111;
    }
    else {
        if(self->len==1) {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value182=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
            litem_112->prev=self->head;
            litem_112->next=((void*)0);
            __dec_obj110=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_112;
            self->head->next=litem_112;
        }
        else {
            litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value183=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
            litem_113->prev=self->tail;
            litem_113->next=((void*)0);
            __dec_obj111=litem_113->item;
            litem_113->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_113;
            self->tail=litem_113;
        }
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_115;
struct list$1sNodeph* __result95__;
struct list_item$1sNodeph* it_118;
int i_119;
struct list_item$1sNodeph* prev_it_120;
struct list_item$1sNodeph* it_121;
int i_122;
struct list_item$1sNodeph* prev_it_123;
struct list_item$1sNodeph* it_124;
struct list_item$1sNodeph* head_prev_it_125;
struct list_item$1sNodeph* tail_it_126;
int i_127;
struct list_item$1sNodeph* prev_it_128;
struct list$1sNodeph* __result97__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_115=tail;
        tail=head;
        head=tmp_115;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    if(head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else {
        if(head==0) {
            it_118=self->head;
            i_119=0;
            while(it_118!=((void*)0)) {
                if(i_119<tail) {
                    prev_it_120=it_118;
                    it_118=it_118->next;
                    i_119++;
                    /*i*/come_call_finalizer3(prev_it_120,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_119==tail) {
                        self->head=it_118;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_118=it_118->next;
                        i_119++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_121=self->head;
                i_122=0;
                while(it_121!=((void*)0)) {
                    if(i_122==head) {
                        self->tail=it_121->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_122>=head) {
                        prev_it_123=it_121;
                        it_121=it_121->next;
                        i_122++;
                        /*i*/come_call_finalizer3(prev_it_123,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_121=it_121->next;
                        i_122++;
                    }
                }
            }
            else {
                it_124=self->head;
                head_prev_it_125=((void*)0);
                tail_it_126=((void*)0);
                i_127=0;
                while(it_124!=((void*)0)) {
                    if(i_127==head) {
                        head_prev_it_125=it_124->prev;
                    }
                    if(i_127==tail) {
                        tail_it_126=it_124;
                    }
                    if(i_127>=head&&i_127<tail) {
                        prev_it_128=it_124;
                        it_124=it_124->next;
                        i_127++;
                        /*i*/come_call_finalizer3(prev_it_128,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_124=it_124->next;
                        i_127++;
                    }
                }
                if(head_prev_it_125!=((void*)0)) {
                    head_prev_it_125->next=tail_it_126;
                }
                if(tail_it_126!=((void*)0)) {
                    tail_it_126->prev=head_prev_it_125;
                }
            }
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_116;
struct list_item$1sNodeph* prev_it_117;
struct list$1sNodeph* __result96__;
    it_116=self->head;
    while(it_116!=((void*)0)) {
        prev_it_117=it_116;
        it_116=it_116->next;
        /*i*/come_call_finalizer3(prev_it_117,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj114;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj114=self->sname;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result98__;
void* __right_value191 = (void*)0;
struct sSemicolonNode* result_135;
void* __right_value192 = (void*)0;
char* __dec_obj115;
struct sSemicolonNode* __result99__;
    if(self==(void*)0) {
        __result98__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    result_135=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(self!=((void*)0)) {
        result_135->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_135->sname;
        result_135->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_135;
    /*i*/come_call_finalizer3(result_135,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
_Bool inhibits_output_code_140;
struct sVarTable* old_table_141;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct sVarTable* __dec_obj118;
struct sVarTable* current_loop_vtable_142;
struct list$1sTypeph* param_types__143;
struct list$1charph* param_names__144;
int i_145;
struct list$1charph* o2_saved_146;
char* name_149;
void* __right_value199 = (void*)0;
struct sType* type_152;
void* __right_value200 = (void*)0;
int block_level_156;
int i_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* node_161;
struct list$1sRightValueObjectph* right_value_objects_164;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
int stack_num_before_169;
int sline_170;
void* __right_value203 = (void*)0;
char* sname_171;
void* __right_value204 = (void*)0;
char* __dec_obj127;
void* __right_value205 = (void*)0;
char* __dec_obj128;
struct list$1sRightValueObjectph* __dec_obj129;
memset(&i_145, 0, sizeof(int));
memset(&i_157, 0, sizeof(int));
    if(info->output_header_file) {
        return 0;
    }
    inhibits_output_code_140=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_141=info->lv_table;
    if(!no_var_table) {
        __dec_obj118=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 320, "sVarTable")),(_Bool)0,old_table_141));
        /* a*/come_call_finalizer3(__dec_obj118,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_142=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__143=info->param_types;
    param_names__144=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(        o2_saved_146=(param_names),name_149=list$1charph_begin((o2_saved_146));        !list$1charph_end((o2_saved_146));        name_149=list$1charph_next((o2_saved_146))        ){
            type_152=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_145), "05function.c", 338, 0))));
            type_152->mFunctionParam=(_Bool)1;
            type_152->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_149,(struct sType*)come_increment_ref_count(sType_clone(type_152)),info);
            i_145++;
            /*i*/come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_156=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_158=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_161=list$1sNodeph_begin((o2_saved_158));        !list$1sNodeph_end((o2_saved_158));        node_161=list$1sNodeph_next((o2_saved_158))        ){
            right_value_objects_164=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj123=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 357, "list$1sRightValueObjectph"))));
            /* a*/come_call_finalizer3(__dec_obj123,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj124=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj125=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_169=list$1CVALUEph_length(info->stack);
            sline_170=info->sline;
            sname_171=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_161->sline(node_161->_protocol_obj);
            __dec_obj127=info->sname;
            info->sname=(char*)come_increment_ref_count(node_161->sname(node_161->_protocol_obj));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_161,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_170;
            __dec_obj128=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_171));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_169);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj129=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_164);
            /* a*/come_call_finalizer3(__dec_obj129,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_objects_164,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_171 = come_decrement_ref_count2(sname_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_158,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_141;
    info->block_level=block_level_156;
    info->param_types=param_types__143;
    info->param_names=param_names__144;
    if(string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_142;
    info->inhibits_output_code=inhibits_output_code_140;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_147;
char* __result101__;
char* __result102__;
char* result_148;
char* __result103__;
result_147 = (void*)0;
result_148 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_147,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_147;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->head;
    if(self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_148,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_148;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_150;
char* __result104__;
char* __result105__;
char* result_151;
char* __result106__;
result_150 = (void*)0;
result_151 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_150,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_150;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_151,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_151;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_153;
int i_154;
struct sType* __result107__;
struct sType* default_value_155;
struct sType* __result108__;
default_value_155 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_153=self->head;
    i_154=0;
    while(it_153!=((void*)0)) {
        if(position==i_154) {
            __result107__ = gComeFunResultObject = __result_obj__ = it_153->item;
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
        it_153=it_153->next;
        i_154++;
    }
    memset(&default_value_155,0,sizeof(struct sType*));
    __result108__ = gComeFunResultObject = __result_obj__ = default_value_155;
    /*i*/come_call_finalizer3(default_value_155,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_159;
struct sNode* __result109__;
struct sNode* __result110__;
struct sNode* result_160;
struct sNode* __result111__;
result_159 = (void*)0;
result_160 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_159,0,sizeof(struct sNode*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_159;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->it=self->head;
    if(self->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_160,0,sizeof(struct sNode*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_160;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_162;
struct sNode* __result112__;
struct sNode* __result113__;
struct sNode* result_163;
struct sNode* __result114__;
result_162 = (void*)0;
result_163 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_162,0,sizeof(struct sNode*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_162;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_163,0,sizeof(struct sNode*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_165;
struct list_item$1sRightValueObjectph* prev_it_166;
    it_165=self->head;
    while(it_165!=((void*)0)) {
        prev_it_166=it_165;
        it_165=it_165->next;
        /*i*/come_call_finalizer3(prev_it_166,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj119;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj119=self->item;
            /* a*/come_call_finalizer3(__dec_obj119,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj120=self->mType;
            /* a*/come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj121=self->mVarName;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj122=self->mFunName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_167;
struct list_item$1sRightValueObjectph* prev_it_168;
    it_167=self->head;
    while(it_167!=((void*)0)) {
        prev_it_168=it_167;
        it_167=it_167->next;
        /*i*/come_call_finalizer3(prev_it_168,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_172;
struct list_item$1sRightValueObjectph* prev_it_173;
struct list$1sRightValueObjectph* __result116__;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*i*/come_call_finalizer3(prev_it_173,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

void arrange_stack(struct sInfo* info, int top){
    if(list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
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
char* head_174;
_Bool dquort_175;
_Bool squort_176;
int sline_177;
int nest_178;
char* tail_179;
void* __right_value206 = (void*)0;
char* buf_180;
void* __right_value207 = (void*)0;
char* __result117__;
    head_174=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_175=(_Bool)0;
        squort_176=(_Bool)0;
        sline_177=0;
        nest_178=0;
        while(1) {
            if(dquort_175) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_177);
                        exit(2);
                    }
                    if(*info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        info->p++;
                        dquort_175=!dquort_175;
                    }
                    else {
                        if(*info->p==10) {
                            info->p++;
                            info->sline++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_177);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_177);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_176) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_177);
                            exit(2);
                        }
                        if(*info->p==10) {
                            info->sline++;
                        }
                        info->p++;
                    }
                    else {
                        if(*info->p==39) {
                            info->p++;
                            squort_176=!squort_176;
                        }
                        else {
                            if(*info->p==10) {
                                info->p++;
                                info->sline++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_177);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_177);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_177=info->sline;
                        info->p++;
                        squort_176=!squort_176;
                    }
                    else {
                        if(*info->p==34) {
                            sline_177=info->sline;
                            info->p++;
                            dquort_175=!dquort_175;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_178++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_178==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_178--;
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_179=info->p;
    buf_180=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_179-head_174+1)), "05function.c", 567, "char"));
    memcpy(buf_180,head_174,tail_179-head_174);
    buf_180[tail_179-head_174]=0;
    __result117__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=__builtin_string(buf_180)));
    buf_180 = come_decrement_ref_count2(buf_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_181;
char* p3_182;
int i_183;
    terminated_181=(_Bool)0;
    p3_182=p;
    for(    i_183=0;    i_183<strlen(p2);    i_183++    ){
        if(*p3_182==0) {
            terminated_181=(_Bool)1;
            break;
        }
        p3_182++;
    }
    return !terminated_181&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct buffer* asm_fun_name_184;
int brace_num_185;
int len_186;
_Bool in_dquort_187;
int brace_num_188;
int brace_num_189;
void* __right_value210 = (void*)0;
char* __result118__;
    asm_fun_name_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 590, "buffer"))));
    while((_Bool)1) {
        if(strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(strmemcmp(info->p,"__attribute_malloc__")) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(strmemcmp(info->p,"__attr_dealloc_fclose")) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(strmemcmp(info->p,"__wur")) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(strmemcmp(info->p,"__noreturn")) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(strmemcmp(info->p,"__attribute__")) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_185=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_185++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_185--;
                                            if(brace_num_185==0) {
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
                            else {
                                if(strmemcmp(info->p,"__asm__")) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_186=0;
                                    in_dquort_187=(_Bool)0;
                                    brace_num_188=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_187=!in_dquort_187;
                                        }
                                        else {
                                            if(in_dquort_187) {
                                                buffer_append_char(asm_fun_name_184,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_188++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_188--;
                                                        if(brace_num_188==0) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(strmemcmp(info->p,"__asm")) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_189=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_189++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_189--;
                                                    if(brace_num_189==0) {
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
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=buffer_to_string(asm_fun_name_184)));
    /*i*/come_call_finalizer3(asm_fun_name_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_190;
int head_sline_191;
void* __right_value211 = (void*)0;
char* buf_192;
void* __right_value212 = (void*)0;
struct sNode* node_193;
    while(*info->p) {
        parse_sharp_v5(info);
        head_190=info->p;
        head_sline_191=info->sline;
        buf_192=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_192 = come_decrement_ref_count2(buf_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_193=(struct sNode*)come_increment_ref_count(top_level_v99(buf_192,head_190,head_sline_191,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_193!=((void*)0)) {
            if(!node_compile(node_193,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_192 = come_decrement_ref_count2(buf_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_192 = come_decrement_ref_count2(buf_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value213 = (void*)0;
char* name_194;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sType* result_type_195;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sType* __list_values1___196[5];
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1sTypeph* param_types_201;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
char* __list_values2___202[5];
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct list$1charph* param_names_207;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1charph* param_default_parametors_208;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sFun* main_fun_209;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* name_251;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* result_type_252;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sType* __list_values3___253[1];
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sTypeph* param_types_254;
void* __right_value261 = (void*)0;
char* __list_values4___255[1];
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1charph* param_names_256;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1charph* param_default_parametors_257;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sFun* main_fun_258;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
char* name_259;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* result_type_260;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sType* __list_values5___261[7];
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1sTypeph* param_types_262;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __list_values6___263[7];
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1charph* param_names_264;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* param_default_parametors_265;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sFun* main_fun_266;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* name_267;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sType* result_type_268;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* __list_values7___269[5];
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1sTypeph* param_types_270;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __list_values8___271[5];
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1charph* param_names_272;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1charph* param_default_parametors_273;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sFun* main_fun_274;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* name_275;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sType* result_type_276;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __list_values9___277[1];
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1sTypeph* param_types_278;
void* __right_value342 = (void*)0;
char* __list_values10___279[1];
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1charph* param_names_280;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1charph* param_default_parametors_281;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sFun* main_fun_282;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* name_283;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* result_type_284;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __list_values11___285[4];
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct list$1sTypeph* param_types_286;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* __list_values12___287[4];
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct list$1charph* param_names_288;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1charph* param_default_parametors_289;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sFun* main_fun_290;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
char* name_291;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sType* result_type_292;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __list_values13___293[3];
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1sTypeph* param_types_294;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
char* __list_values14___295[3];
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct list$1charph* param_names_296;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1charph* param_default_parametors_297;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sFun* main_fun_298;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* name_299;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sType* result_type_300;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* __list_values15___301[1];
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1sTypeph* param_types_302;
void* __right_value411 = (void*)0;
char* __list_values16___303[1];
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1charph* param_names_304;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct list$1charph* param_default_parametors_305;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sFun* main_fun_306;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* name_307;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* result_type_308;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sType* __list_values17___309[3];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sTypeph* param_types_310;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
char* __list_values18___311[3];
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1charph* param_names_312;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* param_default_parametors_313;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sFun* main_fun_314;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* name_315;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* result_type_316;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1sTypeph* param_types_317;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct list$1charph* param_names_318;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* param_default_parametors_319;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sFun* main_fun_320;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* name_321;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* result_type_322;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sType* __list_values19___323[4];
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1sTypeph* param_types_324;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* __list_values20___325[4];
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1charph* param_names_326;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1charph* param_default_parametors_327;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sFun* main_fun_328;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
char* name_329;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* result_type_330;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1sTypeph* param_types_331;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1charph* param_names_332;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1charph* param_default_parametors_333;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sFun* fun_334;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* name_335;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* result_type_336;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1sTypeph* param_types_337;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1charph* param_names_338;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct list$1charph* param_default_parametors_339;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sFun* fun_340;
void* __right_value511 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_194=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_195=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"void*",(_Bool)0,info));
        {__list_values1___196[0]=come_increment_ref_count(((struct sType*)(__right_value217=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"int",(_Bool)0,info))));
__list_values1___196[1]=come_increment_ref_count(((struct sType*)(__right_value219=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"int",(_Bool)0,info))));
__list_values1___196[2]=come_increment_ref_count(((struct sType*)(__right_value221=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"char*",(_Bool)0,info))));
__list_values1___196[3]=come_increment_ref_count(((struct sType*)(__right_value223=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"int",(_Bool)0,info))));
__list_values1___196[4]=come_increment_ref_count(((struct sType*)(__right_value225=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"char*",(_Bool)0,info))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 760, "struct list$1sTypeph")),5,__list_values1___196));
        /*g*/come_call_finalizer3(__right_value217,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value219,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value221,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value223,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value225,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___202[0]=come_increment_ref_count(((char*)(__right_value231=__builtin_string("count"))));
__list_values2___202[1]=come_increment_ref_count(((char*)(__right_value232=__builtin_string("size"))));
__list_values2___202[2]=come_increment_ref_count(((char*)(__right_value233=__builtin_string("sname"))));
__list_values2___202[3]=come_increment_ref_count(((char*)(__right_value234=__builtin_string("sline"))));
__list_values2___202[4]=come_increment_ref_count(((char*)(__right_value235=__builtin_string("class_name"))));
}        param_names_207=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 761, "struct list$1charph")),5,__list_values2___202));
        __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_208=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 762, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_208,((void*)0));
        list$1charph_push_back(param_default_parametors_208,((void*)0));
        list$1charph_push_back(param_default_parametors_208,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_208,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_208,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_209=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 768, "sFun")),(char*)come_increment_ref_count(name_194),(struct sType*)come_increment_ref_count(result_type_195),(struct list$1sTypeph*)come_increment_ref_count(param_types_201),(struct list$1charph*)come_increment_ref_count(param_names_207),(struct list$1charph*)come_increment_ref_count(param_default_parametors_208),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_194)),(struct sFun*)come_increment_ref_count(main_fun_209));
        name_194 = come_decrement_ref_count2(name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_201,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_207,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_209,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_251=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 779, "sType")),"void*",(_Bool)0,info));
        {__list_values3___253[0]=come_increment_ref_count(((struct sType*)(__right_value258=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")),"void*",(_Bool)0,info))));
}        param_types_254=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 780, "struct list$1sTypeph")),1,__list_values3___253));
        /*g*/come_call_finalizer3(__right_value258,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___255[0]=come_increment_ref_count(((char*)(__right_value261=__builtin_string("mem"))));
}        param_names_256=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 781, "struct list$1charph")),1,__list_values4___255));
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_257=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 782, "list$1charph"))));
        main_fun_258=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 783, "sFun")),(char*)come_increment_ref_count(name_251),(struct sType*)come_increment_ref_count(result_type_252),(struct list$1sTypeph*)come_increment_ref_count(param_types_254),(struct list$1charph*)come_increment_ref_count(param_names_256),(struct list$1charph*)come_increment_ref_count(param_default_parametors_257),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_251)),(struct sFun*)come_increment_ref_count(main_fun_258));
        name_251 = come_decrement_ref_count2(name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_254,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_256,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_257,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_258,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_259=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_260=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 794, "sType")),"void",(_Bool)0,info));
        {__list_values5___261[0]=come_increment_ref_count(((struct sType*)(__right_value275=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[1]=come_increment_ref_count(((struct sType*)(__right_value277=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[2]=come_increment_ref_count(((struct sType*)(__right_value279=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[3]=come_increment_ref_count(((struct sType*)(__right_value281=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[4]=come_increment_ref_count(((struct sType*)(__right_value283=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"int",(_Bool)0,info))));
__list_values5___261[5]=come_increment_ref_count(((struct sType*)(__right_value285=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"int",(_Bool)0,info))));
__list_values5___261[6]=come_increment_ref_count(((struct sType*)(__right_value287=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"int",(_Bool)0,info))));
}        param_types_262=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 795, "struct list$1sTypeph")),7,__list_values5___261));
        /*g*/come_call_finalizer3(__right_value275,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value277,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value279,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value281,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value283,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value285,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value287,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___263[0]=come_increment_ref_count(((char*)(__right_value290=__builtin_string("fun"))));
__list_values6___263[1]=come_increment_ref_count(((char*)(__right_value291=__builtin_string("mem"))));
__list_values6___263[2]=come_increment_ref_count(((char*)(__right_value292=__builtin_string("protocol_fun"))));
__list_values6___263[3]=come_increment_ref_count(((char*)(__right_value293=__builtin_string("protocol_obj"))));
__list_values6___263[4]=come_increment_ref_count(((char*)(__right_value294=__builtin_string("call_finalizer_only"))));
__list_values6___263[5]=come_increment_ref_count(((char*)(__right_value295=__builtin_string("no_decrement"))));
__list_values6___263[6]=come_increment_ref_count(((char*)(__right_value296=__builtin_string("no_free"))));
}        param_names_264=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 796, "struct list$1charph")),7,__list_values6___263));
        __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_265=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 797, "list$1charph"))));
        main_fun_266=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 798, "sFun")),(char*)come_increment_ref_count(name_259),(struct sType*)come_increment_ref_count(result_type_260),(struct list$1sTypeph*)come_increment_ref_count(param_types_262),(struct list$1charph*)come_increment_ref_count(param_names_264),(struct list$1charph*)come_increment_ref_count(param_default_parametors_265),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_259)),(struct sFun*)come_increment_ref_count(main_fun_266));
        name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_260,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_262,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_264,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_266,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_267=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_268=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 809, "sType")),"void*",(_Bool)0,info));
        {__list_values7___269[0]=come_increment_ref_count(((struct sType*)(__right_value310=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"void*",(_Bool)0,info))));
__list_values7___269[1]=come_increment_ref_count(((struct sType*)(__right_value312=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"void*",(_Bool)0,info))));
__list_values7___269[2]=come_increment_ref_count(((struct sType*)(__right_value314=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"void*",(_Bool)0,info))));
__list_values7___269[3]=come_increment_ref_count(((struct sType*)(__right_value316=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"bool",(_Bool)0,info))));
__list_values7___269[4]=come_increment_ref_count(((struct sType*)(__right_value318=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"bool",(_Bool)0,info))));
}        param_types_270=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 810, "struct list$1sTypeph")),5,__list_values7___269));
        /*g*/come_call_finalizer3(__right_value310,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value312,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value314,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___271[0]=come_increment_ref_count(((char*)(__right_value321=__builtin_string("mem"))));
__list_values8___271[1]=come_increment_ref_count(((char*)(__right_value322=__builtin_string("protocol_fun"))));
__list_values8___271[2]=come_increment_ref_count(((char*)(__right_value323=__builtin_string("protocol_obj"))));
__list_values8___271[3]=come_increment_ref_count(((char*)(__right_value324=__builtin_string("no_decrement"))));
__list_values8___271[4]=come_increment_ref_count(((char*)(__right_value325=__builtin_string("no_free"))));
}        param_names_272=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 811, "struct list$1charph")),5,__list_values8___271));
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_273=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 812, "list$1charph"))));
        main_fun_274=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 813, "sFun")),(char*)come_increment_ref_count(name_267),(struct sType*)come_increment_ref_count(result_type_268),(struct list$1sTypeph*)come_increment_ref_count(param_types_270),(struct list$1charph*)come_increment_ref_count(param_names_272),(struct list$1charph*)come_increment_ref_count(param_default_parametors_273),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_267)),(struct sFun*)come_increment_ref_count(main_fun_274));
        name_267 = come_decrement_ref_count2(name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_270,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_272,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_273,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_274,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_275=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_276=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 824, "sType")),"void",(_Bool)0,info));
        {__list_values9___277[0]=come_increment_ref_count(((struct sType*)(__right_value339=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 825, "sType")),"void*",(_Bool)0,info))));
}        param_types_278=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 825, "struct list$1sTypeph")),1,__list_values9___277));
        /*g*/come_call_finalizer3(__right_value339,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___279[0]=come_increment_ref_count(((char*)(__right_value342=__builtin_string("mem"))));
}        param_names_280=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 826, "struct list$1charph")),1,__list_values10___279));
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_281=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 827, "list$1charph"))));
        main_fun_282=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 828, "sFun")),(char*)come_increment_ref_count(name_275),(struct sType*)come_increment_ref_count(result_type_276),(struct list$1sTypeph*)come_increment_ref_count(param_types_278),(struct list$1charph*)come_increment_ref_count(param_names_280),(struct list$1charph*)come_increment_ref_count(param_default_parametors_281),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_275)),(struct sFun*)come_increment_ref_count(main_fun_282));
        name_275 = come_decrement_ref_count2(name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_276,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_278,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_280,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_281,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_282,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_283=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_284=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"void*",(_Bool)0,info));
        {__list_values11___285[0]=come_increment_ref_count(((struct sType*)(__right_value356=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"void*",(_Bool)0,info))));
__list_values11___285[1]=come_increment_ref_count(((struct sType*)(__right_value358=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"char*",(_Bool)0,info))));
__list_values11___285[2]=come_increment_ref_count(((struct sType*)(__right_value360=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"int",(_Bool)0,info))));
__list_values11___285[3]=come_increment_ref_count(((struct sType*)(__right_value362=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"char*",(_Bool)0,info))));
}        param_types_286=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 840, "struct list$1sTypeph")),4,__list_values11___285));
        /*g*/come_call_finalizer3(__right_value356,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value358,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value360,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value362,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___287[0]=come_increment_ref_count(((char*)(__right_value365=__builtin_string("block"))));
__list_values12___287[1]=come_increment_ref_count(((char*)(__right_value366=__builtin_string("sname"))));
__list_values12___287[2]=come_increment_ref_count(((char*)(__right_value367=__builtin_string("sline"))));
__list_values12___287[3]=come_increment_ref_count(((char*)(__right_value368=__builtin_string("class_name"))));
}        param_names_288=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 841, "struct list$1charph")),4,__list_values12___287));
        __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_289=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 842, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_289,((void*)0));
        list$1charph_push_back(param_default_parametors_289,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_289,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_289,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_290=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 847, "sFun")),(char*)come_increment_ref_count(name_283),(struct sType*)come_increment_ref_count(result_type_284),(struct list$1sTypeph*)come_increment_ref_count(param_types_286),(struct list$1charph*)come_increment_ref_count(param_names_288),(struct list$1charph*)come_increment_ref_count(param_default_parametors_289),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_283)),(struct sFun*)come_increment_ref_count(main_fun_290));
        name_283 = come_decrement_ref_count2(name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_286,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_288,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_289,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_290,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_291=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_292=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 858, "sType")),"void*",(_Bool)0,info));
        {__list_values13___293[0]=come_increment_ref_count(((struct sType*)(__right_value385=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 859, "sType")),"void*",(_Bool)0,info))));
__list_values13___293[1]=come_increment_ref_count(((struct sType*)(__right_value387=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 859, "sType")),"int",(_Bool)0,info))));
__list_values13___293[2]=come_increment_ref_count(((struct sType*)(__right_value389=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 859, "sType")),"long",(_Bool)0,info))));
}        param_types_294=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 859, "struct list$1sTypeph")),3,__list_values13___293));
        /*g*/come_call_finalizer3(__right_value385,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value387,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value389,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___295[0]=come_increment_ref_count(((char*)(__right_value392=__builtin_string("b"))));
__list_values14___295[1]=come_increment_ref_count(((char*)(__right_value393=__builtin_string("c"))));
__list_values14___295[2]=come_increment_ref_count(((char*)(__right_value394=__builtin_string("len"))));
}        param_names_296=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 860, "struct list$1charph")),3,__list_values14___295));
        __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_297=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 861, "list$1charph"))));
        main_fun_298=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 862, "sFun")),(char*)come_increment_ref_count(name_291),(struct sType*)come_increment_ref_count(result_type_292),(struct list$1sTypeph*)come_increment_ref_count(param_types_294),(struct list$1charph*)come_increment_ref_count(param_names_296),(struct list$1charph*)come_increment_ref_count(param_default_parametors_297),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_291)),(struct sFun*)come_increment_ref_count(main_fun_298));
        name_291 = come_decrement_ref_count2(name_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_292,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_294,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_296,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_298,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_299=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_300=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 873, "sType")),"char*",(_Bool)0,info));
        {__list_values15___301[0]=come_increment_ref_count(((struct sType*)(__right_value408=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 874, "sType")),"char*",(_Bool)0,info))));
}        param_types_302=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 874, "struct list$1sTypeph")),1,__list_values15___301));
        /*g*/come_call_finalizer3(__right_value408,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___303[0]=come_increment_ref_count(((char*)(__right_value411=__builtin_string("str"))));
}        param_names_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 875, "struct list$1charph")),1,__list_values16___303));
        __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_305=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 876, "list$1charph"))));
        main_fun_306=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 877, "sFun")),(char*)come_increment_ref_count(name_299),(struct sType*)come_increment_ref_count(result_type_300),(struct list$1sTypeph*)come_increment_ref_count(param_types_302),(struct list$1charph*)come_increment_ref_count(param_names_304),(struct list$1charph*)come_increment_ref_count(param_default_parametors_305),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_299)),(struct sFun*)come_increment_ref_count(main_fun_306));
        name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_302,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_305,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_306,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_307=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_308=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 888, "sType")),"void",(_Bool)0,info));
        {__list_values17___309[0]=come_increment_ref_count(((struct sType*)(__right_value425=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 889, "sType")),"int",(_Bool)0,info))));
__list_values17___309[1]=come_increment_ref_count(((struct sType*)(__right_value427=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 889, "sType")),"int",(_Bool)0,info))));
__list_values17___309[2]=come_increment_ref_count(((struct sType*)(__right_value429=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 889, "sType")),"int",(_Bool)0,info))));
}        param_types_310=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 889, "struct list$1sTypeph")),3,__list_values17___309));
        /*g*/come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value427,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___311[0]=come_increment_ref_count(((char*)(__right_value432=xsprintf("come_malloc"))));
__list_values18___311[1]=come_increment_ref_count(((char*)(__right_value433=xsprintf("come_debug"))));
__list_values18___311[2]=come_increment_ref_count(((char*)(__right_value434=xsprintf("come_gc"))));
}        param_names_312=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 890, "struct list$1charph")),3,__list_values18___311));
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_313=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 891, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_313,((void*)0));
        main_fun_314=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 893, "sFun")),(char*)come_increment_ref_count(name_307),(struct sType*)come_increment_ref_count(result_type_308),(struct list$1sTypeph*)come_increment_ref_count(param_types_310),(struct list$1charph*)come_increment_ref_count(param_names_312),(struct list$1charph*)come_increment_ref_count(param_default_parametors_313),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_307)),(struct sFun*)come_increment_ref_count(main_fun_314));
        name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_310,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_312,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_313,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_314,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_315=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_316=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 904, "sType")),"void",(_Bool)0,info));
        param_types_317=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 905, "list$1sTypeph"))));
        param_names_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 906, "list$1charph"))));
        param_default_parametors_319=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 907, "list$1charph"))));
        main_fun_320=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 908, "sFun")),(char*)come_increment_ref_count(name_315),(struct sType*)come_increment_ref_count(result_type_316),(struct list$1sTypeph*)come_increment_ref_count(param_types_317),(struct list$1charph*)come_increment_ref_count(param_names_318),(struct list$1charph*)come_increment_ref_count(param_default_parametors_319),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_315)),(struct sFun*)come_increment_ref_count(main_fun_320));
        name_315 = come_decrement_ref_count2(name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_316,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_317,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_319,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_320,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_321=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_322=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 919, "sType")),"void*",(_Bool)0,info));
        {__list_values19___323[0]=come_increment_ref_count(((struct sType*)(__right_value462=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"void*",(_Bool)0,info))));
__list_values19___323[1]=come_increment_ref_count(((struct sType*)(__right_value464=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"char*",(_Bool)0,info))));
__list_values19___323[2]=come_increment_ref_count(((struct sType*)(__right_value466=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"int",(_Bool)0,info))));
__list_values19___323[3]=come_increment_ref_count(((struct sType*)(__right_value468=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"int",(_Bool)0,info))));
}        param_types_324=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 920, "struct list$1sTypeph")),4,__list_values19___323));
        /*g*/come_call_finalizer3(__right_value462,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value464,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value466,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value468,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___325[0]=come_increment_ref_count(((char*)(__right_value471=__builtin_string("mem"))));
__list_values20___325[1]=come_increment_ref_count(((char*)(__right_value472=__builtin_string("sname"))));
__list_values20___325[2]=come_increment_ref_count(((char*)(__right_value473=__builtin_string("sline"))));
__list_values20___325[3]=come_increment_ref_count(((char*)(__right_value474=__builtin_string("id"))));
}        param_names_326=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 921, "struct list$1charph")),4,__list_values20___325));
        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_327=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 922, "list$1charph"))));
        main_fun_328=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 923, "sFun")),(char*)come_increment_ref_count(name_321),(struct sType*)come_increment_ref_count(result_type_322),(struct list$1sTypeph*)come_increment_ref_count(param_types_324),(struct list$1charph*)come_increment_ref_count(param_names_326),(struct list$1charph*)come_increment_ref_count(param_default_parametors_327),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_321)),(struct sFun*)come_increment_ref_count(main_fun_328));
        name_321 = come_decrement_ref_count2(name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_322,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_324,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_326,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_328,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_329=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_330=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 934, "sType")),"void",(_Bool)0,info));
        param_types_331=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 935, "list$1sTypeph"))));
        param_names_332=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 936, "list$1charph"))));
        param_default_parametors_333=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 937, "list$1charph"))));
        fun_334=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 938, "sFun")),(char*)come_increment_ref_count(name_329),(struct sType*)come_increment_ref_count(result_type_330),(struct list$1sTypeph*)come_increment_ref_count(param_types_331),(struct list$1charph*)come_increment_ref_count(param_names_332),(struct list$1charph*)come_increment_ref_count(param_default_parametors_333),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_329)),(struct sFun*)come_increment_ref_count(fun_334));
        name_329 = come_decrement_ref_count2(name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_331,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_332,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_333,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_334,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_335=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_336=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 949, "sType")),"void",(_Bool)0,info));
        param_types_337=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 950, "list$1sTypeph"))));
        param_names_338=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 951, "list$1charph"))));
        param_default_parametors_339=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 952, "list$1charph"))));
        fun_340=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 953, "sFun")),(char*)come_increment_ref_count(name_335),(struct sType*)come_increment_ref_count(result_type_336),(struct list$1sTypeph*)come_increment_ref_count(param_types_337),(struct list$1charph*)come_increment_ref_count(param_names_338),(struct list$1charph*)come_increment_ref_count(param_default_parametors_339),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_335)),(struct sFun*)come_increment_ref_count(fun_340));
        name_335 = come_decrement_ref_count2(name_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_337,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_338,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_339,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_340,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_197;
struct list$1sTypeph* __result120__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_197=0;    i_197<num_value;    i_197++    ){
        list$1sTypeph_push_back(self,values[i_197]);
    }
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
struct list_item$1sTypeph* litem_198;
struct sType* __dec_obj130;
void* __right_value227 = (void*)0;
struct list_item$1sTypeph* litem_199;
struct sType* __dec_obj131;
void* __right_value228 = (void*)0;
struct list_item$1sTypeph* litem_200;
struct sType* __dec_obj132;
struct list$1sTypeph* __result119__;
    if(self->len==0) {
        litem_198=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value226=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        __dec_obj130=litem_198->item;
        litem_198->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_198;
        self->head=litem_198;
    }
    else {
        if(self->len==1) {
            litem_199=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value227=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_199->prev=self->head;
            litem_199->next=((void*)0);
            __dec_obj131=litem_199->item;
            litem_199->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_199;
            self->head->next=litem_199;
        }
        else {
            litem_200=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value228=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_200->prev=self->tail;
            litem_200->next=((void*)0);
            __dec_obj132=litem_200->item;
            litem_200->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_200;
            self->tail=litem_200;
        }
    }
    self->len++;
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_203;
struct list$1charph* __result122__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_203=0;    i_203<num_value;    i_203++    ){
        list$1charph_push_back(self,values[i_203]);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value236 = (void*)0;
struct list_item$1charph* litem_204;
char* __dec_obj133;
void* __right_value237 = (void*)0;
struct list_item$1charph* litem_205;
char* __dec_obj134;
void* __right_value238 = (void*)0;
struct list_item$1charph* litem_206;
char* __dec_obj135;
struct list$1charph* __result121__;
    if(self->len==0) {
        litem_204=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value236=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_204->prev=((void*)0);
        litem_204->next=((void*)0);
        __dec_obj133=litem_204->item;
        litem_204->item=(char*)come_increment_ref_count(item);
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_204;
        self->head=litem_204;
    }
    else {
        if(self->len==1) {
            litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value237=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_205->prev=self->head;
            litem_205->next=((void*)0);
            __dec_obj134=litem_205->item;
            litem_205->item=(char*)come_increment_ref_count(item);
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_205;
            self->head->next=litem_205;
        }
        else {
            litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value238=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_206->prev=self->tail;
            litem_206->next=((void*)0);
            __dec_obj135=litem_206->item;
            litem_206->item=(char*)come_increment_ref_count(item);
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_206;
            self->tail=litem_206;
        }
    }
    self->len++;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_227;
unsigned int it_228;
_Bool same_key_exist_245;
char* it2_248;
struct map$2charphsFunph* __result143__;
    if(self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_227=string_get_hash_key(key)%self->size;
    it_228=hash_227;
    while((_Bool)1) {
        if(self->item_existance[it_228]) {
            if(string_equals(self->keys[it_228],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_228]);
                    self->keys[it_228] = come_decrement_ref_count2(self->keys[it_228], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_228]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_228]);
                    self->keys[it_228]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_228],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_228]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_228]=item;
                }
                break;
            }
            it_228++;
            if(it_228>=self->size) {
                it_228=0;
            }
            else {
                if(it_228==hash_227) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_228]=(_Bool)1;
            if(1) {
                self->keys[it_228]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_228]=key;
            }
            if(1) {
                self->items[it_228]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_228]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_245=(_Bool)0;
    for(    it2_248=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_248=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_248,key)) {
            same_key_exist_245=(_Bool)1;
        }
    }
    if(!same_key_exist_245) {
        list$1charp_push_back(self->key_list,key);
    }
    __result143__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_210;
void* __right_value250 = (void*)0;
char** keys_211;
void* __right_value251 = (void*)0;
struct sFun** items_212;
void* __right_value252 = (void*)0;
_Bool* item_existance_213;
int len_214;
char* it_217;
struct sFun* default_value_220;
struct sFun* it2_221;
unsigned int hash_224;
int n_225;
struct sFun* default_value_226;
default_value_220 = (void*)0;
default_value_226 = (void*)0;
    size_210=self->size*10;
    keys_211=(char**)come_increment_ref_count(((char**)(__right_value250=(char**)come_calloc(1, sizeof(char*)*(1*(size_210)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_212=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value251=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_210)), "/usr/local/include/comelang.h", 1622, "sFun*%"))));
    item_existance_213=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value252=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_210)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_214=0;
    for(    it_217=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_217=map$2charphsFunph_next(self)    ){
        memset(&default_value_220,0,sizeof(struct sFun*));
        it2_221=map$2charphsFunph_at(self,it_217,default_value_220);
        hash_224=string_get_hash_key(it_217)%size_210;
        n_225=hash_224;
        while((_Bool)1) {
            if(item_existance_213[n_225]) {
                n_225++;
                if(n_225>=size_210) {
                    n_225=0;
                }
                else {
                    if(n_225==hash_224) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_213[n_225]=(_Bool)1;
                keys_211[n_225]=it_217;
                items_212[n_225]=map$2charphsFunph_at(self,it_217,default_value_226);
                len_214++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_211;
    self->items=items_212;
    self->item_existance=item_existance_213;
    self->size=size_210;
    self->len=len_214;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_215;
char* __result123__;
char* __result124__;
char* result_216;
char* __result125__;
result_215 = (void*)0;
result_216 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_215,0,sizeof(char*));
        __result123__ = gComeFunResultObject = __result_obj__ = result_215;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result124__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    memset(&result_216,0,sizeof(char*));
    __result125__ = gComeFunResultObject = __result_obj__ = result_216;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_218;
char* __result126__;
char* __result127__;
char* result_219;
char* __result128__;
result_218 = (void*)0;
result_219 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_218,0,sizeof(char*));
        __result126__ = gComeFunResultObject = __result_obj__ = result_218;
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result127__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    memset(&result_219,0,sizeof(char*));
    __result128__ = gComeFunResultObject = __result_obj__ = result_219;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_222;
unsigned int it_223;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
struct sFun* __result132__;
    hash_222=string_get_hash_key(((char*)key))%self->size;
    it_223=hash_222;
    while((_Bool)1) {
        if(self->item_existance[it_223]) {
            if(string_equals(self->keys[it_223],key)) {
                __result129__ = gComeFunResultObject = __result_obj__ = self->items[it_223];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result129__;
            }
            it_223++;
            if(it_223>=self->size) {
                it_223=0;
            }
            else {
                if(it_223==hash_222) {
                    __result130__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result130__;
                }
            }
        }
        else {
            __result131__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result131__;
        }
    }
    __result132__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_229;
struct list_item$1charp* it_230;
struct list$1charp* __result136__;
    it2_229=0;
    it_230=self->head;
    while(it_230!=((void*)0)) {
        if(charp_equals(it_230->item,item)) {
            list$1charp_delete(self,it2_229,it2_229+1);
            break;
        }
        it2_229++;
        it_230=it_230->next;
    }
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_231;
struct list$1charp* __result133__;
struct list_item$1charp* it_234;
int i_235;
struct list_item$1charp* prev_it_236;
struct list_item$1charp* it_237;
int i_238;
struct list_item$1charp* prev_it_239;
struct list_item$1charp* it_240;
struct list_item$1charp* head_prev_it_241;
struct list_item$1charp* tail_it_242;
int i_243;
struct list_item$1charp* prev_it_244;
struct list$1charp* __result135__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_231=tail;
        tail=head;
        head=tmp_231;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result133__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_234=self->head;
            i_235=0;
            while(it_234!=((void*)0)) {
                if(i_235<tail) {
                    prev_it_236=it_234;
                    it_234=it_234->next;
                    i_235++;
                    /*i*/come_call_finalizer3(prev_it_236,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_235==tail) {
                        self->head=it_234;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_234=it_234->next;
                        i_235++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_237=self->head;
                i_238=0;
                while(it_237!=((void*)0)) {
                    if(i_238==head) {
                        self->tail=it_237->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_238>=head) {
                        prev_it_239=it_237;
                        it_237=it_237->next;
                        i_238++;
                        /*i*/come_call_finalizer3(prev_it_239,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_237=it_237->next;
                        i_238++;
                    }
                }
            }
            else {
                it_240=self->head;
                head_prev_it_241=((void*)0);
                tail_it_242=((void*)0);
                i_243=0;
                while(it_240!=((void*)0)) {
                    if(i_243==head) {
                        head_prev_it_241=it_240->prev;
                    }
                    if(i_243==tail) {
                        tail_it_242=it_240;
                    }
                    if(i_243>=head&&i_243<tail) {
                        prev_it_244=it_240;
                        it_240=it_240->next;
                        i_243++;
                        /*i*/come_call_finalizer3(prev_it_244,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_240=it_240->next;
                        i_243++;
                    }
                }
                if(head_prev_it_241!=((void*)0)) {
                    head_prev_it_241->next=tail_it_242;
                }
                if(tail_it_242!=((void*)0)) {
                    tail_it_242->prev=head_prev_it_241;
                }
            }
        }
    }
    __result135__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_232;
struct list_item$1charp* prev_it_233;
struct list$1charp* __result134__;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        /*i*/come_call_finalizer3(prev_it_233,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_246;
char* __result137__;
char* __result138__;
char* result_247;
char* __result139__;
result_246 = (void*)0;
result_247 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_246,0,sizeof(char*));
        __result137__ = gComeFunResultObject = __result_obj__ = result_246;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    self->it=self->head;
    if(self->it) {
        __result138__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    memset(&result_247,0,sizeof(char*));
    __result139__ = gComeFunResultObject = __result_obj__ = result_247;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_249;
char* __result140__;
char* __result141__;
char* result_250;
char* __result142__;
result_249 = (void*)0;
result_250 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_249,0,sizeof(char*));
        __result140__ = gComeFunResultObject = __result_obj__ = result_249;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result141__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    memset(&result_250,0,sizeof(char*));
    __result142__ = gComeFunResultObject = __result_obj__ = result_250;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_341;
_Bool is_type_name_flag_342;
int sline_343;
_Bool define_struct_nobody_344;
char* p_345;
int sline_346;
void* __right_value512 = (void*)0;
char* word_347;
_Bool define_function_pointer_result_function_348;
_Bool define_variable_between_brace_349;
char* p_350;
void* __right_value513 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_351;
char* fun_name_352;
_Bool err_353;
void* __right_value514 = (void*)0;
char* word_354;
_Bool define_function_flag_355;
char* p_356;
void* __right_value515 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_357;
char* fun_name_358;
_Bool err_359;
char* word_360;
void* __right_value516 = (void*)0;
char* __dec_obj138;
void* __right_value517 = (void*)0;
char* __dec_obj139;
char* __dec_obj140;
void* __right_value518 = (void*)0;
char* __dec_obj141;
_Bool define_variable_361;
char* p_362;
void* __right_value519 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_363;
char* fun_name_364;
_Bool err_365;
void* __right_value520 = (void*)0;
char* word_366;
void* __right_value521 = (void*)0;
char* word_367;
char* p_368;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* word_369;
void* __right_value524 = (void*)0;
char* __dec_obj142;
void* __right_value525 = (void*)0;
char* word_370;
void* __right_value526 = (void*)0;
char* word_373;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sNode* node_374;
struct sNode* __result145__;
void* __right_value529 = (void*)0;
struct sNode* __result146__;
char* header_head_375;
void* __right_value530 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_376;
char* fun_name_377;
_Bool err_378;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1sTypeph* param_types_379;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1charph* param_names_380;
void* __right_value535 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_381;
char* param_name_382;
_Bool err_383;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1sTypeph* param_types2_385;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1charph* param_names2_386;
void* __right_value542 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_387;
char* param_name_388;
_Bool err_389;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* header_tail_391;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* result_type2_392;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct tuple1$1sTypeph* __dec_obj144;
void* __right_value549 = (void*)0;
struct list$1sTypeph* __dec_obj145;
void* __right_value550 = (void*)0;
struct list$1charph* __dec_obj146;
_Bool var_args_393;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct buffer* header_buf_394;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_default_parametors_395;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sFun* fun_396;
void* __right_value560 = (void*)0;
struct sFun* fun2_400;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value598 = (void*)0;
struct sNode* __result175__;
void* __right_value599 = (void*)0;
struct sNode* node_435;
struct sNode* __result176__;
void* __right_value600 = (void*)0;
struct sNode* node_436;
char* source_tail_437;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct buffer* header_438;
struct sNode* __result177__;
void* __right_value603 = (void*)0;
char* buf2_439;
void* __right_value604 = (void*)0;
struct sNode* __result178__;
    source_head_341=info->p;
    is_type_name_flag_342=is_type_name(buf,info);
    sline_343=info->sline;
    define_struct_nobody_344=(_Bool)0;
    {
        p_345=info->p;
        sline_346=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_347=(char*)come_increment_ref_count(parse_word(info));
                if(*info->p==59) {
                    define_struct_nobody_344=(_Bool)1;
                }
                word_347 = come_decrement_ref_count2(word_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_346;
    }
    define_function_pointer_result_function_348=(_Bool)0;
    define_variable_between_brace_349=(_Bool)0;
    if(is_type_name_flag_342) {
        p_350=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value513=backtrace_parse_type((_Bool)0,info)));
            result_type_351=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_352=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_353=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value513,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_348=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_354=(char*)come_increment_ref_count(parse_word(info));
                        if(!is_type_name(word_354,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_349=(_Bool)1;
                            }
                        }
                        word_354 = come_decrement_ref_count2(word_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_352 = come_decrement_ref_count2(fun_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_343;
    }
    define_function_flag_355=(_Bool)0;
    if(is_type_name_flag_342&&!define_function_pointer_result_function_348&&charp_operator_not_equals(buf,"__typeof__")) {
        p_356=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value515=backtrace_parse_type((_Bool)0,info)));
            result_type_357=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_358=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_359=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value515,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_358 = come_decrement_ref_count2(fun_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_360=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj138=word_360;
                word_360=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(string_operator_equals(word_360,"extern")) {
                    __dec_obj139=word_360;
                    word_360=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj140=word_360;
                word_360=((void*)0);
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_360) {
                if(is_type_name(word_360,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj141=word_360;
                        word_360=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(strlen(word_360)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_342) {
                        define_function_flag_355=(_Bool)1;
                    }
                }
            }
            word_360 = come_decrement_ref_count2(word_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_356;
        info->sline=sline_343;
    }
    define_variable_361=(_Bool)1;
    if(is_type_name_flag_342&&!define_function_pointer_result_function_348) {
        p_362=info->p;
        info->p=head;
        if(!is_type_name_flag_342) {
            define_variable_361=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value519=backtrace_parse_type((_Bool)0,info)));
            result_type_363=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_364=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_365=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value519,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_366=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_361=(_Bool)1;
                            }
                        }
                        word_366 = come_decrement_ref_count2(word_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_367=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_367,info)&&*info->p!=40) {
                                define_variable_361=(_Bool)1;
                            }
                        }
                        word_367 = come_decrement_ref_count2(word_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_364 = come_decrement_ref_count2(fun_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_361=(_Bool)0;
        }
        else {
            if(define_variable_361) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_361=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_361=(_Bool)0;
                }
            }
        }
        info->p=p_362;
        info->sline=sline_343;
    }
    else {
        define_variable_361=(_Bool)0;
    }
    {
        p_368=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value522=parse_word(info)));
                __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_369=(char*)come_increment_ref_count(parse_word(info));
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj142=word_369;
                        word_369=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(string_operator_equals(word_369,"extends")) {
                            define_variable_361=(_Bool)0;
                        }
                    }
                    word_369 = come_decrement_ref_count2(word_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_361=(_Bool)0;
        }
        else {
            if(define_variable_361) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_361=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_361=(_Bool)0;
                }
            }
        }
        info->p=p_368;
        info->sline=sline_343;
    }
    if(charp_operator_equals(buf,"template")) {
        word_370=(char*)come_increment_ref_count(parse_word(info));
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
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
                        if(*info->p==0) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_373=(char*)come_increment_ref_count(parse_word(info));
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_373)));
                            word_373 = come_decrement_ref_count2(word_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_374=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result145__ = gComeFunResultObject = __result_obj__ = node_374;
            if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_370 = come_decrement_ref_count2(word_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result145__;
            if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_370 = come_decrement_ref_count2(word_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_344) {
        }
        else {
            if(define_variable_between_brace_349) {
                info->p=head;
                info->sline=sline_343;
                __result146__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value529=parse_global_variable(info)));
                if(__right_value529) { __right_value529 = come_decrement_ref_count2(__right_value529, ((struct sNode*)__right_value529)->finalize, ((struct sNode*)__right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result146__;
            }
            else {
                if(define_function_pointer_result_function_348) {
                    header_head_375=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value530=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_376=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_377=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_378=multiple_assign_var4->v3;
                    /*g*/come_call_finalizer3(__right_value530,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_379=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1277, "list$1sTypeph"))));
                        param_names_380=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1278, "list$1charph"))));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value535=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_381=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_382=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_383=multiple_assign_var5->v3;
                                /*g*/come_call_finalizer3(__right_value535,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_383) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_379,(struct sType*)come_increment_ref_count(param_type_381));
                                static int num_function_pointer_result_var_name_a_384=0;
                                list$1charph_push_back(param_names_380,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_384)));
                                if(xisalpha(*info->p)||*info->p==95) {
                                    (void)((char*)(__right_value537=parse_word(info)));
                                    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        /*i*/come_call_finalizer3(param_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_382 = come_decrement_ref_count2(param_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                                        exit(2);
                                    }
                                }
                                /*i*/come_call_finalizer3(param_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_382 = come_decrement_ref_count2(param_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_385=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1324, "list$1sTypeph"))));
                            param_names2_386=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1325, "list$1charph"))));
                            if(*info->p==41) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while((_Bool)1) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value542=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_387=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_388=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_389=multiple_assign_var6->v3;
                                    /*g*/come_call_finalizer3(__right_value542,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_389) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_385,(struct sType*)come_increment_ref_count(param_type_387));
                                    static int num_function_pointer_result_var_name_b_390=0;
                                    list$1charph_push_back(param_names2_386,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_390)));
                                    if(xisalpha(*info->p)||*info->p==95) {
                                        (void)((char*)(__right_value544=parse_word(info)));
                                        __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            /*i*/come_call_finalizer3(param_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_388 = come_decrement_ref_count2(param_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or ) (2)");
                                            exit(2);
                                        }
                                    }
                                    /*i*/come_call_finalizer3(param_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_388 = come_decrement_ref_count2(param_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_391=info->p;
                            result_type2_392=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1367, "sType")),"lambda",(_Bool)0,info));
                            __dec_obj144=result_type2_392->mResultType;
                            result_type2_392->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1369, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_376)));
                            /* a*/come_call_finalizer3(__dec_obj144,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj145=result_type2_392->mParamTypes;
                            result_type2_392->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_385));
                            /* a*/come_call_finalizer3(__dec_obj145,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj146=result_type2_392->mParamNames;
                            result_type2_392->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_386));
                            /* a*/come_call_finalizer3(__dec_obj146,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            result_type2_392->mVarArgs=(_Bool)0;
                            result_type2_392->mStatic=(_Bool)0;
                            var_args_393=(_Bool)0;
                            header_buf_394=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1377, "buffer"))));
                            buffer_append(header_buf_394,header_head_375,header_tail_391-header_head_375);
                            buffer_append_char(header_buf_394,0);
                            param_default_parametors_395=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1381, "list$1charph"))));
                            fun_396=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1383, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_377)),(struct sType*)come_increment_ref_count(result_type2_392),(struct list$1sTypeph*)come_increment_ref_count(param_types_379),(struct list$1charph*)come_increment_ref_count(param_names_380),(struct list$1charph*)come_increment_ref_count(param_default_parametors_395),(_Bool)1,var_args_393,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_394)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_400=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value560=__builtin_string(fun_name_377))));
                            __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_400==((void*)0)||fun2_400->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_377)),(struct sFun*)come_increment_ref_count(fun_396));
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1395, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value563=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1395, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_396),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result175__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value598=_inf_value2));
                            /*i*/come_call_finalizer3(param_types2_385,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names2_386,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type2_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_395,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_396,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_379,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_380,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_377 = come_decrement_ref_count2(fun_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value563,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value598) { __right_value598 = come_decrement_ref_count2(__right_value598, ((struct sNode*)__right_value598)->finalize, ((struct sNode*)__right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result175__;
                            /*i*/come_call_finalizer3(param_types2_385,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names2_386,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type2_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_395,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_396,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_types_379,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_names_380,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(result_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_377 = come_decrement_ref_count2(fun_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_355) {
                        info->p=head;
                        info->sline=sline_343;
                        node_435=(struct sNode*)come_increment_ref_count(parse_function(info));
                        __result176__ = gComeFunResultObject = __result_obj__ = node_435;
                        if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        gComeFunResultObject = (void*)0;
                        return __result176__;
                        if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(define_variable_361) {
                            info->p=head;
                            info->sline=sline_343;
                            node_436=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
                            source_tail_437=info->p;
                            header_438=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1419, "buffer"))));
                            buffer_append(header_438,source_head_341,source_tail_437-source_head_341);
                            __result177__ = gComeFunResultObject = __result_obj__ = node_436;
                            if(node_436) { node_436 = come_decrement_ref_count2(node_436, ((struct sNode*)node_436)->finalize, ((struct sNode*)node_436)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(header_438,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            gComeFunResultObject = (void*)0;
                            return __result177__;
                            if(node_436) { node_436 = come_decrement_ref_count2(node_436, ((struct sNode*)node_436)->finalize, ((struct sNode*)node_436)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(header_438,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_343;
    buf2_439=(char*)come_increment_ref_count(parse_word(info));
    __result178__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value604=top_level_v98(buf2_439,head,head_sline,info)));
    buf2_439 = come_decrement_ref_count2(buf2_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value604) { __right_value604 = come_decrement_ref_count2(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj136;
char* __dec_obj137;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj136=self->v1;
            /* a*/come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj137=self->v2;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_371;
struct list_item$1charph* prev_it_372;
struct list$1charph* __result144__;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        /*i*/come_call_finalizer3(prev_it_372,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj143;
struct tuple1$1sTypeph* __result147__;
    __dec_obj143=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result147__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_397;
unsigned int hash_398;
unsigned int it_399;
struct sFun* __result148__;
struct sFun* __result149__;
struct sFun* __result150__;
struct sFun* __result151__;
default_value_397 = (void*)0;
    memset(&default_value_397,0,sizeof(struct sFun*));
    hash_398=string_get_hash_key(((char*)key))%self->size;
    it_399=hash_398;
    while((_Bool)1) {
        if(self->item_existance[it_399]) {
            if(string_equals(self->keys[it_399],key)) {
                __result148__ = gComeFunResultObject = __result_obj__ = self->items[it_399];
                /*i*/come_call_finalizer3(default_value_397,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result148__;
            }
            it_399++;
            if(it_399>=self->size) {
                it_399=0;
            }
            else {
                if(it_399==hash_398) {
                    __result149__ = gComeFunResultObject = __result_obj__ = default_value_397;
                    /*i*/come_call_finalizer3(default_value_397,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result149__;
                }
            }
        }
        else {
            __result150__ = gComeFunResultObject = __result_obj__ = default_value_397;
            /*i*/come_call_finalizer3(default_value_397,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result150__;
        }
    }
    __result151__ = gComeFunResultObject = __result_obj__ = default_value_397;
    /*i*/come_call_finalizer3(default_value_397,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result153__;
void* __right_value566 = (void*)0;
struct sFun* result_402;
void* __right_value567 = (void*)0;
char* __dec_obj150;
void* __right_value568 = (void*)0;
struct sType* __dec_obj151;
void* __right_value569 = (void*)0;
struct list$1sTypeph* __dec_obj152;
void* __right_value570 = (void*)0;
struct list$1charph* __dec_obj153;
void* __right_value571 = (void*)0;
struct list$1charph* __dec_obj154;
void* __right_value572 = (void*)0;
struct sType* __dec_obj155;
void* __right_value590 = (void*)0;
struct sBlock* __dec_obj165;
void* __right_value591 = (void*)0;
struct buffer* __dec_obj166;
void* __right_value592 = (void*)0;
struct buffer* __dec_obj167;
void* __right_value593 = (void*)0;
struct buffer* __dec_obj168;
void* __right_value594 = (void*)0;
struct buffer* __dec_obj169;
void* __right_value595 = (void*)0;
char* __dec_obj170;
void* __right_value596 = (void*)0;
char* __dec_obj171;
struct sFun* __result173__;
    if(self==(void*)0) {
        __result153__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    result_402=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj150=result_402->mName;
        result_402->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj151=result_402->mResultType;
        result_402->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj152=result_402->mParamTypes;
        result_402->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj152,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj153=result_402->mParamNames;
        result_402->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj153,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj154=result_402->mParamDefaultParametors;
        result_402->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        /* a*/come_call_finalizer3(__dec_obj154,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj155=result_402->mLambdaType;
        result_402->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /* a*/come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj165=result_402->mBlock;
        result_402->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /* a*/come_call_finalizer3(__dec_obj165,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result_402->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj166=result_402->mSource;
        result_402->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /* a*/come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj167=result_402->mSourceHead;
        result_402->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /* a*/come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj168=result_402->mSourceHead2;
        result_402->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /* a*/come_call_finalizer3(__dec_obj168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj169=result_402->mSourceDefer;
        result_402->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /* a*/come_call_finalizer3(__dec_obj169,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mStatic=self->mStatic;
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj170=result_402->mComeHeader;
        result_402->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mCloner=self->mCloner;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj171=result_402->mDeclareSName;
        result_402->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mNoResultType=self->mNoResultType;
    }
    if(self!=((void*)0)) {
        result_402->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result173__ = gComeFunResultObject = __result_obj__ = result_402;
    /*i*/come_call_finalizer3(result_402,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result154__;
void* __right_value573 = (void*)0;
struct sBlock* result_403;
void* __right_value574 = (void*)0;
struct list$1sNodeph* __dec_obj156;
void* __right_value589 = (void*)0;
struct sVarTable* __dec_obj164;
struct sBlock* __result172__;
    if(self==(void*)0) {
        __result154__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    result_403=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj156=result_403->mNodes;
        result_403->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        /* a*/come_call_finalizer3(__dec_obj156,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj164=result_403->mVarTable;
        result_403->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /* a*/come_call_finalizer3(__dec_obj164,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result172__ = gComeFunResultObject = __result_obj__ = result_403;
    /*i*/come_call_finalizer3(result_403,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result155__;
void* __right_value575 = (void*)0;
struct sVarTable* result_404;
void* __right_value588 = (void*)0;
struct map$2charphsVarph* __dec_obj163;
struct sVarTable* __result171__;
    if(self==(void*)0) {
        __result155__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    result_404=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj163=result_404->mVars;
        result_404->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        /* a*/come_call_finalizer3(__dec_obj163,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_404->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result_404->mParent=self->mParent;
    }
    if(self!=((void*)0)) {
        result_404->mID=self->mID;
    }
    __result171__ = gComeFunResultObject = __result_obj__ = result_404;
    /*i*/come_call_finalizer3(result_404,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result156__;
void* __right_value576 = (void*)0;
void* __right_value582 = (void*)0;
struct map$2charphsVarph* result_408;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1charp* __dec_obj162;
char* it_411;
struct sVar* default_value_414;
struct sVar* it2_417;
struct map$2charphsVarph* __result170__;
default_value_414 = (void*)0;
    if(self==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    result_408=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1464, "map$2charphsVarph"))));
    __dec_obj162=result_408->key_list;
    result_408->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1466, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj162,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_411=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_411=map$2charphsVarph_next(self)    ){
        memset(&default_value_414,0,sizeof(struct sVar*));
        it2_417=map$2charphsVarph_at(self,it_411,default_value_414);
        map$2charphsVarph_put(result_408,it_411,it2_417);
    }
    __result170__ = gComeFunResultObject = __result_obj__ = result_408;
    /*i*/come_call_finalizer3(result_408,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
int i_405;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1charp* __dec_obj157;
struct map$2charphsVarph* __result158__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value577=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value578=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value579=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_405=0;    i_405<128;    i_405++    ){
        self->item_existance[i_405]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj157=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj157,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result157__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_406;
int i_407;
    for(    i_406=0;    i_406<self->size;    i_406++    ){
        if(self->item_existance[i_406]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_406],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_407=0;    i_407<self->size;    i_407++    ){
        if(self->item_existance[i_407]) {
            if(1) {
                self->keys[i_407] = come_decrement_ref_count2(self->keys[i_407], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj158;
char* __dec_obj159;
struct sType* __dec_obj160;
char* __dec_obj161;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj158=self->mName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj159=self->mCValueName;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj160=self->mType;
            /* a*/come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj161=self->mFunName;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_409;
char* __result159__;
char* __result160__;
char* result_410;
char* __result161__;
result_409 = (void*)0;
result_410 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_409,0,sizeof(char*));
        __result159__ = gComeFunResultObject = __result_obj__ = result_409;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result160__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    memset(&result_410,0,sizeof(char*));
    __result161__ = gComeFunResultObject = __result_obj__ = result_410;
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_412;
char* __result162__;
char* __result163__;
char* result_413;
char* __result164__;
result_412 = (void*)0;
result_413 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_412,0,sizeof(char*));
        __result162__ = gComeFunResultObject = __result_obj__ = result_412;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result163__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    memset(&result_413,0,sizeof(char*));
    __result164__ = gComeFunResultObject = __result_obj__ = result_413;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_415;
unsigned int it_416;
struct sVar* __result165__;
struct sVar* __result166__;
struct sVar* __result167__;
struct sVar* __result168__;
    hash_415=string_get_hash_key(((char*)key))%self->size;
    it_416=hash_415;
    while((_Bool)1) {
        if(self->item_existance[it_416]) {
            if(string_equals(self->keys[it_416],key)) {
                __result165__ = gComeFunResultObject = __result_obj__ = self->items[it_416];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result165__;
            }
            it_416++;
            if(it_416>=self->size) {
                it_416=0;
            }
            else {
                if(it_416==hash_415) {
                    __result166__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result166__;
                }
            }
        }
        else {
            __result167__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result167__;
        }
    }
    __result168__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_429;
int it_430;
_Bool same_key_exist_431;
char* it2_432;
struct map$2charphsVarph* __result169__;
    if(self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_429=string_get_hash_key(key)%self->size;
    it_430=hash_429;
    while((_Bool)1) {
        if(self->item_existance[it_430]) {
            if(string_equals(self->keys[it_430],key)) {
                if(1) {
                    self->keys[it_430] = come_decrement_ref_count2(self->keys[it_430], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_430]);
                    self->keys[it_430]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_430]);
                    self->keys[it_430]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_430],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_430]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_430]=item;
                }
                break;
            }
            it_430++;
            if(it_430>=self->size) {
                it_430=0;
            }
            else {
                if(it_430==hash_429) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_430]=(_Bool)1;
            if(1) {
                self->keys[it_430]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_430]=key;
            }
            if(1) {
                self->items[it_430]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_430]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_431=(_Bool)0;
    for(    it2_432=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_432=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_432,key)) {
            same_key_exist_431=(_Bool)1;
        }
    }
    if(!same_key_exist_431) {
        list$1charp_push_back(self->key_list,key);
    }
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_418;
void* __right_value585 = (void*)0;
char** keys_419;
void* __right_value586 = (void*)0;
struct sVar** items_420;
void* __right_value587 = (void*)0;
_Bool* item_existance_421;
int len_422;
char* it_423;
struct sVar* default_value_424;
struct sVar* it2_425;
unsigned int hash_426;
int n_427;
struct sVar* default_value_428;
default_value_424 = (void*)0;
default_value_428 = (void*)0;
    size_418=self->size*10;
    keys_419=(char**)come_increment_ref_count(((char**)(__right_value585=(char**)come_calloc(1, sizeof(char*)*(1*(size_418)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_420=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value586=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_418)), "/usr/local/include/comelang.h", 1622, "sVar*%"))));
    item_existance_421=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value587=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_418)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_422=0;
    for(    it_423=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_423=map$2charphsVarph_next(self)    ){
        memset(&default_value_424,0,sizeof(struct sVar*));
        it2_425=map$2charphsVarph_at(self,it_423,default_value_424);
        hash_426=string_get_hash_key(it_423)%size_418;
        n_427=hash_426;
        while((_Bool)1) {
            if(item_existance_421[n_427]) {
                n_427++;
                if(n_427>=size_418) {
                    n_427=0;
                }
                else {
                    if(n_427==hash_426) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_421[n_427]=(_Bool)1;
                keys_419[n_427]=it_423;
                items_420[n_427]=map$2charphsVarph_at(self,it_423,default_value_428);
                len_422++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_419;
    self->items=items_420;
    self->item_existance=item_existance_421;
    self->size=size_418;
    self->len=len_422;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_433;
int i_434;
    for(    i_433=0;    i_433<self->size;    i_433++    ){
        if(self->item_existance[i_433]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_433],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_434=0;    i_434<self->size;    i_434++    ){
        if(self->item_existance[i_434]) {
            if(1) {
                self->keys[i_434] = come_decrement_ref_count2(self->keys[i_434], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_440;
struct sType* type_448;
struct sClass* generics_class_452;
void* __right_value605 = (void*)0;
_Bool generics_type_name_453;
void* __right_value606 = (void*)0;
_Bool mgenerics_type_name_455;
    klass_440=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_448=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_452=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_453=list$1charph_contained(info->generics_type_names,((char*)(__right_value605=__builtin_string(buf))));
    __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_455=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value606=__builtin_string(buf))));
    __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(gComeC) {
        return (type_448&&type_448->mTypedef)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||(klass_440&&klass_440->mNumber)||(klass_440&&klass_440->mFloat)||charp_operator_equals(buf,"void")||charp_operator_equals(buf,"_Nullable");
    }
    else {
        return generics_class_452||generics_type_name_453||mgenerics_type_name_455||klass_440||type_448||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable");
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_441;
unsigned int hash_442;
unsigned int it_443;
struct sClass* __result179__;
struct sClass* __result180__;
struct sClass* __result181__;
struct sClass* __result182__;
default_value_441 = (void*)0;
    memset(&default_value_441,0,sizeof(struct sClass*));
    hash_442=string_get_hash_key(((char*)key))%self->size;
    it_443=hash_442;
    while((_Bool)1) {
        if(self->item_existance[it_443]) {
            if(string_equals(self->keys[it_443],key)) {
                __result179__ = gComeFunResultObject = __result_obj__ = self->items[it_443];
                /*i*/come_call_finalizer3(default_value_441,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result179__;
            }
            it_443++;
            if(it_443>=self->size) {
                it_443=0;
            }
            else {
                if(it_443==hash_442) {
                    __result180__ = gComeFunResultObject = __result_obj__ = default_value_441;
                    /*i*/come_call_finalizer3(default_value_441,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result180__;
                }
            }
        }
        else {
            __result181__ = gComeFunResultObject = __result_obj__ = default_value_441;
            /*i*/come_call_finalizer3(default_value_441,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result181__;
        }
    }
    __result182__ = gComeFunResultObject = __result_obj__ = default_value_441;
    /*i*/come_call_finalizer3(default_value_441,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj173;
struct list$1tuple2$2charphsTypephph* __dec_obj174;
char* __dec_obj178;
char* __dec_obj179;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj173=self->mName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj174=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj174,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj178=self->mDeclareSName;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj179=self->mParentClassName;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_444;
struct list_item$1tuple2$2charphsTypephph* prev_it_445;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        /*i*/come_call_finalizer3(prev_it_445,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj175;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj175=self->item;
            /* a*/come_call_finalizer3(__dec_obj175,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj176;
struct sType* __dec_obj177;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj176=self->v1;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj177=self->v2;
            /* a*/come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_446;
struct list_item$1tuple2$2charphsTypephph* prev_it_447;
    it_446=self->head;
    while(it_446!=((void*)0)) {
        prev_it_447=it_446;
        it_446=it_446->next;
        /*i*/come_call_finalizer3(prev_it_447,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_449;
unsigned int hash_450;
unsigned int it_451;
struct sType* __result183__;
struct sType* __result184__;
struct sType* __result185__;
struct sType* __result186__;
default_value_449 = (void*)0;
    memset(&default_value_449,0,sizeof(struct sType*));
    hash_450=string_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(self->item_existance[it_451]) {
            if(string_equals(self->keys[it_451],key)) {
                __result183__ = gComeFunResultObject = __result_obj__ = self->items[it_451];
                /*i*/come_call_finalizer3(default_value_449,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result183__;
            }
            it_451++;
            if(it_451>=self->size) {
                it_451=0;
            }
            else {
                if(it_451==hash_450) {
                    __result184__ = gComeFunResultObject = __result_obj__ = default_value_449;
                    /*i*/come_call_finalizer3(default_value_449,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result184__;
                }
            }
        }
        else {
            __result185__ = gComeFunResultObject = __result_obj__ = default_value_449;
            /*i*/come_call_finalizer3(default_value_449,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result185__;
        }
    }
    __result186__ = gComeFunResultObject = __result_obj__ = default_value_449;
    /*i*/come_call_finalizer3(default_value_449,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_454;
    for(    it_454=list$1charph_begin(self);    !list$1charph_end(self);    it_454=list$1charph_next(self)    ){
        if(string_operator_equals(it_454,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_456;
int caller_line_457;
char* caller_sname_458;
char* last_code_459;
char* __dec_obj180;
char* last_code2_460;
char* __dec_obj181;
char* last_code3_461;
char* __dec_obj182;
void* __right_value607 = (void*)0;
char* sname_top_462;
int sline_top_463;
struct sFun* funX_464;
_Bool __result187__;
void* __right_value608 = (void*)0;
struct sType* result_type_465;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1sTypeph* param_types_466;
struct list$1sTypeph* o2_saved_467;
struct sType* it_470;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sType* param_type_473;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1charph* param_names_474;
void* __right_value615 = (void*)0;
struct list$1charph* param_default_parametors_475;
char* p_476;
int sline_477;
char* sname_478;
char* head_479;
struct buffer* source_480;
void* __right_value616 = (void*)0;
struct buffer* __dec_obj183;
struct sType* generics_type_saved_481;
void* __right_value617 = (void*)0;
struct sType* __dec_obj184;
struct list$1charph* method_generics_type_names_482;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1charph* __dec_obj185;
struct list$1charph* o2_saved_483;
char* it_484;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1charph* __dec_obj186;
char* __dec_obj187;
void* __right_value622 = (void*)0;
struct sBlock* block_485;
struct buffer* __dec_obj188;
char* __dec_obj189;
_Bool var_args_486;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sFun* fun_487;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value634 = (void*)0;
struct sNode* node_488;
_Bool in_generics_fun_490;
_Bool __result196__;
struct sType* __dec_obj194;
struct list$1charph* __dec_obj195;
void* __right_value635 = (void*)0;
char* __dec_obj196;
char* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
_Bool __result197__;
    caller_fun_456=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_457=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_458=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_459=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj180=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_460=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj181=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_461=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj182=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_462=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_463=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_464=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_464) {
        __result187__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_459 = come_decrement_ref_count2(last_code_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_460 = come_decrement_ref_count2(last_code2_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_461 = come_decrement_ref_count2(last_code3_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_462 = come_decrement_ref_count2(sname_top_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    result_type_465=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_466=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1480, "list$1sTypeph"))));
    for(    o2_saved_467=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_470=list$1sTypeph_begin((o2_saved_467));    !list$1sTypeph_end((o2_saved_467));    it_470=list$1sTypeph_next((o2_saved_467))    ){
        param_type_473=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value611=sType_clone(it_470))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value611,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_473->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_466,(struct sType*)come_increment_ref_count(sType_clone(param_type_473)));
        /*i*/come_call_finalizer3(param_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_467,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_474=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_475=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_476=info->p;
    sline_477=info->sline;
    sname_478=(char*)come_increment_ref_count(info->sname);
    head_479=info->head;
    source_480=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj183=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_481=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj184=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /* a*/come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_482=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj185=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1507, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj185,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_483=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_484=list$1charph_begin((o2_saved_483));    !list$1charph_end((o2_saved_483));    it_484=list$1charph_next((o2_saved_483))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_484)));
    }
    /*i*/come_call_finalizer3(o2_saved_483,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj186=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj186,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj187=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_485=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_479;
    __dec_obj188=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_480);
    /* a*/come_call_finalizer3(__dec_obj188,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_476;
    info->sline=sline_477;
    __dec_obj189=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_478);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_465->mInline=(_Bool)0;
    var_args_486=generics_fun->mVarArgs;
    fun_487=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1529, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_465),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_466)),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),(_Bool)0,var_args_486,(struct sBlock*)come_increment_ref_count(block_485),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_487));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1536, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value630=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1536, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_487),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_488=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value630,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_490=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(!node_compile(node_488,info)) {
        __result196__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_459 = come_decrement_ref_count2(last_code_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_460 = come_decrement_ref_count2(last_code2_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_461 = come_decrement_ref_count2(last_code3_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_462 = come_decrement_ref_count2(sname_top_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_466,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_474,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_475,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_478 = come_decrement_ref_count2(sname_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_481,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_482,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_485,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_487,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_488) { node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result196__;
    }
    info->in_generics_fun=in_generics_fun_490;
    __dec_obj194=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_481);
    /* a*/come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj195=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_482);
    /* a*/come_call_finalizer3(__dec_obj195,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj196=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_462));
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_463;
    __dec_obj197=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_459);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj198=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_460);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_461);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_456;
    info->caller_line=caller_line_457;
    info->caller_sname=caller_sname_458;
    __result197__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_459 = come_decrement_ref_count2(last_code_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_460 = come_decrement_ref_count2(last_code2_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_461 = come_decrement_ref_count2(last_code3_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_462 = come_decrement_ref_count2(sname_top_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_466,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_474,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_475,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_478 = come_decrement_ref_count2(sname_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_481,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_482,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_485,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_487,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_488) { node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result197__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_468;
struct sType* __result188__;
struct sType* __result189__;
struct sType* result_469;
struct sType* __result190__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_468,0,sizeof(struct sType*));
        __result188__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    self->it=self->head;
    if(self->it) {
        __result189__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    memset(&result_469,0,sizeof(struct sType*));
    __result190__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_471;
struct sType* __result191__;
struct sType* __result192__;
struct sType* result_472;
struct sType* __result193__;
result_471 = (void*)0;
result_472 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_471,0,sizeof(struct sType*));
        __result191__ = gComeFunResultObject = __result_obj__ = result_471;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result192__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    memset(&result_472,0,sizeof(struct sType*));
    __result193__ = gComeFunResultObject = __result_obj__ = result_472;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_491;
int caller_line_492;
char* caller_sname_493;
char* last_code_494;
char* __dec_obj200;
char* last_code2_495;
char* __dec_obj201;
char* last_code3_496;
char* __dec_obj202;
void* __right_value636 = (void*)0;
char* sname_top_497;
int sline_top_498;
struct sFun* funX_499;
_Bool __result198__;
void* __right_value637 = (void*)0;
struct sType* result_type_500;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1sTypeph* param_types_501;
struct list$1sTypeph* o2_saved_502;
struct sType* it_503;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* param_type_504;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1charph* param_names_505;
void* __right_value644 = (void*)0;
struct list$1charph* param_default_parametors_506;
char* p_507;
int sline_508;
char* sname_509;
char* head_510;
struct buffer* source_511;
void* __right_value645 = (void*)0;
struct buffer* __dec_obj203;
struct list$1charph* method_generics_type_names_512;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1charph* __dec_obj204;
struct list$1charph* o2_saved_513;
char* it_514;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1charph* __dec_obj205;
char* __dec_obj206;
void* __right_value650 = (void*)0;
struct sBlock* block_515;
struct buffer* __dec_obj207;
char* __dec_obj208;
_Bool var_args_516;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sFun* fun_517;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value662 = (void*)0;
struct sNode* node_518;
_Bool __result201__;
struct list$1charph* __dec_obj213;
void* __right_value663 = (void*)0;
char* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
_Bool __result202__;
    caller_fun_491=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_492=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_493=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_494=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_495=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_496=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj202=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_497=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_498=info->sline;
    funX_499=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_499) {
        __result198__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_494 = come_decrement_ref_count2(last_code_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_495 = come_decrement_ref_count2(last_code2_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_496 = come_decrement_ref_count2(last_code3_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_497 = come_decrement_ref_count2(sname_top_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result198__;
    }
    result_type_500=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_501=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1590, "list$1sTypeph"))));
    for(    o2_saved_502=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_503=list$1sTypeph_begin((o2_saved_502));    !list$1sTypeph_end((o2_saved_502));    it_503=list$1sTypeph_next((o2_saved_502))    ){
        param_type_504=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value640=sType_clone(it_503))),info));
        /*g*/come_call_finalizer3(__right_value640,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_504->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_501,(struct sType*)come_increment_ref_count(sType_clone(param_type_504)));
        /*i*/come_call_finalizer3(param_type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_502,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_505=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_506=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_507=info->p;
    sline_508=info->sline;
    sname_509=(char*)come_increment_ref_count(info->sname);
    head_510=info->head;
    source_511=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj203=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_512=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj204=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1614, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj204,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_513=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_514=list$1charph_begin((o2_saved_513));    !list$1charph_end((o2_saved_513));    it_514=list$1charph_next((o2_saved_513))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_514)));
    }
    /*i*/come_call_finalizer3(o2_saved_513,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj205=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj206=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_515=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_510;
    __dec_obj207=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_511);
    /* a*/come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_507;
    info->sline=sline_508;
    __dec_obj208=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_509);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_500->mInline=(_Bool)0;
    var_args_516=generics_fun->mVarArgs;
    fun_517=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1636, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_500),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_501)),(struct list$1charph*)come_increment_ref_count(param_names_505),(struct list$1charph*)come_increment_ref_count(param_default_parametors_506),(_Bool)0,var_args_516,(struct sBlock*)come_increment_ref_count(block_515),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_517));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1643, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value658=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1643, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_517),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_518=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value658,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(!node_compile(node_518,info)) {
        __result201__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_494 = come_decrement_ref_count2(last_code_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_495 = come_decrement_ref_count2(last_code2_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_496 = come_decrement_ref_count2(last_code3_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_497 = come_decrement_ref_count2(sname_top_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_506,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_509 = come_decrement_ref_count2(sname_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_511,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_512,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_515,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_517,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result201__;
    }
    __dec_obj213=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_512);
    /* a*/come_call_finalizer3(__dec_obj213,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj214=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_497));
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_498;
    __dec_obj215=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_494);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj216=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_495);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_496);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_491;
    info->caller_line=caller_line_492;
    info->caller_sname=caller_sname_493;
    __result202__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_494 = come_decrement_ref_count2(last_code_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_495 = come_decrement_ref_count2(last_code2_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_496 = come_decrement_ref_count2(last_code3_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_497 = come_decrement_ref_count2(sname_top_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_506,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_509 = come_decrement_ref_count2(sname_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_511,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_512,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_515,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_517,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result202__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_520;
char* source_head_521;
struct sType* result_type_522;
char* var_name_523;
_Bool constructor__524;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sType* __dec_obj218;
void* __right_value666 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_525;
char* var_name2_526;
_Bool err_527;
struct sType* __dec_obj219;
char* __dec_obj220;
_Bool method_definition_528;
char* p_529;
int sline_530;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct buffer* buf2_531;
char* fun_name_532;
char* base_fun_name_533;
void* __right_value669 = (void*)0;
char* __dec_obj221;
void* __right_value670 = (void*)0;
char* __dec_obj222;
void* __right_value671 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_534;
char* name_535;
_Bool err_536;
void* __right_value672 = (void*)0;
char* __dec_obj223;
void* __right_value673 = (void*)0;
char* __dec_obj224;
void* __right_value674 = (void*)0;
char* __dec_obj225;
void* __right_value675 = (void*)0;
char* __dec_obj226;
void* __right_value676 = (void*)0;
char* __dec_obj227;
void* __right_value677 = (void*)0;
char* __dec_obj228;
void* __right_value678 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_537;
struct list$1charph* param_names_538;
struct list$1charph* param_default_parametors_539;
_Bool var_args_540;
char* header_tail_541;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct buffer* header_buf_542;
int version_543;
int n_544;
void* __right_value681 = (void*)0;
struct sBlock* block_545;
void* __right_value682 = (void*)0;
char* fun_name_547;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sFun* fun_548;
void* __right_value688 = (void*)0;
struct sFun* fun2_549;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value694 = (void*)0;
struct sNode* __result205__;
void* __right_value695 = (void*)0;
char* none_generics_name_551;
void* __right_value696 = (void*)0;
char* generics_sname_552;
int generics_sline_553;
void* __right_value697 = (void*)0;
char* block_554;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sGenericsFun* fun_555;
void* __right_value704 = (void*)0;
char* fun_name3_556;
void* __right_value708 = (void*)0;
struct sNode* __result217__;
void* __right_value709 = (void*)0;
char* generics_sname_578;
int generics_sline_579;
void* __right_value710 = (void*)0;
char* block_580;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sGenericsFun* fun_581;
void* __right_value717 = (void*)0;
char* fun_name3_582;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* __result218__;
char* source_tail_583;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct buffer* header_584;
void* __right_value722 = (void*)0;
char* name_585;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
char* name_586;
void* __right_value725 = (void*)0;
int i_587;
struct sType* param_type_588;
char* param_name_592;
char* default_parametor_593;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
char* impl_name_594;
void* __right_value731 = (void*)0;
char* result_type_name_595;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
char* impl_name_596;
void* __right_value734 = (void*)0;
char* result_type_name_597;
void* __right_value735 = (void*)0;
int i_598;
struct sType* param_type_599;
char* param_name_600;
char* default_parametor_601;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sBlock* block_602;
_Bool static__603;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
char* new_fun_name_604;
void* __right_value744 = (void*)0;
char* __dec_obj234;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sFun* fun_605;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct sFun* fun2_606;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value759 = (void*)0;
struct sNode* __result223__;
void* __right_value760 = (void*)0;
char* new_fun_name_608;
void* __right_value761 = (void*)0;
char* __dec_obj239;
_Bool result_type_static_609;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sFun* fun_610;
void* __right_value767 = (void*)0;
struct sFun* fun2_611;
void* __right_value768 = (void*)0;
char* source_tail_612;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct buffer* header_613;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value777 = (void*)0;
struct sNode* __result226__;
void* __right_value778 = (void*)0;
char* asm_fun_615;
void* __right_value779 = (void*)0;
char* __dec_obj244;
_Bool result_type_static_616;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun_617;
void* __right_value785 = (void*)0;
struct sFun* fun2_618;
void* __right_value786 = (void*)0;
char* source_tail_619;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct buffer* header_620;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value795 = (void*)0;
struct sNode* __result229__;
struct sNode* __result230__;
fun_name_532 = (void*)0;
    header_head_520=info->p;
    source_head_521=info->p;
    result_type_522=((void*)0);
    var_name_523=((void*)0);
    constructor__524=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value664=parse_word(info)));
        __right_value664 = come_decrement_ref_count2(__right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj218=result_type_522;
        result_type_522=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /* a*/come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_522->mHeap=(_Bool)1;
        constructor__524=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value666=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_525=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_526=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_527=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value666,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj219=result_type_522;
        result_type_522=(struct sType*)come_increment_ref_count(result_type2_525);
        /* a*/come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj220=var_name_523;
        var_name_523=(char*)come_increment_ref_count(var_name2_526);
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_527) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_525,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_526 = come_decrement_ref_count2(var_name2_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_528=(_Bool)0;
    {
        p_529=info->p;
        sline_530=info->sline;
        buf2_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1707, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_531,*info->p);
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
        if(buffer_length(buf2_531)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_528=(_Bool)1;
        }
        info->p=p_529;
        info->sline=sline_530;
        /*i*/come_call_finalizer3(buf2_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_533=((void*)0);
    if(constructor__524) {
        __dec_obj221=base_fun_name_533;
        base_fun_name_533=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj222=fun_name_532;
        fun_name_532=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_533,info,(_Bool)1));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        if(method_definition_528) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value671=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_534=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_535=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_536=multiple_assign_var8->v3;
            /*g*/come_call_finalizer3(__right_value671,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_536) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            __dec_obj223=base_fun_name_533;
            base_fun_name_533=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj224=fun_name_532;
            fun_name_532=(char*)come_increment_ref_count(create_method_name(obj_type_534,(_Bool)0,base_fun_name_533,info,(_Bool)1));
            __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_535 = come_decrement_ref_count2(name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                __dec_obj225=base_fun_name_533;
                base_fun_name_533=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj226=fun_name_532;
                fun_name_532=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_533,info,(_Bool)1));
                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj227=fun_name_532;
                fun_name_532=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj228=base_fun_name_533;
                base_fun_name_533=(char*)come_increment_ref_count(__builtin_string(fun_name_532));
                __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_533,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value678=parse_params(info,constructor__524)));
    param_types_537=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_538=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_539=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_540=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value678,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_541=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_533,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_542=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1774, "buffer"))));
    buffer_append(header_buf_542,header_head_520,header_tail_541-header_head_520);
    buffer_append_char(header_buf_542,0);
    version_543=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_544=0;
        while(xisdigit(*info->p)) {
            n_544=n_544*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_543=n_544;
    }
    if(charp_operator_equals(base_fun_name_533,"lambda")) {
        block_545=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_546=0;
        lambda_num_546++;
        fun_name_547=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_546));
        result_type_522->mStatic=(_Bool)0;
        fun_548=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1804, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_522),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),(_Bool)0,var_args_540,(struct sBlock*)come_increment_ref_count(block_545),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_542)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_549=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value688=__builtin_string(fun_name_547))));
        __right_value688 = come_decrement_ref_count2(__right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_549==((void*)0)||fun2_549->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_547)),(struct sFun*)come_increment_ref_count(fun_548));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1814, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value691=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1814, "sLambdaNode")),fun_548,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value694=_inf_value5));
        /*i*/come_call_finalizer3(block_545,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_548,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value691,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value694) { __right_value694 = come_decrement_ref_count2(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result205__;
        /*i*/come_call_finalizer3(block_545,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_548,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_551=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
            generics_sname_552=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_553=info->sline;
            block_554=(char*)come_increment_ref_count(skip_block(info));
            fun_555=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1824, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value699=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value700=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_532)),(struct sType*)come_increment_ref_count(result_type_522),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),var_args_540,(char*)come_increment_ref_count(block_554),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_552)),generics_sline_553));
            /*g*/come_call_finalizer3(__right_value699,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            /*g*/come_call_finalizer3(__right_value700,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_556=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_551,base_fun_name_533));
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_556)),(struct sGenericsFun*)come_increment_ref_count(fun_555));
            __result217__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_551 = come_decrement_ref_count2(none_generics_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_552 = come_decrement_ref_count2(generics_sname_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_554 = come_decrement_ref_count2(block_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_555,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_556 = come_decrement_ref_count2(fun_name3_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
            none_generics_name_551 = come_decrement_ref_count2(none_generics_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_552 = come_decrement_ref_count2(generics_sname_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_554 = come_decrement_ref_count2(block_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_555,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_556 = come_decrement_ref_count2(fun_name3_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_578=(char*)come_increment_ref_count(__builtin_string(info->sname));
                generics_sline_579=info->sline;
                block_580=(char*)come_increment_ref_count(skip_block(info));
                fun_581=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1838, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value712=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value713=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_532)),(struct sType*)come_increment_ref_count(result_type_522),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),var_args_540,(char*)come_increment_ref_count(block_580),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_578)),generics_sline_579));
                /*g*/come_call_finalizer3(__right_value712,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                /*g*/come_call_finalizer3(__right_value713,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_582=(char*)come_increment_ref_count(charp_clone(base_fun_name_533));
                if(method_definition_528) {
                    map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_532)),(struct sGenericsFun*)come_increment_ref_count(fun_581));
                }
                else {
                    map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_582)),(struct sGenericsFun*)come_increment_ref_count(fun_581));
                }
                __result218__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_578 = come_decrement_ref_count2(generics_sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_580 = come_decrement_ref_count2(block_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_581,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_582 = come_decrement_ref_count2(fun_name3_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result218__;
                generics_sname_578 = come_decrement_ref_count2(generics_sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_580 = come_decrement_ref_count2(block_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_581,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_582 = come_decrement_ref_count2(fun_name3_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_583=info->p-1;
                    header_584=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1854, "buffer"))));
                    if(constructor__524) {
                        if(list$1sTypeph_length(param_types_537)==1) {
                            name_585=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_584,((char*)(__right_value723=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_585,name_585,name_585))));
                            __right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_585 = come_decrement_ref_count2(name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_586=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_584,((char*)(__right_value725=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_586,name_586,name_586))));
                            __right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_587=1;                            i_587<list$1sTypeph_length(param_types_537);                            i_587++                            ){
                                param_type_588=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_537,i_587), "05function.c", 1866, 1));
                                param_name_592=((char*)come_null_check(list$1charphp_operator_load_element(param_names_538,i_587), "05function.c", 1867, 2));
                                default_parametor_593=list$1charphp_operator_load_element(param_default_parametors_539,i_587);
                                if(default_parametor_593) {
                                    buffer_append_str(header_584,((char*)(__right_value727=xsprintf("extern %s %s=%s",((char*)(__right_value726=make_come_type_name_string_no_solved(param_type_588,(_Bool)0,info))),param_name_592,default_parametor_593))));
                                    __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_584,((char*)(__right_value729=xsprintf("extern %s %s",((char*)(__right_value728=make_come_type_name_string_no_solved(param_type_588,(_Bool)0,info))),param_name_592))));
                                    __right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_587!=list$1sTypeph_length(param_types_537)-1) {
                                    buffer_append_str(header_584,",");
                                }
                            }
                            buffer_append_str(header_584,");\n");
                            name_586 = come_decrement_ref_count2(name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_537)==1) {
                                impl_name_594=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_595=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_522,(_Bool)0,info));
                                buffer_append_str(header_584,((char*)(__right_value732=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_595,impl_name_594,base_fun_name_533,impl_name_594))));
                                __right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_594 = come_decrement_ref_count2(impl_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_595 = come_decrement_ref_count2(result_type_name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_596=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_597=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_522,(_Bool)0,info));
                                buffer_append_str(header_584,((char*)(__right_value735=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_597,impl_name_596,base_fun_name_533,impl_name_596))));
                                __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_598=1;                                i_598<list$1sTypeph_length(param_types_537);                                i_598++                                ){
                                    param_type_599=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_537,i_598), "05function.c", 1897, 3));
                                    param_name_600=((char*)come_null_check(list$1charphp_operator_load_element(param_names_538,i_598), "05function.c", 1898, 4));
                                    default_parametor_601=list$1charphp_operator_load_element(param_default_parametors_539,i_598);
                                    if(default_parametor_601) {
                                        buffer_append_str(header_584,((char*)(__right_value737=xsprintf("extern %s %s=%s",((char*)(__right_value736=make_come_type_name_string_no_solved(param_type_599,(_Bool)0,info))),param_name_600,default_parametor_601))));
                                        __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_584,((char*)(__right_value739=xsprintf("extern %s %s",((char*)(__right_value738=make_come_type_name_string_no_solved(param_type_599,(_Bool)0,info))),param_name_600))));
                                        __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_598!=list$1sTypeph_length(param_types_537)-1) {
                                        buffer_append_str(header_584,",");
                                    }
                                }
                                buffer_append_str(header_584,");\n");
                                impl_name_596 = come_decrement_ref_count2(impl_name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_597 = come_decrement_ref_count2(result_type_name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_584,source_head_521,source_tail_583-source_head_521);
                            buffer_append_str(header_584,";\n");
                        }
                    }
                    if(!result_type_522->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(__right_value740=buffer_to_string(header_584))));
                        __right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_602=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__524,(_Bool)1));
                    static__603=(_Bool)0;
                    if(result_type_522->mStatic) {
                        result_type_522->mStatic=(_Bool)0;
                        static__603=(_Bool)1;
                    }
                    if(version_543>0) {
                        new_fun_name_604=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value742=__builtin_string(fun_name_532))),version_543));
                        __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj234=fun_name_532;
                        fun_name_532=(char*)come_increment_ref_count(__builtin_string(new_fun_name_604));
                        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_604 = come_decrement_ref_count2(new_fun_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_605=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1938, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_532)),(struct sType*)come_increment_ref_count(result_type_522),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),(_Bool)0,var_args_540,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_602)),static__603,(char*)come_increment_ref_count(buffer_to_string(header_buf_542)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_532)),(struct sFun*)come_increment_ref_count(fun_605));
                    }
                    else {
                        fun2_606=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value752=__builtin_string(fun_name_532))));
                        __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_606==((void*)0)||fun2_606->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_532)),(struct sFun*)come_increment_ref_count(fun_605));
                        }
                    }
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1958, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value755=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1958, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_605),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value759=_inf_value6));
                    /*i*/come_call_finalizer3(header_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_602,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_605,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value755,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value759) { __right_value759 = come_decrement_ref_count2(__right_value759, ((struct sNode*)__right_value759)->finalize, ((struct sNode*)__right_value759)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result223__;
                    /*i*/come_call_finalizer3(header_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_602,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_605,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_543>0) {
                            new_fun_name_608=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_532,version_543));
                            __dec_obj239=fun_name_532;
                            fun_name_532=(char*)come_increment_ref_count(__builtin_string(new_fun_name_608));
                            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
                            new_fun_name_608 = come_decrement_ref_count2(new_fun_name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_static_609=result_type_522->mStatic;
                            result_type_522->mStatic=(_Bool)0;
                            fun_610=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1973, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_532)),(struct sType*)come_increment_ref_count(result_type_522),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),(_Bool)1,var_args_540,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_542)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_611=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value767=__builtin_string(fun_name_532))));
                            __right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_611==((void*)0)||fun2_611->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_532)),(struct sFun*)come_increment_ref_count(fun_610));
                            }
                            source_tail_612=info->p;
                            header_613=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1987, "buffer"))));
                            buffer_append(header_613,source_head_521,source_tail_612-source_head_521);
                            if(!result_type_static_609) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value771=buffer_to_string(header_613))));
                                __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1994, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value773=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1994, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_610),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value7));
                            /*i*/come_call_finalizer3(fun_610,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value773,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result226__;
                            /*i*/come_call_finalizer3(fun_610,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_615=(char*)come_increment_ref_count(parse_attribute(info));
                            if(string_operator_not_equals(asm_fun_615,"")) {
                                __dec_obj244=fun_name_532;
                                fun_name_532=(char*)come_increment_ref_count(__builtin_string(asm_fun_615));
                                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            expected_next_character(59,info);
                            result_type_static_616=result_type_522->mStatic;
                            result_type_522->mStatic=(_Bool)0;
                            fun_617=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2008, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_532)),(struct sType*)come_increment_ref_count(result_type_522),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),(_Bool)1,var_args_540,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_542)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_618=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value785=__builtin_string(fun_name_532))));
                            __right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_618==((void*)0)||fun2_618->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_532)),(struct sFun*)come_increment_ref_count(fun_617));
                            }
                            source_tail_619=info->p;
                            header_620=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2022, "buffer"))));
                            buffer_append(header_620,source_head_521,source_tail_619-source_head_521);
                            if(!result_type_static_616) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value789=buffer_to_string(header_620))));
                                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2029, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value791=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2029, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_617),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result229__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value8));
                            asm_fun_615 = come_decrement_ref_count2(asm_fun_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_617,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value791,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value795) { __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result229__;
                            asm_fun_615 = come_decrement_ref_count2(asm_fun_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_617,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        exit(2);
                    }
                }
            }
        }
    }
    info->constructor_=(_Bool)0;
    __result230__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_523 = come_decrement_ref_count2(var_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_533 = come_decrement_ref_count2(base_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_537,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_539,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj229;
struct list$1charph* __dec_obj230;
struct list$1charph* __dec_obj231;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj229=self->v1;
            /* a*/come_call_finalizer3(__dec_obj229,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj230=self->v2;
            /* a*/come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj231=self->v3;
            /* a*/come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
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

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result203__;
void* __right_value692 = (void*)0;
struct sLambdaNode* result_550;
void* __right_value693 = (void*)0;
char* __dec_obj233;
struct sLambdaNode* __result204__;
    if(self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_550=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(self!=((void*)0)) {
        result_550->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_550->sname;
        result_550->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_550->mFun=self->mFun;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_550;
    /*i*/come_call_finalizer3(result_550,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_574;
unsigned int it_575;
_Bool same_key_exist_576;
char* it2_577;
struct map$2charphsGenericsFunph* __result216__;
    if(self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_574=string_get_hash_key(key)%self->size;
    it_575=hash_574;
    while((_Bool)1) {
        if(self->item_existance[it_575]) {
            if(string_equals(self->keys[it_575],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_575]);
                    self->keys[it_575] = come_decrement_ref_count2(self->keys[it_575], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_575]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_575]);
                    self->keys[it_575]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_575],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_575]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_575]=item;
                }
                break;
            }
            it_575++;
            if(it_575>=self->size) {
                it_575=0;
            }
            else {
                if(it_575==hash_574) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_575]=(_Bool)1;
            if(1) {
                self->keys[it_575]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_575]=key;
            }
            if(1) {
                self->items[it_575]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_575]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_576=(_Bool)0;
    for(    it2_577=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_577=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_577,key)) {
            same_key_exist_576=(_Bool)1;
        }
    }
    if(!same_key_exist_576) {
        list$1charp_push_back(self->key_list,key);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_557;
void* __right_value705 = (void*)0;
char** keys_558;
void* __right_value706 = (void*)0;
struct sGenericsFun** items_559;
void* __right_value707 = (void*)0;
_Bool* item_existance_560;
int len_561;
char* it_564;
struct sGenericsFun* default_value_567;
struct sGenericsFun* it2_568;
unsigned int hash_571;
int n_572;
struct sGenericsFun* default_value_573;
default_value_567 = (void*)0;
default_value_573 = (void*)0;
    size_557=self->size*10;
    keys_558=(char**)come_increment_ref_count(((char**)(__right_value705=(char**)come_calloc(1, sizeof(char*)*(1*(size_557)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_559=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value706=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_557)), "/usr/local/include/comelang.h", 1622, "sGenericsFun*%"))));
    item_existance_560=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value707=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_557)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_561=0;
    for(    it_564=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_564=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_567,0,sizeof(struct sGenericsFun*));
        it2_568=map$2charphsGenericsFunph_at(self,it_564,default_value_567);
        hash_571=string_get_hash_key(it_564)%size_557;
        n_572=hash_571;
        while((_Bool)1) {
            if(item_existance_560[n_572]) {
                n_572++;
                if(n_572>=size_557) {
                    n_572=0;
                }
                else {
                    if(n_572==hash_571) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_560[n_572]=(_Bool)1;
                keys_558[n_572]=it_564;
                items_559[n_572]=map$2charphsGenericsFunph_at(self,it_564,default_value_573);
                len_561++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_558;
    self->items=items_559;
    self->item_existance=item_existance_560;
    self->size=size_557;
    self->len=len_561;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_562;
char* __result206__;
char* __result207__;
char* result_563;
char* __result208__;
result_562 = (void*)0;
result_563 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_562,0,sizeof(char*));
        __result206__ = gComeFunResultObject = __result_obj__ = result_562;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result207__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    memset(&result_563,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = result_563;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_565;
char* __result209__;
char* __result210__;
char* result_566;
char* __result211__;
result_565 = (void*)0;
result_566 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_565,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_565;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_566,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_566;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_569;
unsigned int it_570;
struct sGenericsFun* __result212__;
struct sGenericsFun* __result213__;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
    hash_569=string_get_hash_key(((char*)key))%self->size;
    it_570=hash_569;
    while((_Bool)1) {
        if(self->item_existance[it_570]) {
            if(string_equals(self->keys[it_570],key)) {
                __result212__ = gComeFunResultObject = __result_obj__ = self->items[it_570];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
            }
            it_570++;
            if(it_570>=self->size) {
                it_570=0;
            }
            else {
                if(it_570==hash_569) {
                    __result213__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result213__;
                }
            }
        }
        else {
            __result214__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result214__;
        }
    }
    __result215__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_589;
int i_590;
char* __result219__;
char* default_value_591;
char* __result220__;
default_value_591 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_589=self->head;
    i_590=0;
    while(it_589!=((void*)0)) {
        if(position==i_590) {
            __result219__ = gComeFunResultObject = __result_obj__ = it_589->item;
            gComeFunResultObject = (void*)0;
            return __result219__;
        }
        it_589=it_589->next;
        i_590++;
    }
    memset(&default_value_591,0,sizeof(char*));
    __result220__ = gComeFunResultObject = __result_obj__ = default_value_591;
    default_value_591 = come_decrement_ref_count2(default_value_591, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_622;
char* __dec_obj249;
char* last_code2_623;
char* __dec_obj250;
char* last_code3_624;
char* __dec_obj251;
struct sClass* current_stack_frame_struct_625;
struct sFun* finalizer_626;
void* __right_value796 = (void*)0;
char* real_fun_name_627;
void* __right_value797 = (void*)0;
char* user_real_fun_name_628;
struct sFun* user_finalizer_629;
void* __right_value798 = (void*)0;
struct sType* type2_630;
struct sClass* klass_631;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct buffer* source_632;
struct list$1tuple2$2charphsTypephph* o2_saved_634;
struct tuple2$2charphsTypeph* it_637;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_640;
struct sType* field_type_641;
char* p_643;
int sline_644;
char* sname_645;
char* head_646;
struct buffer* source3_647;
struct buffer* __dec_obj252;
void* __right_value801 = (void*)0;
char* __dec_obj253;
void* __right_value802 = (void*)0;
struct sBlock* block_648;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sType* result_type_649;
void* __right_value805 = (void*)0;
char* name_650;
void* __right_value806 = (void*)0;
struct sType* self_type_651;
struct sType* __list_values21___652[1];
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct list$1sTypeph* param_types_653;
void* __right_value809 = (void*)0;
char* __list_values22___654[1];
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1charph* param_names_655;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1charph* param_default_parametors_656;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct buffer* header_buf_657;
void* __right_value816 = (void*)0;
int i_658;
struct sType* param_type_659;
char* param_name_660;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct sFun* fun_661;
void* __right_value822 = (void*)0;
struct sFun* fun2_662;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value829 = (void*)0;
struct sNode* node_663;
struct buffer* __dec_obj258;
char* __dec_obj259;
char* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct tuple2$2sFunpcharph* __result240__;
    last_code_622=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj249=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_623=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj250=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_624=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj251=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_625=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_626=((void*)0);
    real_fun_name_627=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_628=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_629=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_628);
    type2_630=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_630;
    klass_631=type->mClass;
    if(type->mPointerNum>0&&klass_631->mStruct) {
        source_632=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2069, "buffer"))));
        buffer_append_char(source_632,123);
        if(user_finalizer_629) {
            char source2_633[1024];
            memset(&source2_633, 0, sizeof(char)            *(1024)            );
            snprintf(source2_633,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_628);
            buffer_append_str(source_632,source2_633);
        }
        klass_631=map$2charphsClassphp_operator_load_element(info->classes,klass_631->mName);
        for(        o2_saved_634=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_631->mFields)),it_637=list$1tuple2$2charphsTypephph_begin((o2_saved_634));        !list$1tuple2$2charphsTypephph_end((o2_saved_634));        it_637=list$1tuple2$2charphsTypephph_next((o2_saved_634))        ){
            multiple_assign_var10=it_637;
            name_640=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_641=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_641->mClass->mName)&&type->mPointerNum==field_type_641->mPointerNum&&field_type_641->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_641->mHeap) {
                char source2_642[1024];
                memset(&source2_642, 0, sizeof(char)                *(1024)                );
                snprintf(source2_642,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_640,name_640,name_640,name_640);
                buffer_append_str(source_632,source2_642);
            }
            name_640 = come_decrement_ref_count2(name_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_634,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_632,125);
        p_643=info->p;
        sline_644=info->sline;
        sname_645=(char*)come_increment_ref_count(info->sname);
        head_646=info->head;
        source3_647=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj252=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_632);
        /* a*/come_call_finalizer3(__dec_obj252,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_632->buf;
        info->head=source_632->buf;
        __dec_obj253=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_627));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_648=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_649=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2115, "sType")),"void",(_Bool)0,info));
        name_650=(char*)come_increment_ref_count(string_clone(real_fun_name_627));
        self_type_651=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_651->mHeap=(_Bool)0;
        if(self_type_651->mPointerNum>1) {
            self_type_651->mPointerNum=1;
        }
        {__list_values21___652[0]=come_increment_ref_count(self_type_651);
}        param_types_653=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2122, "struct list$1sTypeph")),1,__list_values21___652));
        {__list_values22___654[0]=come_increment_ref_count(((char*)(__right_value809=__builtin_string("self"))));
}        param_names_655=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2123, "struct list$1charph")),1,__list_values22___654));
        __right_value809 = come_decrement_ref_count2(__right_value809, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_656=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2124, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_656,((void*)0));
        header_buf_657=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2127, "buffer"))));
        buffer_append_str(header_buf_657,((char*)(__right_value816=make_come_type_name_string(result_type_649,info))));
        __right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_657," ");
        buffer_append_str(header_buf_657,real_fun_name_627);
        buffer_append_str(header_buf_657,"(");
        for(        i_658=0;        i_658<list$1sTypeph_length(param_types_653);        i_658++        ){
            param_type_659=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_653,i_658), "05function.c", 2135, 5));
            param_name_660=((char*)come_null_check(list$1charphp_operator_load_element(param_names_655,i_658), "05function.c", 2136, 6));
            buffer_append_str(header_buf_657,((char*)(__right_value817=make_come_type_name_string(param_type_659,info))));
            __right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_657," ");
            buffer_append_str(header_buf_657,param_name_660);
            if(i_658!=list$1sTypeph_length(param_types_653)-1) {
                buffer_append_str(header_buf_657,",");
            }
        }
        buffer_append_str(header_buf_657,")");
        result_type_649->mStatic=(_Bool)0;
        fun_661=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2150, "sFun")),(char*)come_increment_ref_count(name_650),(struct sType*)come_increment_ref_count(result_type_649),(struct list$1sTypeph*)come_increment_ref_count(param_types_653),(struct list$1charph*)come_increment_ref_count(param_names_655),(struct list$1charph*)come_increment_ref_count(param_default_parametors_656),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_648),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_657)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_662=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value822=__builtin_string(fun_name))));
        __right_value822 = come_decrement_ref_count2(__right_value822, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_662==((void*)0)||fun2_662->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_650)),(struct sFun*)come_increment_ref_count(fun_661));
        }
        finalizer_626=fun_661;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2166, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value825=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2166, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_661),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_663=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value825,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_663,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj258=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_647);
        /* a*/come_call_finalizer3(__dec_obj258,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_643;
        info->head=head_646;
        info->sline=sline_644;
        __dec_obj259=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_645);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_645 = come_decrement_ref_count2(sname_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_648,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_649,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_653,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_655,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_656,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_661,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_663) { node_663 = come_decrement_ref_count2(node_663, ((struct sNode*)node_663)->finalize, ((struct sNode*)node_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_625;
    __dec_obj260=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_622);
    __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj261=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_623);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_624);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result240__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value831=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2186, "struct tuple2$2sFunpcharph")),finalizer_626,(char*)come_increment_ref_count(real_fun_name_627))));
    last_code_622 = come_decrement_ref_count2(last_code_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_623 = come_decrement_ref_count2(last_code2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_624 = come_decrement_ref_count2(last_code3_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_627 = come_decrement_ref_count2(real_fun_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_628 = come_decrement_ref_count2(user_real_fun_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_630,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value831,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_635;
struct tuple2$2charphsTypeph* __result231__;
struct tuple2$2charphsTypeph* __result232__;
struct tuple2$2charphsTypeph* result_636;
struct tuple2$2charphsTypeph* __result233__;
result_635 = (void*)0;
result_636 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_635,0,sizeof(struct tuple2$2charphsTypeph*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_635;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->head;
    if(self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_636,0,sizeof(struct tuple2$2charphsTypeph*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_636;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_638;
struct tuple2$2charphsTypeph* __result234__;
struct tuple2$2charphsTypeph* __result235__;
struct tuple2$2charphsTypeph* result_639;
struct tuple2$2charphsTypeph* __result236__;
result_638 = (void*)0;
result_639 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_638,0,sizeof(struct tuple2$2charphsTypeph*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_638;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_639,0,sizeof(struct tuple2$2charphsTypeph*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_639;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj263;
struct tuple2$2sFunpcharph* __result239__;
    self->v1=v1;
    __dec_obj263=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj264;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj264=self->v2;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_665;
char* __dec_obj265;
char* last_code2_666;
char* __dec_obj266;
char* last_code3_667;
char* __dec_obj267;
struct sClass* current_stack_frame_struct_668;
struct sFun* finalizer_669;
void* __right_value832 = (void*)0;
char* real_fun_name_670;
void* __right_value833 = (void*)0;
struct sType* type2_671;
struct sClass* klass_672;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct buffer* source_673;
struct list$1tuple2$2charphsTypephph* o2_saved_674;
struct tuple2$2charphsTypeph* it_675;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_676;
struct sType* field_type_677;
char* p_679;
int sline_680;
char* sname_681;
char* head_682;
struct buffer* source3_683;
struct buffer* __dec_obj268;
void* __right_value836 = (void*)0;
char* __dec_obj269;
void* __right_value837 = (void*)0;
struct sBlock* block_684;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sType* result_type_685;
void* __right_value840 = (void*)0;
char* name_686;
void* __right_value841 = (void*)0;
struct sType* self_type_687;
struct sType* __list_values23___688[1];
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1sTypeph* param_types_689;
void* __right_value844 = (void*)0;
char* __list_values24___690[1];
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct list$1charph* param_names_691;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct list$1charph* param_default_parametors_692;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct buffer* header_buf_693;
void* __right_value851 = (void*)0;
int i_694;
struct sType* param_type_695;
char* param_name_696;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sFun* fun_697;
void* __right_value857 = (void*)0;
struct sFun* fun2_698;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value864 = (void*)0;
struct sNode* node_699;
struct buffer* __dec_obj274;
char* __dec_obj275;
char* __dec_obj276;
char* __dec_obj277;
char* __dec_obj278;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct tuple2$2sFunpcharph* __result243__;
    last_code_665=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj265=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_666=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj266=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_667=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj267=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_668=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_669=((void*)0);
    real_fun_name_670=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_671=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_671;
    klass_672=type->mClass;
    if(type->mPointerNum>0&&klass_672->mStruct) {
        source_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2213, "buffer"))));
        buffer_append_char(source_673,123);
        klass_672=map$2charphsClassphp_operator_load_element(info->classes,klass_672->mName);
        for(        o2_saved_674=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_672->mFields)),it_675=list$1tuple2$2charphsTypephph_begin((o2_saved_674));        !list$1tuple2$2charphsTypephph_end((o2_saved_674));        it_675=list$1tuple2$2charphsTypephph_next((o2_saved_674))        ){
            multiple_assign_var11=it_675;
            name_676=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_677=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_677->mClass->mName)&&type->mPointerNum==field_type_677->mPointerNum&&field_type_677->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_677->mHeap) {
                char source2_678[1024];
                memset(&source2_678, 0, sizeof(char)                *(1024)                );
                snprintf(source2_678,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_676,name_676,name_676,name_676);
                buffer_append_str(source_673,source2_678);
            }
            name_676 = come_decrement_ref_count2(name_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_674,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_673,125);
        p_679=info->p;
        sline_680=info->sline;
        sname_681=(char*)come_increment_ref_count(info->sname);
        head_682=info->head;
        source3_683=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj268=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_673);
        /* a*/come_call_finalizer3(__dec_obj268,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_673->buf;
        info->head=source_673->buf;
        __dec_obj269=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_670));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_684=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_685=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2252, "sType")),"void",(_Bool)0,info));
        name_686=(char*)come_increment_ref_count(string_clone(real_fun_name_670));
        self_type_687=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_687->mHeap=(_Bool)0;
        if(self_type_687->mPointerNum>1) {
            self_type_687->mPointerNum=1;
        }
        {__list_values23___688[0]=come_increment_ref_count(self_type_687);
}        param_types_689=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2259, "struct list$1sTypeph")),1,__list_values23___688));
        {__list_values24___690[0]=come_increment_ref_count(((char*)(__right_value844=__builtin_string("self"))));
}        param_names_691=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2260, "struct list$1charph")),1,__list_values24___690));
        __right_value844 = come_decrement_ref_count2(__right_value844, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_692=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2261, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_692,((void*)0));
        header_buf_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2264, "buffer"))));
        buffer_append_str(header_buf_693,((char*)(__right_value851=make_come_type_name_string(result_type_685,info))));
        __right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_693," ");
        buffer_append_str(header_buf_693,real_fun_name_670);
        buffer_append_str(header_buf_693,"(");
        for(        i_694=0;        i_694<list$1sTypeph_length(param_types_689);        i_694++        ){
            param_type_695=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_689,i_694), "05function.c", 2272, 7));
            param_name_696=((char*)come_null_check(list$1charphp_operator_load_element(param_names_691,i_694), "05function.c", 2273, 8));
            buffer_append_str(header_buf_693,((char*)(__right_value852=make_come_type_name_string(param_type_695,info))));
            __right_value852 = come_decrement_ref_count2(__right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_693," ");
            buffer_append_str(header_buf_693,param_name_696);
            if(i_694!=list$1sTypeph_length(param_types_689)-1) {
                buffer_append_str(header_buf_693,",");
            }
        }
        buffer_append_str(header_buf_693,")");
        result_type_685->mStatic=(_Bool)0;
        fun_697=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2287, "sFun")),(char*)come_increment_ref_count(name_686),(struct sType*)come_increment_ref_count(result_type_685),(struct list$1sTypeph*)come_increment_ref_count(param_types_689),(struct list$1charph*)come_increment_ref_count(param_names_691),(struct list$1charph*)come_increment_ref_count(param_default_parametors_692),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_684),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_693)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_698=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value857=__builtin_string(fun_name))));
        __right_value857 = come_decrement_ref_count2(__right_value857, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_698==((void*)0)||fun2_698->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_686)),(struct sFun*)come_increment_ref_count(fun_697));
        }
        finalizer_669=fun_697;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2303, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value860=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2303, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_697),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_699=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value860,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_699,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj274=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_683);
        /* a*/come_call_finalizer3(__dec_obj274,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_679;
        info->head=head_682;
        info->sline=sline_680;
        __dec_obj275=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_681);
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_681 = come_decrement_ref_count2(sname_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_684,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_686 = come_decrement_ref_count2(name_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_687,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_689,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_691,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_692,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_697,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_668;
    __dec_obj276=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_665);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj277=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_666);
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj278=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_667);
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result243__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value866=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2323, "struct tuple2$2sFunpcharph")),finalizer_669,(char*)come_increment_ref_count(real_fun_name_670))));
    last_code_665 = come_decrement_ref_count2(last_code_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_666 = come_decrement_ref_count2(last_code2_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_667 = come_decrement_ref_count2(last_code3_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_670 = come_decrement_ref_count2(real_fun_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_671,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value866,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_701;
char* __dec_obj279;
char* last_code2_702;
char* __dec_obj280;
char* last_code3_703;
char* __dec_obj281;
struct sClass* current_stack_frame_struct_704;
struct sFun* equaler_705;
void* __right_value867 = (void*)0;
char* real_fun_name_706;
void* __right_value868 = (void*)0;
struct sType* type2_707;
struct sClass* klass_708;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct buffer* source_709;
char* name_710;
struct list$1tuple2$2charphsTypephph* o2_saved_712;
struct tuple2$2charphsTypeph* it_713;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_714;
struct sType* field_type_715;
char* p_717;
int sline_718;
char* sname_719;
char* head_720;
struct buffer* source3_721;
struct buffer* __dec_obj282;
void* __right_value871 = (void*)0;
char* __dec_obj283;
void* __right_value872 = (void*)0;
struct sBlock* block_722;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sType* result_type_723;
void* __right_value875 = (void*)0;
char* name_724;
void* __right_value876 = (void*)0;
struct sType* left_type_725;
void* __right_value877 = (void*)0;
struct sType* right_type_726;
struct sType* __list_values25___727[2];
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1sTypeph* param_types_728;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
char* __list_values26___729[2];
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1charph* param_names_730;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct list$1charph* param_default_parametors_731;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct buffer* header_buf_732;
void* __right_value888 = (void*)0;
int i_733;
struct sType* param_type_734;
char* param_name_735;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sFun* fun_736;
void* __right_value894 = (void*)0;
struct sFun* fun2_737;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value901 = (void*)0;
struct sNode* node_738;
struct buffer* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct tuple2$2sFunpcharph* __result246__;
    last_code_701=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_702=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_703=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj281=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_704=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_705=((void*)0);
    real_fun_name_706=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_707=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_707;
    klass_708=type->mClass;
    if(type->mPointerNum>0&&!klass_708->mNumber) {
        source_709=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2348, "buffer"))));
        buffer_append_char(source_709,123);
        if(klass_708->mProtocol) {
            name_710="_protocol_obj";
            char source2_711[1024];
            memset(&source2_711, 0, sizeof(char)            *(1024)            );
            snprintf(source2_711,1024,"return left.%s.equals(right.%s);\n",name_710,name_710);
            buffer_append_str(source_709,source2_711);
        }
        else {
            klass_708=map$2charphsClassphp_operator_load_element(info->classes,klass_708->mName);
            for(            o2_saved_712=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_708->mFields)),it_713=list$1tuple2$2charphsTypephph_begin((o2_saved_712));            !list$1tuple2$2charphsTypephph_end((o2_saved_712));            it_713=list$1tuple2$2charphsTypephph_next((o2_saved_712))            ){
                multiple_assign_var12=it_713;
                name_714=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_715=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_715->mClass->mName)&&type->mPointerNum==field_type_715->mPointerNum&&field_type_715->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_716[1024];
                memset(&source2_716, 0, sizeof(char)                *(1024)                );
                snprintf(source2_716,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_714,name_714);
                buffer_append_str(source_709,source2_716);
                name_714 = come_decrement_ref_count2(name_714, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_715,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_712,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_709,"return true;");
        buffer_append_char(source_709,125);
        p_717=info->p;
        sline_718=info->sline;
        sname_719=(char*)come_increment_ref_count(info->sname);
        head_720=info->head;
        source3_721=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_709);
        /* a*/come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_709->buf;
        info->head=source_709->buf;
        __dec_obj283=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_706));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_722=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_723=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2394, "sType")),"bool",(_Bool)0,info));
        name_724=(char*)come_increment_ref_count(string_clone(real_fun_name_706));
        left_type_725=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_725->mHeap=(_Bool)0;
        right_type_726=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_726->mHeap=(_Bool)0;
        {__list_values25___727[0]=come_increment_ref_count(left_type_725);
__list_values25___727[1]=come_increment_ref_count(right_type_726);
}        param_types_728=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2400, "struct list$1sTypeph")),2,__list_values25___727));
        {__list_values26___729[0]=come_increment_ref_count(((char*)(__right_value880=__builtin_string("left"))));
__list_values26___729[1]=come_increment_ref_count(((char*)(__right_value881=__builtin_string("right"))));
}        param_names_730=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2401, "struct list$1charph")),2,__list_values26___729));
        __right_value880 = come_decrement_ref_count2(__right_value880, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value881 = come_decrement_ref_count2(__right_value881, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_731=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2402, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_731,((void*)0));
        list$1charph_push_back(param_default_parametors_731,((void*)0));
        header_buf_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2406, "buffer"))));
        buffer_append_str(header_buf_732,((char*)(__right_value888=make_come_type_name_string(result_type_723,info))));
        __right_value888 = come_decrement_ref_count2(__right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_732," ");
        buffer_append_str(header_buf_732,real_fun_name_706);
        buffer_append_str(header_buf_732,"(");
        for(        i_733=0;        i_733<list$1sTypeph_length(param_types_728);        i_733++        ){
            param_type_734=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_728,i_733), "05function.c", 2414, 9));
            param_name_735=((char*)come_null_check(list$1charphp_operator_load_element(param_names_730,i_733), "05function.c", 2415, 10));
            buffer_append_str(header_buf_732,((char*)(__right_value889=make_come_type_name_string(param_type_734,info))));
            __right_value889 = come_decrement_ref_count2(__right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_732," ");
            buffer_append_str(header_buf_732,param_name_735);
            if(i_733!=list$1sTypeph_length(param_types_728)-1) {
                buffer_append_str(header_buf_732,",");
            }
        }
        buffer_append_str(header_buf_732,")");
        result_type_723->mStatic=(_Bool)0;
        fun_736=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2429, "sFun")),(char*)come_increment_ref_count(name_724),(struct sType*)come_increment_ref_count(result_type_723),(struct list$1sTypeph*)come_increment_ref_count(param_types_728),(struct list$1charph*)come_increment_ref_count(param_names_730),(struct list$1charph*)come_increment_ref_count(param_default_parametors_731),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_722),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_732)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_737=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value894=__builtin_string(fun_name))));
        __right_value894 = come_decrement_ref_count2(__right_value894, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_737==((void*)0)||fun2_737->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_724)),(struct sFun*)come_increment_ref_count(fun_736));
        }
        equaler_705=fun_736;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2445, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value897=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2445, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_736),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_738=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value897,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_738,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_721);
        /* a*/come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_717;
        info->head=head_720;
        info->sline=sline_718;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_719);
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_719 = come_decrement_ref_count2(sname_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_722,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_724 = come_decrement_ref_count2(name_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_728,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_730,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_736,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_738) { node_738 = come_decrement_ref_count2(node_738, ((struct sNode*)node_738)->finalize, ((struct sNode*)node_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_704;
    __dec_obj290=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_701);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_702);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_703);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value903=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2465, "struct tuple2$2sFunpcharph")),equaler_705,(char*)come_increment_ref_count(real_fun_name_706))));
    last_code_701 = come_decrement_ref_count2(last_code_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_702 = come_decrement_ref_count2(last_code2_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_703 = come_decrement_ref_count2(last_code3_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_706 = come_decrement_ref_count2(real_fun_name_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_707,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value903,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_740;
char* __dec_obj293;
char* last_code2_741;
char* __dec_obj294;
char* last_code3_742;
char* __dec_obj295;
struct sClass* current_stack_frame_struct_743;
struct sFun* equaler_744;
void* __right_value904 = (void*)0;
char* real_fun_name_745;
void* __right_value905 = (void*)0;
struct sType* type2_746;
struct sClass* klass_747;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct buffer* source_748;
char* name_749;
int i_752;
struct list$1tuple2$2charphsTypephph* o2_saved_753;
struct tuple2$2charphsTypeph* it_754;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_755;
struct sType* field_type_756;
char* p_760;
int sline_761;
char* sname_762;
char* head_763;
struct buffer* source3_764;
struct buffer* __dec_obj296;
void* __right_value908 = (void*)0;
char* __dec_obj297;
void* __right_value909 = (void*)0;
struct sBlock* block_765;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sType* result_type_766;
void* __right_value912 = (void*)0;
char* name_767;
void* __right_value913 = (void*)0;
struct sType* left_type_768;
void* __right_value914 = (void*)0;
struct sType* right_type_769;
struct sType* __list_values27___770[2];
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct list$1sTypeph* param_types_771;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
char* __list_values28___772[2];
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct list$1charph* param_names_773;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct list$1charph* param_default_parametors_774;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct buffer* header_buf_775;
void* __right_value925 = (void*)0;
int i_776;
struct sType* param_type_777;
char* param_name_778;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sFun* fun_779;
void* __right_value931 = (void*)0;
struct sFun* fun2_780;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value938 = (void*)0;
struct sNode* node_781;
struct buffer* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct tuple2$2sFunpcharph* __result249__;
    last_code_740=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj293=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_741=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj294=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_742=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj295=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_743=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_744=((void*)0);
    real_fun_name_745=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_746=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_746;
    klass_747=type->mClass;
    if(type->mPointerNum>0&&!klass_747->mNumber) {
        source_748=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2490, "buffer"))));
        buffer_append_char(source_748,123);
        if(klass_747->mProtocol) {
            name_749="_protocol_obj";
            char source2_750[1024];
            memset(&source2_750, 0, sizeof(char)            *(1024)            );
            snprintf(source2_750,1024,"return !left.%s.equals(right.%s);\n",name_749,name_749);
            buffer_append_str(source_748,source2_750);
        }
        else {
            char source2_751[1024];
            memset(&source2_751, 0, sizeof(char)            *(1024)            );
            snprintf(source2_751,1024,"return !(");
            buffer_append_str(source_748,source2_751);
            i_752=0;
            klass_747=map$2charphsClassphp_operator_load_element(info->classes,klass_747->mName);
            for(            o2_saved_753=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_747->mFields)),it_754=list$1tuple2$2charphsTypephph_begin((o2_saved_753));            !list$1tuple2$2charphsTypephph_end((o2_saved_753));            it_754=list$1tuple2$2charphsTypephph_next((o2_saved_753))            ){
                multiple_assign_var13=it_754;
                name_755=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_756=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_756->mClass->mName)&&type->mPointerNum==field_type_756->mPointerNum&&field_type_756->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_757[1024];
                memset(&source2_757, 0, sizeof(char)                *(1024)                );
                snprintf(source2_757,1024,"left.%s.equals(right.%s)",name_755,name_755);
                buffer_append_str(source_748,source2_757);
                if(i_752==list$1tuple2$2charphsTypephph_length(klass_747->mFields)-1) {
                    char source2_758[1024];
                    memset(&source2_758, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_758,1024,");");
                    buffer_append_str(source_748,source2_758);
                }
                else {
                    char source2_759[1024];
                    memset(&source2_759, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_759,1024," && ");
                    buffer_append_str(source_748,source2_759);
                }
                i_752++;
                name_755 = come_decrement_ref_count2(name_755, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_756,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_753,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_748,125);
        p_760=info->p;
        sline_761=info->sline;
        sname_762=(char*)come_increment_ref_count(info->sname);
        head_763=info->head;
        source3_764=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj296=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_748);
        /* a*/come_call_finalizer3(__dec_obj296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_748->buf;
        info->head=source_748->buf;
        __dec_obj297=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_745));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_765=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_766=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2553, "sType")),"bool",(_Bool)0,info));
        name_767=(char*)come_increment_ref_count(string_clone(real_fun_name_745));
        left_type_768=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_768->mHeap=(_Bool)0;
        right_type_769=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_769->mHeap=(_Bool)0;
        {__list_values27___770[0]=come_increment_ref_count(left_type_768);
__list_values27___770[1]=come_increment_ref_count(right_type_769);
}        param_types_771=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2559, "struct list$1sTypeph")),2,__list_values27___770));
        {__list_values28___772[0]=come_increment_ref_count(((char*)(__right_value917=__builtin_string("left"))));
__list_values28___772[1]=come_increment_ref_count(((char*)(__right_value918=__builtin_string("right"))));
}        param_names_773=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2560, "struct list$1charph")),2,__list_values28___772));
        __right_value917 = come_decrement_ref_count2(__right_value917, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value918 = come_decrement_ref_count2(__right_value918, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_774=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2561, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_774,((void*)0));
        list$1charph_push_back(param_default_parametors_774,((void*)0));
        header_buf_775=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2565, "buffer"))));
        buffer_append_str(header_buf_775,((char*)(__right_value925=make_come_type_name_string(result_type_766,info))));
        __right_value925 = come_decrement_ref_count2(__right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_775," ");
        buffer_append_str(header_buf_775,real_fun_name_745);
        buffer_append_str(header_buf_775,"(");
        for(        i_776=0;        i_776<list$1sTypeph_length(param_types_771);        i_776++        ){
            param_type_777=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_771,i_776), "05function.c", 2573, 11));
            param_name_778=((char*)come_null_check(list$1charphp_operator_load_element(param_names_773,i_776), "05function.c", 2574, 12));
            buffer_append_str(header_buf_775,((char*)(__right_value926=make_come_type_name_string(param_type_777,info))));
            __right_value926 = come_decrement_ref_count2(__right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_775," ");
            buffer_append_str(header_buf_775,param_name_778);
            if(i_776!=list$1sTypeph_length(param_types_771)-1) {
                buffer_append_str(header_buf_775,",");
            }
        }
        buffer_append_str(header_buf_775,")");
        result_type_766->mStatic=(_Bool)0;
        fun_779=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2588, "sFun")),(char*)come_increment_ref_count(name_767),(struct sType*)come_increment_ref_count(result_type_766),(struct list$1sTypeph*)come_increment_ref_count(param_types_771),(struct list$1charph*)come_increment_ref_count(param_names_773),(struct list$1charph*)come_increment_ref_count(param_default_parametors_774),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_765),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_775)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_780=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value931=__builtin_string(fun_name))));
        __right_value931 = come_decrement_ref_count2(__right_value931, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_780==((void*)0)||fun2_780->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_767)),(struct sFun*)come_increment_ref_count(fun_779));
        }
        equaler_744=fun_779;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2604, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value934=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2604, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_779),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_781=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value934,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_781,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_764);
        /* a*/come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_760;
        info->head=head_763;
        info->sline=sline_761;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_762);
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_748,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_762 = come_decrement_ref_count2(sname_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_764,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_765,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_767 = come_decrement_ref_count2(name_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_771,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_774,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_779,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_781) { node_781 = come_decrement_ref_count2(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_743;
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_740);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_741);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj306=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_742);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value940=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2624, "struct tuple2$2sFunpcharph")),equaler_744,(char*)come_increment_ref_count(real_fun_name_745))));
    last_code_740 = come_decrement_ref_count2(last_code_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_741 = come_decrement_ref_count2(last_code2_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_742 = come_decrement_ref_count2(last_code3_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_745 = come_decrement_ref_count2(real_fun_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_746,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value940,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_783;
char* __dec_obj307;
char* last_code2_784;
char* __dec_obj308;
char* last_code3_785;
char* __dec_obj309;
struct sClass* current_stack_frame_struct_786;
struct sFun* equaler_787;
void* __right_value941 = (void*)0;
char* real_fun_name_788;
void* __right_value942 = (void*)0;
struct sType* type2_789;
struct sClass* klass_790;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct buffer* source_791;
char* name_792;
struct list$1tuple2$2charphsTypephph* o2_saved_794;
struct tuple2$2charphsTypeph* it_795;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_796;
struct sType* field_type_797;
char* p_799;
int sline_800;
char* sname_801;
char* head_802;
struct buffer* source3_803;
struct buffer* __dec_obj310;
void* __right_value945 = (void*)0;
char* __dec_obj311;
void* __right_value946 = (void*)0;
struct sBlock* block_804;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sType* result_type_805;
void* __right_value949 = (void*)0;
char* name_806;
void* __right_value950 = (void*)0;
struct sType* left_type_807;
void* __right_value951 = (void*)0;
struct sType* right_type_808;
struct sType* __list_values29___809[2];
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct list$1sTypeph* param_types_810;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
char* __list_values30___811[2];
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct list$1charph* param_names_812;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct list$1charph* param_default_parametors_813;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct buffer* header_buf_814;
void* __right_value962 = (void*)0;
int i_815;
struct sType* param_type_816;
char* param_name_817;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct sFun* fun_818;
void* __right_value968 = (void*)0;
struct sFun* fun2_819;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value975 = (void*)0;
struct sNode* node_820;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct tuple2$2sFunpcharph* __result252__;
    last_code_783=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj307=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_784=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj308=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_785=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj309=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_786=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_787=((void*)0);
    real_fun_name_788=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_789=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_789;
    klass_790=type->mClass;
    if(type->mPointerNum>0&&!klass_790->mNumber) {
        source_791=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2649, "buffer"))));
        buffer_append_char(source_791,123);
        if(klass_790->mProtocol) {
            name_792="_protocol_obj";
            char source2_793[1024];
            memset(&source2_793, 0, sizeof(char)            *(1024)            );
            snprintf(source2_793,1024,"return left.%s.equals(right.%s);\n",name_792,name_792);
            buffer_append_str(source_791,source2_793);
        }
        else {
            klass_790=map$2charphsClassphp_operator_load_element(info->classes,klass_790->mName);
            for(            o2_saved_794=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_790->mFields)),it_795=list$1tuple2$2charphsTypephph_begin((o2_saved_794));            !list$1tuple2$2charphsTypephph_end((o2_saved_794));            it_795=list$1tuple2$2charphsTypephph_next((o2_saved_794))            ){
                multiple_assign_var14=it_795;
                name_796=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_797=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_797->mClass->mName)&&type->mPointerNum==field_type_797->mPointerNum&&field_type_797->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_798[1024];
                memset(&source2_798, 0, sizeof(char)                *(1024)                );
                snprintf(source2_798,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_796,name_796);
                buffer_append_str(source_791,source2_798);
                name_796 = come_decrement_ref_count2(name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_794,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_791,"return true;\n");
        buffer_append_char(source_791,125);
        p_799=info->p;
        sline_800=info->sline;
        sname_801=(char*)come_increment_ref_count(info->sname);
        head_802=info->head;
        source3_803=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_791);
        /* a*/come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_791->buf;
        info->head=source_791->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_788));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_804=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_805=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2695, "sType")),"bool",(_Bool)0,info));
        name_806=(char*)come_increment_ref_count(string_clone(real_fun_name_788));
        left_type_807=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_807->mHeap=(_Bool)0;
        right_type_808=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_808->mHeap=(_Bool)0;
        {__list_values29___809[0]=come_increment_ref_count(left_type_807);
__list_values29___809[1]=come_increment_ref_count(right_type_808);
}        param_types_810=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2701, "struct list$1sTypeph")),2,__list_values29___809));
        {__list_values30___811[0]=come_increment_ref_count(((char*)(__right_value954=__builtin_string("left"))));
__list_values30___811[1]=come_increment_ref_count(((char*)(__right_value955=__builtin_string("right"))));
}        param_names_812=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2702, "struct list$1charph")),2,__list_values30___811));
        __right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value955 = come_decrement_ref_count2(__right_value955, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_813=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2703, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_813,((void*)0));
        list$1charph_push_back(param_default_parametors_813,((void*)0));
        header_buf_814=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2707, "buffer"))));
        buffer_append_str(header_buf_814,((char*)(__right_value962=make_come_type_name_string(result_type_805,info))));
        __right_value962 = come_decrement_ref_count2(__right_value962, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_814," ");
        buffer_append_str(header_buf_814,real_fun_name_788);
        buffer_append_str(header_buf_814,"(");
        for(        i_815=0;        i_815<list$1sTypeph_length(param_types_810);        i_815++        ){
            param_type_816=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_810,i_815), "05function.c", 2715, 13));
            param_name_817=((char*)come_null_check(list$1charphp_operator_load_element(param_names_812,i_815), "05function.c", 2716, 14));
            buffer_append_str(header_buf_814,((char*)(__right_value963=make_come_type_name_string(param_type_816,info))));
            __right_value963 = come_decrement_ref_count2(__right_value963, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_814," ");
            buffer_append_str(header_buf_814,param_name_817);
            if(i_815!=list$1sTypeph_length(param_types_810)-1) {
                buffer_append_str(header_buf_814,",");
            }
        }
        buffer_append_str(header_buf_814,")");
        result_type_805->mStatic=(_Bool)0;
        fun_818=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2730, "sFun")),(char*)come_increment_ref_count(name_806),(struct sType*)come_increment_ref_count(result_type_805),(struct list$1sTypeph*)come_increment_ref_count(param_types_810),(struct list$1charph*)come_increment_ref_count(param_names_812),(struct list$1charph*)come_increment_ref_count(param_default_parametors_813),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_804),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_814)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_819=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value968=__builtin_string(fun_name))));
        __right_value968 = come_decrement_ref_count2(__right_value968, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_819==((void*)0)||fun2_819->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_806)),(struct sFun*)come_increment_ref_count(fun_818));
        }
        equaler_787=fun_818;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2746, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value971=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2746, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_818),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_820=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value971,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_820,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_803);
        /* a*/come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_799;
        info->head=head_802;
        info->sline=sline_800;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_801);
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_801 = come_decrement_ref_count2(sname_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_804,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_805,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_806 = come_decrement_ref_count2(name_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_807,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_808,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_810,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_812,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_813,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_814,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_818,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_786;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_783);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_784);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_785);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value977=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2766, "struct tuple2$2sFunpcharph")),equaler_787,(char*)come_increment_ref_count(real_fun_name_788))));
    last_code_783 = come_decrement_ref_count2(last_code_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_784 = come_decrement_ref_count2(last_code2_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_785 = come_decrement_ref_count2(last_code3_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_788 = come_decrement_ref_count2(real_fun_name_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_789,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value977,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_822;
char* __dec_obj321;
char* last_code2_823;
char* __dec_obj322;
char* last_code3_824;
char* __dec_obj323;
struct sClass* current_stack_frame_struct_825;
struct sFun* cloner_826;
void* __right_value978 = (void*)0;
char* real_fun_name_827;
void* __right_value979 = (void*)0;
struct sType* type2_828;
struct sClass* klass_829;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct buffer* source_830;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
char* name_831;
struct list$1tuple2$2charphsTypephph* o2_saved_833;
struct tuple2$2charphsTypeph* it_834;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_835;
struct sType* field_type_836;
struct list$1tuple2$2charphsTypephph* o2_saved_839;
struct tuple2$2charphsTypeph* it_840;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_841;
struct sType* field_type_842;
void* __right_value984 = (void*)0;
char* p_846;
int sline_847;
char* sname_848;
struct buffer* source3_849;
char* head_850;
struct buffer* __dec_obj324;
void* __right_value985 = (void*)0;
char* __dec_obj325;
void* __right_value986 = (void*)0;
struct sBlock* block_851;
void* __right_value987 = (void*)0;
struct sType* result_type_852;
void* __right_value988 = (void*)0;
char* name_853;
void* __right_value989 = (void*)0;
struct sType* self_type_854;
struct sType* __list_values31___855[1];
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct list$1sTypeph* param_types_856;
void* __right_value992 = (void*)0;
char* __list_values32___857[1];
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct list$1charph* param_names_858;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct list$1charph* param_default_parametors_859;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct buffer* header_buf_860;
void* __right_value999 = (void*)0;
int i_861;
struct sType* param_type_862;
char* param_name_863;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct sFun* fun_864;
void* __right_value1005 = (void*)0;
struct sFun* fun2_865;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1012 = (void*)0;
struct sNode* node_866;
char* __dec_obj330;
struct buffer* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct tuple2$2sFunpcharph* __result255__;
    last_code_822=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_823=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_824=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj323=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_825=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_826=((void*)0);
    real_fun_name_827=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_828=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_828;
    klass_829=type->mClass;
    if(type->mPointerNum>0&&!klass_829->mNumber) {
        source_830=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2791, "buffer"))));
        buffer_append_str(source_830,"{\n");
        buffer_append_str(source_830,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_830,((char*)(__right_value983=xsprintf("var result = new %s;\n",((char*)(__right_value982=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_829->mProtocol) {
            name_831="_protocol_obj";
            char source2_832[1024];
            memset(&source2_832, 0, sizeof(char)            *(1024)            );
            snprintf(source2_832,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_830,source2_832);
            klass_829=map$2charphsClassphp_operator_load_element(info->classes,klass_829->mName);
            for(            o2_saved_833=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_829->mFields)),it_834=list$1tuple2$2charphsTypephph_begin((o2_saved_833));            !list$1tuple2$2charphsTypephph_end((o2_saved_833));            it_834=list$1tuple2$2charphsTypephph_next((o2_saved_833))            ){
                multiple_assign_var15=it_834;
                name_835=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_836=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_836->mClass->mName)&&type->mPointerNum==field_type_836->mPointerNum&&field_type_836->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_835,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_836->mArrayNum)>0) {
                        char source2_837[1024];
                        memset(&source2_837, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_837,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_835,name_835,name_835);
                        buffer_append_str(source_830,source2_837);
                    }
                    else {
                        char source2_838[1024];
                        memset(&source2_838, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_838,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_835,name_835);
                        buffer_append_str(source_830,source2_838);
                    }
                }
                name_835 = come_decrement_ref_count2(name_835, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_836,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_833,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_829=map$2charphsClassphp_operator_load_element(info->classes,klass_829->mName);
            for(            o2_saved_839=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_829->mFields)),it_840=list$1tuple2$2charphsTypephph_begin((o2_saved_839));            !list$1tuple2$2charphsTypephph_end((o2_saved_839));            it_840=list$1tuple2$2charphsTypephph_next((o2_saved_839))            ){
                multiple_assign_var16=it_840;
                name_841=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_842=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_842->mClass->mName)&&type->mPointerNum==field_type_842->mPointerNum&&field_type_842->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_842->mHeap) {
                    char source2_843[1024];
                    memset(&source2_843, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_843,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_841,name_841,name_841);
                    buffer_append_str(source_830,source2_843);
                }
                else {
                    if(list$1sNodeph_length(field_type_842->mArrayNum)>0) {
                        char source2_844[1024];
                        memset(&source2_844, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_844,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_841,name_841,name_841);
                        buffer_append_str(source_830,source2_844);
                    }
                    else {
                        char source2_845[1024];
                        memset(&source2_845, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_845,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_841,name_841);
                        buffer_append_str(source_830,source2_845);
                    }
                }
                name_841 = come_decrement_ref_count2(name_841, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_842,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_839,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_830,((char*)(__right_value984=xsprintf("return result;"))));
        __right_value984 = come_decrement_ref_count2(__right_value984, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_830,125);
        p_846=info->p;
        sline_847=info->sline;
        sname_848=(char*)come_increment_ref_count(info->sname);
        source3_849=(struct buffer*)come_increment_ref_count(info->source);
        head_850=info->head;
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_830);
        /* a*/come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_827));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_851=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_852=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_853=(char*)come_increment_ref_count(string_clone(real_fun_name_827));
        self_type_854=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_854->mHeap=(_Bool)0;
        {__list_values31___855[0]=come_increment_ref_count(self_type_854);
}        param_types_856=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2885, "struct list$1sTypeph")),1,__list_values31___855));
        {__list_values32___857[0]=come_increment_ref_count(((char*)(__right_value992=__builtin_string("self"))));
}        param_names_858=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2886, "struct list$1charph")),1,__list_values32___857));
        __right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_859=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2887, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_859,((void*)0));
        header_buf_860=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2890, "buffer"))));
        buffer_append_str(header_buf_860,((char*)(__right_value999=make_come_type_name_string(result_type_852,info))));
        __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_860," ");
        buffer_append_str(header_buf_860,real_fun_name_827);
        buffer_append_str(header_buf_860,"(");
        for(        i_861=0;        i_861<list$1sTypeph_length(param_types_856);        i_861++        ){
            param_type_862=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_856,i_861), "05function.c", 2898, 15));
            param_name_863=((char*)come_null_check(list$1charphp_operator_load_element(param_names_858,i_861), "05function.c", 2899, 16));
            buffer_append_str(header_buf_860,((char*)(__right_value1000=make_come_type_name_string(param_type_862,info))));
            __right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_860," ");
            buffer_append_str(header_buf_860,param_name_863);
            if(i_861!=list$1sTypeph_length(param_types_856)-1) {
                buffer_append_str(header_buf_860,",");
            }
        }
        buffer_append_str(header_buf_860,")");
        result_type_852->mStatic=(_Bool)0;
        fun_864=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2913, "sFun")),(char*)come_increment_ref_count(name_853),(struct sType*)come_increment_ref_count(result_type_852),(struct list$1sTypeph*)come_increment_ref_count(param_types_856),(struct list$1charph*)come_increment_ref_count(param_names_858),(struct list$1charph*)come_increment_ref_count(param_default_parametors_859),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_851),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_860)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_864->mCloner=(_Bool)1;
        fun2_865=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1005=__builtin_string(fun_name))));
        __right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_865==((void*)0)||fun2_865->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_853)),(struct sFun*)come_increment_ref_count(fun_864));
        }
        cloner_826=fun_864;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2930, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1008=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2930, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_864),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_866=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1008,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_866,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj330=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_848);
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_847;
        __dec_obj331=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_849);
        /* a*/come_call_finalizer3(__dec_obj331,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_846;
        info->head=head_850;
        info->sline=sline_847;
        /*i*/come_call_finalizer3(source_830,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_848 = come_decrement_ref_count2(sname_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_851,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_852,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_853 = come_decrement_ref_count2(name_853, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_854,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_856,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_858,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_859,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_860,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_864,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_866) { node_866 = come_decrement_ref_count2(node_866, ((struct sNode*)node_866)->finalize, ((struct sNode*)node_866)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_825;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_822);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_823);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj334=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_824);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result255__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1014=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2952, "struct tuple2$2sFunpcharph")),cloner_826,(char*)come_increment_ref_count(real_fun_name_827))));
    last_code_822 = come_decrement_ref_count2(last_code_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_823 = come_decrement_ref_count2(last_code2_823, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_824 = come_decrement_ref_count2(last_code3_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_827 = come_decrement_ref_count2(real_fun_name_827, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_828,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1014,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj326;
struct sFun* __dec_obj327;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj326=self->sname;
            __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(self->mFun==gComeFunResultObject) {
            __dec_obj327=self->mFun;
            /* a*/come_call_finalizer3(__dec_obj327,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result253__;
void* __right_value1009 = (void*)0;
struct sFunNode* result_867;
void* __right_value1010 = (void*)0;
char* __dec_obj328;
void* __right_value1011 = (void*)0;
struct sFun* __dec_obj329;
struct sFunNode* __result254__;
    if(self==(void*)0) {
        __result253__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_867=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(self!=((void*)0)) {
        result_867->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_867->sname;
        result_867->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj329=result_867->mFun;
        result_867->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /* a*/come_call_finalizer3(__dec_obj329,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result254__ = gComeFunResultObject = __result_obj__ = result_867;
    /*i*/come_call_finalizer3(result_867,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

