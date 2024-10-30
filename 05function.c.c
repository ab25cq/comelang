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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
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
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
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
    self->p=(short short*)value->buf;
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 221, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
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
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 221, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 221, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 221, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 221, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 221, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "char*")));
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
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 999, "double")));
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
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value161 = (void*)0;
struct sType* __dec_obj63;
_Bool __result88__;
    come_fun_64=info->come_fun;
    info->come_fun=self->mFun;
    result_type_65=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_65,"__result_obj__",(_Bool)0,info))));
        __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_66=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_66;
    come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s",come_value_67->c_value);
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
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value130 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value131 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value132 = (void*)0;
char* __dec_obj44;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj48;
void* __right_value147 = (void*)0;
struct list$1sNodeph* __dec_obj52;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __dec_obj53;
void* __right_value155 = (void*)0;
struct list$1charph* __dec_obj57;
void* __right_value156 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj59;
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
    result_68=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_68->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj43=result_68->mNoExceptionType;
        result_68->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj44=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj48=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj52=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj53=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj57=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj58=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
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
        result_68->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_68->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_68->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_68->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_68->mRefference=self->mRefference;
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
        __dec_obj60=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_68->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        result_68->mComeMemCore=self->mComeMemCore;
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
        __dec_obj62=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_68->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_68->mNoNumberArray=self->mNoNumberArray;
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
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_69=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_69->v1;
        result_69->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(result_69,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
char* __dec_obj26;
struct list$1sTypeph* __dec_obj27;
struct list$1sNodeph* __dec_obj29;
struct list$1sTypeph* __dec_obj31;
struct list$1charph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct sNode* __dec_obj36;
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
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj24=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
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
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj39=self->mAsmName;
            /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sType* __dec_obj35;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sTypeph* result_82;
struct list_item$1sTypeph* it_83;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
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
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj47;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj45=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1) {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj46=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj47=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
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
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj50;
void* __right_value144 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj51;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj49=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head=litem_89;
    }
    else if(    self->len==1) {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj50=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj51=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
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
void* __right_value145 = (void*)0;
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
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
void* __right_value154 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
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
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj54;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj55;
void* __right_value153 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj56;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj54=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else if(    self->len==1) {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
        litem_96->prev=self->head;
        litem_96->next=((void*)0);
        __dec_obj55=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_96;
        self->head->next=litem_96;
    }
    else {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
        litem_97->prev=self->tail;
        litem_97->next=((void*)0);
        __dec_obj56=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_97;
        self->tail=litem_97;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
struct list_item$1CVALUEph* litem_98;
struct CVALUE* __dec_obj64;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_99;
struct CVALUE* __dec_obj68;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj69;
struct list$1CVALUEph* __result87__;
    if(    self->len==0) {
        litem_98=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj64=litem_98->item;
        litem_98->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else if(    self->len==1) {
        litem_99=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
        litem_99->prev=self->head;
        litem_99->next=((void*)0);
        __dec_obj68=litem_99->item;
        litem_99->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_99;
        self->head->next=litem_99;
    }
    else {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
        litem_100->prev=self->tail;
        litem_100->next=((void*)0);
        __dec_obj69=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_100;
        self->tail=litem_100;
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
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_101;
char* come_fun_name_102;
void* __right_value167 = (void*)0;
char* __dec_obj88;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sType* result_type_103;
void* __right_value170 = (void*)0;
int block_level_104;
void* __right_value171 = (void*)0;
char* __dec_obj89;
_Bool __result91__;
    come_fun_101=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_102=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj88=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_103=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_103,"__result_obj__",(_Bool)0,info))));
            __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_104=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_104;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_101;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_102);
    /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    come_fun_name_102 = come_decrement_ref_count2(come_fun_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj110=self->mGenericsSName;
            /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct sBlock* result_105;
int block_level_106;
char* p_107;
int sline_108;
char* sname_109;
void* __right_value180 = (void*)0;
struct sNode* node_110;
void* __right_value181 = (void*)0;
char* __dec_obj111;
_Bool omit_semicolon_114;
void* __right_value185 = (void*)0;
char* __dec_obj115;
char* head_129;
void* __right_value186 = (void*)0;
struct sNode* value_130;
char* tail_131;
void* __right_value187 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sNode* node_133;
struct sNode* node_134;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value194 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value195 = (void*)0;
struct sNode* __dec_obj120;
_Bool omit_semicolon_136;
char* p_137;
char* head_138;
void* __right_value196 = (void*)0;
char* source_139;
void* __right_value197 = (void*)0;
struct sNode* node_140;
struct sBlock* __result100__;
node_134 = (void*)0;
    result_105=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    block_level_106=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_107=info->p;
            sline_108=info->sline;
            sname_109=info->sname;
            node_110=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj111=info->sname;
            info->sname=(char*)come_increment_ref_count(node_110->sname(node_110->_protocol_obj));
            /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_110->sline(node_110->_protocol_obj);
            if(            node_110==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_110));
            parse_sharp_v5(info);
            if(            node_110->terminated(node_110->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_114=(_Bool)1;
            if(            node_110->terminated(node_110->_protocol_obj)) {
                omit_semicolon_114=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_114=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_105->mOmitSemicolon=omit_semicolon_114;
                if(                omit_semicolon_114&&in_function) {
                    list$1sNodeph_delete(result_105->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_107;
                    info->sline=sline_108;
                    __dec_obj115=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_109));
                    /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_129=info->p;
                    value_130=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_131=info->p;
                    __dec_obj116=value_130;
                    value_130=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_130),info));
                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
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
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 264, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value191=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 264, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj119=node_134;
            node_134=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value191,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_134));
        }
        else {
            __dec_obj120=node_134;
            node_134=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_134==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_134->terminated(node_134->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_136=(_Bool)1;
            if(            node_134->terminated(node_134->_protocol_obj)) {
                omit_semicolon_136=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_136=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_105->mOmitSemicolon=omit_semicolon_136;
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_134));
        }
        if(node_134) { node_134 = come_decrement_ref_count2(node_134, ((struct sNode*)node_134)->finalize, ((struct sNode*)node_134)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_137=info->p;
        head_138=info->head;
        source_139=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_139;
        info->head=source_139;
        node_140=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_140==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        info->p=p_137;
        info->head=head_138;
        source_139 = come_decrement_ref_count2(source_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_140) { node_140 = come_decrement_ref_count2(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_106;
    __result100__ = gComeFunResultObject = __result_obj__ = result_105;
    /*i*/come_call_finalizer3(result_105,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
struct list_item$1sNodeph* litem_111;
struct sNode* __dec_obj112;
void* __right_value183 = (void*)0;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj113;
void* __right_value184 = (void*)0;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj114;
struct list$1sNodeph* __result94__;
    if(    self->len==0) {
        litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value182=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj112=litem_111->item;
        litem_111->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_111;
        self->head=litem_111;
    }
    else if(    self->len==1) {
        litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value183=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
        litem_112->prev=self->head;
        litem_112->next=((void*)0);
        __dec_obj113=litem_112->item;
        litem_112->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_112;
        self->head->next=litem_112;
    }
    else {
        litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value184=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
        litem_113->prev=self->tail;
        litem_113->next=((void*)0);
        __dec_obj114=litem_113->item;
        litem_113->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_113;
        self->tail=litem_113;
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
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_115=tail;
        tail=head;
        head=tmp_115;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_118=self->head;
        i_119=0;
        while(it_118!=((void*)0)) {
            if(            i_119<tail) {
                prev_it_120=it_118;
                it_118=it_118->next;
                i_119++;
                /*i*/come_call_finalizer3(prev_it_120,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_119==tail) {
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
    else if(    tail==self->len) {
        it_121=self->head;
        i_122=0;
        while(it_121!=((void*)0)) {
            if(            i_122==head) {
                self->tail=it_121->prev;
                self->tail->next=((void*)0);
            }
            if(            i_122>=head) {
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
            if(            i_127==head) {
                head_prev_it_125=it_124->prev;
            }
            if(            i_127==tail) {
                tail_it_126=it_124;
            }
            if(            i_127>=head&&i_127<tail) {
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
        if(        head_prev_it_125!=((void*)0)) {
            head_prev_it_125->next=tail_it_126;
        }
        if(        tail_it_126!=((void*)0)) {
            tail_it_126->prev=head_prev_it_125;
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
char* __dec_obj117;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj117=self->sname;
            /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result98__;
void* __right_value192 = (void*)0;
struct sSemicolonNode* result_135;
void* __right_value193 = (void*)0;
char* __dec_obj118;
struct sSemicolonNode* __result99__;
    if(    self==(void*)0) {
        __result98__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    result_135=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_135->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_135->sname;
        result_135->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_135;
    /*i*/come_call_finalizer3(result_135,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_141;
struct sVarTable* old_table_142;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sVarTable* __dec_obj121;
struct sVarTable* current_loop_vtable_143;
struct list$1sTypeph* param_types__144;
struct list$1charph* param_names__145;
int i_146;
struct list$1charph* o2_saved_147;
char* name_150;
void* __right_value200 = (void*)0;
struct sType* type_153;
void* __right_value201 = (void*)0;
int block_level_157;
int i_158;
struct list$1sNodeph* o2_saved_159;
struct sNode* node_162;
struct list$1sRightValueObjectph* right_value_objects_165;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
int stack_num_before_170;
int sline_171;
void* __right_value204 = (void*)0;
char* sname_172;
void* __right_value205 = (void*)0;
char* __dec_obj130;
void* __right_value206 = (void*)0;
struct CVALUE* come_value_173;
void* __right_value211 = (void*)0;
struct CVALUE* come_value2_174;
void* __right_value212 = (void*)0;
char* __dec_obj134;
void* __right_value213 = (void*)0;
struct CVALUE* come_value2_176;
struct sVar* var__177;
void* __right_value214 = (void*)0;
struct CVALUE* come_value3_178;
void* __right_value215 = (void*)0;
_Bool _if_conditional1;
void* __right_value216 = (void*)0;
struct sType* __dec_obj135;
void* __right_value217 = (void*)0;
char* __dec_obj136;
void* __right_value218 = (void*)0;
char* __dec_obj137;
void* __right_value219 = (void*)0;
char* __dec_obj138;
void* __right_value220 = (void*)0;
char* __dec_obj139;
struct list$1sRightValueObjectph* __dec_obj140;
void* __if_result__0_181 = (void*)0;
struct list$1sVarph* o2_saved_182;
struct sVar* it_185;
struct list$1sVarph* __dec_obj146;
memset(&i_146, 0, sizeof(int));
memset(&i_158, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_141=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_142=info->lv_table;
    if(    !no_var_table) {
        __dec_obj121=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 338, "sVarTable")),(_Bool)0,old_table_142));
        come_call_finalizer3(__dec_obj121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_143=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__144=info->param_types;
    param_names__145=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_147=(param_names),name_150=list$1charph_begin((o2_saved_147));        !list$1charph_end((o2_saved_147));        name_150=list$1charph_next((o2_saved_147))        ){
            type_153=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_146), "05function.c", 356, 0))));
            type_153->mFunctionParam=(_Bool)1;
            type_153->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_150,(struct sType*)come_increment_ref_count(sType_clone(type_153)),info);
            i_146++;
            /*i*/come_call_finalizer3(type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_157=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_159=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_162=list$1sNodeph_begin((o2_saved_159));        !list$1sNodeph_end((o2_saved_159));        node_162=list$1sNodeph_next((o2_saved_159))        ){
            right_value_objects_165=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj126=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 375, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj126,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj127=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_170=list$1CVALUEph_length(info->stack);
            sline_171=info->sline;
            sname_172=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_162->sline(node_162->_protocol_obj);
            __dec_obj130=info->sname;
            info->sname=(char*)come_increment_ref_count(node_162->sname(node_162->_protocol_obj));
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_158==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                if(                !node_compile(node_162,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_170+1) {
                    come_value_173=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_173->type->mClass->mName,"void")&&come_value_173->type->mPointerNum==0) {
                        come_value2_174=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_173));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_174));
                        __dec_obj134=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_174->c_value));
                        /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_176=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_173));
                        var__177=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__177) {
                            come_value3_178=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 412, "CVALUE"));
                            if(                            var__177->mType->mClass=="void"&&var__177->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__177->mType,((struct sType*)(__right_value215=sType_clone(come_value_173->type))),come_value3_178,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value215,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj135=var__177->mType;
                            var__177->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_173->type));
                            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_173->type->mHeap) {
                                __dec_obj136=come_value2_176->c_value;
                                come_value2_176->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(come_increment_ref_count(%s))",var__177->mCValueName,come_value_173->c_value));
                                /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj137=come_value2_176->c_value;
                                come_value2_176->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__177->mCValueName,come_value_173->c_value));
                                /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_176));
                        __dec_obj138=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_176->c_value));
                        /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(                !node_compile(node_162,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
            }
            info->sline=sline_171;
            __dec_obj139=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_172));
            /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_170);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj140=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_165);
            come_call_finalizer3(__dec_obj140,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_158++;
            /*i*/come_call_finalizer3(right_value_objects_165,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_172 = come_decrement_ref_count2(sname_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_159,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_157==0) {
            for(            o2_saved_182=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_185=list$1sVarph_begin((o2_saved_182));            !list$1sVarph_end((o2_saved_182));            it_185=list$1sVarph_next((o2_saved_182))            ){
                free_object(it_185->mType,it_185->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_182,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj146=info->match_it_var;
            __if_result__0_181=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj146,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_181,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_142;
    info->block_level=block_level_157;
    info->param_types=param_types__144;
    info->param_names=param_names__145;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_143;
    info->inhibits_output_code=inhibits_output_code_141;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_148;
char* __result101__;
char* __result102__;
char* result_149;
char* __result103__;
result_148 = (void*)0;
result_149 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_148,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_148;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->head;
    if(    self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_149,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_149;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_151;
char* __result104__;
char* __result105__;
char* result_152;
char* __result106__;
result_151 = (void*)0;
result_152 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_151,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_151;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_152,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_152;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_154;
int i_155;
struct sType* __result107__;
struct sType* default_value_156;
struct sType* __result108__;
default_value_156 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_154=self->head;
    i_155=0;
    while(it_154!=((void*)0)) {
        if(        position==i_155) {
            __result107__ = gComeFunResultObject = __result_obj__ = it_154->item;
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
        it_154=it_154->next;
        i_155++;
    }
    memset(&default_value_156,0,sizeof(struct sType*));
    __result108__ = gComeFunResultObject = __result_obj__ = default_value_156;
    /*i*/come_call_finalizer3(default_value_156,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_160;
struct sNode* __result109__;
struct sNode* __result110__;
struct sNode* result_161;
struct sNode* __result111__;
result_160 = (void*)0;
result_161 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_160,0,sizeof(struct sNode*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_160;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->it=self->head;
    if(    self->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_161,0,sizeof(struct sNode*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_161;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_163;
struct sNode* __result112__;
struct sNode* __result113__;
struct sNode* result_164;
struct sNode* __result114__;
result_163 = (void*)0;
result_164 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_163,0,sizeof(struct sNode*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_163;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_164,0,sizeof(struct sNode*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_164;
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
struct list_item$1sRightValueObjectph* it_166;
struct list_item$1sRightValueObjectph* prev_it_167;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*i*/come_call_finalizer3(prev_it_167,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj122;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj122=self->item;
            come_call_finalizer3(__dec_obj122,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj123=self->mType;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj124=self->mVarName;
            /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj125=self->mFunName;
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_168;
struct list_item$1sRightValueObjectph* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result116__;
void* __right_value207 = (void*)0;
struct CVALUE* result_175;
void* __right_value208 = (void*)0;
char* __dec_obj131;
void* __right_value209 = (void*)0;
struct sType* __dec_obj132;
void* __right_value210 = (void*)0;
char* __dec_obj133;
struct CVALUE* __result117__;
    if(    self==(void*)0) {
        __result116__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    result_175=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj131=result_175->c_value;
        result_175->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj132=result_175->type;
        result_175->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_175->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_175->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj133=result_175->c_value_without_right_value_objects;
        result_175->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_175;
    /*i*/come_call_finalizer3(result_175,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_179;
struct list_item$1sRightValueObjectph* prev_it_180;
struct list$1sRightValueObjectph* __result118__;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*i*/come_call_finalizer3(prev_it_180,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_183;
struct sVar* __result119__;
struct sVar* __result120__;
struct sVar* result_184;
struct sVar* __result121__;
result_183 = (void*)0;
result_184 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_183,0,sizeof(struct sVar*));
        __result119__ = gComeFunResultObject = __result_obj__ = result_183;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    self->it=self->head;
    if(    self->it) {
        __result120__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    memset(&result_184,0,sizeof(struct sVar*));
    __result121__ = gComeFunResultObject = __result_obj__ = result_184;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_186;
struct sVar* __result122__;
struct sVar* __result123__;
struct sVar* result_187;
struct sVar* __result124__;
result_186 = (void*)0;
result_187 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_186,0,sizeof(struct sVar*));
        __result122__ = gComeFunResultObject = __result_obj__ = result_186;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result123__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    memset(&result_187,0,sizeof(struct sVar*));
    __result124__ = gComeFunResultObject = __result_obj__ = result_187;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_188;
struct list_item$1sVarph* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        /*i*/come_call_finalizer3(prev_it_189,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj141;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj141=self->item;
            come_call_finalizer3(__dec_obj141,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj142;
char* __dec_obj143;
struct sType* __dec_obj144;
char* __dec_obj145;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj142=self->mName;
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj143=self->mCValueName;
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj144=self->mType;
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj145=self->mFunName;
            /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_190;
struct list_item$1sVarph* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        /*i*/come_call_finalizer3(prev_it_191,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_192;
_Bool dquort_193;
_Bool squort_194;
int sline_195;
int nest_196;
char* tail_197;
void* __right_value221 = (void*)0;
char* buf_198;
void* __right_value222 = (void*)0;
char* __result125__;
    head_192=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_193=(_Bool)0;
        squort_194=(_Bool)0;
        sline_195=0;
        nest_196=0;
        while(1) {
            if(            dquort_193) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_195);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_193=!dquort_193;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_195);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_195);
                        exit(2);
                    }
                }
            }
            else if(            squort_194) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_195);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_194=!squort_194;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_195);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_195);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_195=info->sline;
                info->p++;
                squort_194=!squort_194;
            }
            else if(            *info->p==34) {
                sline_195=info->sline;
                info->p++;
                dquort_193=!dquort_193;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_196++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_196==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_196--;
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
    tail_197=info->p;
    buf_198=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_197-head_192+1)), "05function.c", 643, "char"));
    memcpy(buf_198,head_192,tail_197-head_192);
    buf_198[tail_197-head_192]=0;
    __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=__builtin_string(buf_198)));
    buf_198 = come_decrement_ref_count2(buf_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_199;
char* p3_200;
int i_201;
    terminated_199=(_Bool)0;
    p3_200=p;
    for(    i_201=0;    i_201<strlen(p2);    i_201++    ){
        if(        *p3_200==0) {
            terminated_199=(_Bool)1;
            break;
        }
        p3_200++;
    }
    return !terminated_199&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct buffer* asm_fun_name_202;
int brace_num_203;
int len_204;
_Bool in_dquort_205;
int brace_num_206;
int brace_num_207;
void* __right_value225 = (void*)0;
char* __result126__;
    asm_fun_name_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 666, "buffer"))));
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
            brace_num_203=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_203++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_203--;
                    if(                    brace_num_203==0) {
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
            len_204=0;
            in_dquort_205=(_Bool)0;
            brace_num_206=0;
            while(*info->p) {
                if(                *info->p==34) {
                    info->p++;
                    in_dquort_205=!in_dquort_205;
                }
                else if(                in_dquort_205) {
                    buffer_append_char(asm_fun_name_202,*info->p);
                    info->p++;
                }
                else if(                *info->p==40) {
                    info->p++;
                    brace_num_206++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_206--;
                    if(                    brace_num_206==0) {
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
            brace_num_207=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_207++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_207--;
                    if(                    brace_num_207==0) {
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
    __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=buffer_to_string(asm_fun_name_202)));
    /*i*/come_call_finalizer3(asm_fun_name_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_208;
int head_sline_209;
void* __right_value226 = (void*)0;
char* buf_210;
void* __right_value227 = (void*)0;
struct sNode* node_211;
    while(*info->p) {
        parse_sharp_v5(info);
        head_208=info->p;
        head_sline_209=info->sline;
        buf_210=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_210 = come_decrement_ref_count2(buf_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_211=(struct sNode*)come_increment_ref_count(top_level_v99(buf_210,head_208,head_sline_209,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_211!=((void*)0)) {
            if(            !node_compile(node_211,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_210 = come_decrement_ref_count2(buf_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_210 = come_decrement_ref_count2(buf_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value228 = (void*)0;
char* name_212;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* result_type_213;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* __list_values1___214[5];
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct list$1sTypeph* param_types_219;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __list_values2___220[5];
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1charph* param_names_225;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1charph* param_default_parametors_226;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sFun* main_fun_227;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
char* name_269;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* result_type_270;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __list_values3___271[1];
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sTypeph* param_types_272;
void* __right_value276 = (void*)0;
char* __list_values4___273[1];
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* param_names_274;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* param_default_parametors_275;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sFun* main_fun_276;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
char* name_277;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sType* result_type_278;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __list_values5___279[7];
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1sTypeph* param_types_280;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
char* __list_values6___281[7];
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1charph* param_names_282;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1charph* param_default_parametors_283;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sFun* main_fun_284;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
char* name_285;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* result_type_286;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* __list_values7___287[5];
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct list$1sTypeph* param_types_288;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* __list_values8___289[5];
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1charph* param_names_290;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1charph* param_default_parametors_291;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sFun* main_fun_292;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* name_293;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* result_type_294;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __list_values9___295[1];
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1sTypeph* param_types_296;
void* __right_value357 = (void*)0;
char* __list_values10___297[1];
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1charph* param_names_298;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1charph* param_default_parametors_299;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sFun* main_fun_300;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* name_301;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* result_type_302;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __list_values11___303[4];
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct list$1sTypeph* param_types_304;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
char* __list_values12___305[4];
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1charph* param_names_306;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1charph* param_default_parametors_307;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sFun* main_fun_308;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* name_309;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* result_type_310;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* __list_values13___311[3];
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct list$1sTypeph* param_types_312;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* __list_values14___313[3];
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1charph* param_names_314;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1charph* param_default_parametors_315;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sFun* main_fun_316;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* name_317;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* result_type_318;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* __list_values15___319[1];
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1sTypeph* param_types_320;
void* __right_value426 = (void*)0;
char* __list_values16___321[1];
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1charph* param_names_322;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1charph* param_default_parametors_323;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sFun* main_fun_324;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* name_325;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sType* result_type_326;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __list_values17___327[3];
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct list$1sTypeph* param_types_328;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* __list_values18___329[3];
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1charph* param_names_330;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1charph* param_default_parametors_331;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sFun* main_fun_332;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
char* name_333;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* result_type_334;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1sTypeph* param_types_335;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* param_names_336;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* param_default_parametors_337;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sFun* main_fun_338;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* name_339;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sType* result_type_340;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __list_values19___341[4];
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1sTypeph* param_types_342;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
char* __list_values20___343[4];
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1charph* param_names_344;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1charph* param_default_parametors_345;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sFun* main_fun_346;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
char* name_347;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* result_type_348;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sTypeph* param_types_349;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1charph* param_names_350;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1charph* param_default_parametors_351;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sFun* fun_352;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* name_353;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* result_type_354;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1sTypeph* param_types_355;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1charph* param_names_356;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct list$1charph* param_default_parametors_357;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sFun* fun_358;
void* __right_value526 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_212=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 835, "sType")),"void*",(_Bool)0,info));
        {__list_values1___214[0]=come_increment_ref_count(((struct sType*)(__right_value232=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")),"int",(_Bool)0,info))));
__list_values1___214[1]=come_increment_ref_count(((struct sType*)(__right_value234=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")),"int",(_Bool)0,info))));
__list_values1___214[2]=come_increment_ref_count(((struct sType*)(__right_value236=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")),"char*",(_Bool)0,info))));
__list_values1___214[3]=come_increment_ref_count(((struct sType*)(__right_value238=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")),"int",(_Bool)0,info))));
__list_values1___214[4]=come_increment_ref_count(((struct sType*)(__right_value240=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")),"char*",(_Bool)0,info))));
}        param_types_219=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 836, "struct list$1sTypeph")),5,__list_values1___214));
        /*g*/come_call_finalizer3(__right_value232,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value234,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value236,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value238,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value240,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___220[0]=come_increment_ref_count(((char*)(__right_value246=__builtin_string("count"))));
__list_values2___220[1]=come_increment_ref_count(((char*)(__right_value247=__builtin_string("size"))));
__list_values2___220[2]=come_increment_ref_count(((char*)(__right_value248=__builtin_string("sname"))));
__list_values2___220[3]=come_increment_ref_count(((char*)(__right_value249=__builtin_string("sline"))));
__list_values2___220[4]=come_increment_ref_count(((char*)(__right_value250=__builtin_string("class_name"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 837, "struct list$1charph")),5,__list_values2___220));
        __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 838, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_226,((void*)0));
        list$1charph_push_back(param_default_parametors_226,((void*)0));
        list$1charph_push_back(param_default_parametors_226,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_226,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_226,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_227=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 844, "sFun")),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type_213),(struct list$1sTypeph*)come_increment_ref_count(param_types_219),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_212)),(struct sFun*)come_increment_ref_count(main_fun_227));
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_219,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_225,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_227,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_269=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_270=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 855, "sType")),"void*",(_Bool)0,info));
        {__list_values3___271[0]=come_increment_ref_count(((struct sType*)(__right_value273=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 856, "sType")),"void*",(_Bool)0,info))));
}        param_types_272=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 856, "struct list$1sTypeph")),1,__list_values3___271));
        /*g*/come_call_finalizer3(__right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___273[0]=come_increment_ref_count(((char*)(__right_value276=__builtin_string("mem"))));
}        param_names_274=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 857, "struct list$1charph")),1,__list_values4___273));
        __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_275=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 858, "list$1charph"))));
        main_fun_276=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 859, "sFun")),(char*)come_increment_ref_count(name_269),(struct sType*)come_increment_ref_count(result_type_270),(struct list$1sTypeph*)come_increment_ref_count(param_types_272),(struct list$1charph*)come_increment_ref_count(param_names_274),(struct list$1charph*)come_increment_ref_count(param_default_parametors_275),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_269)),(struct sFun*)come_increment_ref_count(main_fun_276));
        name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_272,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_275,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_276,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_277=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_278=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 870, "sType")),"void",(_Bool)0,info));
        {__list_values5___279[0]=come_increment_ref_count(((struct sType*)(__right_value290=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"void*",(_Bool)0,info))));
__list_values5___279[1]=come_increment_ref_count(((struct sType*)(__right_value292=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"void*",(_Bool)0,info))));
__list_values5___279[2]=come_increment_ref_count(((struct sType*)(__right_value294=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"void*",(_Bool)0,info))));
__list_values5___279[3]=come_increment_ref_count(((struct sType*)(__right_value296=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"void*",(_Bool)0,info))));
__list_values5___279[4]=come_increment_ref_count(((struct sType*)(__right_value298=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"int",(_Bool)0,info))));
__list_values5___279[5]=come_increment_ref_count(((struct sType*)(__right_value300=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"int",(_Bool)0,info))));
__list_values5___279[6]=come_increment_ref_count(((struct sType*)(__right_value302=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 871, "sType")),"int",(_Bool)0,info))));
}        param_types_280=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 871, "struct list$1sTypeph")),7,__list_values5___279));
        /*g*/come_call_finalizer3(__right_value290,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value292,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value294,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value296,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value298,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value300,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value302,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___281[0]=come_increment_ref_count(((char*)(__right_value305=__builtin_string("fun"))));
__list_values6___281[1]=come_increment_ref_count(((char*)(__right_value306=__builtin_string("mem"))));
__list_values6___281[2]=come_increment_ref_count(((char*)(__right_value307=__builtin_string("protocol_fun"))));
__list_values6___281[3]=come_increment_ref_count(((char*)(__right_value308=__builtin_string("protocol_obj"))));
__list_values6___281[4]=come_increment_ref_count(((char*)(__right_value309=__builtin_string("call_finalizer_only"))));
__list_values6___281[5]=come_increment_ref_count(((char*)(__right_value310=__builtin_string("no_decrement"))));
__list_values6___281[6]=come_increment_ref_count(((char*)(__right_value311=__builtin_string("no_free"))));
}        param_names_282=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 872, "struct list$1charph")),7,__list_values6___281));
        __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_283=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 873, "list$1charph"))));
        main_fun_284=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 874, "sFun")),(char*)come_increment_ref_count(name_277),(struct sType*)come_increment_ref_count(result_type_278),(struct list$1sTypeph*)come_increment_ref_count(param_types_280),(struct list$1charph*)come_increment_ref_count(param_names_282),(struct list$1charph*)come_increment_ref_count(param_default_parametors_283),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_277)),(struct sFun*)come_increment_ref_count(main_fun_284));
        name_277 = come_decrement_ref_count2(name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_278,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_280,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_282,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_284,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_285=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_286=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 885, "sType")),"void*",(_Bool)0,info));
        {__list_values7___287[0]=come_increment_ref_count(((struct sType*)(__right_value325=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 886, "sType")),"void*",(_Bool)0,info))));
__list_values7___287[1]=come_increment_ref_count(((struct sType*)(__right_value327=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 886, "sType")),"void*",(_Bool)0,info))));
__list_values7___287[2]=come_increment_ref_count(((struct sType*)(__right_value329=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 886, "sType")),"void*",(_Bool)0,info))));
__list_values7___287[3]=come_increment_ref_count(((struct sType*)(__right_value331=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 886, "sType")),"bool",(_Bool)0,info))));
__list_values7___287[4]=come_increment_ref_count(((struct sType*)(__right_value333=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 886, "sType")),"bool",(_Bool)0,info))));
}        param_types_288=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 886, "struct list$1sTypeph")),5,__list_values7___287));
        /*g*/come_call_finalizer3(__right_value325,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value327,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value329,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value331,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value333,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___289[0]=come_increment_ref_count(((char*)(__right_value336=__builtin_string("mem"))));
__list_values8___289[1]=come_increment_ref_count(((char*)(__right_value337=__builtin_string("protocol_fun"))));
__list_values8___289[2]=come_increment_ref_count(((char*)(__right_value338=__builtin_string("protocol_obj"))));
__list_values8___289[3]=come_increment_ref_count(((char*)(__right_value339=__builtin_string("no_decrement"))));
__list_values8___289[4]=come_increment_ref_count(((char*)(__right_value340=__builtin_string("no_free"))));
}        param_names_290=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 887, "struct list$1charph")),5,__list_values8___289));
        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_291=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 888, "list$1charph"))));
        main_fun_292=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 889, "sFun")),(char*)come_increment_ref_count(name_285),(struct sType*)come_increment_ref_count(result_type_286),(struct list$1sTypeph*)come_increment_ref_count(param_types_288),(struct list$1charph*)come_increment_ref_count(param_names_290),(struct list$1charph*)come_increment_ref_count(param_default_parametors_291),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_285)),(struct sFun*)come_increment_ref_count(main_fun_292));
        name_285 = come_decrement_ref_count2(name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_288,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_290,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_291,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_292,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_293=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_294=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 900, "sType")),"void",(_Bool)0,info));
        {__list_values9___295[0]=come_increment_ref_count(((struct sType*)(__right_value354=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 901, "sType")),"void*",(_Bool)0,info))));
}        param_types_296=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 901, "struct list$1sTypeph")),1,__list_values9___295));
        /*g*/come_call_finalizer3(__right_value354,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___297[0]=come_increment_ref_count(((char*)(__right_value357=__builtin_string("mem"))));
}        param_names_298=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 902, "struct list$1charph")),1,__list_values10___297));
        __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_299=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 903, "list$1charph"))));
        main_fun_300=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 904, "sFun")),(char*)come_increment_ref_count(name_293),(struct sType*)come_increment_ref_count(result_type_294),(struct list$1sTypeph*)come_increment_ref_count(param_types_296),(struct list$1charph*)come_increment_ref_count(param_names_298),(struct list$1charph*)come_increment_ref_count(param_default_parametors_299),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_293)),(struct sFun*)come_increment_ref_count(main_fun_300));
        name_293 = come_decrement_ref_count2(name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_296,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_298,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_299,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_300,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_301=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_302=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 915, "sType")),"void*",(_Bool)0,info));
        {__list_values11___303[0]=come_increment_ref_count(((struct sType*)(__right_value371=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 916, "sType")),"void*",(_Bool)0,info))));
__list_values11___303[1]=come_increment_ref_count(((struct sType*)(__right_value373=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 916, "sType")),"char*",(_Bool)0,info))));
__list_values11___303[2]=come_increment_ref_count(((struct sType*)(__right_value375=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 916, "sType")),"int",(_Bool)0,info))));
__list_values11___303[3]=come_increment_ref_count(((struct sType*)(__right_value377=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 916, "sType")),"char*",(_Bool)0,info))));
}        param_types_304=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 916, "struct list$1sTypeph")),4,__list_values11___303));
        /*g*/come_call_finalizer3(__right_value371,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value373,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value375,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value377,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___305[0]=come_increment_ref_count(((char*)(__right_value380=__builtin_string("block"))));
__list_values12___305[1]=come_increment_ref_count(((char*)(__right_value381=__builtin_string("sname"))));
__list_values12___305[2]=come_increment_ref_count(((char*)(__right_value382=__builtin_string("sline"))));
__list_values12___305[3]=come_increment_ref_count(((char*)(__right_value383=__builtin_string("class_name"))));
}        param_names_306=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 917, "struct list$1charph")),4,__list_values12___305));
        __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_307=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 918, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_307,((void*)0));
        list$1charph_push_back(param_default_parametors_307,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_307,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_307,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_308=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 923, "sFun")),(char*)come_increment_ref_count(name_301),(struct sType*)come_increment_ref_count(result_type_302),(struct list$1sTypeph*)come_increment_ref_count(param_types_304),(struct list$1charph*)come_increment_ref_count(param_names_306),(struct list$1charph*)come_increment_ref_count(param_default_parametors_307),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_301)),(struct sFun*)come_increment_ref_count(main_fun_308));
        name_301 = come_decrement_ref_count2(name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_304,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_306,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_307,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_308,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_309=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_310=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 934, "sType")),"void*",(_Bool)0,info));
        {__list_values13___311[0]=come_increment_ref_count(((struct sType*)(__right_value400=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 935, "sType")),"void*",(_Bool)0,info))));
__list_values13___311[1]=come_increment_ref_count(((struct sType*)(__right_value402=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 935, "sType")),"int",(_Bool)0,info))));
__list_values13___311[2]=come_increment_ref_count(((struct sType*)(__right_value404=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 935, "sType")),"long",(_Bool)0,info))));
}        param_types_312=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 935, "struct list$1sTypeph")),3,__list_values13___311));
        /*g*/come_call_finalizer3(__right_value400,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value402,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value404,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___313[0]=come_increment_ref_count(((char*)(__right_value407=__builtin_string("b"))));
__list_values14___313[1]=come_increment_ref_count(((char*)(__right_value408=__builtin_string("c"))));
__list_values14___313[2]=come_increment_ref_count(((char*)(__right_value409=__builtin_string("len"))));
}        param_names_314=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 936, "struct list$1charph")),3,__list_values14___313));
        __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_315=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 937, "list$1charph"))));
        main_fun_316=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 938, "sFun")),(char*)come_increment_ref_count(name_309),(struct sType*)come_increment_ref_count(result_type_310),(struct list$1sTypeph*)come_increment_ref_count(param_types_312),(struct list$1charph*)come_increment_ref_count(param_names_314),(struct list$1charph*)come_increment_ref_count(param_default_parametors_315),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_309)),(struct sFun*)come_increment_ref_count(main_fun_316));
        name_309 = come_decrement_ref_count2(name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_312,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_314,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_315,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_316,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_317=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_318=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 949, "sType")),"char*",(_Bool)0,info));
        {__list_values15___319[0]=come_increment_ref_count(((struct sType*)(__right_value423=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 950, "sType")),"char*",(_Bool)0,info))));
}        param_types_320=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 950, "struct list$1sTypeph")),1,__list_values15___319));
        /*g*/come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___321[0]=come_increment_ref_count(((char*)(__right_value426=__builtin_string("str"))));
}        param_names_322=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 951, "struct list$1charph")),1,__list_values16___321));
        __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_323=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 952, "list$1charph"))));
        main_fun_324=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 953, "sFun")),(char*)come_increment_ref_count(name_317),(struct sType*)come_increment_ref_count(result_type_318),(struct list$1sTypeph*)come_increment_ref_count(param_types_320),(struct list$1charph*)come_increment_ref_count(param_names_322),(struct list$1charph*)come_increment_ref_count(param_default_parametors_323),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_317)),(struct sFun*)come_increment_ref_count(main_fun_324));
        name_317 = come_decrement_ref_count2(name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_320,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_322,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_323,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_324,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_325=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_326=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 964, "sType")),"void",(_Bool)0,info));
        {__list_values17___327[0]=come_increment_ref_count(((struct sType*)(__right_value440=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 965, "sType")),"int",(_Bool)0,info))));
__list_values17___327[1]=come_increment_ref_count(((struct sType*)(__right_value442=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 965, "sType")),"int",(_Bool)0,info))));
__list_values17___327[2]=come_increment_ref_count(((struct sType*)(__right_value444=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 965, "sType")),"int",(_Bool)0,info))));
}        param_types_328=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 965, "struct list$1sTypeph")),3,__list_values17___327));
        /*g*/come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value442,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value444,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___329[0]=come_increment_ref_count(((char*)(__right_value447=xsprintf("come_malloc"))));
__list_values18___329[1]=come_increment_ref_count(((char*)(__right_value448=xsprintf("come_debug"))));
__list_values18___329[2]=come_increment_ref_count(((char*)(__right_value449=xsprintf("come_gc"))));
}        param_names_330=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 966, "struct list$1charph")),3,__list_values18___329));
        __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_331=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 967, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_331,((void*)0));
        main_fun_332=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 969, "sFun")),(char*)come_increment_ref_count(name_325),(struct sType*)come_increment_ref_count(result_type_326),(struct list$1sTypeph*)come_increment_ref_count(param_types_328),(struct list$1charph*)come_increment_ref_count(param_names_330),(struct list$1charph*)come_increment_ref_count(param_default_parametors_331),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_325)),(struct sFun*)come_increment_ref_count(main_fun_332));
        name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_328,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_330,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_332,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_333=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_334=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 980, "sType")),"void",(_Bool)0,info));
        param_types_335=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 981, "list$1sTypeph"))));
        param_names_336=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 982, "list$1charph"))));
        param_default_parametors_337=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 983, "list$1charph"))));
        main_fun_338=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 984, "sFun")),(char*)come_increment_ref_count(name_333),(struct sType*)come_increment_ref_count(result_type_334),(struct list$1sTypeph*)come_increment_ref_count(param_types_335),(struct list$1charph*)come_increment_ref_count(param_names_336),(struct list$1charph*)come_increment_ref_count(param_default_parametors_337),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_333)),(struct sFun*)come_increment_ref_count(main_fun_338));
        name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_334,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_335,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_336,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_337,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_338,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_339=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_340=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 995, "sType")),"void*",(_Bool)0,info));
        {__list_values19___341[0]=come_increment_ref_count(((struct sType*)(__right_value477=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 996, "sType")),"void*",(_Bool)0,info))));
__list_values19___341[1]=come_increment_ref_count(((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 996, "sType")),"char*",(_Bool)0,info))));
__list_values19___341[2]=come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 996, "sType")),"int",(_Bool)0,info))));
__list_values19___341[3]=come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 996, "sType")),"int",(_Bool)0,info))));
}        param_types_342=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 996, "struct list$1sTypeph")),4,__list_values19___341));
        /*g*/come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___343[0]=come_increment_ref_count(((char*)(__right_value486=__builtin_string("mem"))));
__list_values20___343[1]=come_increment_ref_count(((char*)(__right_value487=__builtin_string("sname"))));
__list_values20___343[2]=come_increment_ref_count(((char*)(__right_value488=__builtin_string("sline"))));
__list_values20___343[3]=come_increment_ref_count(((char*)(__right_value489=__builtin_string("id"))));
}        param_names_344=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 997, "struct list$1charph")),4,__list_values20___343));
        __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_345=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 998, "list$1charph"))));
        main_fun_346=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 999, "sFun")),(char*)come_increment_ref_count(name_339),(struct sType*)come_increment_ref_count(result_type_340),(struct list$1sTypeph*)come_increment_ref_count(param_types_342),(struct list$1charph*)come_increment_ref_count(param_names_344),(struct list$1charph*)come_increment_ref_count(param_default_parametors_345),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_339)),(struct sFun*)come_increment_ref_count(main_fun_346));
        name_339 = come_decrement_ref_count2(name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_345,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_346,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_347=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_348=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1010, "sType")),"void",(_Bool)0,info));
        param_types_349=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1011, "list$1sTypeph"))));
        param_names_350=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1012, "list$1charph"))));
        param_default_parametors_351=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1013, "list$1charph"))));
        fun_352=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1014, "sFun")),(char*)come_increment_ref_count(name_347),(struct sType*)come_increment_ref_count(result_type_348),(struct list$1sTypeph*)come_increment_ref_count(param_types_349),(struct list$1charph*)come_increment_ref_count(param_names_350),(struct list$1charph*)come_increment_ref_count(param_default_parametors_351),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_347)),(struct sFun*)come_increment_ref_count(fun_352));
        name_347 = come_decrement_ref_count2(name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_352,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_353=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_354=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1025, "sType")),"void",(_Bool)0,info));
        param_types_355=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1026, "list$1sTypeph"))));
        param_names_356=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1027, "list$1charph"))));
        param_default_parametors_357=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1028, "list$1charph"))));
        fun_358=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1029, "sFun")),(char*)come_increment_ref_count(name_353),(struct sType*)come_increment_ref_count(result_type_354),(struct list$1sTypeph*)come_increment_ref_count(param_types_355),(struct list$1charph*)come_increment_ref_count(param_names_356),(struct list$1charph*)come_increment_ref_count(param_default_parametors_357),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_353)),(struct sFun*)come_increment_ref_count(fun_358));
        name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_354,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_355,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_358,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_215;
struct list$1sTypeph* __result128__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_215=0;    i_215<num_value;    i_215++    ){
        list$1sTypeph_push_back(self,values[i_215]);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
struct list_item$1sTypeph* litem_216;
struct sType* __dec_obj147;
void* __right_value242 = (void*)0;
struct list_item$1sTypeph* litem_217;
struct sType* __dec_obj148;
void* __right_value243 = (void*)0;
struct list_item$1sTypeph* litem_218;
struct sType* __dec_obj149;
struct list$1sTypeph* __result127__;
    if(    self->len==0) {
        litem_216=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value241=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_216->prev=((void*)0);
        litem_216->next=((void*)0);
        __dec_obj147=litem_216->item;
        litem_216->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_216;
        self->head=litem_216;
    }
    else if(    self->len==1) {
        litem_217=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value242=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
        litem_217->prev=self->head;
        litem_217->next=((void*)0);
        __dec_obj148=litem_217->item;
        litem_217->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_217;
        self->head->next=litem_217;
    }
    else {
        litem_218=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
        litem_218->prev=self->tail;
        litem_218->next=((void*)0);
        __dec_obj149=litem_218->item;
        litem_218->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_218;
        self->tail=litem_218;
    }
    self->len++;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_221;
struct list$1charph* __result130__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_221=0;    i_221<num_value;    i_221++    ){
        list$1charph_push_back(self,values[i_221]);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct list_item$1charph* litem_222;
char* __dec_obj150;
void* __right_value252 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj151;
void* __right_value253 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj152;
struct list$1charph* __result129__;
    if(    self->len==0) {
        litem_222=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value251=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_222->prev=((void*)0);
        litem_222->next=((void*)0);
        __dec_obj150=litem_222->item;
        litem_222->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_222;
        self->head=litem_222;
    }
    else if(    self->len==1) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value252=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
        litem_223->prev=self->head;
        litem_223->next=((void*)0);
        __dec_obj151=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head->next=litem_223;
    }
    else {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value253=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
        litem_224->prev=self->tail;
        litem_224->next=((void*)0);
        __dec_obj152=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_224;
        self->tail=litem_224;
    }
    self->len++;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_245;
unsigned int it_246;
_Bool same_key_exist_263;
char* it2_266;
struct map$2charphsFunph* __result151__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_245=string_get_hash_key(key)%self->size;
    it_246=hash_245;
    while((_Bool)1) {
        if(        self->item_existance[it_246]) {
            if(            string_equals(self->keys[it_246],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_246]);
                    self->keys[it_246] = come_decrement_ref_count2(self->keys[it_246], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_246]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_246]);
                    self->keys[it_246]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_246],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_246]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_246]=item;
                }
                break;
            }
            it_246++;
            if(            it_246>=self->size) {
                it_246=0;
            }
            else if(            it_246==hash_245) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_246]=(_Bool)1;
            if(            1) {
                self->keys[it_246]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_246]=key;
            }
            if(            1) {
                self->items[it_246]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_246]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_263=(_Bool)0;
    for(    it2_266=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_266=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_266,key)) {
            same_key_exist_263=(_Bool)1;
        }
    }
    if(    !same_key_exist_263) {
        list$1charp_push_back(self->key_list,key);
    }
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_228;
void* __right_value265 = (void*)0;
char** keys_229;
void* __right_value266 = (void*)0;
struct sFun** items_230;
void* __right_value267 = (void*)0;
_Bool* item_existance_231;
int len_232;
char* it_235;
struct sFun* default_value_238;
struct sFun* it2_239;
unsigned int hash_242;
int n_243;
struct sFun* default_value_244;
default_value_238 = (void*)0;
default_value_244 = (void*)0;
    size_228=self->size*10;
    keys_229=(char**)come_increment_ref_count(((char**)(__right_value265=(char**)come_calloc(1, sizeof(char*)*(1*(size_228)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_230=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value266=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_228)), "/usr/local/include/comelang.h", 1622, "sFun*%"))));
    item_existance_231=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value267=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_228)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_232=0;
    for(    it_235=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_235=map$2charphsFunph_next(self)    ){
        memset(&default_value_238,0,sizeof(struct sFun*));
        it2_239=map$2charphsFunph_at(self,it_235,default_value_238);
        hash_242=string_get_hash_key(it_235)%size_228;
        n_243=hash_242;
        while((_Bool)1) {
            if(            item_existance_231[n_243]) {
                n_243++;
                if(                n_243>=size_228) {
                    n_243=0;
                }
                else if(                n_243==hash_242) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_231[n_243]=(_Bool)1;
                keys_229[n_243]=it_235;
                items_230[n_243]=map$2charphsFunph_at(self,it_235,default_value_244);
                len_232++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_229;
    self->items=items_230;
    self->item_existance=item_existance_231;
    self->size=size_228;
    self->len=len_232;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_233;
char* __result131__;
char* __result132__;
char* result_234;
char* __result133__;
result_233 = (void*)0;
result_234 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_233,0,sizeof(char*));
        __result131__ = gComeFunResultObject = __result_obj__ = result_233;
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result132__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result132__;
    }
    memset(&result_234,0,sizeof(char*));
    __result133__ = gComeFunResultObject = __result_obj__ = result_234;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_236;
char* __result134__;
char* __result135__;
char* result_237;
char* __result136__;
result_236 = (void*)0;
result_237 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_236,0,sizeof(char*));
        __result134__ = gComeFunResultObject = __result_obj__ = result_236;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result135__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    memset(&result_237,0,sizeof(char*));
    __result136__ = gComeFunResultObject = __result_obj__ = result_237;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_240;
unsigned int it_241;
struct sFun* __result137__;
struct sFun* __result138__;
struct sFun* __result139__;
struct sFun* __result140__;
    hash_240=string_get_hash_key(((char*)key))%self->size;
    it_241=hash_240;
    while((_Bool)1) {
        if(        self->item_existance[it_241]) {
            if(            string_equals(self->keys[it_241],key)) {
                __result137__ = gComeFunResultObject = __result_obj__ = self->items[it_241];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result137__;
            }
            it_241++;
            if(            it_241>=self->size) {
                it_241=0;
            }
            else if(            it_241==hash_240) {
                __result138__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result138__;
            }
        }
        else {
            __result139__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result139__;
        }
    }
    __result140__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_247;
struct list_item$1charp* it_248;
struct list$1charp* __result144__;
    it2_247=0;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        if(        charp_equals(it_248->item,item)) {
            list$1charp_delete(self,it2_247,it2_247+1);
            break;
        }
        it2_247++;
        it_248=it_248->next;
    }
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_249;
struct list$1charp* __result141__;
struct list_item$1charp* it_252;
int i_253;
struct list_item$1charp* prev_it_254;
struct list_item$1charp* it_255;
int i_256;
struct list_item$1charp* prev_it_257;
struct list_item$1charp* it_258;
struct list_item$1charp* head_prev_it_259;
struct list_item$1charp* tail_it_260;
int i_261;
struct list_item$1charp* prev_it_262;
struct list$1charp* __result143__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_249=tail;
        tail=head;
        head=tmp_249;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result141__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_252=self->head;
        i_253=0;
        while(it_252!=((void*)0)) {
            if(            i_253<tail) {
                prev_it_254=it_252;
                it_252=it_252->next;
                i_253++;
                /*i*/come_call_finalizer3(prev_it_254,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_253==tail) {
                self->head=it_252;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_252=it_252->next;
                i_253++;
            }
        }
    }
    else if(    tail==self->len) {
        it_255=self->head;
        i_256=0;
        while(it_255!=((void*)0)) {
            if(            i_256==head) {
                self->tail=it_255->prev;
                self->tail->next=((void*)0);
            }
            if(            i_256>=head) {
                prev_it_257=it_255;
                it_255=it_255->next;
                i_256++;
                /*i*/come_call_finalizer3(prev_it_257,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_255=it_255->next;
                i_256++;
            }
        }
    }
    else {
        it_258=self->head;
        head_prev_it_259=((void*)0);
        tail_it_260=((void*)0);
        i_261=0;
        while(it_258!=((void*)0)) {
            if(            i_261==head) {
                head_prev_it_259=it_258->prev;
            }
            if(            i_261==tail) {
                tail_it_260=it_258;
            }
            if(            i_261>=head&&i_261<tail) {
                prev_it_262=it_258;
                it_258=it_258->next;
                i_261++;
                /*i*/come_call_finalizer3(prev_it_262,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_258=it_258->next;
                i_261++;
            }
        }
        if(        head_prev_it_259!=((void*)0)) {
            head_prev_it_259->next=tail_it_260;
        }
        if(        tail_it_260!=((void*)0)) {
            tail_it_260->prev=head_prev_it_259;
        }
    }
    __result143__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result143__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_250;
struct list_item$1charp* prev_it_251;
struct list$1charp* __result142__;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*i*/come_call_finalizer3(prev_it_251,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_264;
char* __result145__;
char* __result146__;
char* result_265;
char* __result147__;
result_264 = (void*)0;
result_265 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_264,0,sizeof(char*));
        __result145__ = gComeFunResultObject = __result_obj__ = result_264;
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    self->it=self->head;
    if(    self->it) {
        __result146__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    memset(&result_265,0,sizeof(char*));
    __result147__ = gComeFunResultObject = __result_obj__ = result_265;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_267;
char* __result148__;
char* __result149__;
char* result_268;
char* __result150__;
result_267 = (void*)0;
result_268 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_267,0,sizeof(char*));
        __result148__ = gComeFunResultObject = __result_obj__ = result_267;
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result149__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    memset(&result_268,0,sizeof(char*));
    __result150__ = gComeFunResultObject = __result_obj__ = result_268;
    gComeFunResultObject = (void*)0;
    return __result150__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_359;
_Bool is_type_name_flag_360;
int sline_361;
_Bool define_struct_nobody_362;
char* p_363;
int sline_364;
void* __right_value527 = (void*)0;
char* word_365;
_Bool define_function_pointer_result_function_366;
_Bool define_variable_between_brace_367;
char* p_368;
void* __right_value528 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_369;
char* fun_name_370;
_Bool err_371;
void* __right_value529 = (void*)0;
char* word_372;
_Bool define_function_flag_373;
char* p_374;
void* __right_value530 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_375;
char* fun_name_376;
_Bool err_377;
char* word_378;
void* __right_value531 = (void*)0;
char* __dec_obj155;
void* __right_value532 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
void* __right_value533 = (void*)0;
char* __dec_obj158;
_Bool define_variable_379;
char* p_380;
void* __right_value534 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_381;
char* fun_name_382;
_Bool err_383;
void* __right_value535 = (void*)0;
char* word_384;
void* __right_value536 = (void*)0;
char* word_385;
char* p_386;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
char* word_387;
void* __right_value539 = (void*)0;
char* __dec_obj159;
void* __right_value540 = (void*)0;
char* word_388;
void* __right_value541 = (void*)0;
char* word_391;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sNode* node_392;
struct sNode* __result153__;
void* __right_value544 = (void*)0;
struct sNode* __result154__;
char* header_head_393;
void* __right_value545 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_394;
char* fun_name_395;
_Bool err_396;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1sTypeph* param_types_397;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1charph* param_names_398;
void* __right_value550 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_399;
char* param_name_400;
_Bool err_401;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1sTypeph* param_types2_403;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1charph* param_names2_404;
void* __right_value557 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_405;
char* param_name_406;
_Bool err_407;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
char* header_tail_409;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* result_type2_410;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct tuple1$1sTypeph* __dec_obj161;
void* __right_value564 = (void*)0;
struct list$1sTypeph* __dec_obj162;
void* __right_value565 = (void*)0;
struct list$1charph* __dec_obj163;
_Bool var_args_411;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct buffer* header_buf_412;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1charph* param_default_parametors_413;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sFun* fun_414;
void* __right_value575 = (void*)0;
struct sFun* fun2_418;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value613 = (void*)0;
struct sNode* __result183__;
void* __right_value614 = (void*)0;
struct sNode* node_453;
struct sNode* __result184__;
void* __right_value615 = (void*)0;
struct sNode* node_454;
char* source_tail_455;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct buffer* header_456;
struct sNode* __result185__;
void* __right_value618 = (void*)0;
char* buf2_457;
void* __right_value619 = (void*)0;
struct sNode* __result186__;
    source_head_359=info->p;
    is_type_name_flag_360=is_type_name(buf,info);
    sline_361=info->sline;
    define_struct_nobody_362=(_Bool)0;
    {
        p_363=info->p;
        sline_364=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_365=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_362=(_Bool)1;
                }
                word_365 = come_decrement_ref_count2(word_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_364;
    }
    define_function_pointer_result_function_366=(_Bool)0;
    define_variable_between_brace_367=(_Bool)0;
    if(    is_type_name_flag_360) {
        p_368=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value528=backtrace_parse_type((_Bool)0,info)));
            result_type_369=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_370=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_371=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value528,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_366=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_372=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_372,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_367=(_Bool)1;
                            }
                        }
                        word_372 = come_decrement_ref_count2(word_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_370 = come_decrement_ref_count2(fun_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_361;
    }
    define_function_flag_373=(_Bool)0;
    if(    is_type_name_flag_360&&!define_function_pointer_result_function_366&&charp_operator_not_equals(buf,"__typeof__")) {
        p_374=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value530=backtrace_parse_type((_Bool)0,info)));
            result_type_375=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_376=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_377=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value530,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_376 = come_decrement_ref_count2(fun_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_378=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj155=word_378;
                word_378=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_378,"extern")) {
                    __dec_obj156=word_378;
                    word_378=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj157=word_378;
                word_378=((void*)0);
                /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_378) {
                if(                is_type_name(word_378,info)) {
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
                        __dec_obj158=word_378;
                        word_378=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_378)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_360) {
                        define_function_flag_373=(_Bool)1;
                    }
                }
            }
            word_378 = come_decrement_ref_count2(word_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_374;
        info->sline=sline_361;
    }
    define_variable_379=(_Bool)1;
    if(    is_type_name_flag_360&&!define_function_pointer_result_function_366) {
        p_380=info->p;
        info->p=head;
        if(        !is_type_name_flag_360) {
            define_variable_379=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value534=backtrace_parse_type((_Bool)0,info)));
            result_type_381=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_382=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_383=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value534,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_384=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_379=(_Bool)1;
                            }
                        }
                        word_384 = come_decrement_ref_count2(word_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_385=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_385,info)&&*info->p!=40) {
                            define_variable_379=(_Bool)1;
                        }
                    }
                    word_385 = come_decrement_ref_count2(word_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_382 = come_decrement_ref_count2(fun_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_379=(_Bool)0;
        }
        else if(        define_variable_379) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_379=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_379=(_Bool)0;
            }
        }
        info->p=p_380;
        info->sline=sline_361;
    }
    else {
        define_variable_379=(_Bool)0;
    }
    {
        p_386=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value537=parse_word(info)));
                __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_387=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj159=word_387;
                        word_387=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_387,"extends")) {
                            define_variable_379=(_Bool)0;
                        }
                    }
                    word_387 = come_decrement_ref_count2(word_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_379=(_Bool)0;
        }
        else if(        define_variable_379) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_379=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_379=(_Bool)0;
            }
        }
        info->p=p_386;
        info->sline=sline_361;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_388=(char*)come_increment_ref_count(parse_word(info));
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
                    word_391=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_391)));
                    word_391 = come_decrement_ref_count2(word_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_392=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result153__ = gComeFunResultObject = __result_obj__ = node_392;
            if(node_392) { node_392 = come_decrement_ref_count2(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_388 = come_decrement_ref_count2(word_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result153__;
            if(node_392) { node_392 = come_decrement_ref_count2(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_388 = come_decrement_ref_count2(word_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_struct_nobody_362) {
    }
    else if(    define_variable_between_brace_367) {
        info->p=head;
        info->sline=sline_361;
        __result154__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value544=parse_global_variable(info)));
        if(__right_value544) { __right_value544 = come_decrement_ref_count2(__right_value544, ((struct sNode*)__right_value544)->finalize, ((struct sNode*)__right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    else if(    define_function_pointer_result_function_366) {
        header_head_393=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value545=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_394=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_395=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_396=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value545,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_397=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1353, "list$1sTypeph"))));
            param_names_398=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1354, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value550=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_399=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_400=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_401=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value550,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_401) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_397,(struct sType*)come_increment_ref_count(param_type_399));
                    static int num_function_pointer_result_var_name_a_402=0;
                    list$1charph_push_back(param_names_398,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_402)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value552=parse_word(info)));
                        __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_400 = come_decrement_ref_count2(param_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_400 = come_decrement_ref_count2(param_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_403=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1400, "list$1sTypeph"))));
                param_names2_404=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1401, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value557=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_405=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_406=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_407=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_407) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_403,(struct sType*)come_increment_ref_count(param_type_405));
                        static int num_function_pointer_result_var_name_b_408=0;
                        list$1charph_push_back(param_names2_404,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_408)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value559=parse_word(info)));
                            __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_405,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_406 = come_decrement_ref_count2(param_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_405,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_406 = come_decrement_ref_count2(param_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_409=info->p;
                result_type2_410=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1443, "sType")),"lambda",(_Bool)0,info));
                __dec_obj161=result_type2_410->mResultType;
                result_type2_410->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1445, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_394)));
                come_call_finalizer3(__dec_obj161,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj162=result_type2_410->mParamTypes;
                result_type2_410->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_403));
                come_call_finalizer3(__dec_obj162,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj163=result_type2_410->mParamNames;
                result_type2_410->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_404));
                come_call_finalizer3(__dec_obj163,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_410->mVarArgs=(_Bool)0;
                result_type2_410->mStatic=(_Bool)0;
                var_args_411=(_Bool)0;
                header_buf_412=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1453, "buffer"))));
                buffer_append(header_buf_412,header_head_393,header_tail_409-header_head_393);
                buffer_append_char(header_buf_412,0);
                param_default_parametors_413=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1457, "list$1charph"))));
                fun_414=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1459, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_395)),(struct sType*)come_increment_ref_count(result_type2_410),(struct list$1sTypeph*)come_increment_ref_count(param_types_397),(struct list$1charph*)come_increment_ref_count(param_names_398),(struct list$1charph*)come_increment_ref_count(param_default_parametors_413),(_Bool)1,var_args_411,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_412)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                fun2_418=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value575=__builtin_string(fun_name_395))));
                __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_418==((void*)0)||fun2_418->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_395)),(struct sFun*)come_increment_ref_count(fun_414));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1471, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value578=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1471, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_414),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result183__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value613=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_403,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_404,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_412,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_413,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_414,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_397,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_398,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_395 = come_decrement_ref_count2(fun_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value578,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value613) { __right_value613 = come_decrement_ref_count2(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result183__;
                /*i*/come_call_finalizer3(param_types2_403,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_404,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_412,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_413,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_414,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_397,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_398,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_395 = come_decrement_ref_count2(fun_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_373) {
        info->p=head;
        info->sline=sline_361;
        node_453=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result184__ = gComeFunResultObject = __result_obj__ = node_453;
        if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result184__;
        if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_379) {
        info->p=head;
        info->sline=sline_361;
        node_454=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_455=info->p;
        header_456=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1495, "buffer"))));
        buffer_append(header_456,source_head_359,source_tail_455-source_head_359);
        __result185__ = gComeFunResultObject = __result_obj__ = node_454;
        if(node_454) { node_454 = come_decrement_ref_count2(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_456,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result185__;
        if(node_454) { node_454 = come_decrement_ref_count2(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_456,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_361;
    buf2_457=(char*)come_increment_ref_count(parse_word(info));
    __result186__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value619=top_level_v98(buf2_457,head,head_sline,info)));
    buf2_457 = come_decrement_ref_count2(buf2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value619) { __right_value619 = come_decrement_ref_count2(__right_value619, ((struct sNode*)__right_value619)->finalize, ((struct sNode*)__right_value619)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj153;
char* __dec_obj154;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj153=self->v1;
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj154=self->v2;
            /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_389;
struct list_item$1charph* prev_it_390;
struct list$1charph* __result152__;
    it_389=self->head;
    while(it_389!=((void*)0)) {
        prev_it_390=it_389;
        it_389=it_389->next;
        /*i*/come_call_finalizer3(prev_it_390,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj160;
struct tuple1$1sTypeph* __result155__;
    __dec_obj160=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_415;
unsigned int hash_416;
unsigned int it_417;
struct sFun* __result156__;
struct sFun* __result157__;
struct sFun* __result158__;
struct sFun* __result159__;
default_value_415 = (void*)0;
    memset(&default_value_415,0,sizeof(struct sFun*));
    hash_416=string_get_hash_key(((char*)key))%self->size;
    it_417=hash_416;
    while((_Bool)1) {
        if(        self->item_existance[it_417]) {
            if(            string_equals(self->keys[it_417],key)) {
                __result156__ = gComeFunResultObject = __result_obj__ = self->items[it_417];
                /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result156__;
            }
            it_417++;
            if(            it_417>=self->size) {
                it_417=0;
            }
            else if(            it_417==hash_416) {
                __result157__ = gComeFunResultObject = __result_obj__ = default_value_415;
                /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result157__;
            }
        }
        else {
            __result158__ = gComeFunResultObject = __result_obj__ = default_value_415;
            /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result158__;
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = default_value_415;
    /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result161__;
void* __right_value581 = (void*)0;
struct sFun* result_420;
void* __right_value582 = (void*)0;
char* __dec_obj167;
void* __right_value583 = (void*)0;
struct sType* __dec_obj168;
void* __right_value584 = (void*)0;
struct list$1sTypeph* __dec_obj169;
void* __right_value585 = (void*)0;
struct list$1charph* __dec_obj170;
void* __right_value586 = (void*)0;
struct list$1charph* __dec_obj171;
void* __right_value587 = (void*)0;
struct sType* __dec_obj172;
void* __right_value605 = (void*)0;
struct sBlock* __dec_obj178;
void* __right_value606 = (void*)0;
struct buffer* __dec_obj179;
void* __right_value607 = (void*)0;
struct buffer* __dec_obj180;
void* __right_value608 = (void*)0;
struct buffer* __dec_obj181;
void* __right_value609 = (void*)0;
struct buffer* __dec_obj182;
void* __right_value610 = (void*)0;
char* __dec_obj183;
void* __right_value611 = (void*)0;
char* __dec_obj184;
struct sFun* __result181__;
    if(    self==(void*)0) {
        __result161__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    result_420=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj167=result_420->mName;
        result_420->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj168=result_420->mResultType;
        result_420->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj169=result_420->mParamTypes;
        result_420->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj169,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj170=result_420->mParamNames;
        result_420->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj170,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj171=result_420->mParamDefaultParametors;
        result_420->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj171,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj172=result_420->mLambdaType;
        result_420->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj178=result_420->mBlock;
        result_420->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj178,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_420->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj179=result_420->mSource;
        result_420->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj180=result_420->mSourceHead;
        result_420->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj181=result_420->mSourceHead2;
        result_420->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj182=result_420->mSourceDefer;
        result_420->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj183=result_420->mComeHeader;
        result_420->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj184=result_420->mDeclareSName;
        result_420->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_420->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_420;
    /*i*/come_call_finalizer3(result_420,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result162__;
void* __right_value588 = (void*)0;
struct sBlock* result_421;
void* __right_value589 = (void*)0;
struct list$1sNodeph* __dec_obj173;
void* __right_value604 = (void*)0;
struct sVarTable* __dec_obj177;
struct sBlock* __result180__;
    if(    self==(void*)0) {
        __result162__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    result_421=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj173=result_421->mNodes;
        result_421->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj173,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj177=result_421->mVarTable;
        result_421->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj177,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_421;
    /*i*/come_call_finalizer3(result_421,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result163__;
void* __right_value590 = (void*)0;
struct sVarTable* result_422;
void* __right_value603 = (void*)0;
struct map$2charphsVarph* __dec_obj176;
struct sVarTable* __result179__;
    if(    self==(void*)0) {
        __result163__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_422=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj176=result_422->mVars;
        result_422->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj176,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_422->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_422->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_422->mID=self->mID;
    }
    __result179__ = gComeFunResultObject = __result_obj__ = result_422;
    /*i*/come_call_finalizer3(result_422,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result164__;
void* __right_value591 = (void*)0;
void* __right_value597 = (void*)0;
struct map$2charphsVarph* result_426;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1charp* __dec_obj175;
char* it_429;
struct sVar* default_value_432;
struct sVar* it2_435;
struct map$2charphsVarph* __result178__;
default_value_432 = (void*)0;
    if(    self==((void*)0)) {
        __result164__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_426=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1464, "map$2charphsVarph"))));
    __dec_obj175=result_426->key_list;
    result_426->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1466, "list$1charp"))));
    come_call_finalizer3(__dec_obj175,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_429=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_429=map$2charphsVarph_next(self)    ){
        memset(&default_value_432,0,sizeof(struct sVar*));
        it2_435=map$2charphsVarph_at(self,it_429,default_value_432);
        map$2charphsVarph_put(result_426,it_429,it2_435);
    }
    __result178__ = gComeFunResultObject = __result_obj__ = result_426;
    /*i*/come_call_finalizer3(result_426,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
int i_423;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1charp* __dec_obj174;
struct map$2charphsVarph* __result166__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value592=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value593=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value594=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_423=0;    i_423<128;    i_423++    ){
        self->item_existance[i_423]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj174=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    come_call_finalizer3(__dec_obj174,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result165__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_424;
int i_425;
    for(    i_424=0;    i_424<self->size;    i_424++    ){
        if(        self->item_existance[i_424]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_424],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_425=0;    i_425<self->size;    i_425++    ){
        if(        self->item_existance[i_425]) {
            if(            1) {
                self->keys[i_425] = come_decrement_ref_count2(self->keys[i_425], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_427;
char* __result167__;
char* __result168__;
char* result_428;
char* __result169__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_427,0,sizeof(char*));
        __result167__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result168__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    memset(&result_428,0,sizeof(char*));
    __result169__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_430;
char* __result170__;
char* __result171__;
char* result_431;
char* __result172__;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_430,0,sizeof(char*));
        __result170__ = gComeFunResultObject = __result_obj__ = result_430;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result171__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    memset(&result_431,0,sizeof(char*));
    __result172__ = gComeFunResultObject = __result_obj__ = result_431;
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_433;
unsigned int it_434;
struct sVar* __result173__;
struct sVar* __result174__;
struct sVar* __result175__;
struct sVar* __result176__;
    hash_433=string_get_hash_key(((char*)key))%self->size;
    it_434=hash_433;
    while((_Bool)1) {
        if(        self->item_existance[it_434]) {
            if(            string_equals(self->keys[it_434],key)) {
                __result173__ = gComeFunResultObject = __result_obj__ = self->items[it_434];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result173__;
            }
            it_434++;
            if(            it_434>=self->size) {
                it_434=0;
            }
            else if(            it_434==hash_433) {
                __result174__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result174__;
            }
        }
        else {
            __result175__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result175__;
        }
    }
    __result176__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_447;
int it_448;
_Bool same_key_exist_449;
char* it2_450;
struct map$2charphsVarph* __result177__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_447=string_get_hash_key(key)%self->size;
    it_448=hash_447;
    while((_Bool)1) {
        if(        self->item_existance[it_448]) {
            if(            string_equals(self->keys[it_448],key)) {
                if(                1) {
                    self->keys[it_448] = come_decrement_ref_count2(self->keys[it_448], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_448]);
                    self->keys[it_448]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_448]);
                    self->keys[it_448]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_448],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_448]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_448]=item;
                }
                break;
            }
            it_448++;
            if(            it_448>=self->size) {
                it_448=0;
            }
            else if(            it_448==hash_447) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_448]=(_Bool)1;
            if(            1) {
                self->keys[it_448]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_448]=key;
            }
            if(            1) {
                self->items[it_448]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_448]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_449=(_Bool)0;
    for(    it2_450=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_450=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_450,key)) {
            same_key_exist_449=(_Bool)1;
        }
    }
    if(    !same_key_exist_449) {
        list$1charp_push_back(self->key_list,key);
    }
    __result177__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_436;
void* __right_value600 = (void*)0;
char** keys_437;
void* __right_value601 = (void*)0;
struct sVar** items_438;
void* __right_value602 = (void*)0;
_Bool* item_existance_439;
int len_440;
char* it_441;
struct sVar* default_value_442;
struct sVar* it2_443;
unsigned int hash_444;
int n_445;
struct sVar* default_value_446;
default_value_442 = (void*)0;
default_value_446 = (void*)0;
    size_436=self->size*10;
    keys_437=(char**)come_increment_ref_count(((char**)(__right_value600=(char**)come_calloc(1, sizeof(char*)*(1*(size_436)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_438=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value601=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_436)), "/usr/local/include/comelang.h", 1622, "sVar*%"))));
    item_existance_439=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value602=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_436)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_440=0;
    for(    it_441=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_441=map$2charphsVarph_next(self)    ){
        memset(&default_value_442,0,sizeof(struct sVar*));
        it2_443=map$2charphsVarph_at(self,it_441,default_value_442);
        hash_444=string_get_hash_key(it_441)%size_436;
        n_445=hash_444;
        while((_Bool)1) {
            if(            item_existance_439[n_445]) {
                n_445++;
                if(                n_445>=size_436) {
                    n_445=0;
                }
                else if(                n_445==hash_444) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_439[n_445]=(_Bool)1;
                keys_437[n_445]=it_441;
                items_438[n_445]=map$2charphsVarph_at(self,it_441,default_value_446);
                len_440++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_437;
    self->items=items_438;
    self->item_existance=item_existance_439;
    self->size=size_436;
    self->len=len_440;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_451;
int i_452;
    for(    i_451=0;    i_451<self->size;    i_451++    ){
        if(        self->item_existance[i_451]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_451],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_452=0;    i_452<self->size;    i_452++    ){
        if(        self->item_existance[i_452]) {
            if(            1) {
                self->keys[i_452] = come_decrement_ref_count2(self->keys[i_452], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_458;
int caller_line_459;
char* caller_sname_460;
_Bool comma_instead_of_semicolon_461;
char* last_code_462;
char* __dec_obj186;
char* last_code2_463;
char* __dec_obj187;
char* last_code3_464;
char* __dec_obj188;
void* __right_value620 = (void*)0;
char* sname_top_465;
int sline_top_466;
struct sFun* funX_467;
_Bool __result187__;
void* __right_value621 = (void*)0;
struct sType* result_type_468;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1sTypeph* param_types_469;
struct list$1sTypeph* o2_saved_470;
struct sType* it_473;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* param_type_476;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1charph* param_names_477;
void* __right_value628 = (void*)0;
struct list$1charph* param_default_parametors_478;
char* p_479;
int sline_480;
char* sname_481;
char* head_482;
struct buffer* source_483;
void* __right_value629 = (void*)0;
struct buffer* __dec_obj189;
struct sType* generics_type_saved_484;
void* __right_value630 = (void*)0;
struct sType* __dec_obj190;
struct list$1charph* method_generics_type_names_485;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charph* __dec_obj191;
struct list$1charph* o2_saved_486;
char* it_487;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1charph* __dec_obj192;
char* __dec_obj193;
void* __right_value635 = (void*)0;
struct sBlock* block_488;
struct buffer* __dec_obj194;
char* __dec_obj195;
_Bool var_args_489;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sFun* fun_490;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value647 = (void*)0;
struct sNode* node_491;
_Bool in_generics_fun_493;
void* __if_result__1_494 = (void*)0;
_Bool __result196__;
struct sType* __dec_obj200;
struct list$1charph* __dec_obj201;
void* __right_value648 = (void*)0;
char* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
_Bool __result197__;
    caller_fun_458=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_459=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_460=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_461=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_462=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj186=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_463=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj187=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_464=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj188=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_465=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_466=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_467=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_467) {
        __result187__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_462 = come_decrement_ref_count2(last_code_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_463 = come_decrement_ref_count2(last_code2_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_464 = come_decrement_ref_count2(last_code3_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_465 = come_decrement_ref_count2(sname_top_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    result_type_468=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_469=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1543, "list$1sTypeph"))));
    for(    o2_saved_470=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_473=list$1sTypeph_begin((o2_saved_470));    !list$1sTypeph_end((o2_saved_470));    it_473=list$1sTypeph_next((o2_saved_470))    ){
        param_type_476=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value624=sType_clone(it_473))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value624,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_476->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_469,(struct sType*)come_increment_ref_count(sType_clone(param_type_476)));
        /*i*/come_call_finalizer3(param_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_470,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_477=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_478=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_479=info->p;
    sline_480=info->sline;
    sname_481=(char*)come_increment_ref_count(info->sname);
    head_482=info->head;
    source_483=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj189=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj189,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_484=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj190=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_485=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj191=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1570, "list$1charph"))));
    come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_486=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_487=list$1charph_begin((o2_saved_486));    !list$1charph_end((o2_saved_486));    it_487=list$1charph_next((o2_saved_486))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_487)));
    }
    /*i*/come_call_finalizer3(o2_saved_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj192=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj192,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj193=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_488=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_482;
    __dec_obj194=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_483);
    come_call_finalizer3(__dec_obj194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_479;
    info->sline=sline_480;
    __dec_obj195=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_481);
    /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_468->mInline=(_Bool)0;
    var_args_489=generics_fun->mVarArgs;
    fun_490=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1592, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_468),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_469)),(struct list$1charph*)come_increment_ref_count(param_names_477),(struct list$1charph*)come_increment_ref_count(param_default_parametors_478),(_Bool)0,var_args_489,(struct sBlock*)come_increment_ref_count(block_488),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_490));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1599, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value643=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1599, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_490),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_491=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value643,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_493=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(    !node_compile(node_491,info)) {
        __result196__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_462 = come_decrement_ref_count2(last_code_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_463 = come_decrement_ref_count2(last_code2_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_464 = come_decrement_ref_count2(last_code3_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_465 = come_decrement_ref_count2(sname_top_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_469,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_477,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_478,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_481 = come_decrement_ref_count2(sname_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_488,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_490,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result196__;
    }
    info->in_generics_fun=in_generics_fun_493;
    __dec_obj200=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_484);
    come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj201=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_485);
    come_call_finalizer3(__dec_obj201,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj202=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_465));
    /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_466;
    __dec_obj203=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_462);
    /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_463);
    /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_464);
    /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_458;
    info->caller_line=caller_line_459;
    info->caller_sname=caller_sname_460;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_461;
    __result197__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_462 = come_decrement_ref_count2(last_code_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_463 = come_decrement_ref_count2(last_code2_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_464 = come_decrement_ref_count2(last_code3_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_465 = come_decrement_ref_count2(sname_top_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_469,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_477,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_478,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_481 = come_decrement_ref_count2(sname_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_488,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_490,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result197__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_471;
struct sType* __result188__;
struct sType* __result189__;
struct sType* result_472;
struct sType* __result190__;
result_471 = (void*)0;
result_472 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_471,0,sizeof(struct sType*));
        __result188__ = gComeFunResultObject = __result_obj__ = result_471;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    self->it=self->head;
    if(    self->it) {
        __result189__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    memset(&result_472,0,sizeof(struct sType*));
    __result190__ = gComeFunResultObject = __result_obj__ = result_472;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_474;
struct sType* __result191__;
struct sType* __result192__;
struct sType* result_475;
struct sType* __result193__;
result_474 = (void*)0;
result_475 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_474,0,sizeof(struct sType*));
        __result191__ = gComeFunResultObject = __result_obj__ = result_474;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result192__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    memset(&result_475,0,sizeof(struct sType*));
    __result193__ = gComeFunResultObject = __result_obj__ = result_475;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_495;
int caller_line_496;
char* caller_sname_497;
_Bool comma_instead_of_semicolon_498;
char* last_code_499;
char* __dec_obj206;
char* last_code2_500;
char* __dec_obj207;
char* last_code3_501;
char* __dec_obj208;
void* __right_value649 = (void*)0;
char* sname_top_502;
int sline_top_503;
struct sFun* funX_504;
_Bool __result198__;
void* __right_value650 = (void*)0;
struct sType* result_type_505;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1sTypeph* param_types_506;
struct list$1sTypeph* o2_saved_507;
struct sType* it_508;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sType* param_type_509;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1charph* param_names_510;
void* __right_value657 = (void*)0;
struct list$1charph* param_default_parametors_511;
char* p_512;
int sline_513;
char* sname_514;
char* head_515;
struct buffer* source_516;
void* __right_value658 = (void*)0;
struct buffer* __dec_obj209;
struct list$1charph* method_generics_type_names_517;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1charph* __dec_obj210;
struct list$1charph* o2_saved_518;
char* it_519;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charph* __dec_obj211;
char* __dec_obj212;
void* __right_value663 = (void*)0;
struct sBlock* block_520;
struct buffer* __dec_obj213;
char* __dec_obj214;
_Bool var_args_521;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sFun* fun_522;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value675 = (void*)0;
struct sNode* node_523;
void* __if_result__2_525 = (void*)0;
_Bool __result201__;
struct list$1charph* __dec_obj219;
void* __right_value676 = (void*)0;
char* __dec_obj220;
char* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
_Bool __result202__;
    caller_fun_495=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_496=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_497=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_498=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_499=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_500=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_501=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj208=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_502=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_503=info->sline;
    funX_504=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_504) {
        __result198__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_502 = come_decrement_ref_count2(sname_top_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result198__;
    }
    result_type_505=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_506=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1656, "list$1sTypeph"))));
    for(    o2_saved_507=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_508=list$1sTypeph_begin((o2_saved_507));    !list$1sTypeph_end((o2_saved_507));    it_508=list$1sTypeph_next((o2_saved_507))    ){
        param_type_509=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value653=sType_clone(it_508))),info));
        /*g*/come_call_finalizer3(__right_value653,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_509->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_506,(struct sType*)come_increment_ref_count(sType_clone(param_type_509)));
        /*i*/come_call_finalizer3(param_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_507,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_510=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_511=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_512=info->p;
    sline_513=info->sline;
    sname_514=(char*)come_increment_ref_count(info->sname);
    head_515=info->head;
    source_516=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj209=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_517=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj210=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1680, "list$1charph"))));
    come_call_finalizer3(__dec_obj210,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_518=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_519=list$1charph_begin((o2_saved_518));    !list$1charph_end((o2_saved_518));    it_519=list$1charph_next((o2_saved_518))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_519)));
    }
    /*i*/come_call_finalizer3(o2_saved_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj211=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj212=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_520=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_515;
    __dec_obj213=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_516);
    come_call_finalizer3(__dec_obj213,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_512;
    info->sline=sline_513;
    __dec_obj214=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_514);
    /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_505->mInline=(_Bool)0;
    var_args_521=generics_fun->mVarArgs;
    fun_522=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1702, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_505),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_506)),(struct list$1charph*)come_increment_ref_count(param_names_510),(struct list$1charph*)come_increment_ref_count(param_default_parametors_511),(_Bool)0,var_args_521,(struct sBlock*)come_increment_ref_count(block_520),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_522));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1709, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value671=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1709, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_522),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_523=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value671,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(    !node_compile(node_523,info)) {
        __result201__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_502 = come_decrement_ref_count2(sname_top_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_506,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_510,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_514 = come_decrement_ref_count2(sname_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_520,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_522,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result201__;
    }
    __dec_obj219=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_517);
    come_call_finalizer3(__dec_obj219,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj220=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_502));
    /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_503;
    __dec_obj221=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_499);
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj222=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_500);
    /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj223=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_501);
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_495;
    info->caller_line=caller_line_496;
    info->caller_sname=caller_sname_497;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_498;
    __result202__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_502 = come_decrement_ref_count2(sname_top_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_506,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_510,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_514 = come_decrement_ref_count2(sname_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_520,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_522,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result202__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_526;
char* source_head_527;
struct sType* result_type_528;
char* var_name_529;
_Bool constructor__530;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* __dec_obj224;
void* __right_value679 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_531;
char* var_name2_532;
_Bool err_533;
struct sType* __dec_obj225;
char* __dec_obj226;
_Bool method_definition_534;
char* p_535;
int sline_536;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct buffer* buf2_537;
char* fun_name_538;
char* base_fun_name_539;
void* __right_value682 = (void*)0;
char* __dec_obj227;
void* __right_value683 = (void*)0;
char* __dec_obj228;
void* __right_value684 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_540;
char* name_541;
_Bool err_542;
void* __right_value685 = (void*)0;
char* __dec_obj229;
void* __right_value686 = (void*)0;
char* __dec_obj230;
void* __right_value687 = (void*)0;
char* __dec_obj231;
void* __right_value688 = (void*)0;
char* __dec_obj232;
void* __right_value689 = (void*)0;
char* __dec_obj233;
void* __right_value690 = (void*)0;
char* __dec_obj234;
void* __right_value691 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_543;
struct list$1charph* param_names_544;
struct list$1charph* param_default_parametors_545;
_Bool var_args_546;
char* header_tail_547;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* header_buf_548;
int version_549;
int n_550;
void* __right_value694 = (void*)0;
struct sBlock* block_551;
void* __right_value695 = (void*)0;
char* fun_name_553;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sFun* fun_554;
void* __right_value701 = (void*)0;
struct sFun* fun2_555;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value707 = (void*)0;
struct sNode* __result205__;
void* __right_value708 = (void*)0;
char* none_generics_name_557;
void* __right_value709 = (void*)0;
char* generics_sname_558;
int generics_sline_559;
void* __right_value710 = (void*)0;
char* block_560;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sGenericsFun* fun_561;
void* __right_value717 = (void*)0;
char* fun_name3_562;
void* __right_value721 = (void*)0;
struct sNode* __result217__;
void* __right_value722 = (void*)0;
char* generics_sname_584;
int generics_sline_585;
void* __right_value723 = (void*)0;
char* block_586;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sGenericsFun* fun_587;
void* __right_value730 = (void*)0;
char* fun_name3_588;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* __result218__;
char* source_tail_589;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct buffer* header_590;
void* __right_value735 = (void*)0;
char* name_591;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
char* name_592;
void* __right_value738 = (void*)0;
int i_593;
struct sType* param_type_594;
char* param_name_598;
char* default_parametor_599;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
char* impl_name_600;
void* __right_value744 = (void*)0;
char* result_type_name_601;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* impl_name_602;
void* __right_value747 = (void*)0;
char* result_type_name_603;
void* __right_value748 = (void*)0;
int i_604;
struct sType* param_type_605;
char* param_name_606;
char* default_parametor_607;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sBlock* block_608;
_Bool static__609;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
char* new_fun_name_610;
void* __right_value757 = (void*)0;
char* __dec_obj240;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sFun* fun_611;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sFun* fun2_612;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value772 = (void*)0;
struct sNode* __result223__;
void* __right_value773 = (void*)0;
char* new_fun_name_614;
void* __right_value774 = (void*)0;
char* __dec_obj245;
_Bool result_type_static_615;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sFun* fun_616;
void* __right_value780 = (void*)0;
struct sFun* fun2_617;
void* __right_value781 = (void*)0;
char* source_tail_618;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct buffer* header_619;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value790 = (void*)0;
struct sNode* __result226__;
void* __right_value791 = (void*)0;
char* asm_fun_621;
void* __right_value792 = (void*)0;
char* __dec_obj250;
_Bool result_type_static_622;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sFun* fun_623;
void* __right_value798 = (void*)0;
struct sFun* fun2_624;
void* __right_value799 = (void*)0;
char* source_tail_625;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct buffer* header_626;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value808 = (void*)0;
struct sNode* __result229__;
struct sNode* __result230__;
fun_name_538 = (void*)0;
    header_head_526=info->p;
    source_head_527=info->p;
    result_type_528=((void*)0);
    var_name_529=((void*)0);
    constructor__530=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value677=parse_word(info)));
        __right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj224=result_type_528;
        result_type_528=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_528->mHeap=(_Bool)1;
        constructor__530=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value679=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_531=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_532=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_533=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value679,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj225=result_type_528;
        result_type_528=(struct sType*)come_increment_ref_count(result_type2_531);
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj226=var_name_529;
        var_name_529=(char*)come_increment_ref_count(var_name2_532);
        /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_533) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_531,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_532 = come_decrement_ref_count2(var_name2_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_534=(_Bool)0;
    {
        p_535=info->p;
        sline_536=info->sline;
        buf2_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1774, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_537,*info->p);
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
        if(        buffer_length(buf2_537)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_534=(_Bool)1;
        }
        info->p=p_535;
        info->sline=sline_536;
        /*i*/come_call_finalizer3(buf2_537,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_539=((void*)0);
    if(    constructor__530) {
        __dec_obj227=base_fun_name_539;
        base_fun_name_539=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj228=fun_name_538;
        fun_name_538=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_539,info,(_Bool)1));
        /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_534) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value684=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_540=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_541=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_542=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value684,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_542) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj229=base_fun_name_539;
        base_fun_name_539=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj230=fun_name_538;
        fun_name_538=(char*)come_increment_ref_count(create_method_name(obj_type_540,(_Bool)0,base_fun_name_539,info,(_Bool)1));
        /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj231=base_fun_name_539;
        base_fun_name_539=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj232=fun_name_538;
        fun_name_538=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_539,info,(_Bool)1));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj233=fun_name_538;
        fun_name_538=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj234=base_fun_name_539;
        base_fun_name_539=(char*)come_increment_ref_count(__builtin_string(fun_name_538));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_539,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value691=parse_params(info,constructor__530)));
    param_types_543=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_544=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_545=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_546=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value691,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_547=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_539,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1841, "buffer"))));
    buffer_append(header_buf_548,header_head_526,header_tail_547-header_head_526);
    buffer_append_char(header_buf_548,0);
    version_549=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_550=0;
        while(xisdigit(*info->p)) {
            n_550=n_550*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_549=n_550;
    }
    if(    charp_operator_equals(base_fun_name_539,"lambda")) {
        block_551=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_552=0;
        lambda_num_552++;
        fun_name_553=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_552));
        result_type_528->mStatic=(_Bool)0;
        fun_554=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1871, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_553)),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_543),(struct list$1charph*)come_increment_ref_count(param_names_544),(struct list$1charph*)come_increment_ref_count(param_default_parametors_545),(_Bool)0,var_args_546,(struct sBlock*)come_increment_ref_count(block_551),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_548)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_555=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value701=__builtin_string(fun_name_553))));
        __right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_555==((void*)0)||fun2_555->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_553)),(struct sFun*)come_increment_ref_count(fun_554));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1881, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value704=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1881, "sLambdaNode")),fun_554,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value707=_inf_value5));
        /*i*/come_call_finalizer3(block_551,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_553 = come_decrement_ref_count2(fun_name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_554,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value704,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value707) { __right_value707 = come_decrement_ref_count2(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result205__;
        /*i*/come_call_finalizer3(block_551,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_553 = come_decrement_ref_count2(fun_name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_554,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_557=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_558=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_559=info->sline;
        block_560=(char*)come_increment_ref_count(skip_block(info));
        fun_561=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1891, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value712=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value713=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_543),(struct list$1charph*)come_increment_ref_count(param_names_544),(struct list$1charph*)come_increment_ref_count(param_default_parametors_545),var_args_546,(char*)come_increment_ref_count(block_560),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_558)),generics_sline_559));
        /*g*/come_call_finalizer3(__right_value712,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value713,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_562=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_557,base_fun_name_539));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_562)),(struct sGenericsFun*)come_increment_ref_count(fun_561));
        __result217__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_557 = come_decrement_ref_count2(none_generics_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_558 = come_decrement_ref_count2(generics_sname_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_560 = come_decrement_ref_count2(block_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_561,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_562 = come_decrement_ref_count2(fun_name3_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
        none_generics_name_557 = come_decrement_ref_count2(none_generics_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_558 = come_decrement_ref_count2(generics_sname_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_560 = come_decrement_ref_count2(block_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_561,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_562 = come_decrement_ref_count2(fun_name3_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_584=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_585=info->sline;
        block_586=(char*)come_increment_ref_count(skip_block(info));
        fun_587=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1905, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value725=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value726=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_543),(struct list$1charph*)come_increment_ref_count(param_names_544),(struct list$1charph*)come_increment_ref_count(param_default_parametors_545),var_args_546,(char*)come_increment_ref_count(block_586),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_584)),generics_sline_585));
        /*g*/come_call_finalizer3(__right_value725,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value726,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_588=(char*)come_increment_ref_count(charp_clone(base_fun_name_539));
        if(        method_definition_534) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sGenericsFun*)come_increment_ref_count(fun_587));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_588)),(struct sGenericsFun*)come_increment_ref_count(fun_587));
        }
        __result218__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_584 = come_decrement_ref_count2(generics_sname_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_586 = come_decrement_ref_count2(block_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_587,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_588 = come_decrement_ref_count2(fun_name3_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result218__;
        generics_sname_584 = come_decrement_ref_count2(generics_sname_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_586 = come_decrement_ref_count2(block_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_587,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_588 = come_decrement_ref_count2(fun_name3_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_589=info->p-1;
        header_590=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1921, "buffer"))));
        if(        constructor__530) {
            if(            list$1sTypeph_length(param_types_543)==1) {
                name_591=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_590,((char*)(__right_value736=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_591,name_591,name_591))));
                __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                name_591 = come_decrement_ref_count2(name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_592=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_590,((char*)(__right_value738=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_592,name_592,name_592))));
                __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_593=1;                i_593<list$1sTypeph_length(param_types_543);                i_593++                ){
                    param_type_594=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_543,i_593), "05function.c", 1933, 1));
                    param_name_598=((char*)come_null_check(list$1charphp_operator_load_element(param_names_544,i_593), "05function.c", 1934, 2));
                    default_parametor_599=list$1charphp_operator_load_element(param_default_parametors_545,i_593);
                    if(                    default_parametor_599) {
                        buffer_append_str(header_590,((char*)(__right_value740=xsprintf("extern %s %s=%s",((char*)(__right_value739=make_come_type_name_string_no_solved(param_type_594,(_Bool)0,info))),param_name_598,default_parametor_599))));
                        __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_590,((char*)(__right_value742=xsprintf("extern %s %s",((char*)(__right_value741=make_come_type_name_string_no_solved(param_type_594,(_Bool)0,info))),param_name_598))));
                        __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_593!=list$1sTypeph_length(param_types_543)-1) {
                        buffer_append_str(header_590,",");
                    }
                }
                buffer_append_str(header_590,");\n");
                name_592 = come_decrement_ref_count2(name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_543)==1) {
                impl_name_600=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_601=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_528,(_Bool)0,info));
                buffer_append_str(header_590,((char*)(__right_value745=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_601,impl_name_600,base_fun_name_539,impl_name_600))));
                __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                impl_name_600 = come_decrement_ref_count2(impl_name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_601 = come_decrement_ref_count2(result_type_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_602=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_603=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_528,(_Bool)0,info));
                buffer_append_str(header_590,((char*)(__right_value748=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_603,impl_name_602,base_fun_name_539,impl_name_602))));
                __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_604=1;                i_604<list$1sTypeph_length(param_types_543);                i_604++                ){
                    param_type_605=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_543,i_604), "05function.c", 1964, 3));
                    param_name_606=((char*)come_null_check(list$1charphp_operator_load_element(param_names_544,i_604), "05function.c", 1965, 4));
                    default_parametor_607=list$1charphp_operator_load_element(param_default_parametors_545,i_604);
                    if(                    default_parametor_607) {
                        buffer_append_str(header_590,((char*)(__right_value750=xsprintf("extern %s %s=%s",((char*)(__right_value749=make_come_type_name_string_no_solved(param_type_605,(_Bool)0,info))),param_name_606,default_parametor_607))));
                        __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_590,((char*)(__right_value752=xsprintf("extern %s %s",((char*)(__right_value751=make_come_type_name_string_no_solved(param_type_605,(_Bool)0,info))),param_name_606))));
                        __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_604!=list$1sTypeph_length(param_types_543)-1) {
                        buffer_append_str(header_590,",");
                    }
                }
                buffer_append_str(header_590,");\n");
                impl_name_602 = come_decrement_ref_count2(impl_name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_603 = come_decrement_ref_count2(result_type_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_590,source_head_527,source_tail_589-source_head_527);
            buffer_append_str(header_590,";\n");
        }
        if(        !result_type_528->mStatic) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value753=buffer_to_string(header_590))));
            __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        block_608=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__530,(_Bool)1));
        static__609=(_Bool)0;
        if(        result_type_528->mStatic) {
            result_type_528->mStatic=(_Bool)0;
            static__609=(_Bool)1;
        }
        if(        version_549>0) {
            new_fun_name_610=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value755=__builtin_string(fun_name_538))),version_549));
            __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj240=fun_name_538;
            fun_name_538=(char*)come_increment_ref_count(__builtin_string(new_fun_name_610));
            /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_610 = come_decrement_ref_count2(new_fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_611=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2005, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_543),(struct list$1charph*)come_increment_ref_count(param_names_544),(struct list$1charph*)come_increment_ref_count(param_default_parametors_545),(_Bool)0,var_args_546,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_608)),static__609,(char*)come_increment_ref_count(buffer_to_string(header_buf_548)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_538)),(struct sFun*)come_increment_ref_count(fun_611));
        }
        else {
            fun2_612=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value765=__builtin_string(fun_name_538))));
            __right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_612==((void*)0)||fun2_612->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_538)),(struct sFun*)come_increment_ref_count(fun_611));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2025, "struct sNode");
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value768=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2025, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_611),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value772=_inf_value6));
        /*i*/come_call_finalizer3(header_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_608,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_611,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value768,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value772) { __right_value772 = come_decrement_ref_count2(__right_value772, ((struct sNode*)__right_value772)->finalize, ((struct sNode*)__right_value772)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result223__;
        /*i*/come_call_finalizer3(header_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_608,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_611,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_549>0) {
            new_fun_name_614=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_538,version_549));
            __dec_obj245=fun_name_538;
            fun_name_538=(char*)come_increment_ref_count(__builtin_string(new_fun_name_614));
            /*G*/ __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_614 = come_decrement_ref_count2(new_fun_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_615=result_type_528->mStatic;
            result_type_528->mStatic=(_Bool)0;
            fun_616=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2040, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_543),(struct list$1charph*)come_increment_ref_count(param_names_544),(struct list$1charph*)come_increment_ref_count(param_default_parametors_545),(_Bool)1,var_args_546,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_548)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_617=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value780=__builtin_string(fun_name_538))));
            __right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_617==((void*)0)||fun2_617->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_538)),(struct sFun*)come_increment_ref_count(fun_616));
            }
            source_tail_618=info->p;
            header_619=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2054, "buffer"))));
            buffer_append(header_619,source_head_527,source_tail_618-source_head_527);
            if(            !result_type_static_615) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value784=buffer_to_string(header_619))));
                __right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2061, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value786=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2061, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_616),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value790=_inf_value7));
            /*i*/come_call_finalizer3(fun_616,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value786,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value790) { __right_value790 = come_decrement_ref_count2(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result226__;
            /*i*/come_call_finalizer3(fun_616,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_621=(char*)come_increment_ref_count(parse_attribute(info));
            if(            string_operator_not_equals(asm_fun_621,"")) {
                __dec_obj250=fun_name_538;
                fun_name_538=(char*)come_increment_ref_count(__builtin_string(asm_fun_621));
                /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_622=result_type_528->mStatic;
            result_type_528->mStatic=(_Bool)0;
            fun_623=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2075, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_543),(struct list$1charph*)come_increment_ref_count(param_names_544),(struct list$1charph*)come_increment_ref_count(param_default_parametors_545),(_Bool)1,var_args_546,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_548)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_624=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value798=__builtin_string(fun_name_538))));
            __right_value798 = come_decrement_ref_count2(__right_value798, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_624==((void*)0)||fun2_624->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_538)),(struct sFun*)come_increment_ref_count(fun_623));
            }
            source_tail_625=info->p;
            header_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2089, "buffer"))));
            buffer_append(header_626,source_head_527,source_tail_625-source_head_527);
            if(            !result_type_static_622) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value802=buffer_to_string(header_626))));
                __right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2096, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value804=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2096, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_623),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result229__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=_inf_value8));
            asm_fun_621 = come_decrement_ref_count2(asm_fun_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_623,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value804,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result229__;
            asm_fun_621 = come_decrement_ref_count2(asm_fun_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_623,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(%c)(2)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    __result230__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_529 = come_decrement_ref_count2(var_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_539 = come_decrement_ref_count2(base_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_543,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj235;
struct list$1charph* __dec_obj236;
struct list$1charph* __dec_obj237;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj235=self->v1;
            come_call_finalizer3(__dec_obj235,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj236=self->v2;
            come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj237=self->v3;
            come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj238=self->sname;
            /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result203__;
void* __right_value705 = (void*)0;
struct sLambdaNode* result_556;
void* __right_value706 = (void*)0;
char* __dec_obj239;
struct sLambdaNode* __result204__;
    if(    self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_556=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_556->sname;
        result_556->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->mFun=self->mFun;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_556;
    /*i*/come_call_finalizer3(result_556,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_580;
unsigned int it_581;
_Bool same_key_exist_582;
char* it2_583;
struct map$2charphsGenericsFunph* __result216__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_580=string_get_hash_key(key)%self->size;
    it_581=hash_580;
    while((_Bool)1) {
        if(        self->item_existance[it_581]) {
            if(            string_equals(self->keys[it_581],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_581]);
                    self->keys[it_581] = come_decrement_ref_count2(self->keys[it_581], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_581]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_581]);
                    self->keys[it_581]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_581],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_581]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_581]=item;
                }
                break;
            }
            it_581++;
            if(            it_581>=self->size) {
                it_581=0;
            }
            else if(            it_581==hash_580) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_581]=(_Bool)1;
            if(            1) {
                self->keys[it_581]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_581]=key;
            }
            if(            1) {
                self->items[it_581]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_581]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_582=(_Bool)0;
    for(    it2_583=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_583=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_583,key)) {
            same_key_exist_582=(_Bool)1;
        }
    }
    if(    !same_key_exist_582) {
        list$1charp_push_back(self->key_list,key);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_563;
void* __right_value718 = (void*)0;
char** keys_564;
void* __right_value719 = (void*)0;
struct sGenericsFun** items_565;
void* __right_value720 = (void*)0;
_Bool* item_existance_566;
int len_567;
char* it_570;
struct sGenericsFun* default_value_573;
struct sGenericsFun* it2_574;
unsigned int hash_577;
int n_578;
struct sGenericsFun* default_value_579;
default_value_573 = (void*)0;
default_value_579 = (void*)0;
    size_563=self->size*10;
    keys_564=(char**)come_increment_ref_count(((char**)(__right_value718=(char**)come_calloc(1, sizeof(char*)*(1*(size_563)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_565=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value719=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_563)), "/usr/local/include/comelang.h", 1622, "sGenericsFun*%"))));
    item_existance_566=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value720=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_563)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_567=0;
    for(    it_570=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_570=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_573,0,sizeof(struct sGenericsFun*));
        it2_574=map$2charphsGenericsFunph_at(self,it_570,default_value_573);
        hash_577=string_get_hash_key(it_570)%size_563;
        n_578=hash_577;
        while((_Bool)1) {
            if(            item_existance_566[n_578]) {
                n_578++;
                if(                n_578>=size_563) {
                    n_578=0;
                }
                else if(                n_578==hash_577) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_566[n_578]=(_Bool)1;
                keys_564[n_578]=it_570;
                items_565[n_578]=map$2charphsGenericsFunph_at(self,it_570,default_value_579);
                len_567++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_564;
    self->items=items_565;
    self->item_existance=item_existance_566;
    self->size=size_563;
    self->len=len_567;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_568;
char* __result206__;
char* __result207__;
char* result_569;
char* __result208__;
result_568 = (void*)0;
result_569 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_568,0,sizeof(char*));
        __result206__ = gComeFunResultObject = __result_obj__ = result_568;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result207__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    memset(&result_569,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = result_569;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_571;
char* __result209__;
char* __result210__;
char* result_572;
char* __result211__;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_571,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_571;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_572,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_572;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_575;
unsigned int it_576;
struct sGenericsFun* __result212__;
struct sGenericsFun* __result213__;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
    hash_575=string_get_hash_key(((char*)key))%self->size;
    it_576=hash_575;
    while((_Bool)1) {
        if(        self->item_existance[it_576]) {
            if(            string_equals(self->keys[it_576],key)) {
                __result212__ = gComeFunResultObject = __result_obj__ = self->items[it_576];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
            }
            it_576++;
            if(            it_576>=self->size) {
                it_576=0;
            }
            else if(            it_576==hash_575) {
                __result213__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result213__;
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
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_595;
int i_596;
char* __result219__;
char* default_value_597;
char* __result220__;
default_value_597 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_595=self->head;
    i_596=0;
    while(it_595!=((void*)0)) {
        if(        position==i_596) {
            __result219__ = gComeFunResultObject = __result_obj__ = it_595->item;
            gComeFunResultObject = (void*)0;
            return __result219__;
        }
        it_595=it_595->next;
        i_596++;
    }
    memset(&default_value_597,0,sizeof(char*));
    __result220__ = gComeFunResultObject = __result_obj__ = default_value_597;
    default_value_597 = come_decrement_ref_count2(default_value_597, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_628;
char* __dec_obj255;
char* last_code2_629;
char* __dec_obj256;
char* last_code3_630;
_Bool comma_instead_of_semicolon_631;
char* __dec_obj257;
struct sClass* current_stack_frame_struct_632;
struct sFun* finalizer_633;
void* __right_value809 = (void*)0;
char* real_fun_name_634;
void* __right_value810 = (void*)0;
char* user_real_fun_name_635;
struct sFun* user_finalizer_636;
void* __right_value811 = (void*)0;
struct sType* type2_637;
struct sClass* klass_638;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* source_639;
struct list$1tuple2$2charphsTypephph* o2_saved_648;
struct tuple2$2charphsTypeph* it_651;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_654;
struct sType* field_type_655;
char* p_657;
int sline_658;
char* sname_659;
char* head_660;
struct buffer* source3_661;
struct buffer* __dec_obj265;
void* __right_value814 = (void*)0;
char* __dec_obj266;
void* __right_value815 = (void*)0;
struct sBlock* block_662;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sType* result_type_663;
void* __right_value818 = (void*)0;
char* name_664;
void* __right_value819 = (void*)0;
struct sType* self_type_665;
struct sType* __list_values21___666[1];
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1sTypeph* param_types_667;
void* __right_value822 = (void*)0;
char* __list_values22___668[1];
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1charph* param_names_669;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1charph* param_default_parametors_670;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct buffer* header_buf_671;
void* __right_value829 = (void*)0;
int i_672;
struct sType* param_type_673;
char* param_name_674;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sFun* fun_675;
void* __right_value835 = (void*)0;
struct sFun* fun2_676;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value842 = (void*)0;
struct sNode* node_677;
struct buffer* __dec_obj271;
char* __dec_obj272;
char* __dec_obj273;
char* __dec_obj274;
char* __dec_obj275;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct tuple2$2sFunpcharph* __result244__;
    last_code_628=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_629=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_630=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_631=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj257=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_632=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_633=((void*)0);
    real_fun_name_634=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_635=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_636=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_635);
    type2_637=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_637;
    klass_638=type->mClass;
    if(    type->mPointerNum>0&&klass_638->mStruct) {
        source_639=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2138, "buffer"))));
        buffer_append_char(source_639,123);
        if(        user_finalizer_636) {
            char source2_640[1024];
            memset(&source2_640, 0, sizeof(char)            *(1024)            );
            snprintf(source2_640,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_635);
            buffer_append_str(source_639,source2_640);
        }
        klass_638=map$2charphsClassphp_operator_load_element(info->classes,klass_638->mName);
        for(        o2_saved_648=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_638->mFields)),it_651=list$1tuple2$2charphsTypephph_begin((o2_saved_648));        !list$1tuple2$2charphsTypephph_end((o2_saved_648));        it_651=list$1tuple2$2charphsTypephph_next((o2_saved_648))        ){
            multiple_assign_var10=it_651;
            name_654=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_655=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_655->mClass->mName)&&type->mPointerNum==field_type_655->mPointerNum&&field_type_655->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_655->mHeap) {
                char source2_656[1024];
                memset(&source2_656, 0, sizeof(char)                *(1024)                );
                snprintf(source2_656,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_654,name_654,name_654,name_654);
                buffer_append_str(source_639,source2_656);
            }
            name_654 = come_decrement_ref_count2(name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_648,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_639,125);
        p_657=info->p;
        sline_658=info->sline;
        sname_659=(char*)come_increment_ref_count(info->sname);
        head_660=info->head;
        source3_661=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj265=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_639);
        come_call_finalizer3(__dec_obj265,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_639->buf;
        info->head=source_639->buf;
        __dec_obj266=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_634));
        /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_662=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_663=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2184, "sType")),"void",(_Bool)0,info));
        name_664=(char*)come_increment_ref_count(string_clone(real_fun_name_634));
        self_type_665=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_665->mHeap=(_Bool)0;
        if(        self_type_665->mPointerNum>1) {
            self_type_665->mPointerNum=1;
        }
        {__list_values21___666[0]=come_increment_ref_count(self_type_665);
}        param_types_667=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2191, "struct list$1sTypeph")),1,__list_values21___666));
        {__list_values22___668[0]=come_increment_ref_count(((char*)(__right_value822=__builtin_string("self"))));
}        param_names_669=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2192, "struct list$1charph")),1,__list_values22___668));
        __right_value822 = come_decrement_ref_count2(__right_value822, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_670=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2193, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_670,((void*)0));
        header_buf_671=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2196, "buffer"))));
        buffer_append_str(header_buf_671,((char*)(__right_value829=make_come_type_name_string(result_type_663,info))));
        __right_value829 = come_decrement_ref_count2(__right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_671," ");
        buffer_append_str(header_buf_671,real_fun_name_634);
        buffer_append_str(header_buf_671,"(");
        for(        i_672=0;        i_672<list$1sTypeph_length(param_types_667);        i_672++        ){
            param_type_673=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_667,i_672), "05function.c", 2204, 5));
            param_name_674=((char*)come_null_check(list$1charphp_operator_load_element(param_names_669,i_672), "05function.c", 2205, 6));
            buffer_append_str(header_buf_671,((char*)(__right_value830=make_come_type_name_string(param_type_673,info))));
            __right_value830 = come_decrement_ref_count2(__right_value830, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_671," ");
            buffer_append_str(header_buf_671,param_name_674);
            if(            i_672!=list$1sTypeph_length(param_types_667)-1) {
                buffer_append_str(header_buf_671,",");
            }
        }
        buffer_append_str(header_buf_671,")");
        result_type_663->mStatic=(_Bool)0;
        fun_675=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2219, "sFun")),(char*)come_increment_ref_count(name_664),(struct sType*)come_increment_ref_count(result_type_663),(struct list$1sTypeph*)come_increment_ref_count(param_types_667),(struct list$1charph*)come_increment_ref_count(param_names_669),(struct list$1charph*)come_increment_ref_count(param_default_parametors_670),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_662),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_671)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_676=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value835=__builtin_string(fun_name))));
        __right_value835 = come_decrement_ref_count2(__right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_676==((void*)0)||fun2_676->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_664)),(struct sFun*)come_increment_ref_count(fun_675));
        }
        finalizer_633=fun_675;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2235, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value838=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2235, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_675),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_677=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value838,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_677,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj271=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_661);
        come_call_finalizer3(__dec_obj271,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_657;
        info->head=head_660;
        info->sline=sline_658;
        __dec_obj272=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_659);
        /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_639,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_659 = come_decrement_ref_count2(sname_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_661,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_662,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_663,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_664 = come_decrement_ref_count2(name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_665,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_667,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_670,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_675,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_677) { node_677 = come_decrement_ref_count2(node_677, ((struct sNode*)node_677)->finalize, ((struct sNode*)node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_632;
    __dec_obj273=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_628);
    /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj274=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_629);
    /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_630);
    /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_631;
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value844=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2256, "struct tuple2$2sFunpcharph")),finalizer_633,(char*)come_increment_ref_count(real_fun_name_634))));
    last_code_628 = come_decrement_ref_count2(last_code_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_629 = come_decrement_ref_count2(last_code2_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_630 = come_decrement_ref_count2(last_code3_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_634 = come_decrement_ref_count2(real_fun_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_635 = come_decrement_ref_count2(user_real_fun_name_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_637,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value844,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_641;
unsigned int hash_642;
unsigned int it_643;
struct sClass* __result231__;
struct sClass* __result232__;
struct sClass* __result233__;
struct sClass* __result234__;
default_value_641 = (void*)0;
    memset(&default_value_641,0,sizeof(struct sClass*));
    hash_642=string_get_hash_key(((char*)key))%self->size;
    it_643=hash_642;
    while((_Bool)1) {
        if(        self->item_existance[it_643]) {
            if(            string_equals(self->keys[it_643],key)) {
                __result231__ = gComeFunResultObject = __result_obj__ = self->items[it_643];
                /*i*/come_call_finalizer3(default_value_641,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
            it_643++;
            if(            it_643>=self->size) {
                it_643=0;
            }
            else if(            it_643==hash_642) {
                __result232__ = gComeFunResultObject = __result_obj__ = default_value_641;
                /*i*/come_call_finalizer3(default_value_641,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
        }
        else {
            __result233__ = gComeFunResultObject = __result_obj__ = default_value_641;
            /*i*/come_call_finalizer3(default_value_641,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = default_value_641;
    /*i*/come_call_finalizer3(default_value_641,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj258;
struct list$1tuple2$2charphsTypephph* __dec_obj259;
char* __dec_obj263;
char* __dec_obj264;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj258=self->mName;
            /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj259=self->mFields;
            come_call_finalizer3(__dec_obj259,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj263=self->mDeclareSName;
            /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj264=self->mParentClassName;
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_644;
struct list_item$1tuple2$2charphsTypephph* prev_it_645;
    it_644=self->head;
    while(it_644!=((void*)0)) {
        prev_it_645=it_644;
        it_644=it_644->next;
        /*i*/come_call_finalizer3(prev_it_645,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj260;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj260=self->item;
            come_call_finalizer3(__dec_obj260,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj261;
struct sType* __dec_obj262;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj261=self->v1;
            /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj262=self->v2;
            come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_646;
struct list_item$1tuple2$2charphsTypephph* prev_it_647;
    it_646=self->head;
    while(it_646!=((void*)0)) {
        prev_it_647=it_646;
        it_646=it_646->next;
        /*i*/come_call_finalizer3(prev_it_647,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_649;
struct tuple2$2charphsTypeph* __result235__;
struct tuple2$2charphsTypeph* __result236__;
struct tuple2$2charphsTypeph* result_650;
struct tuple2$2charphsTypeph* __result237__;
result_649 = (void*)0;
result_650 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_649,0,sizeof(struct tuple2$2charphsTypeph*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_649;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->it=self->head;
    if(    self->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_650,0,sizeof(struct tuple2$2charphsTypeph*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_650;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_652;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* __result239__;
struct tuple2$2charphsTypeph* result_653;
struct tuple2$2charphsTypeph* __result240__;
result_652 = (void*)0;
result_653 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_652,0,sizeof(struct tuple2$2charphsTypeph*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_652;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_653,0,sizeof(struct tuple2$2charphsTypeph*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_653;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj276;
struct tuple2$2sFunpcharph* __result243__;
    self->v1=v1;
    __dec_obj276=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj277;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj277=self->v2;
            /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_679;
char* __dec_obj278;
char* last_code2_680;
char* __dec_obj279;
char* last_code3_681;
_Bool comma_instead_of_semicolon_682;
char* __dec_obj280;
struct sClass* current_stack_frame_struct_683;
struct sFun* finalizer_684;
void* __right_value845 = (void*)0;
char* real_fun_name_685;
void* __right_value846 = (void*)0;
struct sType* type2_686;
struct sClass* klass_687;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct buffer* source_688;
struct list$1tuple2$2charphsTypephph* o2_saved_689;
struct tuple2$2charphsTypeph* it_690;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_691;
struct sType* field_type_692;
char* p_694;
int sline_695;
char* sname_696;
char* head_697;
struct buffer* source3_698;
struct buffer* __dec_obj281;
void* __right_value849 = (void*)0;
char* __dec_obj282;
void* __right_value850 = (void*)0;
struct sBlock* block_699;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sType* result_type_700;
void* __right_value853 = (void*)0;
char* name_701;
void* __right_value854 = (void*)0;
struct sType* self_type_702;
struct sType* __list_values23___703[1];
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1sTypeph* param_types_704;
void* __right_value857 = (void*)0;
char* __list_values24___705[1];
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct list$1charph* param_names_706;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct list$1charph* param_default_parametors_707;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct buffer* header_buf_708;
void* __right_value864 = (void*)0;
int i_709;
struct sType* param_type_710;
char* param_name_711;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sFun* fun_712;
void* __right_value870 = (void*)0;
struct sFun* fun2_713;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value877 = (void*)0;
struct sNode* node_714;
struct buffer* __dec_obj287;
char* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct tuple2$2sFunpcharph* __result247__;
    last_code_679=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj278=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_680=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj279=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_681=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_682=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj280=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_683=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_684=((void*)0);
    real_fun_name_685=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_686=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_686;
    klass_687=type->mClass;
    if(    type->mPointerNum>0&&klass_687->mStruct) {
        source_688=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2285, "buffer"))));
        buffer_append_char(source_688,123);
        klass_687=map$2charphsClassphp_operator_load_element(info->classes,klass_687->mName);
        for(        o2_saved_689=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_687->mFields)),it_690=list$1tuple2$2charphsTypephph_begin((o2_saved_689));        !list$1tuple2$2charphsTypephph_end((o2_saved_689));        it_690=list$1tuple2$2charphsTypephph_next((o2_saved_689))        ){
            multiple_assign_var11=it_690;
            name_691=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_692=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_692->mClass->mName)&&type->mPointerNum==field_type_692->mPointerNum&&field_type_692->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_692->mHeap) {
                char source2_693[1024];
                memset(&source2_693, 0, sizeof(char)                *(1024)                );
                snprintf(source2_693,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_691,name_691,name_691,name_691);
                buffer_append_str(source_688,source2_693);
            }
            name_691 = come_decrement_ref_count2(name_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_689,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_688,125);
        p_694=info->p;
        sline_695=info->sline;
        sname_696=(char*)come_increment_ref_count(info->sname);
        head_697=info->head;
        source3_698=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj281=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_688);
        come_call_finalizer3(__dec_obj281,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_688->buf;
        info->head=source_688->buf;
        __dec_obj282=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_685));
        /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_699=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_700=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2324, "sType")),"void",(_Bool)0,info));
        name_701=(char*)come_increment_ref_count(string_clone(real_fun_name_685));
        self_type_702=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_702->mHeap=(_Bool)0;
        if(        self_type_702->mPointerNum>1) {
            self_type_702->mPointerNum=1;
        }
        {__list_values23___703[0]=come_increment_ref_count(self_type_702);
}        param_types_704=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2331, "struct list$1sTypeph")),1,__list_values23___703));
        {__list_values24___705[0]=come_increment_ref_count(((char*)(__right_value857=__builtin_string("self"))));
}        param_names_706=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2332, "struct list$1charph")),1,__list_values24___705));
        __right_value857 = come_decrement_ref_count2(__right_value857, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_707=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2333, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_707,((void*)0));
        header_buf_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2336, "buffer"))));
        buffer_append_str(header_buf_708,((char*)(__right_value864=make_come_type_name_string(result_type_700,info))));
        __right_value864 = come_decrement_ref_count2(__right_value864, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_708," ");
        buffer_append_str(header_buf_708,real_fun_name_685);
        buffer_append_str(header_buf_708,"(");
        for(        i_709=0;        i_709<list$1sTypeph_length(param_types_704);        i_709++        ){
            param_type_710=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_704,i_709), "05function.c", 2344, 7));
            param_name_711=((char*)come_null_check(list$1charphp_operator_load_element(param_names_706,i_709), "05function.c", 2345, 8));
            buffer_append_str(header_buf_708,((char*)(__right_value865=make_come_type_name_string(param_type_710,info))));
            __right_value865 = come_decrement_ref_count2(__right_value865, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_708," ");
            buffer_append_str(header_buf_708,param_name_711);
            if(            i_709!=list$1sTypeph_length(param_types_704)-1) {
                buffer_append_str(header_buf_708,",");
            }
        }
        buffer_append_str(header_buf_708,")");
        result_type_700->mStatic=(_Bool)0;
        fun_712=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2359, "sFun")),(char*)come_increment_ref_count(name_701),(struct sType*)come_increment_ref_count(result_type_700),(struct list$1sTypeph*)come_increment_ref_count(param_types_704),(struct list$1charph*)come_increment_ref_count(param_names_706),(struct list$1charph*)come_increment_ref_count(param_default_parametors_707),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_699),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_708)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_713=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value870=__builtin_string(fun_name))));
        __right_value870 = come_decrement_ref_count2(__right_value870, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_713==((void*)0)||fun2_713->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_701)),(struct sFun*)come_increment_ref_count(fun_712));
        }
        finalizer_684=fun_712;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2375, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value873=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2375, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_712),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_714=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value873,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_714,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj287=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_698);
        come_call_finalizer3(__dec_obj287,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_694;
        info->head=head_697;
        info->sline=sline_695;
        __dec_obj288=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_696);
        /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_696 = come_decrement_ref_count2(sname_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_699,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_700,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_701 = come_decrement_ref_count2(name_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_704,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_706,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_707,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_712,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_714) { node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_683;
    __dec_obj289=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_679);
    /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj290=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_680);
    /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_681);
    /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_682;
    __result247__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value879=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2396, "struct tuple2$2sFunpcharph")),finalizer_684,(char*)come_increment_ref_count(real_fun_name_685))));
    last_code_679 = come_decrement_ref_count2(last_code_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_680 = come_decrement_ref_count2(last_code2_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_681 = come_decrement_ref_count2(last_code3_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_685 = come_decrement_ref_count2(real_fun_name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_686,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value879,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_716;
char* __dec_obj292;
char* last_code2_717;
char* __dec_obj293;
char* last_code3_718;
char* __dec_obj294;
_Bool comma_instead_of_semicolon_719;
struct sClass* current_stack_frame_struct_720;
struct sFun* equaler_721;
void* __right_value880 = (void*)0;
char* real_fun_name_722;
void* __right_value881 = (void*)0;
struct sType* type2_723;
struct sClass* klass_724;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct buffer* source_725;
char* name_726;
struct list$1tuple2$2charphsTypephph* o2_saved_728;
struct tuple2$2charphsTypeph* it_729;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_730;
struct sType* field_type_731;
char* p_733;
int sline_734;
char* sname_735;
char* head_736;
struct buffer* source3_737;
struct buffer* __dec_obj295;
void* __right_value884 = (void*)0;
char* __dec_obj296;
void* __right_value885 = (void*)0;
struct sBlock* block_738;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sType* result_type_739;
void* __right_value888 = (void*)0;
char* name_740;
void* __right_value889 = (void*)0;
struct sType* left_type_741;
void* __right_value890 = (void*)0;
struct sType* right_type_742;
struct sType* __list_values25___743[2];
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct list$1sTypeph* param_types_744;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
char* __list_values26___745[2];
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1charph* param_names_746;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1charph* param_default_parametors_747;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct buffer* header_buf_748;
void* __right_value901 = (void*)0;
int i_749;
struct sType* param_type_750;
char* param_name_751;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct sFun* fun_752;
void* __right_value907 = (void*)0;
struct sFun* fun2_753;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value914 = (void*)0;
struct sNode* node_754;
struct buffer* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
char* __dec_obj305;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct tuple2$2sFunpcharph* __result250__;
    last_code_716=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj292=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_717=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj293=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_718=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj294=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_719=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_720=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_721=((void*)0);
    real_fun_name_722=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_723=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_723;
    klass_724=type->mClass;
    if(    type->mPointerNum>0&&!klass_724->mNumber) {
        source_725=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2423, "buffer"))));
        buffer_append_char(source_725,123);
        if(        klass_724->mProtocol) {
            name_726="_protocol_obj";
            char source2_727[1024];
            memset(&source2_727, 0, sizeof(char)            *(1024)            );
            snprintf(source2_727,1024,"return left.%s.equals(right.%s);\n",name_726,name_726);
            buffer_append_str(source_725,source2_727);
        }
        else {
            klass_724=map$2charphsClassphp_operator_load_element(info->classes,klass_724->mName);
            for(            o2_saved_728=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_724->mFields)),it_729=list$1tuple2$2charphsTypephph_begin((o2_saved_728));            !list$1tuple2$2charphsTypephph_end((o2_saved_728));            it_729=list$1tuple2$2charphsTypephph_next((o2_saved_728))            ){
                multiple_assign_var12=it_729;
                name_730=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_731=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_731->mClass->mName)&&type->mPointerNum==field_type_731->mPointerNum&&field_type_731->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_732[1024];
                memset(&source2_732, 0, sizeof(char)                *(1024)                );
                snprintf(source2_732,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_730,name_730);
                buffer_append_str(source_725,source2_732);
                name_730 = come_decrement_ref_count2(name_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_731,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_728,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_725,"return true;");
        buffer_append_char(source_725,125);
        p_733=info->p;
        sline_734=info->sline;
        sname_735=(char*)come_increment_ref_count(info->sname);
        head_736=info->head;
        source3_737=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj295=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_725);
        come_call_finalizer3(__dec_obj295,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_725->buf;
        info->head=source_725->buf;
        __dec_obj296=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_722));
        /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_738=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_739=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2469, "sType")),"bool",(_Bool)0,info));
        name_740=(char*)come_increment_ref_count(string_clone(real_fun_name_722));
        left_type_741=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_741->mHeap=(_Bool)0;
        right_type_742=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_742->mHeap=(_Bool)0;
        {__list_values25___743[0]=come_increment_ref_count(left_type_741);
__list_values25___743[1]=come_increment_ref_count(right_type_742);
}        param_types_744=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2475, "struct list$1sTypeph")),2,__list_values25___743));
        {__list_values26___745[0]=come_increment_ref_count(((char*)(__right_value893=__builtin_string("left"))));
__list_values26___745[1]=come_increment_ref_count(((char*)(__right_value894=__builtin_string("right"))));
}        param_names_746=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2476, "struct list$1charph")),2,__list_values26___745));
        __right_value893 = come_decrement_ref_count2(__right_value893, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value894 = come_decrement_ref_count2(__right_value894, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_747=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2477, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_747,((void*)0));
        list$1charph_push_back(param_default_parametors_747,((void*)0));
        header_buf_748=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2481, "buffer"))));
        buffer_append_str(header_buf_748,((char*)(__right_value901=make_come_type_name_string(result_type_739,info))));
        __right_value901 = come_decrement_ref_count2(__right_value901, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_748," ");
        buffer_append_str(header_buf_748,real_fun_name_722);
        buffer_append_str(header_buf_748,"(");
        for(        i_749=0;        i_749<list$1sTypeph_length(param_types_744);        i_749++        ){
            param_type_750=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_744,i_749), "05function.c", 2489, 9));
            param_name_751=((char*)come_null_check(list$1charphp_operator_load_element(param_names_746,i_749), "05function.c", 2490, 10));
            buffer_append_str(header_buf_748,((char*)(__right_value902=make_come_type_name_string(param_type_750,info))));
            __right_value902 = come_decrement_ref_count2(__right_value902, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_748," ");
            buffer_append_str(header_buf_748,param_name_751);
            if(            i_749!=list$1sTypeph_length(param_types_744)-1) {
                buffer_append_str(header_buf_748,",");
            }
        }
        buffer_append_str(header_buf_748,")");
        result_type_739->mStatic=(_Bool)0;
        fun_752=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2504, "sFun")),(char*)come_increment_ref_count(name_740),(struct sType*)come_increment_ref_count(result_type_739),(struct list$1sTypeph*)come_increment_ref_count(param_types_744),(struct list$1charph*)come_increment_ref_count(param_names_746),(struct list$1charph*)come_increment_ref_count(param_default_parametors_747),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_738),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_748)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_753=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value907=__builtin_string(fun_name))));
        __right_value907 = come_decrement_ref_count2(__right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_753==((void*)0)||fun2_753->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_740)),(struct sFun*)come_increment_ref_count(fun_752));
        }
        equaler_721=fun_752;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2520, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value910=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2520, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_752),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_754=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value910,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_754,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_737);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_733;
        info->head=head_736;
        info->sline=sline_734;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_735);
        /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_725,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_735 = come_decrement_ref_count2(sname_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_737,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_738,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_739,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_740 = come_decrement_ref_count2(name_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_741,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_742,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_744,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_746,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_747,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_748,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_752,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_754) { node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_720;
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_716);
    /*G*/ __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_717);
    /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_718);
    /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_719;
    __result250__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value916=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2541, "struct tuple2$2sFunpcharph")),equaler_721,(char*)come_increment_ref_count(real_fun_name_722))));
    last_code_716 = come_decrement_ref_count2(last_code_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_717 = come_decrement_ref_count2(last_code2_717, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_718 = come_decrement_ref_count2(last_code3_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_722 = come_decrement_ref_count2(real_fun_name_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_723,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value916,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_756;
char* __dec_obj306;
char* last_code2_757;
char* __dec_obj307;
char* last_code3_758;
char* __dec_obj308;
_Bool comma_instead_of_semicolon_759;
struct sClass* current_stack_frame_struct_760;
struct sFun* equaler_761;
void* __right_value917 = (void*)0;
char* real_fun_name_762;
void* __right_value918 = (void*)0;
struct sType* type2_763;
struct sClass* klass_764;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct buffer* source_765;
char* name_766;
int i_769;
struct list$1tuple2$2charphsTypephph* o2_saved_770;
struct tuple2$2charphsTypeph* it_771;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_772;
struct sType* field_type_773;
char* p_777;
int sline_778;
char* sname_779;
char* head_780;
struct buffer* source3_781;
struct buffer* __dec_obj309;
void* __right_value921 = (void*)0;
char* __dec_obj310;
void* __right_value922 = (void*)0;
struct sBlock* block_782;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sType* result_type_783;
void* __right_value925 = (void*)0;
char* name_784;
void* __right_value926 = (void*)0;
struct sType* left_type_785;
void* __right_value927 = (void*)0;
struct sType* right_type_786;
struct sType* __list_values27___787[2];
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct list$1sTypeph* param_types_788;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
char* __list_values28___789[2];
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct list$1charph* param_names_790;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct list$1charph* param_default_parametors_791;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct buffer* header_buf_792;
void* __right_value938 = (void*)0;
int i_793;
struct sType* param_type_794;
char* param_name_795;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sFun* fun_796;
void* __right_value944 = (void*)0;
struct sFun* fun2_797;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value951 = (void*)0;
struct sNode* node_798;
struct buffer* __dec_obj315;
char* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct tuple2$2sFunpcharph* __result253__;
    last_code_756=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj306=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_757=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj307=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_758=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj308=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_759=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_760=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_761=((void*)0);
    real_fun_name_762=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_763=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_763;
    klass_764=type->mClass;
    if(    type->mPointerNum>0&&!klass_764->mNumber) {
        source_765=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2568, "buffer"))));
        buffer_append_char(source_765,123);
        if(        klass_764->mProtocol) {
            name_766="_protocol_obj";
            char source2_767[1024];
            memset(&source2_767, 0, sizeof(char)            *(1024)            );
            snprintf(source2_767,1024,"return !left.%s.equals(right.%s);\n",name_766,name_766);
            buffer_append_str(source_765,source2_767);
        }
        else {
            char source2_768[1024];
            memset(&source2_768, 0, sizeof(char)            *(1024)            );
            snprintf(source2_768,1024,"return !(");
            buffer_append_str(source_765,source2_768);
            i_769=0;
            klass_764=map$2charphsClassphp_operator_load_element(info->classes,klass_764->mName);
            for(            o2_saved_770=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_764->mFields)),it_771=list$1tuple2$2charphsTypephph_begin((o2_saved_770));            !list$1tuple2$2charphsTypephph_end((o2_saved_770));            it_771=list$1tuple2$2charphsTypephph_next((o2_saved_770))            ){
                multiple_assign_var13=it_771;
                name_772=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_773=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_773->mClass->mName)&&type->mPointerNum==field_type_773->mPointerNum&&field_type_773->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_774[1024];
                memset(&source2_774, 0, sizeof(char)                *(1024)                );
                snprintf(source2_774,1024,"left.%s.equals(right.%s)",name_772,name_772);
                buffer_append_str(source_765,source2_774);
                if(                i_769==list$1tuple2$2charphsTypephph_length(klass_764->mFields)-1) {
                    char source2_775[1024];
                    memset(&source2_775, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_775,1024,");");
                    buffer_append_str(source_765,source2_775);
                }
                else {
                    char source2_776[1024];
                    memset(&source2_776, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_776,1024," && ");
                    buffer_append_str(source_765,source2_776);
                }
                i_769++;
                name_772 = come_decrement_ref_count2(name_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_773,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_770,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_765,125);
        p_777=info->p;
        sline_778=info->sline;
        sname_779=(char*)come_increment_ref_count(info->sname);
        head_780=info->head;
        source3_781=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_765);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_765->buf;
        info->head=source_765->buf;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_762));
        /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_782=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_783=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2631, "sType")),"bool",(_Bool)0,info));
        name_784=(char*)come_increment_ref_count(string_clone(real_fun_name_762));
        left_type_785=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_785->mHeap=(_Bool)0;
        right_type_786=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_786->mHeap=(_Bool)0;
        {__list_values27___787[0]=come_increment_ref_count(left_type_785);
__list_values27___787[1]=come_increment_ref_count(right_type_786);
}        param_types_788=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2637, "struct list$1sTypeph")),2,__list_values27___787));
        {__list_values28___789[0]=come_increment_ref_count(((char*)(__right_value930=__builtin_string("left"))));
__list_values28___789[1]=come_increment_ref_count(((char*)(__right_value931=__builtin_string("right"))));
}        param_names_790=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2638, "struct list$1charph")),2,__list_values28___789));
        __right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value931 = come_decrement_ref_count2(__right_value931, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_791=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2639, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_791,((void*)0));
        list$1charph_push_back(param_default_parametors_791,((void*)0));
        header_buf_792=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2643, "buffer"))));
        buffer_append_str(header_buf_792,((char*)(__right_value938=make_come_type_name_string(result_type_783,info))));
        __right_value938 = come_decrement_ref_count2(__right_value938, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_792," ");
        buffer_append_str(header_buf_792,real_fun_name_762);
        buffer_append_str(header_buf_792,"(");
        for(        i_793=0;        i_793<list$1sTypeph_length(param_types_788);        i_793++        ){
            param_type_794=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_788,i_793), "05function.c", 2651, 11));
            param_name_795=((char*)come_null_check(list$1charphp_operator_load_element(param_names_790,i_793), "05function.c", 2652, 12));
            buffer_append_str(header_buf_792,((char*)(__right_value939=make_come_type_name_string(param_type_794,info))));
            __right_value939 = come_decrement_ref_count2(__right_value939, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_792," ");
            buffer_append_str(header_buf_792,param_name_795);
            if(            i_793!=list$1sTypeph_length(param_types_788)-1) {
                buffer_append_str(header_buf_792,",");
            }
        }
        buffer_append_str(header_buf_792,")");
        result_type_783->mStatic=(_Bool)0;
        fun_796=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2666, "sFun")),(char*)come_increment_ref_count(name_784),(struct sType*)come_increment_ref_count(result_type_783),(struct list$1sTypeph*)come_increment_ref_count(param_types_788),(struct list$1charph*)come_increment_ref_count(param_names_790),(struct list$1charph*)come_increment_ref_count(param_default_parametors_791),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_782),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_792)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_797=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value944=__builtin_string(fun_name))));
        __right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_797==((void*)0)||fun2_797->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_784)),(struct sFun*)come_increment_ref_count(fun_796));
        }
        equaler_761=fun_796;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2682, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value947=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2682, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_796),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_798=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value947,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_798,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_781);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_777;
        info->head=head_780;
        info->sline=sline_778;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_779);
        /*G*/ __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_779 = come_decrement_ref_count2(sname_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_782,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_783,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_784 = come_decrement_ref_count2(name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_785,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_788,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_790,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_791,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_792,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_796,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_798) { node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_760;
    __dec_obj317=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_756);
    /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj318=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_757);
    /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_758);
    /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_759;
    __result253__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value953=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2703, "struct tuple2$2sFunpcharph")),equaler_761,(char*)come_increment_ref_count(real_fun_name_762))));
    last_code_756 = come_decrement_ref_count2(last_code_756, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_757 = come_decrement_ref_count2(last_code2_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_758 = come_decrement_ref_count2(last_code3_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_762 = come_decrement_ref_count2(real_fun_name_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_763,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value953,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_800;
char* __dec_obj320;
char* last_code2_801;
char* __dec_obj321;
char* last_code3_802;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_803;
struct sClass* current_stack_frame_struct_804;
struct sFun* equaler_805;
void* __right_value954 = (void*)0;
char* real_fun_name_806;
void* __right_value955 = (void*)0;
struct sType* type2_807;
struct sClass* klass_808;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* source_809;
char* name_810;
struct list$1tuple2$2charphsTypephph* o2_saved_812;
struct tuple2$2charphsTypeph* it_813;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_814;
struct sType* field_type_815;
char* p_817;
int sline_818;
char* sname_819;
char* head_820;
struct buffer* source3_821;
struct buffer* __dec_obj323;
void* __right_value958 = (void*)0;
char* __dec_obj324;
void* __right_value959 = (void*)0;
struct sBlock* block_822;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sType* result_type_823;
void* __right_value962 = (void*)0;
char* name_824;
void* __right_value963 = (void*)0;
struct sType* left_type_825;
void* __right_value964 = (void*)0;
struct sType* right_type_826;
struct sType* __list_values29___827[2];
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct list$1sTypeph* param_types_828;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
char* __list_values30___829[2];
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct list$1charph* param_names_830;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct list$1charph* param_default_parametors_831;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct buffer* header_buf_832;
void* __right_value975 = (void*)0;
int i_833;
struct sType* param_type_834;
char* param_name_835;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sFun* fun_836;
void* __right_value981 = (void*)0;
struct sFun* fun2_837;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value988 = (void*)0;
struct sNode* node_838;
struct buffer* __dec_obj329;
char* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct tuple2$2sFunpcharph* __result256__;
    last_code_800=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_801=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_802=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj322=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_803=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_804=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_805=((void*)0);
    real_fun_name_806=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_807=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_807;
    klass_808=type->mClass;
    if(    type->mPointerNum>0&&!klass_808->mNumber) {
        source_809=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2730, "buffer"))));
        buffer_append_char(source_809,123);
        if(        klass_808->mProtocol) {
            name_810="_protocol_obj";
            char source2_811[1024];
            memset(&source2_811, 0, sizeof(char)            *(1024)            );
            snprintf(source2_811,1024,"return left.%s.equals(right.%s);\n",name_810,name_810);
            buffer_append_str(source_809,source2_811);
        }
        else {
            klass_808=map$2charphsClassphp_operator_load_element(info->classes,klass_808->mName);
            for(            o2_saved_812=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_808->mFields)),it_813=list$1tuple2$2charphsTypephph_begin((o2_saved_812));            !list$1tuple2$2charphsTypephph_end((o2_saved_812));            it_813=list$1tuple2$2charphsTypephph_next((o2_saved_812))            ){
                multiple_assign_var14=it_813;
                name_814=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_815=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_815->mClass->mName)&&type->mPointerNum==field_type_815->mPointerNum&&field_type_815->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_816[1024];
                memset(&source2_816, 0, sizeof(char)                *(1024)                );
                snprintf(source2_816,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_814,name_814);
                buffer_append_str(source_809,source2_816);
                name_814 = come_decrement_ref_count2(name_814, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_815,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_812,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_809,"return true;\n");
        buffer_append_char(source_809,125);
        p_817=info->p;
        sline_818=info->sline;
        sname_819=(char*)come_increment_ref_count(info->sname);
        head_820=info->head;
        source3_821=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj323=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_809);
        come_call_finalizer3(__dec_obj323,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_809->buf;
        info->head=source_809->buf;
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_806));
        /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_822=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_823=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2776, "sType")),"bool",(_Bool)0,info));
        name_824=(char*)come_increment_ref_count(string_clone(real_fun_name_806));
        left_type_825=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_825->mHeap=(_Bool)0;
        right_type_826=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_826->mHeap=(_Bool)0;
        {__list_values29___827[0]=come_increment_ref_count(left_type_825);
__list_values29___827[1]=come_increment_ref_count(right_type_826);
}        param_types_828=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2782, "struct list$1sTypeph")),2,__list_values29___827));
        {__list_values30___829[0]=come_increment_ref_count(((char*)(__right_value967=__builtin_string("left"))));
__list_values30___829[1]=come_increment_ref_count(((char*)(__right_value968=__builtin_string("right"))));
}        param_names_830=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2783, "struct list$1charph")),2,__list_values30___829));
        __right_value967 = come_decrement_ref_count2(__right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value968 = come_decrement_ref_count2(__right_value968, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_831=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2784, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_831,((void*)0));
        list$1charph_push_back(param_default_parametors_831,((void*)0));
        header_buf_832=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2788, "buffer"))));
        buffer_append_str(header_buf_832,((char*)(__right_value975=make_come_type_name_string(result_type_823,info))));
        __right_value975 = come_decrement_ref_count2(__right_value975, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_832," ");
        buffer_append_str(header_buf_832,real_fun_name_806);
        buffer_append_str(header_buf_832,"(");
        for(        i_833=0;        i_833<list$1sTypeph_length(param_types_828);        i_833++        ){
            param_type_834=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_828,i_833), "05function.c", 2796, 13));
            param_name_835=((char*)come_null_check(list$1charphp_operator_load_element(param_names_830,i_833), "05function.c", 2797, 14));
            buffer_append_str(header_buf_832,((char*)(__right_value976=make_come_type_name_string(param_type_834,info))));
            __right_value976 = come_decrement_ref_count2(__right_value976, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_832," ");
            buffer_append_str(header_buf_832,param_name_835);
            if(            i_833!=list$1sTypeph_length(param_types_828)-1) {
                buffer_append_str(header_buf_832,",");
            }
        }
        buffer_append_str(header_buf_832,")");
        result_type_823->mStatic=(_Bool)0;
        fun_836=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2811, "sFun")),(char*)come_increment_ref_count(name_824),(struct sType*)come_increment_ref_count(result_type_823),(struct list$1sTypeph*)come_increment_ref_count(param_types_828),(struct list$1charph*)come_increment_ref_count(param_names_830),(struct list$1charph*)come_increment_ref_count(param_default_parametors_831),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_822),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_832)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_837=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value981=__builtin_string(fun_name))));
        __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_837==((void*)0)||fun2_837->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_824)),(struct sFun*)come_increment_ref_count(fun_836));
        }
        equaler_805=fun_836;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2827, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value984=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2827, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_836),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_838=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value984,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_838,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj329=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_821);
        come_call_finalizer3(__dec_obj329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_817;
        info->head=head_820;
        info->sline=sline_818;
        __dec_obj330=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_819);
        /*G*/ __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_819 = come_decrement_ref_count2(sname_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_821,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_822,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_823,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_824 = come_decrement_ref_count2(name_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_825,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_826,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_828,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_830,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_831,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_832,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_836,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_838) { node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_804;
    __dec_obj331=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_800);
    /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj332=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_801);
    /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_802);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_803;
    __result256__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value990=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2848, "struct tuple2$2sFunpcharph")),equaler_805,(char*)come_increment_ref_count(real_fun_name_806))));
    last_code_800 = come_decrement_ref_count2(last_code_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_801 = come_decrement_ref_count2(last_code2_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_802 = come_decrement_ref_count2(last_code3_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_806 = come_decrement_ref_count2(real_fun_name_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_807,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value990,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_840;
char* __dec_obj334;
char* last_code2_841;
char* __dec_obj335;
char* last_code3_842;
char* __dec_obj336;
_Bool comma_instead_of_semicolon_843;
struct sClass* current_stack_frame_struct_844;
struct sFun* cloner_845;
void* __right_value991 = (void*)0;
char* real_fun_name_846;
void* __right_value992 = (void*)0;
struct sType* type2_847;
struct sClass* klass_848;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct buffer* source_849;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
char* name_850;
struct list$1tuple2$2charphsTypephph* o2_saved_852;
struct tuple2$2charphsTypeph* it_853;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_854;
struct sType* field_type_855;
struct list$1tuple2$2charphsTypephph* o2_saved_858;
struct tuple2$2charphsTypeph* it_859;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_860;
struct sType* field_type_861;
void* __right_value997 = (void*)0;
char* p_865;
int sline_866;
char* sname_867;
struct buffer* source3_868;
char* head_869;
struct buffer* __dec_obj337;
void* __right_value998 = (void*)0;
char* __dec_obj338;
void* __right_value999 = (void*)0;
struct sBlock* block_870;
void* __right_value1000 = (void*)0;
struct sType* result_type_871;
void* __right_value1001 = (void*)0;
char* name_872;
void* __right_value1002 = (void*)0;
struct sType* self_type_873;
struct sType* __list_values31___874[1];
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct list$1sTypeph* param_types_875;
void* __right_value1005 = (void*)0;
char* __list_values32___876[1];
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct list$1charph* param_names_877;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct list$1charph* param_default_parametors_878;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct buffer* header_buf_879;
void* __right_value1012 = (void*)0;
int i_880;
struct sType* param_type_881;
char* param_name_882;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sFun* fun_883;
void* __right_value1018 = (void*)0;
struct sFun* fun2_884;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1025 = (void*)0;
struct sNode* node_885;
char* __dec_obj343;
struct buffer* __dec_obj344;
char* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct tuple2$2sFunpcharph* __result259__;
    last_code_840=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_841=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_842=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj336=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_843=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_844=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_845=((void*)0);
    real_fun_name_846=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_847=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_847;
    klass_848=type->mClass;
    if(    type->mPointerNum>0&&!klass_848->mNumber) {
        source_849=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2875, "buffer"))));
        buffer_append_str(source_849,"{\n");
        buffer_append_str(source_849,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_849,((char*)(__right_value996=xsprintf("var result = new %s;\n",((char*)(__right_value995=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value995 = come_decrement_ref_count2(__right_value995, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_848->mProtocol) {
            name_850="_protocol_obj";
            char source2_851[1024];
            memset(&source2_851, 0, sizeof(char)            *(1024)            );
            snprintf(source2_851,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_849,source2_851);
            klass_848=map$2charphsClassphp_operator_load_element(info->classes,klass_848->mName);
            for(            o2_saved_852=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_848->mFields)),it_853=list$1tuple2$2charphsTypephph_begin((o2_saved_852));            !list$1tuple2$2charphsTypephph_end((o2_saved_852));            it_853=list$1tuple2$2charphsTypephph_next((o2_saved_852))            ){
                multiple_assign_var15=it_853;
                name_854=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_855=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_855->mClass->mName)&&type->mPointerNum==field_type_855->mPointerNum&&field_type_855->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_854,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_855->mArrayNum)>0) {
                    char source2_856[1024];
                    memset(&source2_856, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_856,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_854,name_854,name_854);
                    buffer_append_str(source_849,source2_856);
                }
                else {
                    char source2_857[1024];
                    memset(&source2_857, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_857,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_854,name_854);
                    buffer_append_str(source_849,source2_857);
                }
                name_854 = come_decrement_ref_count2(name_854, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_852,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_848=map$2charphsClassphp_operator_load_element(info->classes,klass_848->mName);
            for(            o2_saved_858=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_848->mFields)),it_859=list$1tuple2$2charphsTypephph_begin((o2_saved_858));            !list$1tuple2$2charphsTypephph_end((o2_saved_858));            it_859=list$1tuple2$2charphsTypephph_next((o2_saved_858))            ){
                multiple_assign_var16=it_859;
                name_860=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_861=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_861->mClass->mName)&&type->mPointerNum==field_type_861->mPointerNum&&field_type_861->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_861->mHeap) {
                    char source2_862[1024];
                    memset(&source2_862, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_862,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_860,name_860,name_860);
                    buffer_append_str(source_849,source2_862);
                }
                else if(                list$1sNodeph_length(field_type_861->mArrayNum)>0) {
                    char source2_863[1024];
                    memset(&source2_863, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_863,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_860,name_860,name_860);
                    buffer_append_str(source_849,source2_863);
                }
                else {
                    char source2_864[1024];
                    memset(&source2_864, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_864,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_860,name_860);
                    buffer_append_str(source_849,source2_864);
                }
                name_860 = come_decrement_ref_count2(name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_858,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_849,((char*)(__right_value997=xsprintf("return result;"))));
        __right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_849,125);
        p_865=info->p;
        sline_866=info->sline;
        sname_867=(char*)come_increment_ref_count(info->sname);
        source3_868=(struct buffer*)come_increment_ref_count(info->source);
        head_869=info->head;
        __dec_obj337=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_849);
        come_call_finalizer3(__dec_obj337,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_846));
        /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_870=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_871=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_872=(char*)come_increment_ref_count(string_clone(real_fun_name_846));
        self_type_873=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_873->mHeap=(_Bool)0;
        {__list_values31___874[0]=come_increment_ref_count(self_type_873);
}        param_types_875=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2969, "struct list$1sTypeph")),1,__list_values31___874));
        {__list_values32___876[0]=come_increment_ref_count(((char*)(__right_value1005=__builtin_string("self"))));
}        param_names_877=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2970, "struct list$1charph")),1,__list_values32___876));
        __right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_878=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2971, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_878,((void*)0));
        header_buf_879=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2974, "buffer"))));
        buffer_append_str(header_buf_879,((char*)(__right_value1012=make_come_type_name_string(result_type_871,info))));
        __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_879," ");
        buffer_append_str(header_buf_879,real_fun_name_846);
        buffer_append_str(header_buf_879,"(");
        for(        i_880=0;        i_880<list$1sTypeph_length(param_types_875);        i_880++        ){
            param_type_881=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_875,i_880), "05function.c", 2982, 15));
            param_name_882=((char*)come_null_check(list$1charphp_operator_load_element(param_names_877,i_880), "05function.c", 2983, 16));
            buffer_append_str(header_buf_879,((char*)(__right_value1013=make_come_type_name_string(param_type_881,info))));
            __right_value1013 = come_decrement_ref_count2(__right_value1013, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_879," ");
            buffer_append_str(header_buf_879,param_name_882);
            if(            i_880!=list$1sTypeph_length(param_types_875)-1) {
                buffer_append_str(header_buf_879,",");
            }
        }
        buffer_append_str(header_buf_879,")");
        result_type_871->mStatic=(_Bool)0;
        fun_883=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2997, "sFun")),(char*)come_increment_ref_count(name_872),(struct sType*)come_increment_ref_count(result_type_871),(struct list$1sTypeph*)come_increment_ref_count(param_types_875),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_870),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_879)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_883->mCloner=(_Bool)1;
        fun2_884=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1018=__builtin_string(fun_name))));
        __right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_884==((void*)0)||fun2_884->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_872)),(struct sFun*)come_increment_ref_count(fun_883));
        }
        cloner_845=fun_883;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3014, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1021=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3014, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_883),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_885=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1021,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_885,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj343=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_867);
        /*G*/ __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_866;
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_868);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_865;
        info->head=head_869;
        info->sline=sline_866;
        /*i*/come_call_finalizer3(source_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_867 = come_decrement_ref_count2(sname_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_868,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_870,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_871,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_872 = come_decrement_ref_count2(name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_873,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_875,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_883,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_885) { node_885 = come_decrement_ref_count2(node_885, ((struct sNode*)node_885)->finalize, ((struct sNode*)node_885)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_844;
    __dec_obj345=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_840);
    /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj346=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_841);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj347=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_842);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_843;
    __result259__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1027=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3037, "struct tuple2$2sFunpcharph")),cloner_845,(char*)come_increment_ref_count(real_fun_name_846))));
    last_code_840 = come_decrement_ref_count2(last_code_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_841 = come_decrement_ref_count2(last_code2_841, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_842 = come_decrement_ref_count2(last_code3_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_846 = come_decrement_ref_count2(real_fun_name_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_847,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1027,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_887;
char* __dec_obj348;
char* last_code2_888;
char* __dec_obj349;
char* last_code3_889;
char* __dec_obj350;
_Bool comma_instead_of_semicolon_890;
struct sClass* current_stack_frame_struct_891;
struct sFun* cloner_892;
void* __right_value1028 = (void*)0;
char* real_fun_name_893;
void* __right_value1029 = (void*)0;
struct sType* type2_894;
struct sClass* klass_895;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct buffer* source_896;
void* __right_value1032 = (void*)0;
int i_897;
struct list$1tuple2$2charphsTypephph* o2_saved_898;
struct tuple2$2charphsTypeph* it_899;
struct tuple2$2charphsTypeph* multiple_assign_var17;
char* name_900;
struct sType* field_type_901;
void* __right_value1033 = (void*)0;
char* p_904;
int sline_905;
char* sname_906;
struct buffer* source3_907;
char* head_908;
struct buffer* __dec_obj351;
void* __right_value1034 = (void*)0;
char* __dec_obj352;
void* __right_value1035 = (void*)0;
struct sBlock* block_909;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sType* result_type_910;
void* __right_value1038 = (void*)0;
char* name_911;
void* __right_value1039 = (void*)0;
struct sType* self_type_912;
struct sType* __list_values33___913[1];
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct list$1sTypeph* param_types_914;
void* __right_value1042 = (void*)0;
char* __list_values34___915[1];
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct list$1charph* param_names_916;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct list$1charph* param_default_parametors_917;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct buffer* header_buf_918;
void* __right_value1049 = (void*)0;
int i_919;
struct sType* param_type_920;
char* param_name_921;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct sFun* fun_922;
void* __right_value1055 = (void*)0;
struct sFun* fun2_923;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1062 = (void*)0;
struct sNode* node_924;
char* __dec_obj357;
struct buffer* __dec_obj358;
char* __dec_obj359;
char* __dec_obj360;
char* __dec_obj361;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct tuple2$2sFunpcharph* __result262__;
    last_code_887=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_888=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_889=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj350=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_890=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_891=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_892=((void*)0);
    real_fun_name_893=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_894=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_894;
    klass_895=type->mClass;
    if(    type->mPointerNum>0&&!klass_895->mNumber) {
        source_896=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3064, "buffer"))));
        buffer_append_str(source_896,"{\n");
        buffer_append_str(source_896,"var result = new buffer();\n");
        buffer_append_str(source_896,((char*)(__right_value1032=xsprintf("result.append_str(\"%s {\");\n",klass_895->mName))));
        __right_value1032 = come_decrement_ref_count2(__right_value1032, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_897=0;
        klass_895=map$2charphsClassphp_operator_load_element(info->classes,klass_895->mName);
        for(        o2_saved_898=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_895->mFields)),it_899=list$1tuple2$2charphsTypephph_begin((o2_saved_898));        !list$1tuple2$2charphsTypephph_end((o2_saved_898));        it_899=list$1tuple2$2charphsTypephph_next((o2_saved_898))        ){
            multiple_assign_var17=it_899;
            name_900=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            field_type_901=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_901->mClass->mName)&&type->mPointerNum==field_type_901->mPointerNum&&field_type_901->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_897==list$1tuple2$2charphsTypephph_length(klass_895->mFields)-1) {
                char source2_902[1024];
                memset(&source2_902, 0, sizeof(char)                *(1024)                );
                snprintf(source2_902,1024,"result.append_str(\"%s:\");\n",name_900);
                buffer_append_str(source_896,source2_902);
                snprintf(source2_902,1024,"result.append_str(self.%s.to_string());\n",name_900);
                buffer_append_str(source_896,source2_902);
            }
            else {
                char source2_903[1024];
                memset(&source2_903, 0, sizeof(char)                *(1024)                );
                snprintf(source2_903,1024,"result.append_str(\"%s:\");\n",name_900);
                buffer_append_str(source_896,source2_903);
                snprintf(source2_903,1024,"result.append_str(self.%s.to_string());\n",name_900);
                buffer_append_str(source_896,source2_903);
                snprintf(source2_903,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_896,source2_903);
            }
            i_897++;
            name_900 = come_decrement_ref_count2(name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_898,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_896,"result.append_str(\"}\");\n");
        buffer_append_str(source_896,((char*)(__right_value1033=xsprintf("return result.to_string();\n"))));
        __right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_896,125);
        p_904=info->p;
        sline_905=info->sline;
        sname_906=(char*)come_increment_ref_count(info->sname);
        source3_907=(struct buffer*)come_increment_ref_count(info->source);
        head_908=info->head;
        __dec_obj351=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_896);
        come_call_finalizer3(__dec_obj351,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj352=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_893));
        /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_909=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_910=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3131, "sType")),"char*",(_Bool)0,info));
        result_type_910->mHeap=(_Bool)1;
        name_911=(char*)come_increment_ref_count(string_clone(real_fun_name_893));
        self_type_912=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_912->mHeap=(_Bool)0;
        {__list_values33___913[0]=come_increment_ref_count(self_type_912);
}        param_types_914=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3136, "struct list$1sTypeph")),1,__list_values33___913));
        {__list_values34___915[0]=come_increment_ref_count(((char*)(__right_value1042=__builtin_string("self"))));
}        param_names_916=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3137, "struct list$1charph")),1,__list_values34___915));
        __right_value1042 = come_decrement_ref_count2(__right_value1042, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_917=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3138, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_917,((void*)0));
        header_buf_918=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3141, "buffer"))));
        buffer_append_str(header_buf_918,((char*)(__right_value1049=make_come_type_name_string(result_type_910,info))));
        __right_value1049 = come_decrement_ref_count2(__right_value1049, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_918," ");
        buffer_append_str(header_buf_918,real_fun_name_893);
        buffer_append_str(header_buf_918,"(");
        for(        i_919=0;        i_919<list$1sTypeph_length(param_types_914);        i_919++        ){
            param_type_920=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_914,i_919), "05function.c", 3149, 17));
            param_name_921=((char*)come_null_check(list$1charphp_operator_load_element(param_names_916,i_919), "05function.c", 3150, 18));
            buffer_append_str(header_buf_918,((char*)(__right_value1050=make_come_type_name_string(param_type_920,info))));
            __right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_918," ");
            buffer_append_str(header_buf_918,param_name_921);
            if(            i_919!=list$1sTypeph_length(param_types_914)-1) {
                buffer_append_str(header_buf_918,",");
            }
        }
        buffer_append_str(header_buf_918,")");
        result_type_910->mStatic=(_Bool)0;
        fun_922=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3164, "sFun")),(char*)come_increment_ref_count(name_911),(struct sType*)come_increment_ref_count(result_type_910),(struct list$1sTypeph*)come_increment_ref_count(param_types_914),(struct list$1charph*)come_increment_ref_count(param_names_916),(struct list$1charph*)come_increment_ref_count(param_default_parametors_917),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_909),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_918)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_922->mCloner=(_Bool)1;
        fun2_923=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1055=__builtin_string(fun_name))));
        __right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_923==((void*)0)||fun2_923->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_911)),(struct sFun*)come_increment_ref_count(fun_922));
        }
        cloner_892=fun_922;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3181, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sFunNode*)(__right_value1058=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3181, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_922),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_924=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1058,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_924,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj357=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_906);
        /*G*/ __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_905;
        __dec_obj358=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_907);
        come_call_finalizer3(__dec_obj358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_904;
        info->head=head_908;
        info->sline=sline_905;
        /*i*/come_call_finalizer3(source_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_906 = come_decrement_ref_count2(sname_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_909,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_910,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_911 = come_decrement_ref_count2(name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_912,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_914,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_916,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_917,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_922,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_924) { node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_891;
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_887);
    /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_888);
    /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj361=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_889);
    /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_890;
    __result262__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1064=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3204, "struct tuple2$2sFunpcharph")),cloner_892,(char*)come_increment_ref_count(real_fun_name_893))));
    last_code_887 = come_decrement_ref_count2(last_code_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_888 = come_decrement_ref_count2(last_code2_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_889 = come_decrement_ref_count2(last_code3_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_893 = come_decrement_ref_count2(real_fun_name_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_894,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1064,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj353;
struct sFun* __dec_obj354;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj353=self->sname;
            /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj354=self->mFun;
            come_call_finalizer3(__dec_obj354,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result260__;
void* __right_value1059 = (void*)0;
struct sFunNode* result_925;
void* __right_value1060 = (void*)0;
char* __dec_obj355;
void* __right_value1061 = (void*)0;
struct sFun* __dec_obj356;
struct sFunNode* __result261__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_925=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_925->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj355=result_925->sname;
        result_925->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj356=result_925->mFun;
        result_925->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj356,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_925;
    /*i*/come_call_finalizer3(result_925,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

