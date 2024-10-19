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
void* __right_value161 = (void*)0;
struct sType* __dec_obj63;
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
    __dec_obj63=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    /* a*/come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        __dec_obj41=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj43=result_68->mNoExceptionType;
        result_68->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj44=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj48=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj52=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj53=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj57=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj58=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
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
        __dec_obj60=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
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
        __dec_obj61=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj62=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj24=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj27=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj29=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj31=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj32=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj34=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj36=self->mAlignas;
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj38=self->mOriginalTypeName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj39=self->mAsmName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /* a*/come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            /* a*/come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj40;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj40=self->v1;
            /* a*/come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj45=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else {
        if(self->len==1) {
            litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_85->prev=self->head;
            litem_85->next=((void*)0);
            __dec_obj46=litem_85->item;
            litem_85->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_85;
            self->head->next=litem_85;
        }
        else {
            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_86->prev=self->tail;
            litem_86->next=((void*)0);
            __dec_obj47=litem_86->item;
            litem_86->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
void* __right_value146 = (void*)0;
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
    if(self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj49=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_89;
        self->head=litem_89;
    }
    else {
        if(self->len==1) {
            litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_90->prev=self->head;
            litem_90->next=((void*)0);
            __dec_obj50=litem_90->item;
            litem_90->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_90;
            self->head->next=litem_90;
        }
        else {
            litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_91->prev=self->tail;
            litem_91->next=((void*)0);
            __dec_obj51=litem_91->item;
            litem_91->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
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
void* __right_value145 = (void*)0;
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
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
void* __right_value154 = (void*)0;
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
    if(self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj54=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj55=litem_96->item;
            litem_96->item=(char*)come_increment_ref_count(item);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj56=litem_97->item;
            litem_97->item=(char*)come_increment_ref_count(item);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self->len==0) {
        litem_98=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj64=litem_98->item;
        litem_98->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else {
        if(self->len==1) {
            litem_99=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_99->prev=self->head;
            litem_99->next=((void*)0);
            __dec_obj68=litem_99->item;
            litem_99->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_99;
            self->head->next=litem_99;
        }
        else {
            litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_100->prev=self->tail;
            litem_100->next=((void*)0);
            __dec_obj69=litem_100->item;
            litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
char* __dec_obj65;
struct sType* __dec_obj66;
char* __dec_obj67;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj65=self->c_value;
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj66=self->type;
            /* a*/come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj67=self->c_value_without_right_value_objects;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj70,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(self->mFun->mBlock) {
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_103=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(!gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_103,"__result_obj__",(_Bool)0,info))));
            __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_104=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        info->block_level=block_level_104;
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_101;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_102);
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj72=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj75=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj76=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj77=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj77,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj80=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj81=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj81,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj82=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj83=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj84=self->mComeHeader;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj78;
struct sVarTable* __dec_obj79;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj78=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj79=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj79,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
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
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 128, "list$1sNodeph"))));
    /* a*/come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    /* a*/come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    /* a*/come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    /* a*/come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    /* a*/come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    /* a*/come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    /* a*/come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj100=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj101=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj102=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj103=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj105=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj106=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj106,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj107=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj108=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj109=self->mBlock;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj110=self->mGenericsSName;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
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
char* p_136;
char* head_137;
void* __right_value196 = (void*)0;
char* source_138;
void* __right_value197 = (void*)0;
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
            __dec_obj111=info->sname;
            info->sname=(char*)come_increment_ref_count(node_110->sname(node_110->_protocol_obj));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                    __dec_obj115=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_109));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_129=info->p;
                    value_130=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_131=info->p;
                    __dec_obj116=value_130;
                    value_130=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_130),info));
                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
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
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value191=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 262, "sSemicolonNode")),info))));
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
            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
            /*g*/come_call_finalizer3(__right_value191,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj120=node_134;
            node_134=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
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
    if(self->len==0) {
        litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value182=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj112=litem_111->item;
        litem_111->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_111;
        self->head=litem_111;
    }
    else {
        if(self->len==1) {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value183=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
            litem_112->prev=self->head;
            litem_112->next=((void*)0);
            __dec_obj113=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_112;
            self->head->next=litem_112;
        }
        else {
            litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value184=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
            litem_113->prev=self->tail;
            litem_113->next=((void*)0);
            __dec_obj114=litem_113->item;
            litem_113->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
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
char* __dec_obj117;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj117=self->sname;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj118=result_135->sname;
        result_135->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_135;
    /*i*/come_call_finalizer3(result_135,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
_Bool inhibits_output_code_140;
struct sVarTable* old_table_141;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sVarTable* __dec_obj121;
struct sVarTable* current_loop_vtable_142;
struct list$1sTypeph* param_types__143;
struct list$1charph* param_names__144;
int i_145;
struct list$1charph* o2_saved_146;
char* name_149;
void* __right_value200 = (void*)0;
struct sType* type_152;
void* __right_value201 = (void*)0;
int block_level_156;
int i_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* node_161;
struct list$1sRightValueObjectph* right_value_objects_164;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
int stack_num_before_169;
int sline_170;
void* __right_value204 = (void*)0;
char* sname_171;
void* __right_value205 = (void*)0;
char* __dec_obj130;
void* __right_value206 = (void*)0;
char* __dec_obj131;
struct list$1sRightValueObjectph* __dec_obj132;
memset(&i_145, 0, sizeof(int));
memset(&i_157, 0, sizeof(int));
    if(info->output_header_file) {
        return 0;
    }
    inhibits_output_code_140=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_141=info->lv_table;
    if(!no_var_table) {
        __dec_obj121=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 320, "sVarTable")),(_Bool)0,old_table_141));
        /* a*/come_call_finalizer3(__dec_obj121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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
            __dec_obj126=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 357, "list$1sRightValueObjectph"))));
            /* a*/come_call_finalizer3(__dec_obj126,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj127=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_169=list$1CVALUEph_length(info->stack);
            sline_170=info->sline;
            sname_171=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_161->sline(node_161->_protocol_obj);
            __dec_obj130=info->sname;
            info->sname=(char*)come_increment_ref_count(node_161->sname(node_161->_protocol_obj));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_161,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_170;
            __dec_obj131=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_171));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_169);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj132=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_164);
            /* a*/come_call_finalizer3(__dec_obj132,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
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
struct sRightValueObject* __dec_obj122;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj122=self->item;
            /* a*/come_call_finalizer3(__dec_obj122,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj123=self->mType;
            /* a*/come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj124=self->mVarName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj125=self->mFunName;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value207 = (void*)0;
char* buf_180;
void* __right_value208 = (void*)0;
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
    __result117__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value208=__builtin_string(buf_180)));
    buf_180 = come_decrement_ref_count2(buf_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct buffer* asm_fun_name_184;
int brace_num_185;
int len_186;
_Bool in_dquort_187;
int brace_num_188;
int brace_num_189;
void* __right_value211 = (void*)0;
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
    __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value211=buffer_to_string(asm_fun_name_184)));
    /*i*/come_call_finalizer3(asm_fun_name_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_190;
int head_sline_191;
void* __right_value212 = (void*)0;
char* buf_192;
void* __right_value213 = (void*)0;
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
void* __right_value214 = (void*)0;
char* name_194;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sType* result_type_195;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __list_values1___196[5];
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct list$1sTypeph* param_types_201;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
char* __list_values2___202[5];
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1charph* param_names_207;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1charph* param_default_parametors_208;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sFun* main_fun_209;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* name_251;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sType* result_type_252;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __list_values3___253[1];
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1sTypeph* param_types_254;
void* __right_value262 = (void*)0;
char* __list_values4___255[1];
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1charph* param_names_256;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1charph* param_default_parametors_257;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sFun* main_fun_258;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
char* name_259;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sType* result_type_260;
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
void* __right_value288 = (void*)0;
struct sType* __list_values5___261[7];
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sTypeph* param_types_262;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* __list_values6___263[7];
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1charph* param_names_264;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1charph* param_default_parametors_265;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sFun* main_fun_266;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* name_267;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* result_type_268;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __list_values7___269[5];
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1sTypeph* param_types_270;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __list_values8___271[5];
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1charph* param_names_272;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct list$1charph* param_default_parametors_273;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sFun* main_fun_274;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* name_275;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* result_type_276;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* __list_values9___277[1];
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1sTypeph* param_types_278;
void* __right_value343 = (void*)0;
char* __list_values10___279[1];
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1charph* param_names_280;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct list$1charph* param_default_parametors_281;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sFun* main_fun_282;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* name_283;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* result_type_284;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __list_values11___285[4];
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1sTypeph* param_types_286;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __list_values12___287[4];
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1charph* param_names_288;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1charph* param_default_parametors_289;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sFun* main_fun_290;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* name_291;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* result_type_292;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sType* __list_values13___293[3];
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1sTypeph* param_types_294;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* __list_values14___295[3];
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct list$1charph* param_names_296;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1charph* param_default_parametors_297;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sFun* main_fun_298;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
char* name_299;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sType* result_type_300;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __list_values15___301[1];
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1sTypeph* param_types_302;
void* __right_value412 = (void*)0;
char* __list_values16___303[1];
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct list$1charph* param_names_304;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1charph* param_default_parametors_305;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sFun* main_fun_306;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
char* name_307;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sType* result_type_308;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* __list_values17___309[3];
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1sTypeph* param_types_310;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
char* __list_values18___311[3];
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1charph* param_names_312;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1charph* param_default_parametors_313;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sFun* main_fun_314;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* name_315;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* result_type_316;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1sTypeph* param_types_317;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1charph* param_names_318;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1charph* param_default_parametors_319;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sFun* main_fun_320;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
char* name_321;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* result_type_322;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* __list_values19___323[4];
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1sTypeph* param_types_324;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __list_values20___325[4];
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct list$1charph* param_names_326;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1charph* param_default_parametors_327;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sFun* main_fun_328;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
char* name_329;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* result_type_330;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct list$1sTypeph* param_types_331;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1charph* param_names_332;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1charph* param_default_parametors_333;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sFun* fun_334;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
char* name_335;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* result_type_336;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sTypeph* param_types_337;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1charph* param_names_338;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1charph* param_default_parametors_339;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sFun* fun_340;
void* __right_value512 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_194=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_195=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"void*",(_Bool)0,info));
        {__list_values1___196[0]=come_increment_ref_count(((struct sType*)(__right_value218=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"int",(_Bool)0,info))));
__list_values1___196[1]=come_increment_ref_count(((struct sType*)(__right_value220=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"int",(_Bool)0,info))));
__list_values1___196[2]=come_increment_ref_count(((struct sType*)(__right_value222=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"char*",(_Bool)0,info))));
__list_values1___196[3]=come_increment_ref_count(((struct sType*)(__right_value224=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"int",(_Bool)0,info))));
__list_values1___196[4]=come_increment_ref_count(((struct sType*)(__right_value226=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")),"char*",(_Bool)0,info))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 760, "struct list$1sTypeph")),5,__list_values1___196));
        /*g*/come_call_finalizer3(__right_value218,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value222,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value224,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value226,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___202[0]=come_increment_ref_count(((char*)(__right_value232=__builtin_string("count"))));
__list_values2___202[1]=come_increment_ref_count(((char*)(__right_value233=__builtin_string("size"))));
__list_values2___202[2]=come_increment_ref_count(((char*)(__right_value234=__builtin_string("sname"))));
__list_values2___202[3]=come_increment_ref_count(((char*)(__right_value235=__builtin_string("sline"))));
__list_values2___202[4]=come_increment_ref_count(((char*)(__right_value236=__builtin_string("class_name"))));
}        param_names_207=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 761, "struct list$1charph")),5,__list_values2___202));
        __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values3___253[0]=come_increment_ref_count(((struct sType*)(__right_value259=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")),"void*",(_Bool)0,info))));
}        param_types_254=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 780, "struct list$1sTypeph")),1,__list_values3___253));
        /*g*/come_call_finalizer3(__right_value259,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___255[0]=come_increment_ref_count(((char*)(__right_value262=__builtin_string("mem"))));
}        param_names_256=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 781, "struct list$1charph")),1,__list_values4___255));
        __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values5___261[0]=come_increment_ref_count(((struct sType*)(__right_value276=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[1]=come_increment_ref_count(((struct sType*)(__right_value278=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[2]=come_increment_ref_count(((struct sType*)(__right_value280=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[3]=come_increment_ref_count(((struct sType*)(__right_value282=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"void*",(_Bool)0,info))));
__list_values5___261[4]=come_increment_ref_count(((struct sType*)(__right_value284=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"int",(_Bool)0,info))));
__list_values5___261[5]=come_increment_ref_count(((struct sType*)(__right_value286=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"int",(_Bool)0,info))));
__list_values5___261[6]=come_increment_ref_count(((struct sType*)(__right_value288=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")),"int",(_Bool)0,info))));
}        param_types_262=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 795, "struct list$1sTypeph")),7,__list_values5___261));
        /*g*/come_call_finalizer3(__right_value276,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value282,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value284,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value286,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value288,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___263[0]=come_increment_ref_count(((char*)(__right_value291=__builtin_string("fun"))));
__list_values6___263[1]=come_increment_ref_count(((char*)(__right_value292=__builtin_string("mem"))));
__list_values6___263[2]=come_increment_ref_count(((char*)(__right_value293=__builtin_string("protocol_fun"))));
__list_values6___263[3]=come_increment_ref_count(((char*)(__right_value294=__builtin_string("protocol_obj"))));
__list_values6___263[4]=come_increment_ref_count(((char*)(__right_value295=__builtin_string("call_finalizer_only"))));
__list_values6___263[5]=come_increment_ref_count(((char*)(__right_value296=__builtin_string("no_decrement"))));
__list_values6___263[6]=come_increment_ref_count(((char*)(__right_value297=__builtin_string("no_free"))));
}        param_names_264=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 796, "struct list$1charph")),7,__list_values6___263));
        __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values7___269[0]=come_increment_ref_count(((struct sType*)(__right_value311=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"void*",(_Bool)0,info))));
__list_values7___269[1]=come_increment_ref_count(((struct sType*)(__right_value313=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"void*",(_Bool)0,info))));
__list_values7___269[2]=come_increment_ref_count(((struct sType*)(__right_value315=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"void*",(_Bool)0,info))));
__list_values7___269[3]=come_increment_ref_count(((struct sType*)(__right_value317=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"bool",(_Bool)0,info))));
__list_values7___269[4]=come_increment_ref_count(((struct sType*)(__right_value319=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")),"bool",(_Bool)0,info))));
}        param_types_270=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 810, "struct list$1sTypeph")),5,__list_values7___269));
        /*g*/come_call_finalizer3(__right_value311,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value313,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value315,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___271[0]=come_increment_ref_count(((char*)(__right_value322=__builtin_string("mem"))));
__list_values8___271[1]=come_increment_ref_count(((char*)(__right_value323=__builtin_string("protocol_fun"))));
__list_values8___271[2]=come_increment_ref_count(((char*)(__right_value324=__builtin_string("protocol_obj"))));
__list_values8___271[3]=come_increment_ref_count(((char*)(__right_value325=__builtin_string("no_decrement"))));
__list_values8___271[4]=come_increment_ref_count(((char*)(__right_value326=__builtin_string("no_free"))));
}        param_names_272=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 811, "struct list$1charph")),5,__list_values8___271));
        __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values9___277[0]=come_increment_ref_count(((struct sType*)(__right_value340=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 825, "sType")),"void*",(_Bool)0,info))));
}        param_types_278=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 825, "struct list$1sTypeph")),1,__list_values9___277));
        /*g*/come_call_finalizer3(__right_value340,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___279[0]=come_increment_ref_count(((char*)(__right_value343=__builtin_string("mem"))));
}        param_names_280=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 826, "struct list$1charph")),1,__list_values10___279));
        __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values11___285[0]=come_increment_ref_count(((struct sType*)(__right_value357=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"void*",(_Bool)0,info))));
__list_values11___285[1]=come_increment_ref_count(((struct sType*)(__right_value359=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"char*",(_Bool)0,info))));
__list_values11___285[2]=come_increment_ref_count(((struct sType*)(__right_value361=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"int",(_Bool)0,info))));
__list_values11___285[3]=come_increment_ref_count(((struct sType*)(__right_value363=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")),"char*",(_Bool)0,info))));
}        param_types_286=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 840, "struct list$1sTypeph")),4,__list_values11___285));
        /*g*/come_call_finalizer3(__right_value357,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value359,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value361,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value363,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___287[0]=come_increment_ref_count(((char*)(__right_value366=__builtin_string("block"))));
__list_values12___287[1]=come_increment_ref_count(((char*)(__right_value367=__builtin_string("sname"))));
__list_values12___287[2]=come_increment_ref_count(((char*)(__right_value368=__builtin_string("sline"))));
__list_values12___287[3]=come_increment_ref_count(((char*)(__right_value369=__builtin_string("class_name"))));
}        param_names_288=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 841, "struct list$1charph")),4,__list_values12___287));
        __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values13___293[0]=come_increment_ref_count(((struct sType*)(__right_value386=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 859, "sType")),"void*",(_Bool)0,info))));
__list_values13___293[1]=come_increment_ref_count(((struct sType*)(__right_value388=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 859, "sType")),"int",(_Bool)0,info))));
__list_values13___293[2]=come_increment_ref_count(((struct sType*)(__right_value390=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 859, "sType")),"long",(_Bool)0,info))));
}        param_types_294=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 859, "struct list$1sTypeph")),3,__list_values13___293));
        /*g*/come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value388,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value390,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___295[0]=come_increment_ref_count(((char*)(__right_value393=__builtin_string("b"))));
__list_values14___295[1]=come_increment_ref_count(((char*)(__right_value394=__builtin_string("c"))));
__list_values14___295[2]=come_increment_ref_count(((char*)(__right_value395=__builtin_string("len"))));
}        param_names_296=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 860, "struct list$1charph")),3,__list_values14___295));
        __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values15___301[0]=come_increment_ref_count(((struct sType*)(__right_value409=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 874, "sType")),"char*",(_Bool)0,info))));
}        param_types_302=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 874, "struct list$1sTypeph")),1,__list_values15___301));
        /*g*/come_call_finalizer3(__right_value409,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___303[0]=come_increment_ref_count(((char*)(__right_value412=__builtin_string("str"))));
}        param_names_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 875, "struct list$1charph")),1,__list_values16___303));
        __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values17___309[0]=come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 889, "sType")),"int",(_Bool)0,info))));
__list_values17___309[1]=come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 889, "sType")),"int",(_Bool)0,info))));
__list_values17___309[2]=come_increment_ref_count(((struct sType*)(__right_value430=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 889, "sType")),"int",(_Bool)0,info))));
}        param_types_310=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 889, "struct list$1sTypeph")),3,__list_values17___309));
        /*g*/come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___311[0]=come_increment_ref_count(((char*)(__right_value433=xsprintf("come_malloc"))));
__list_values18___311[1]=come_increment_ref_count(((char*)(__right_value434=xsprintf("come_debug"))));
__list_values18___311[2]=come_increment_ref_count(((char*)(__right_value435=xsprintf("come_gc"))));
}        param_names_312=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 890, "struct list$1charph")),3,__list_values18___311));
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        {__list_values19___323[0]=come_increment_ref_count(((struct sType*)(__right_value463=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"void*",(_Bool)0,info))));
__list_values19___323[1]=come_increment_ref_count(((struct sType*)(__right_value465=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"char*",(_Bool)0,info))));
__list_values19___323[2]=come_increment_ref_count(((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"int",(_Bool)0,info))));
__list_values19___323[3]=come_increment_ref_count(((struct sType*)(__right_value469=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 920, "sType")),"int",(_Bool)0,info))));
}        param_types_324=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 920, "struct list$1sTypeph")),4,__list_values19___323));
        /*g*/come_call_finalizer3(__right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value465,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___325[0]=come_increment_ref_count(((char*)(__right_value472=__builtin_string("mem"))));
__list_values20___325[1]=come_increment_ref_count(((char*)(__right_value473=__builtin_string("sname"))));
__list_values20___325[2]=come_increment_ref_count(((char*)(__right_value474=__builtin_string("sline"))));
__list_values20___325[3]=come_increment_ref_count(((char*)(__right_value475=__builtin_string("id"))));
}        param_names_326=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 921, "struct list$1charph")),4,__list_values20___325));
        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
void* __right_value227 = (void*)0;
struct list_item$1sTypeph* litem_198;
struct sType* __dec_obj133;
void* __right_value228 = (void*)0;
struct list_item$1sTypeph* litem_199;
struct sType* __dec_obj134;
void* __right_value229 = (void*)0;
struct list_item$1sTypeph* litem_200;
struct sType* __dec_obj135;
struct list$1sTypeph* __result119__;
    if(self->len==0) {
        litem_198=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value227=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        __dec_obj133=litem_198->item;
        litem_198->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_198;
        self->head=litem_198;
    }
    else {
        if(self->len==1) {
            litem_199=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value228=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_199->prev=self->head;
            litem_199->next=((void*)0);
            __dec_obj134=litem_199->item;
            litem_199->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_199;
            self->head->next=litem_199;
        }
        else {
            litem_200=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value229=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_200->prev=self->tail;
            litem_200->next=((void*)0);
            __dec_obj135=litem_200->item;
            litem_200->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value237 = (void*)0;
struct list_item$1charph* litem_204;
char* __dec_obj136;
void* __right_value238 = (void*)0;
struct list_item$1charph* litem_205;
char* __dec_obj137;
void* __right_value239 = (void*)0;
struct list_item$1charph* litem_206;
char* __dec_obj138;
struct list$1charph* __result121__;
    if(self->len==0) {
        litem_204=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value237=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_204->prev=((void*)0);
        litem_204->next=((void*)0);
        __dec_obj136=litem_204->item;
        litem_204->item=(char*)come_increment_ref_count(item);
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_204;
        self->head=litem_204;
    }
    else {
        if(self->len==1) {
            litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value238=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_205->prev=self->head;
            litem_205->next=((void*)0);
            __dec_obj137=litem_205->item;
            litem_205->item=(char*)come_increment_ref_count(item);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_205;
            self->head->next=litem_205;
        }
        else {
            litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value239=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_206->prev=self->tail;
            litem_206->next=((void*)0);
            __dec_obj138=litem_206->item;
            litem_206->item=(char*)come_increment_ref_count(item);
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value251 = (void*)0;
char** keys_211;
void* __right_value252 = (void*)0;
struct sFun** items_212;
void* __right_value253 = (void*)0;
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
    keys_211=(char**)come_increment_ref_count(((char**)(__right_value251=(char**)come_calloc(1, sizeof(char*)*(1*(size_210)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_212=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value252=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_210)), "/usr/local/include/comelang.h", 1622, "sFun*%"))));
    item_existance_213=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value253=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_210)), "/usr/local/include/comelang.h", 1623, "bool"))));
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
void* __right_value513 = (void*)0;
char* word_347;
_Bool define_function_pointer_result_function_348;
_Bool define_variable_between_brace_349;
char* p_350;
void* __right_value514 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_351;
char* fun_name_352;
_Bool err_353;
void* __right_value515 = (void*)0;
char* word_354;
_Bool define_function_flag_355;
char* p_356;
void* __right_value516 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_357;
char* fun_name_358;
_Bool err_359;
char* word_360;
void* __right_value517 = (void*)0;
char* __dec_obj141;
void* __right_value518 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
void* __right_value519 = (void*)0;
char* __dec_obj144;
_Bool define_variable_361;
char* p_362;
void* __right_value520 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_363;
char* fun_name_364;
_Bool err_365;
void* __right_value521 = (void*)0;
char* word_366;
void* __right_value522 = (void*)0;
char* word_367;
char* p_368;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* word_369;
void* __right_value525 = (void*)0;
char* __dec_obj145;
void* __right_value526 = (void*)0;
char* word_370;
void* __right_value527 = (void*)0;
char* word_373;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sNode* node_374;
struct sNode* __result145__;
void* __right_value530 = (void*)0;
struct sNode* __result146__;
char* header_head_375;
void* __right_value531 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_376;
char* fun_name_377;
_Bool err_378;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sTypeph* param_types_379;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1charph* param_names_380;
void* __right_value536 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_381;
char* param_name_382;
_Bool err_383;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1sTypeph* param_types2_385;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1charph* param_names2_386;
void* __right_value543 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_387;
char* param_name_388;
_Bool err_389;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
char* header_tail_391;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* result_type2_392;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple1$1sTypeph* __dec_obj147;
void* __right_value550 = (void*)0;
struct list$1sTypeph* __dec_obj148;
void* __right_value551 = (void*)0;
struct list$1charph* __dec_obj149;
_Bool var_args_393;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* header_buf_394;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1charph* param_default_parametors_395;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sFun* fun_396;
void* __right_value561 = (void*)0;
struct sFun* fun2_400;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value599 = (void*)0;
struct sNode* __result175__;
void* __right_value600 = (void*)0;
struct sNode* node_435;
struct sNode* __result176__;
void* __right_value601 = (void*)0;
struct sNode* node_436;
char* source_tail_437;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct buffer* header_438;
struct sNode* __result177__;
void* __right_value604 = (void*)0;
char* buf2_439;
void* __right_value605 = (void*)0;
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
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value514=backtrace_parse_type((_Bool)0,info)));
            result_type_351=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_352=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_353=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value514,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
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
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value516=backtrace_parse_type((_Bool)0,info)));
            result_type_357=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_358=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_359=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value516,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_358 = come_decrement_ref_count2(fun_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_360=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj141=word_360;
                word_360=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(string_operator_equals(word_360,"extern")) {
                    __dec_obj142=word_360;
                    word_360=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj143=word_360;
                word_360=((void*)0);
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                        __dec_obj144=word_360;
                        word_360=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value520=backtrace_parse_type((_Bool)0,info)));
            result_type_363=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_364=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_365=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value520,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
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
                ((char*)(__right_value523=parse_word(info)));
                __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_369=(char*)come_increment_ref_count(parse_word(info));
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj145=word_369;
                        word_369=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                __result146__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value530=parse_global_variable(info)));
                if(__right_value530) { __right_value530 = come_decrement_ref_count2(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result146__;
            }
            else {
                if(define_function_pointer_result_function_348) {
                    header_head_375=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value531=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_376=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_377=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_378=multiple_assign_var4->v3;
                    /*g*/come_call_finalizer3(__right_value531,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value536=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_381=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_382=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_383=multiple_assign_var5->v3;
                                /*g*/come_call_finalizer3(__right_value536,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_383) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_379,(struct sType*)come_increment_ref_count(param_type_381));
                                static int num_function_pointer_result_var_name_a_384=0;
                                list$1charph_push_back(param_names_380,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_384)));
                                if(xisalpha(*info->p)||*info->p==95) {
                                    (void)((char*)(__right_value538=parse_word(info)));
                                    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value543=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_387=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_388=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_389=multiple_assign_var6->v3;
                                    /*g*/come_call_finalizer3(__right_value543,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_389) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_385,(struct sType*)come_increment_ref_count(param_type_387));
                                    static int num_function_pointer_result_var_name_b_390=0;
                                    list$1charph_push_back(param_names2_386,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_390)));
                                    if(xisalpha(*info->p)||*info->p==95) {
                                        (void)((char*)(__right_value545=parse_word(info)));
                                        __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                            __dec_obj147=result_type2_392->mResultType;
                            result_type2_392->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1369, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_376)));
                            /* a*/come_call_finalizer3(__dec_obj147,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj148=result_type2_392->mParamTypes;
                            result_type2_392->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_385));
                            /* a*/come_call_finalizer3(__dec_obj148,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj149=result_type2_392->mParamNames;
                            result_type2_392->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_386));
                            /* a*/come_call_finalizer3(__dec_obj149,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            result_type2_392->mVarArgs=(_Bool)0;
                            result_type2_392->mStatic=(_Bool)0;
                            var_args_393=(_Bool)0;
                            header_buf_394=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1377, "buffer"))));
                            buffer_append(header_buf_394,header_head_375,header_tail_391-header_head_375);
                            buffer_append_char(header_buf_394,0);
                            param_default_parametors_395=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1381, "list$1charph"))));
                            fun_396=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1383, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_377)),(struct sType*)come_increment_ref_count(result_type2_392),(struct list$1sTypeph*)come_increment_ref_count(param_types_379),(struct list$1charph*)come_increment_ref_count(param_names_380),(struct list$1charph*)come_increment_ref_count(param_default_parametors_395),(_Bool)1,var_args_393,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_394)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_400=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value561=__builtin_string(fun_name_377))));
                            __right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_400==((void*)0)||fun2_400->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_377)),(struct sFun*)come_increment_ref_count(fun_396));
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1395, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value564=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1395, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_396),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result175__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value599=_inf_value2));
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
                            /*g*/come_call_finalizer3(__right_value564,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value599) { __right_value599 = come_decrement_ref_count2(__right_value599, ((struct sNode*)__right_value599)->finalize, ((struct sNode*)__right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
    __result178__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value605=top_level_v98(buf2_439,head,head_sline,info)));
    buf2_439 = come_decrement_ref_count2(buf2_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value605) { __right_value605 = come_decrement_ref_count2(__right_value605, ((struct sNode*)__right_value605)->finalize, ((struct sNode*)__right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj139;
char* __dec_obj140;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj139=self->v1;
            /* a*/come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj140=self->v2;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* __dec_obj146;
struct tuple1$1sTypeph* __result147__;
    __dec_obj146=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value567 = (void*)0;
struct sFun* result_402;
void* __right_value568 = (void*)0;
char* __dec_obj153;
void* __right_value569 = (void*)0;
struct sType* __dec_obj154;
void* __right_value570 = (void*)0;
struct list$1sTypeph* __dec_obj155;
void* __right_value571 = (void*)0;
struct list$1charph* __dec_obj156;
void* __right_value572 = (void*)0;
struct list$1charph* __dec_obj157;
void* __right_value573 = (void*)0;
struct sType* __dec_obj158;
void* __right_value591 = (void*)0;
struct sBlock* __dec_obj168;
void* __right_value592 = (void*)0;
struct buffer* __dec_obj169;
void* __right_value593 = (void*)0;
struct buffer* __dec_obj170;
void* __right_value594 = (void*)0;
struct buffer* __dec_obj171;
void* __right_value595 = (void*)0;
struct buffer* __dec_obj172;
void* __right_value596 = (void*)0;
char* __dec_obj173;
void* __right_value597 = (void*)0;
char* __dec_obj174;
struct sFun* __result173__;
    if(self==(void*)0) {
        __result153__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    result_402=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj153=result_402->mName;
        result_402->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj154=result_402->mResultType;
        result_402->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj155=result_402->mParamTypes;
        result_402->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj155,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj156=result_402->mParamNames;
        result_402->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj156,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj157=result_402->mParamDefaultParametors;
        result_402->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        /* a*/come_call_finalizer3(__dec_obj157,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj158=result_402->mLambdaType;
        result_402->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /* a*/come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj168=result_402->mBlock;
        result_402->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /* a*/come_call_finalizer3(__dec_obj168,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result_402->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj169=result_402->mSource;
        result_402->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /* a*/come_call_finalizer3(__dec_obj169,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj170=result_402->mSourceHead;
        result_402->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /* a*/come_call_finalizer3(__dec_obj170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj171=result_402->mSourceHead2;
        result_402->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /* a*/come_call_finalizer3(__dec_obj171,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj172=result_402->mSourceDefer;
        result_402->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /* a*/come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mStatic=self->mStatic;
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj173=result_402->mComeHeader;
        result_402->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_402->mCloner=self->mCloner;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj174=result_402->mDeclareSName;
        result_402->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value574 = (void*)0;
struct sBlock* result_403;
void* __right_value575 = (void*)0;
struct list$1sNodeph* __dec_obj159;
void* __right_value590 = (void*)0;
struct sVarTable* __dec_obj167;
struct sBlock* __result172__;
    if(self==(void*)0) {
        __result154__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    result_403=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj159=result_403->mNodes;
        result_403->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        /* a*/come_call_finalizer3(__dec_obj159,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj167=result_403->mVarTable;
        result_403->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /* a*/come_call_finalizer3(__dec_obj167,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result172__ = gComeFunResultObject = __result_obj__ = result_403;
    /*i*/come_call_finalizer3(result_403,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result155__;
void* __right_value576 = (void*)0;
struct sVarTable* result_404;
void* __right_value589 = (void*)0;
struct map$2charphsVarph* __dec_obj166;
struct sVarTable* __result171__;
    if(self==(void*)0) {
        __result155__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    result_404=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj166=result_404->mVars;
        result_404->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        /* a*/come_call_finalizer3(__dec_obj166,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value577 = (void*)0;
void* __right_value583 = (void*)0;
struct map$2charphsVarph* result_408;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1charp* __dec_obj165;
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
    __dec_obj165=result_408->key_list;
    result_408->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1466, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj165,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
int i_405;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1charp* __dec_obj160;
struct map$2charphsVarph* __result158__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value578=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value579=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value580=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_405=0;    i_405<128;    i_405++    ){
        self->item_existance[i_405]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj160=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj160,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
char* __dec_obj161;
char* __dec_obj162;
struct sType* __dec_obj163;
char* __dec_obj164;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj161=self->mName;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj162=self->mCValueName;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj163=self->mType;
            /* a*/come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj164=self->mFunName;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value586 = (void*)0;
char** keys_419;
void* __right_value587 = (void*)0;
struct sVar** items_420;
void* __right_value588 = (void*)0;
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
    keys_419=(char**)come_increment_ref_count(((char**)(__right_value586=(char**)come_calloc(1, sizeof(char*)*(1*(size_418)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_420=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value587=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_418)), "/usr/local/include/comelang.h", 1622, "sVar*%"))));
    item_existance_421=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value588=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_418)), "/usr/local/include/comelang.h", 1623, "bool"))));
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

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_440;
int caller_line_441;
char* caller_sname_442;
char* last_code_443;
char* __dec_obj176;
char* last_code2_444;
char* __dec_obj177;
char* last_code3_445;
char* __dec_obj178;
void* __right_value606 = (void*)0;
char* sname_top_446;
int sline_top_447;
struct sFun* funX_448;
_Bool __result179__;
void* __right_value607 = (void*)0;
struct sType* result_type_449;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1sTypeph* param_types_450;
struct list$1sTypeph* o2_saved_451;
struct sType* it_454;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sType* param_type_457;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct list$1charph* param_names_458;
void* __right_value614 = (void*)0;
struct list$1charph* param_default_parametors_459;
char* p_460;
int sline_461;
char* sname_462;
char* head_463;
struct buffer* source_464;
void* __right_value615 = (void*)0;
struct buffer* __dec_obj179;
struct sType* generics_type_saved_465;
void* __right_value616 = (void*)0;
struct sType* __dec_obj180;
struct list$1charph* method_generics_type_names_466;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct list$1charph* __dec_obj181;
struct list$1charph* o2_saved_467;
char* it_468;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct list$1charph* __dec_obj182;
char* __dec_obj183;
void* __right_value621 = (void*)0;
struct sBlock* block_469;
struct buffer* __dec_obj184;
char* __dec_obj185;
_Bool var_args_470;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sFun* fun_471;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value633 = (void*)0;
struct sNode* node_472;
_Bool in_generics_fun_474;
_Bool __result188__;
struct sType* __dec_obj190;
struct list$1charph* __dec_obj191;
void* __right_value634 = (void*)0;
char* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
_Bool __result189__;
    caller_fun_440=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_441=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_442=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_443=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj176=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_444=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj177=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_445=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj178=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_446=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_447=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_448=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_448) {
        __result179__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_443 = come_decrement_ref_count2(last_code_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_444 = come_decrement_ref_count2(last_code2_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_445 = come_decrement_ref_count2(last_code3_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_446 = come_decrement_ref_count2(sname_top_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result179__;
    }
    result_type_449=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_450=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1465, "list$1sTypeph"))));
    for(    o2_saved_451=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_454=list$1sTypeph_begin((o2_saved_451));    !list$1sTypeph_end((o2_saved_451));    it_454=list$1sTypeph_next((o2_saved_451))    ){
        param_type_457=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value610=sType_clone(it_454))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value610,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_457->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_450,(struct sType*)come_increment_ref_count(sType_clone(param_type_457)));
        /*i*/come_call_finalizer3(param_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_451,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_458=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_459=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_460=info->p;
    sline_461=info->sline;
    sname_462=(char*)come_increment_ref_count(info->sname);
    head_463=info->head;
    source_464=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj179=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_465=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj180=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /* a*/come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_466=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj181=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1492, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj181,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_467=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_468=list$1charph_begin((o2_saved_467));    !list$1charph_end((o2_saved_467));    it_468=list$1charph_next((o2_saved_467))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_468)));
    }
    /*i*/come_call_finalizer3(o2_saved_467,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj182=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj182,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj183=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_469=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_463;
    __dec_obj184=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_464);
    /* a*/come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_460;
    info->sline=sline_461;
    __dec_obj185=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_462);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_449->mInline=(_Bool)0;
    var_args_470=generics_fun->mVarArgs;
    fun_471=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1514, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_449),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_450)),(struct list$1charph*)come_increment_ref_count(param_names_458),(struct list$1charph*)come_increment_ref_count(param_default_parametors_459),(_Bool)0,var_args_470,(struct sBlock*)come_increment_ref_count(block_469),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_471));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1521, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value629=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1521, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_471),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_472=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value629,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_474=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(!node_compile(node_472,info)) {
        __result188__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_443 = come_decrement_ref_count2(last_code_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_444 = come_decrement_ref_count2(last_code2_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_445 = come_decrement_ref_count2(last_code3_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_446 = come_decrement_ref_count2(sname_top_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_450,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_458,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_459,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_462 = come_decrement_ref_count2(sname_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_464,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_465,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_466,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_469,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_471,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result188__;
    }
    info->in_generics_fun=in_generics_fun_474;
    __dec_obj190=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_465);
    /* a*/come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj191=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_466);
    /* a*/come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj192=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_446));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_447;
    __dec_obj193=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_443);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_444);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj195=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_445);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_440;
    info->caller_line=caller_line_441;
    info->caller_sname=caller_sname_442;
    __result189__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_443 = come_decrement_ref_count2(last_code_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_444 = come_decrement_ref_count2(last_code2_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_445 = come_decrement_ref_count2(last_code3_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_446 = come_decrement_ref_count2(sname_top_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_450,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_458,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_459,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_462 = come_decrement_ref_count2(sname_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_464,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_466,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_469,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_471,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result189__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_452;
struct sType* __result180__;
struct sType* __result181__;
struct sType* result_453;
struct sType* __result182__;
result_452 = (void*)0;
result_453 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_452,0,sizeof(struct sType*));
        __result180__ = gComeFunResultObject = __result_obj__ = result_452;
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    self->it=self->head;
    if(self->it) {
        __result181__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    memset(&result_453,0,sizeof(struct sType*));
    __result182__ = gComeFunResultObject = __result_obj__ = result_453;
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_455;
struct sType* __result183__;
struct sType* __result184__;
struct sType* result_456;
struct sType* __result185__;
result_455 = (void*)0;
result_456 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(struct sType*));
        __result183__ = gComeFunResultObject = __result_obj__ = result_455;
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result184__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    memset(&result_456,0,sizeof(struct sType*));
    __result185__ = gComeFunResultObject = __result_obj__ = result_456;
    gComeFunResultObject = (void*)0;
    return __result185__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_475;
int caller_line_476;
char* caller_sname_477;
char* last_code_478;
char* __dec_obj196;
char* last_code2_479;
char* __dec_obj197;
char* last_code3_480;
char* __dec_obj198;
void* __right_value635 = (void*)0;
char* sname_top_481;
int sline_top_482;
struct sFun* funX_483;
_Bool __result190__;
void* __right_value636 = (void*)0;
struct sType* result_type_484;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1sTypeph* param_types_485;
struct list$1sTypeph* o2_saved_486;
struct sType* it_487;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sType* param_type_488;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct list$1charph* param_names_489;
void* __right_value643 = (void*)0;
struct list$1charph* param_default_parametors_490;
char* p_491;
int sline_492;
char* sname_493;
char* head_494;
struct buffer* source_495;
void* __right_value644 = (void*)0;
struct buffer* __dec_obj199;
struct list$1charph* method_generics_type_names_496;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1charph* __dec_obj200;
struct list$1charph* o2_saved_497;
char* it_498;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1charph* __dec_obj201;
char* __dec_obj202;
void* __right_value649 = (void*)0;
struct sBlock* block_499;
struct buffer* __dec_obj203;
char* __dec_obj204;
_Bool var_args_500;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sFun* fun_501;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value661 = (void*)0;
struct sNode* node_502;
_Bool __result193__;
struct list$1charph* __dec_obj209;
void* __right_value662 = (void*)0;
char* __dec_obj210;
char* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
_Bool __result194__;
    caller_fun_475=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_476=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_477=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_478=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj196=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_479=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj197=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_480=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj198=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_481=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_482=info->sline;
    funX_483=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_483) {
        __result190__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_478 = come_decrement_ref_count2(last_code_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_479 = come_decrement_ref_count2(last_code2_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_480 = come_decrement_ref_count2(last_code3_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_481 = come_decrement_ref_count2(sname_top_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result190__;
    }
    result_type_484=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_485=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1575, "list$1sTypeph"))));
    for(    o2_saved_486=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_487=list$1sTypeph_begin((o2_saved_486));    !list$1sTypeph_end((o2_saved_486));    it_487=list$1sTypeph_next((o2_saved_486))    ){
        param_type_488=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value639=sType_clone(it_487))),info));
        /*g*/come_call_finalizer3(__right_value639,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_488->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_485,(struct sType*)come_increment_ref_count(sType_clone(param_type_488)));
        /*i*/come_call_finalizer3(param_type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_486,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_489=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_490=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_491=info->p;
    sline_492=info->sline;
    sname_493=(char*)come_increment_ref_count(info->sname);
    head_494=info->head;
    source_495=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj199=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj199,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_496=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj200=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1599, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj200,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_497=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_498=list$1charph_begin((o2_saved_497));    !list$1charph_end((o2_saved_497));    it_498=list$1charph_next((o2_saved_497))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_498)));
    }
    /*i*/come_call_finalizer3(o2_saved_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj201=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj201,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj202=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_499=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_494;
    __dec_obj203=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_495);
    /* a*/come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_491;
    info->sline=sline_492;
    __dec_obj204=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_493);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_484->mInline=(_Bool)0;
    var_args_500=generics_fun->mVarArgs;
    fun_501=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1621, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_485)),(struct list$1charph*)come_increment_ref_count(param_names_489),(struct list$1charph*)come_increment_ref_count(param_default_parametors_490),(_Bool)0,var_args_500,(struct sBlock*)come_increment_ref_count(block_499),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_501));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1628, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value657=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1628, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_501),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_502=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value657,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(!node_compile(node_502,info)) {
        __result193__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_478 = come_decrement_ref_count2(last_code_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_479 = come_decrement_ref_count2(last_code2_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_480 = come_decrement_ref_count2(last_code3_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_481 = come_decrement_ref_count2(sname_top_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_485,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_489,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_490,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_493 = come_decrement_ref_count2(sname_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_495,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_499,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_501,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_502) { node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result193__;
    }
    __dec_obj209=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_496);
    /* a*/come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj210=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_481));
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_482;
    __dec_obj211=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_478);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj212=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_479);
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj213=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_480);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_475;
    info->caller_line=caller_line_476;
    info->caller_sname=caller_sname_477;
    __result194__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_478 = come_decrement_ref_count2(last_code_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_479 = come_decrement_ref_count2(last_code2_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_480 = come_decrement_ref_count2(last_code3_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_481 = come_decrement_ref_count2(sname_top_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_485,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_489,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_490,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_493 = come_decrement_ref_count2(sname_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_495,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_499,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_501,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_502) { node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result194__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_504;
char* source_head_505;
struct sType* result_type_506;
char* var_name_507;
_Bool constructor__508;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* __dec_obj214;
void* __right_value665 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_509;
char* var_name2_510;
_Bool err_511;
struct sType* __dec_obj215;
char* __dec_obj216;
_Bool method_definition_512;
char* p_513;
int sline_514;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct buffer* buf2_515;
char* fun_name_516;
char* base_fun_name_517;
void* __right_value668 = (void*)0;
char* __dec_obj217;
void* __right_value669 = (void*)0;
char* __dec_obj218;
void* __right_value670 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_518;
char* name_519;
_Bool err_520;
void* __right_value671 = (void*)0;
char* __dec_obj219;
void* __right_value672 = (void*)0;
char* __dec_obj220;
void* __right_value673 = (void*)0;
char* __dec_obj221;
void* __right_value674 = (void*)0;
char* __dec_obj222;
void* __right_value675 = (void*)0;
char* __dec_obj223;
void* __right_value676 = (void*)0;
char* __dec_obj224;
void* __right_value677 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_521;
struct list$1charph* param_names_522;
struct list$1charph* param_default_parametors_523;
_Bool var_args_524;
char* header_tail_525;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct buffer* header_buf_526;
int version_527;
int n_528;
void* __right_value680 = (void*)0;
struct sBlock* block_529;
void* __right_value681 = (void*)0;
char* fun_name_531;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sFun* fun_532;
void* __right_value687 = (void*)0;
struct sFun* fun2_533;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value693 = (void*)0;
struct sNode* __result197__;
void* __right_value694 = (void*)0;
char* none_generics_name_535;
void* __right_value695 = (void*)0;
char* generics_sname_536;
int generics_sline_537;
void* __right_value696 = (void*)0;
char* block_538;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sGenericsFun* fun_539;
void* __right_value703 = (void*)0;
char* fun_name3_540;
void* __right_value707 = (void*)0;
struct sNode* __result209__;
void* __right_value708 = (void*)0;
char* generics_sname_562;
int generics_sline_563;
void* __right_value709 = (void*)0;
char* block_564;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sGenericsFun* fun_565;
void* __right_value716 = (void*)0;
char* fun_name3_566;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* __result210__;
char* source_tail_567;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct buffer* header_568;
void* __right_value721 = (void*)0;
char* name_569;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
char* name_570;
void* __right_value724 = (void*)0;
int i_571;
struct sType* param_type_572;
char* param_name_576;
char* default_parametor_577;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
char* impl_name_578;
void* __right_value730 = (void*)0;
char* result_type_name_579;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
char* impl_name_580;
void* __right_value733 = (void*)0;
char* result_type_name_581;
void* __right_value734 = (void*)0;
int i_582;
struct sType* param_type_583;
char* param_name_584;
char* default_parametor_585;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sBlock* block_586;
_Bool static__587;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
char* new_fun_name_588;
void* __right_value743 = (void*)0;
char* __dec_obj230;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sFun* fun_589;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sFun* fun2_590;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value758 = (void*)0;
struct sNode* __result215__;
void* __right_value759 = (void*)0;
char* new_fun_name_592;
void* __right_value760 = (void*)0;
char* __dec_obj235;
_Bool result_type_static_593;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sFun* fun_594;
void* __right_value766 = (void*)0;
struct sFun* fun2_595;
void* __right_value767 = (void*)0;
char* source_tail_596;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct buffer* header_597;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value776 = (void*)0;
struct sNode* __result218__;
void* __right_value777 = (void*)0;
char* asm_fun_599;
void* __right_value778 = (void*)0;
char* __dec_obj240;
_Bool result_type_static_600;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sFun* fun_601;
void* __right_value784 = (void*)0;
struct sFun* fun2_602;
void* __right_value785 = (void*)0;
char* source_tail_603;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct buffer* header_604;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value794 = (void*)0;
struct sNode* __result221__;
struct sNode* __result222__;
fun_name_516 = (void*)0;
    header_head_504=info->p;
    source_head_505=info->p;
    result_type_506=((void*)0);
    var_name_507=((void*)0);
    constructor__508=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value663=parse_word(info)));
        __right_value663 = come_decrement_ref_count2(__right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj214=result_type_506;
        result_type_506=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /* a*/come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_506->mHeap=(_Bool)1;
        constructor__508=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value665=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_509=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_510=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_511=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value665,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj215=result_type_506;
        result_type_506=(struct sType*)come_increment_ref_count(result_type2_509);
        /* a*/come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj216=var_name_507;
        var_name_507=(char*)come_increment_ref_count(var_name2_510);
        __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_511) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_509,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_510 = come_decrement_ref_count2(var_name2_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_512=(_Bool)0;
    {
        p_513=info->p;
        sline_514=info->sline;
        buf2_515=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1692, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_515,*info->p);
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
        if(buffer_length(buf2_515)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_512=(_Bool)1;
        }
        info->p=p_513;
        info->sline=sline_514;
        /*i*/come_call_finalizer3(buf2_515,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_517=((void*)0);
    if(constructor__508) {
        __dec_obj217=base_fun_name_517;
        base_fun_name_517=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj218=fun_name_516;
        fun_name_516=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_517,info,(_Bool)1));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        if(method_definition_512) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value670=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_518=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_519=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_520=multiple_assign_var8->v3;
            /*g*/come_call_finalizer3(__right_value670,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_520) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            __dec_obj219=base_fun_name_517;
            base_fun_name_517=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj220=fun_name_516;
            fun_name_516=(char*)come_increment_ref_count(create_method_name(obj_type_518,(_Bool)0,base_fun_name_517,info,(_Bool)1));
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_519 = come_decrement_ref_count2(name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                __dec_obj221=base_fun_name_517;
                base_fun_name_517=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj222=fun_name_516;
                fun_name_516=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_517,info,(_Bool)1));
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj223=fun_name_516;
                fun_name_516=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj224=base_fun_name_517;
                base_fun_name_517=(char*)come_increment_ref_count(__builtin_string(fun_name_516));
                __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_517,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value677=parse_params(info,constructor__508)));
    param_types_521=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_522=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_523=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_524=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value677,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_525=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_517,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_526=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1759, "buffer"))));
    buffer_append(header_buf_526,header_head_504,header_tail_525-header_head_504);
    buffer_append_char(header_buf_526,0);
    version_527=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_528=0;
        while(xisdigit(*info->p)) {
            n_528=n_528*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_527=n_528;
    }
    if(charp_operator_equals(base_fun_name_517,"lambda")) {
        block_529=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_530=0;
        lambda_num_530++;
        fun_name_531=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_530));
        result_type_506->mStatic=(_Bool)0;
        fun_532=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1789, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_531)),(struct sType*)come_increment_ref_count(result_type_506),(struct list$1sTypeph*)come_increment_ref_count(param_types_521),(struct list$1charph*)come_increment_ref_count(param_names_522),(struct list$1charph*)come_increment_ref_count(param_default_parametors_523),(_Bool)0,var_args_524,(struct sBlock*)come_increment_ref_count(block_529),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_526)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_533=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value687=__builtin_string(fun_name_531))));
        __right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_533==((void*)0)||fun2_533->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_531)),(struct sFun*)come_increment_ref_count(fun_532));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1799, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value690=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1799, "sLambdaNode")),fun_532,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result197__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value693=_inf_value5));
        /*i*/come_call_finalizer3(block_529,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_531 = come_decrement_ref_count2(fun_name_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_532,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value690,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value693) { __right_value693 = come_decrement_ref_count2(__right_value693, ((struct sNode*)__right_value693)->finalize, ((struct sNode*)__right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result197__;
        /*i*/come_call_finalizer3(block_529,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_531 = come_decrement_ref_count2(fun_name_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_532,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_535=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
            generics_sname_536=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_537=info->sline;
            block_538=(char*)come_increment_ref_count(skip_block(info));
            fun_539=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1809, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value698=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value699=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_516)),(struct sType*)come_increment_ref_count(result_type_506),(struct list$1sTypeph*)come_increment_ref_count(param_types_521),(struct list$1charph*)come_increment_ref_count(param_names_522),(struct list$1charph*)come_increment_ref_count(param_default_parametors_523),var_args_524,(char*)come_increment_ref_count(block_538),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_536)),generics_sline_537));
            /*g*/come_call_finalizer3(__right_value698,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            /*g*/come_call_finalizer3(__right_value699,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_540=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_535,base_fun_name_517));
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_540)),(struct sGenericsFun*)come_increment_ref_count(fun_539));
            __result209__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_535 = come_decrement_ref_count2(none_generics_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_536 = come_decrement_ref_count2(generics_sname_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_538 = come_decrement_ref_count2(block_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_539,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_540 = come_decrement_ref_count2(fun_name3_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result209__;
            none_generics_name_535 = come_decrement_ref_count2(none_generics_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_536 = come_decrement_ref_count2(generics_sname_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_538 = come_decrement_ref_count2(block_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_539,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_540 = come_decrement_ref_count2(fun_name3_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_562=(char*)come_increment_ref_count(__builtin_string(info->sname));
                generics_sline_563=info->sline;
                block_564=(char*)come_increment_ref_count(skip_block(info));
                fun_565=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1823, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value711=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value712=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_516)),(struct sType*)come_increment_ref_count(result_type_506),(struct list$1sTypeph*)come_increment_ref_count(param_types_521),(struct list$1charph*)come_increment_ref_count(param_names_522),(struct list$1charph*)come_increment_ref_count(param_default_parametors_523),var_args_524,(char*)come_increment_ref_count(block_564),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_562)),generics_sline_563));
                /*g*/come_call_finalizer3(__right_value711,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                /*g*/come_call_finalizer3(__right_value712,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_566=(char*)come_increment_ref_count(charp_clone(base_fun_name_517));
                if(method_definition_512) {
                    map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_516)),(struct sGenericsFun*)come_increment_ref_count(fun_565));
                }
                else {
                    map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_566)),(struct sGenericsFun*)come_increment_ref_count(fun_565));
                }
                __result210__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_562 = come_decrement_ref_count2(generics_sname_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_564 = come_decrement_ref_count2(block_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_565,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_566 = come_decrement_ref_count2(fun_name3_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result210__;
                generics_sname_562 = come_decrement_ref_count2(generics_sname_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_564 = come_decrement_ref_count2(block_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_565,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_566 = come_decrement_ref_count2(fun_name3_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_567=info->p-1;
                    header_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1839, "buffer"))));
                    if(constructor__508) {
                        if(list$1sTypeph_length(param_types_521)==1) {
                            name_569=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_568,((char*)(__right_value722=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_569,name_569,name_569))));
                            __right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_569 = come_decrement_ref_count2(name_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_570=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_568,((char*)(__right_value724=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_570,name_570,name_570))));
                            __right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_571=1;                            i_571<list$1sTypeph_length(param_types_521);                            i_571++                            ){
                                param_type_572=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_521,i_571), "05function.c", 1851, 1));
                                param_name_576=((char*)come_null_check(list$1charphp_operator_load_element(param_names_522,i_571), "05function.c", 1852, 2));
                                default_parametor_577=list$1charphp_operator_load_element(param_default_parametors_523,i_571);
                                if(default_parametor_577) {
                                    buffer_append_str(header_568,((char*)(__right_value726=xsprintf("extern %s %s=%s",((char*)(__right_value725=make_come_type_name_string_no_solved(param_type_572,(_Bool)0,info))),param_name_576,default_parametor_577))));
                                    __right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_568,((char*)(__right_value728=xsprintf("extern %s %s",((char*)(__right_value727=make_come_type_name_string_no_solved(param_type_572,(_Bool)0,info))),param_name_576))));
                                    __right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_571!=list$1sTypeph_length(param_types_521)-1) {
                                    buffer_append_str(header_568,",");
                                }
                            }
                            buffer_append_str(header_568,");\n");
                            name_570 = come_decrement_ref_count2(name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_521)==1) {
                                impl_name_578=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_579=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_506,(_Bool)0,info));
                                buffer_append_str(header_568,((char*)(__right_value731=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_579,impl_name_578,base_fun_name_517,impl_name_578))));
                                __right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_578 = come_decrement_ref_count2(impl_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_579 = come_decrement_ref_count2(result_type_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_580=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_581=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_506,(_Bool)0,info));
                                buffer_append_str(header_568,((char*)(__right_value734=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_581,impl_name_580,base_fun_name_517,impl_name_580))));
                                __right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_582=1;                                i_582<list$1sTypeph_length(param_types_521);                                i_582++                                ){
                                    param_type_583=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_521,i_582), "05function.c", 1882, 3));
                                    param_name_584=((char*)come_null_check(list$1charphp_operator_load_element(param_names_522,i_582), "05function.c", 1883, 4));
                                    default_parametor_585=list$1charphp_operator_load_element(param_default_parametors_523,i_582);
                                    if(default_parametor_585) {
                                        buffer_append_str(header_568,((char*)(__right_value736=xsprintf("extern %s %s=%s",((char*)(__right_value735=make_come_type_name_string_no_solved(param_type_583,(_Bool)0,info))),param_name_584,default_parametor_585))));
                                        __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_568,((char*)(__right_value738=xsprintf("extern %s %s",((char*)(__right_value737=make_come_type_name_string_no_solved(param_type_583,(_Bool)0,info))),param_name_584))));
                                        __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_582!=list$1sTypeph_length(param_types_521)-1) {
                                        buffer_append_str(header_568,",");
                                    }
                                }
                                buffer_append_str(header_568,");\n");
                                impl_name_580 = come_decrement_ref_count2(impl_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_581 = come_decrement_ref_count2(result_type_name_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_568,source_head_505,source_tail_567-source_head_505);
                            buffer_append_str(header_568,";\n");
                        }
                    }
                    if(!result_type_506->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(__right_value739=buffer_to_string(header_568))));
                        __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_586=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__508,(_Bool)1));
                    static__587=(_Bool)0;
                    if(result_type_506->mStatic) {
                        result_type_506->mStatic=(_Bool)0;
                        static__587=(_Bool)1;
                    }
                    if(version_527>0) {
                        new_fun_name_588=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value741=__builtin_string(fun_name_516))),version_527));
                        __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj230=fun_name_516;
                        fun_name_516=(char*)come_increment_ref_count(__builtin_string(new_fun_name_588));
                        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_588 = come_decrement_ref_count2(new_fun_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_589=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1923, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_516)),(struct sType*)come_increment_ref_count(result_type_506),(struct list$1sTypeph*)come_increment_ref_count(param_types_521),(struct list$1charph*)come_increment_ref_count(param_names_522),(struct list$1charph*)come_increment_ref_count(param_default_parametors_523),(_Bool)0,var_args_524,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_586)),static__587,(char*)come_increment_ref_count(buffer_to_string(header_buf_526)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_516)),(struct sFun*)come_increment_ref_count(fun_589));
                    }
                    else {
                        fun2_590=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value751=__builtin_string(fun_name_516))));
                        __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_590==((void*)0)||fun2_590->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_516)),(struct sFun*)come_increment_ref_count(fun_589));
                        }
                    }
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1943, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value754=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1943, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_589),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result215__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value758=_inf_value6));
                    /*i*/come_call_finalizer3(header_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_586,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_589,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value754,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value758) { __right_value758 = come_decrement_ref_count2(__right_value758, ((struct sNode*)__right_value758)->finalize, ((struct sNode*)__right_value758)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result215__;
                    /*i*/come_call_finalizer3(header_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_586,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_589,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_527>0) {
                            new_fun_name_592=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_516,version_527));
                            __dec_obj235=fun_name_516;
                            fun_name_516=(char*)come_increment_ref_count(__builtin_string(new_fun_name_592));
                            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                            new_fun_name_592 = come_decrement_ref_count2(new_fun_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_static_593=result_type_506->mStatic;
                            result_type_506->mStatic=(_Bool)0;
                            fun_594=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1958, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_516)),(struct sType*)come_increment_ref_count(result_type_506),(struct list$1sTypeph*)come_increment_ref_count(param_types_521),(struct list$1charph*)come_increment_ref_count(param_names_522),(struct list$1charph*)come_increment_ref_count(param_default_parametors_523),(_Bool)1,var_args_524,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_526)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_595=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value766=__builtin_string(fun_name_516))));
                            __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_595==((void*)0)||fun2_595->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_516)),(struct sFun*)come_increment_ref_count(fun_594));
                            }
                            source_tail_596=info->p;
                            header_597=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1972, "buffer"))));
                            buffer_append(header_597,source_head_505,source_tail_596-source_head_505);
                            if(!result_type_static_593) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value770=buffer_to_string(header_597))));
                                __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1979, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value772=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1979, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_594),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result218__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value776=_inf_value7));
                            /*i*/come_call_finalizer3(fun_594,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_597,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value772,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value776) { __right_value776 = come_decrement_ref_count2(__right_value776, ((struct sNode*)__right_value776)->finalize, ((struct sNode*)__right_value776)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result218__;
                            /*i*/come_call_finalizer3(fun_594,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_597,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_599=(char*)come_increment_ref_count(parse_attribute(info));
                            if(string_operator_not_equals(asm_fun_599,"")) {
                                __dec_obj240=fun_name_516;
                                fun_name_516=(char*)come_increment_ref_count(__builtin_string(asm_fun_599));
                                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            expected_next_character(59,info);
                            result_type_static_600=result_type_506->mStatic;
                            result_type_506->mStatic=(_Bool)0;
                            fun_601=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1993, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_516)),(struct sType*)come_increment_ref_count(result_type_506),(struct list$1sTypeph*)come_increment_ref_count(param_types_521),(struct list$1charph*)come_increment_ref_count(param_names_522),(struct list$1charph*)come_increment_ref_count(param_default_parametors_523),(_Bool)1,var_args_524,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_526)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_602=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value784=__builtin_string(fun_name_516))));
                            __right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_602==((void*)0)||fun2_602->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_516)),(struct sFun*)come_increment_ref_count(fun_601));
                            }
                            source_tail_603=info->p;
                            header_604=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2007, "buffer"))));
                            buffer_append(header_604,source_head_505,source_tail_603-source_head_505);
                            if(!result_type_static_600) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value788=buffer_to_string(header_604))));
                                __right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2014, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value790=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2014, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_601),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result221__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value794=_inf_value8));
                            asm_fun_599 = come_decrement_ref_count2(asm_fun_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_601,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value790,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value794) { __right_value794 = come_decrement_ref_count2(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result221__;
                            asm_fun_599 = come_decrement_ref_count2(asm_fun_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_601,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    __result222__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_507 = come_decrement_ref_count2(var_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_516 = come_decrement_ref_count2(fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_517 = come_decrement_ref_count2(base_fun_name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj225;
struct list$1charph* __dec_obj226;
struct list$1charph* __dec_obj227;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj225=self->v1;
            /* a*/come_call_finalizer3(__dec_obj225,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj226=self->v2;
            /* a*/come_call_finalizer3(__dec_obj226,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj227=self->v3;
            /* a*/come_call_finalizer3(__dec_obj227,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj228;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj228=self->sname;
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result195__;
void* __right_value691 = (void*)0;
struct sLambdaNode* result_534;
void* __right_value692 = (void*)0;
char* __dec_obj229;
struct sLambdaNode* __result196__;
    if(self==(void*)0) {
        __result195__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    result_534=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(self!=((void*)0)) {
        result_534->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_534->sname;
        result_534->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_534->mFun=self->mFun;
    }
    __result196__ = gComeFunResultObject = __result_obj__ = result_534;
    /*i*/come_call_finalizer3(result_534,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_558;
unsigned int it_559;
_Bool same_key_exist_560;
char* it2_561;
struct map$2charphsGenericsFunph* __result208__;
    if(self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_558=string_get_hash_key(key)%self->size;
    it_559=hash_558;
    while((_Bool)1) {
        if(self->item_existance[it_559]) {
            if(string_equals(self->keys[it_559],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_559]);
                    self->keys[it_559] = come_decrement_ref_count2(self->keys[it_559], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_559]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_559]);
                    self->keys[it_559]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_559],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_559]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_559]=item;
                }
                break;
            }
            it_559++;
            if(it_559>=self->size) {
                it_559=0;
            }
            else {
                if(it_559==hash_558) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_559]=(_Bool)1;
            if(1) {
                self->keys[it_559]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_559]=key;
            }
            if(1) {
                self->items[it_559]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_559]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_560=(_Bool)0;
    for(    it2_561=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_561=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_561,key)) {
            same_key_exist_560=(_Bool)1;
        }
    }
    if(!same_key_exist_560) {
        list$1charp_push_back(self->key_list,key);
    }
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_541;
void* __right_value704 = (void*)0;
char** keys_542;
void* __right_value705 = (void*)0;
struct sGenericsFun** items_543;
void* __right_value706 = (void*)0;
_Bool* item_existance_544;
int len_545;
char* it_548;
struct sGenericsFun* default_value_551;
struct sGenericsFun* it2_552;
unsigned int hash_555;
int n_556;
struct sGenericsFun* default_value_557;
default_value_551 = (void*)0;
default_value_557 = (void*)0;
    size_541=self->size*10;
    keys_542=(char**)come_increment_ref_count(((char**)(__right_value704=(char**)come_calloc(1, sizeof(char*)*(1*(size_541)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_543=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value705=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_541)), "/usr/local/include/comelang.h", 1622, "sGenericsFun*%"))));
    item_existance_544=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value706=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_541)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_545=0;
    for(    it_548=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_548=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_551,0,sizeof(struct sGenericsFun*));
        it2_552=map$2charphsGenericsFunph_at(self,it_548,default_value_551);
        hash_555=string_get_hash_key(it_548)%size_541;
        n_556=hash_555;
        while((_Bool)1) {
            if(item_existance_544[n_556]) {
                n_556++;
                if(n_556>=size_541) {
                    n_556=0;
                }
                else {
                    if(n_556==hash_555) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_544[n_556]=(_Bool)1;
                keys_542[n_556]=it_548;
                items_543[n_556]=map$2charphsGenericsFunph_at(self,it_548,default_value_557);
                len_545++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_542;
    self->items=items_543;
    self->item_existance=item_existance_544;
    self->size=size_541;
    self->len=len_545;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_546;
char* __result198__;
char* __result199__;
char* result_547;
char* __result200__;
result_546 = (void*)0;
result_547 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_546,0,sizeof(char*));
        __result198__ = gComeFunResultObject = __result_obj__ = result_546;
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result199__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    memset(&result_547,0,sizeof(char*));
    __result200__ = gComeFunResultObject = __result_obj__ = result_547;
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_549;
char* __result201__;
char* __result202__;
char* result_550;
char* __result203__;
result_549 = (void*)0;
result_550 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_549,0,sizeof(char*));
        __result201__ = gComeFunResultObject = __result_obj__ = result_549;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result202__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    memset(&result_550,0,sizeof(char*));
    __result203__ = gComeFunResultObject = __result_obj__ = result_550;
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_553;
unsigned int it_554;
struct sGenericsFun* __result204__;
struct sGenericsFun* __result205__;
struct sGenericsFun* __result206__;
struct sGenericsFun* __result207__;
    hash_553=string_get_hash_key(((char*)key))%self->size;
    it_554=hash_553;
    while((_Bool)1) {
        if(self->item_existance[it_554]) {
            if(string_equals(self->keys[it_554],key)) {
                __result204__ = gComeFunResultObject = __result_obj__ = self->items[it_554];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result204__;
            }
            it_554++;
            if(it_554>=self->size) {
                it_554=0;
            }
            else {
                if(it_554==hash_553) {
                    __result205__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result205__;
                }
            }
        }
        else {
            __result206__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result206__;
        }
    }
    __result207__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_573;
int i_574;
char* __result211__;
char* default_value_575;
char* __result212__;
default_value_575 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_573=self->head;
    i_574=0;
    while(it_573!=((void*)0)) {
        if(position==i_574) {
            __result211__ = gComeFunResultObject = __result_obj__ = it_573->item;
            gComeFunResultObject = (void*)0;
            return __result211__;
        }
        it_573=it_573->next;
        i_574++;
    }
    memset(&default_value_575,0,sizeof(char*));
    __result212__ = gComeFunResultObject = __result_obj__ = default_value_575;
    default_value_575 = come_decrement_ref_count2(default_value_575, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_606;
char* __dec_obj245;
char* last_code2_607;
char* __dec_obj246;
char* last_code3_608;
char* __dec_obj247;
struct sClass* current_stack_frame_struct_609;
struct sFun* finalizer_610;
void* __right_value795 = (void*)0;
char* real_fun_name_611;
void* __right_value796 = (void*)0;
char* user_real_fun_name_612;
struct sFun* user_finalizer_613;
void* __right_value797 = (void*)0;
struct sType* type2_614;
struct sClass* klass_615;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct buffer* source_616;
struct list$1tuple2$2charphsTypephph* o2_saved_625;
struct tuple2$2charphsTypeph* it_628;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_631;
struct sType* field_type_632;
char* p_634;
int sline_635;
char* sname_636;
char* head_637;
struct buffer* source3_638;
struct buffer* __dec_obj255;
void* __right_value800 = (void*)0;
char* __dec_obj256;
void* __right_value801 = (void*)0;
struct sBlock* block_639;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sType* result_type_640;
void* __right_value804 = (void*)0;
char* name_641;
void* __right_value805 = (void*)0;
struct sType* self_type_642;
struct sType* __list_values21___643[1];
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1sTypeph* param_types_644;
void* __right_value808 = (void*)0;
char* __list_values22___645[1];
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct list$1charph* param_names_646;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct list$1charph* param_default_parametors_647;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct buffer* header_buf_648;
void* __right_value815 = (void*)0;
int i_649;
struct sType* param_type_650;
char* param_name_651;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sFun* fun_652;
void* __right_value821 = (void*)0;
struct sFun* fun2_653;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value828 = (void*)0;
struct sNode* node_654;
struct buffer* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
char* __dec_obj264;
char* __dec_obj265;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct tuple2$2sFunpcharph* __result236__;
    last_code_606=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj245=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_607=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj246=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_608=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj247=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_609=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_610=((void*)0);
    real_fun_name_611=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_612=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_613=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_612);
    type2_614=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_614;
    klass_615=type->mClass;
    if(type->mPointerNum>0&&klass_615->mStruct) {
        source_616=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2054, "buffer"))));
        buffer_append_char(source_616,123);
        if(user_finalizer_613) {
            char source2_617[1024];
            memset(&source2_617, 0, sizeof(char)            *(1024)            );
            snprintf(source2_617,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_612);
            buffer_append_str(source_616,source2_617);
        }
        klass_615=map$2charphsClassphp_operator_load_element(info->classes,klass_615->mName);
        for(        o2_saved_625=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_615->mFields)),it_628=list$1tuple2$2charphsTypephph_begin((o2_saved_625));        !list$1tuple2$2charphsTypephph_end((o2_saved_625));        it_628=list$1tuple2$2charphsTypephph_next((o2_saved_625))        ){
            multiple_assign_var10=it_628;
            name_631=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_632=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_632->mClass->mName)&&type->mPointerNum==field_type_632->mPointerNum&&field_type_632->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_632->mHeap) {
                char source2_633[1024];
                memset(&source2_633, 0, sizeof(char)                *(1024)                );
                snprintf(source2_633,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_631,name_631,name_631,name_631);
                buffer_append_str(source_616,source2_633);
            }
            name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_625,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_616,125);
        p_634=info->p;
        sline_635=info->sline;
        sname_636=(char*)come_increment_ref_count(info->sname);
        head_637=info->head;
        source3_638=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj255=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_616);
        /* a*/come_call_finalizer3(__dec_obj255,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_616->buf;
        info->head=source_616->buf;
        __dec_obj256=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_611));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_639=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_640=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2100, "sType")),"void",(_Bool)0,info));
        name_641=(char*)come_increment_ref_count(string_clone(real_fun_name_611));
        self_type_642=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_642->mHeap=(_Bool)0;
        if(self_type_642->mPointerNum>1) {
            self_type_642->mPointerNum=1;
        }
        {__list_values21___643[0]=come_increment_ref_count(self_type_642);
}        param_types_644=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2107, "struct list$1sTypeph")),1,__list_values21___643));
        {__list_values22___645[0]=come_increment_ref_count(((char*)(__right_value808=__builtin_string("self"))));
}        param_names_646=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2108, "struct list$1charph")),1,__list_values22___645));
        __right_value808 = come_decrement_ref_count2(__right_value808, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_647=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2109, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_647,((void*)0));
        header_buf_648=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2112, "buffer"))));
        buffer_append_str(header_buf_648,((char*)(__right_value815=make_come_type_name_string(result_type_640,info))));
        __right_value815 = come_decrement_ref_count2(__right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_648," ");
        buffer_append_str(header_buf_648,real_fun_name_611);
        buffer_append_str(header_buf_648,"(");
        for(        i_649=0;        i_649<list$1sTypeph_length(param_types_644);        i_649++        ){
            param_type_650=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_644,i_649), "05function.c", 2120, 5));
            param_name_651=((char*)come_null_check(list$1charphp_operator_load_element(param_names_646,i_649), "05function.c", 2121, 6));
            buffer_append_str(header_buf_648,((char*)(__right_value816=make_come_type_name_string(param_type_650,info))));
            __right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_648," ");
            buffer_append_str(header_buf_648,param_name_651);
            if(i_649!=list$1sTypeph_length(param_types_644)-1) {
                buffer_append_str(header_buf_648,",");
            }
        }
        buffer_append_str(header_buf_648,")");
        result_type_640->mStatic=(_Bool)0;
        fun_652=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2135, "sFun")),(char*)come_increment_ref_count(name_641),(struct sType*)come_increment_ref_count(result_type_640),(struct list$1sTypeph*)come_increment_ref_count(param_types_644),(struct list$1charph*)come_increment_ref_count(param_names_646),(struct list$1charph*)come_increment_ref_count(param_default_parametors_647),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_639),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_648)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_653=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value821=__builtin_string(fun_name))));
        __right_value821 = come_decrement_ref_count2(__right_value821, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_653==((void*)0)||fun2_653->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_641)),(struct sFun*)come_increment_ref_count(fun_652));
        }
        finalizer_610=fun_652;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2151, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value824=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2151, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_652),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_654=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value824,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_654,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj261=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_638);
        /* a*/come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_634;
        info->head=head_637;
        info->sline=sline_635;
        __dec_obj262=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_636);
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_616,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_636 = come_decrement_ref_count2(sname_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_639,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_644,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_646,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_647,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_652,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_609;
    __dec_obj263=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_606);
    __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj264=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_607);
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj265=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_608);
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result236__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value830=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2171, "struct tuple2$2sFunpcharph")),finalizer_610,(char*)come_increment_ref_count(real_fun_name_611))));
    last_code_606 = come_decrement_ref_count2(last_code_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_607 = come_decrement_ref_count2(last_code2_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_608 = come_decrement_ref_count2(last_code3_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_611 = come_decrement_ref_count2(real_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_612 = come_decrement_ref_count2(user_real_fun_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_614,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value830,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_618;
unsigned int hash_619;
unsigned int it_620;
struct sClass* __result223__;
struct sClass* __result224__;
struct sClass* __result225__;
struct sClass* __result226__;
default_value_618 = (void*)0;
    memset(&default_value_618,0,sizeof(struct sClass*));
    hash_619=string_get_hash_key(((char*)key))%self->size;
    it_620=hash_619;
    while((_Bool)1) {
        if(self->item_existance[it_620]) {
            if(string_equals(self->keys[it_620],key)) {
                __result223__ = gComeFunResultObject = __result_obj__ = self->items[it_620];
                /*i*/come_call_finalizer3(default_value_618,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
            it_620++;
            if(it_620>=self->size) {
                it_620=0;
            }
            else {
                if(it_620==hash_619) {
                    __result224__ = gComeFunResultObject = __result_obj__ = default_value_618;
                    /*i*/come_call_finalizer3(default_value_618,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result224__;
                }
            }
        }
        else {
            __result225__ = gComeFunResultObject = __result_obj__ = default_value_618;
            /*i*/come_call_finalizer3(default_value_618,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result225__;
        }
    }
    __result226__ = gComeFunResultObject = __result_obj__ = default_value_618;
    /*i*/come_call_finalizer3(default_value_618,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj248;
struct list$1tuple2$2charphsTypephph* __dec_obj249;
char* __dec_obj253;
char* __dec_obj254;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj248=self->mName;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj249=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj249,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj253=self->mDeclareSName;
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj254=self->mParentClassName;
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_621;
struct list_item$1tuple2$2charphsTypephph* prev_it_622;
    it_621=self->head;
    while(it_621!=((void*)0)) {
        prev_it_622=it_621;
        it_621=it_621->next;
        /*i*/come_call_finalizer3(prev_it_622,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj250;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj250=self->item;
            /* a*/come_call_finalizer3(__dec_obj250,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj251;
struct sType* __dec_obj252;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj251=self->v1;
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj252=self->v2;
            /* a*/come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_623;
struct list_item$1tuple2$2charphsTypephph* prev_it_624;
    it_623=self->head;
    while(it_623!=((void*)0)) {
        prev_it_624=it_623;
        it_623=it_623->next;
        /*i*/come_call_finalizer3(prev_it_624,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_626;
struct tuple2$2charphsTypeph* __result227__;
struct tuple2$2charphsTypeph* __result228__;
struct tuple2$2charphsTypeph* result_627;
struct tuple2$2charphsTypeph* __result229__;
result_626 = (void*)0;
result_627 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_626,0,sizeof(struct tuple2$2charphsTypeph*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_626;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->head;
    if(self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_627,0,sizeof(struct tuple2$2charphsTypeph*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_627;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_629;
struct tuple2$2charphsTypeph* __result230__;
struct tuple2$2charphsTypeph* __result231__;
struct tuple2$2charphsTypeph* result_630;
struct tuple2$2charphsTypeph* __result232__;
result_629 = (void*)0;
result_630 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_629,0,sizeof(struct tuple2$2charphsTypeph*));
        __result230__ = gComeFunResultObject = __result_obj__ = result_629;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result231__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    memset(&result_630,0,sizeof(struct tuple2$2charphsTypeph*));
    __result232__ = gComeFunResultObject = __result_obj__ = result_630;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj266;
struct tuple2$2sFunpcharph* __result235__;
    self->v1=v1;
    __dec_obj266=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj267;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj267=self->v2;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_656;
char* __dec_obj268;
char* last_code2_657;
char* __dec_obj269;
char* last_code3_658;
char* __dec_obj270;
struct sClass* current_stack_frame_struct_659;
struct sFun* finalizer_660;
void* __right_value831 = (void*)0;
char* real_fun_name_661;
void* __right_value832 = (void*)0;
struct sType* type2_662;
struct sClass* klass_663;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct buffer* source_664;
struct list$1tuple2$2charphsTypephph* o2_saved_665;
struct tuple2$2charphsTypeph* it_666;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_667;
struct sType* field_type_668;
char* p_670;
int sline_671;
char* sname_672;
char* head_673;
struct buffer* source3_674;
struct buffer* __dec_obj271;
void* __right_value835 = (void*)0;
char* __dec_obj272;
void* __right_value836 = (void*)0;
struct sBlock* block_675;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sType* result_type_676;
void* __right_value839 = (void*)0;
char* name_677;
void* __right_value840 = (void*)0;
struct sType* self_type_678;
struct sType* __list_values23___679[1];
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1sTypeph* param_types_680;
void* __right_value843 = (void*)0;
char* __list_values24___681[1];
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1charph* param_names_682;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1charph* param_default_parametors_683;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct buffer* header_buf_684;
void* __right_value850 = (void*)0;
int i_685;
struct sType* param_type_686;
char* param_name_687;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sFun* fun_688;
void* __right_value856 = (void*)0;
struct sFun* fun2_689;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value863 = (void*)0;
struct sNode* node_690;
struct buffer* __dec_obj277;
char* __dec_obj278;
char* __dec_obj279;
char* __dec_obj280;
char* __dec_obj281;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct tuple2$2sFunpcharph* __result239__;
    last_code_656=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj268=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_657=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj269=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_658=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj270=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_659=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_660=((void*)0);
    real_fun_name_661=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_662=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_662;
    klass_663=type->mClass;
    if(type->mPointerNum>0&&klass_663->mStruct) {
        source_664=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2198, "buffer"))));
        buffer_append_char(source_664,123);
        klass_663=map$2charphsClassphp_operator_load_element(info->classes,klass_663->mName);
        for(        o2_saved_665=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_663->mFields)),it_666=list$1tuple2$2charphsTypephph_begin((o2_saved_665));        !list$1tuple2$2charphsTypephph_end((o2_saved_665));        it_666=list$1tuple2$2charphsTypephph_next((o2_saved_665))        ){
            multiple_assign_var11=it_666;
            name_667=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_668=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_668->mClass->mName)&&type->mPointerNum==field_type_668->mPointerNum&&field_type_668->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_668->mHeap) {
                char source2_669[1024];
                memset(&source2_669, 0, sizeof(char)                *(1024)                );
                snprintf(source2_669,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_667,name_667,name_667,name_667);
                buffer_append_str(source_664,source2_669);
            }
            name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_665,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_664,125);
        p_670=info->p;
        sline_671=info->sline;
        sname_672=(char*)come_increment_ref_count(info->sname);
        head_673=info->head;
        source3_674=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj271=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_664);
        /* a*/come_call_finalizer3(__dec_obj271,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_664->buf;
        info->head=source_664->buf;
        __dec_obj272=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_661));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_675=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_676=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2237, "sType")),"void",(_Bool)0,info));
        name_677=(char*)come_increment_ref_count(string_clone(real_fun_name_661));
        self_type_678=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_678->mHeap=(_Bool)0;
        if(self_type_678->mPointerNum>1) {
            self_type_678->mPointerNum=1;
        }
        {__list_values23___679[0]=come_increment_ref_count(self_type_678);
}        param_types_680=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2244, "struct list$1sTypeph")),1,__list_values23___679));
        {__list_values24___681[0]=come_increment_ref_count(((char*)(__right_value843=__builtin_string("self"))));
}        param_names_682=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2245, "struct list$1charph")),1,__list_values24___681));
        __right_value843 = come_decrement_ref_count2(__right_value843, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_683=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2246, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_683,((void*)0));
        header_buf_684=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2249, "buffer"))));
        buffer_append_str(header_buf_684,((char*)(__right_value850=make_come_type_name_string(result_type_676,info))));
        __right_value850 = come_decrement_ref_count2(__right_value850, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_684," ");
        buffer_append_str(header_buf_684,real_fun_name_661);
        buffer_append_str(header_buf_684,"(");
        for(        i_685=0;        i_685<list$1sTypeph_length(param_types_680);        i_685++        ){
            param_type_686=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_680,i_685), "05function.c", 2257, 7));
            param_name_687=((char*)come_null_check(list$1charphp_operator_load_element(param_names_682,i_685), "05function.c", 2258, 8));
            buffer_append_str(header_buf_684,((char*)(__right_value851=make_come_type_name_string(param_type_686,info))));
            __right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_684," ");
            buffer_append_str(header_buf_684,param_name_687);
            if(i_685!=list$1sTypeph_length(param_types_680)-1) {
                buffer_append_str(header_buf_684,",");
            }
        }
        buffer_append_str(header_buf_684,")");
        result_type_676->mStatic=(_Bool)0;
        fun_688=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2272, "sFun")),(char*)come_increment_ref_count(name_677),(struct sType*)come_increment_ref_count(result_type_676),(struct list$1sTypeph*)come_increment_ref_count(param_types_680),(struct list$1charph*)come_increment_ref_count(param_names_682),(struct list$1charph*)come_increment_ref_count(param_default_parametors_683),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_675),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_684)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_689=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value856=__builtin_string(fun_name))));
        __right_value856 = come_decrement_ref_count2(__right_value856, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_689==((void*)0)||fun2_689->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_677)),(struct sFun*)come_increment_ref_count(fun_688));
        }
        finalizer_660=fun_688;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2288, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value859=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2288, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_688),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_690=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value859,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_690,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj277=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_674);
        /* a*/come_call_finalizer3(__dec_obj277,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_670;
        info->head=head_673;
        info->sline=sline_671;
        __dec_obj278=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_672);
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_664,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_672 = come_decrement_ref_count2(sname_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_674,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_675,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_677 = come_decrement_ref_count2(name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_680,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_682,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_688,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_659;
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_656);
    __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_657);
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_658);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result239__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value865=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2308, "struct tuple2$2sFunpcharph")),finalizer_660,(char*)come_increment_ref_count(real_fun_name_661))));
    last_code_656 = come_decrement_ref_count2(last_code_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_657 = come_decrement_ref_count2(last_code2_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_658 = come_decrement_ref_count2(last_code3_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_662,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value865,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_692;
char* __dec_obj282;
char* last_code2_693;
char* __dec_obj283;
char* last_code3_694;
char* __dec_obj284;
struct sClass* current_stack_frame_struct_695;
struct sFun* equaler_696;
void* __right_value866 = (void*)0;
char* real_fun_name_697;
void* __right_value867 = (void*)0;
struct sType* type2_698;
struct sClass* klass_699;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct buffer* source_700;
char* name_701;
struct list$1tuple2$2charphsTypephph* o2_saved_703;
struct tuple2$2charphsTypeph* it_704;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_705;
struct sType* field_type_706;
char* p_708;
int sline_709;
char* sname_710;
char* head_711;
struct buffer* source3_712;
struct buffer* __dec_obj285;
void* __right_value870 = (void*)0;
char* __dec_obj286;
void* __right_value871 = (void*)0;
struct sBlock* block_713;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct sType* result_type_714;
void* __right_value874 = (void*)0;
char* name_715;
void* __right_value875 = (void*)0;
struct sType* left_type_716;
void* __right_value876 = (void*)0;
struct sType* right_type_717;
struct sType* __list_values25___718[2];
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1sTypeph* param_types_719;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
char* __list_values26___720[2];
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct list$1charph* param_names_721;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1charph* param_default_parametors_722;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct buffer* header_buf_723;
void* __right_value887 = (void*)0;
int i_724;
struct sType* param_type_725;
char* param_name_726;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sFun* fun_727;
void* __right_value893 = (void*)0;
struct sFun* fun2_728;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value900 = (void*)0;
struct sNode* node_729;
struct buffer* __dec_obj291;
char* __dec_obj292;
char* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct tuple2$2sFunpcharph* __result242__;
    last_code_692=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj282=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_693=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj283=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_694=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj284=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_695=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_696=((void*)0);
    real_fun_name_697=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_698=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_698;
    klass_699=type->mClass;
    if(type->mPointerNum>0&&!klass_699->mNumber) {
        source_700=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2333, "buffer"))));
        buffer_append_char(source_700,123);
        if(klass_699->mProtocol) {
            name_701="_protocol_obj";
            char source2_702[1024];
            memset(&source2_702, 0, sizeof(char)            *(1024)            );
            snprintf(source2_702,1024,"return left.%s.equals(right.%s);\n",name_701,name_701);
            buffer_append_str(source_700,source2_702);
        }
        else {
            klass_699=map$2charphsClassphp_operator_load_element(info->classes,klass_699->mName);
            for(            o2_saved_703=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_699->mFields)),it_704=list$1tuple2$2charphsTypephph_begin((o2_saved_703));            !list$1tuple2$2charphsTypephph_end((o2_saved_703));            it_704=list$1tuple2$2charphsTypephph_next((o2_saved_703))            ){
                multiple_assign_var12=it_704;
                name_705=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_706=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_706->mClass->mName)&&type->mPointerNum==field_type_706->mPointerNum&&field_type_706->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_707[1024];
                memset(&source2_707, 0, sizeof(char)                *(1024)                );
                snprintf(source2_707,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_705,name_705);
                buffer_append_str(source_700,source2_707);
                name_705 = come_decrement_ref_count2(name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_706,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_703,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_700,"return true;");
        buffer_append_char(source_700,125);
        p_708=info->p;
        sline_709=info->sline;
        sname_710=(char*)come_increment_ref_count(info->sname);
        head_711=info->head;
        source3_712=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj285=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_700);
        /* a*/come_call_finalizer3(__dec_obj285,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_700->buf;
        info->head=source_700->buf;
        __dec_obj286=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_697));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_713=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_714=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2379, "sType")),"bool",(_Bool)0,info));
        name_715=(char*)come_increment_ref_count(string_clone(real_fun_name_697));
        left_type_716=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_716->mHeap=(_Bool)0;
        right_type_717=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_717->mHeap=(_Bool)0;
        {__list_values25___718[0]=come_increment_ref_count(left_type_716);
__list_values25___718[1]=come_increment_ref_count(right_type_717);
}        param_types_719=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2385, "struct list$1sTypeph")),2,__list_values25___718));
        {__list_values26___720[0]=come_increment_ref_count(((char*)(__right_value879=__builtin_string("left"))));
__list_values26___720[1]=come_increment_ref_count(((char*)(__right_value880=__builtin_string("right"))));
}        param_names_721=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2386, "struct list$1charph")),2,__list_values26___720));
        __right_value879 = come_decrement_ref_count2(__right_value879, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value880 = come_decrement_ref_count2(__right_value880, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_722=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2387, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_722,((void*)0));
        list$1charph_push_back(param_default_parametors_722,((void*)0));
        header_buf_723=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2391, "buffer"))));
        buffer_append_str(header_buf_723,((char*)(__right_value887=make_come_type_name_string(result_type_714,info))));
        __right_value887 = come_decrement_ref_count2(__right_value887, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_723," ");
        buffer_append_str(header_buf_723,real_fun_name_697);
        buffer_append_str(header_buf_723,"(");
        for(        i_724=0;        i_724<list$1sTypeph_length(param_types_719);        i_724++        ){
            param_type_725=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_719,i_724), "05function.c", 2399, 9));
            param_name_726=((char*)come_null_check(list$1charphp_operator_load_element(param_names_721,i_724), "05function.c", 2400, 10));
            buffer_append_str(header_buf_723,((char*)(__right_value888=make_come_type_name_string(param_type_725,info))));
            __right_value888 = come_decrement_ref_count2(__right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_723," ");
            buffer_append_str(header_buf_723,param_name_726);
            if(i_724!=list$1sTypeph_length(param_types_719)-1) {
                buffer_append_str(header_buf_723,",");
            }
        }
        buffer_append_str(header_buf_723,")");
        result_type_714->mStatic=(_Bool)0;
        fun_727=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2414, "sFun")),(char*)come_increment_ref_count(name_715),(struct sType*)come_increment_ref_count(result_type_714),(struct list$1sTypeph*)come_increment_ref_count(param_types_719),(struct list$1charph*)come_increment_ref_count(param_names_721),(struct list$1charph*)come_increment_ref_count(param_default_parametors_722),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_713),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_723)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_728=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value893=__builtin_string(fun_name))));
        __right_value893 = come_decrement_ref_count2(__right_value893, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_728==((void*)0)||fun2_728->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_715)),(struct sFun*)come_increment_ref_count(fun_727));
        }
        equaler_696=fun_727;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2430, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value896=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2430, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_727),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_729=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value896,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_729,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj291=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_712);
        /* a*/come_call_finalizer3(__dec_obj291,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_708;
        info->head=head_711;
        info->sline=sline_709;
        __dec_obj292=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_710);
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_700,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_710 = come_decrement_ref_count2(sname_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_712,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_713,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_715 = come_decrement_ref_count2(name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_716,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_719,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_721,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_722,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_727,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_729) { node_729 = come_decrement_ref_count2(node_729, ((struct sNode*)node_729)->finalize, ((struct sNode*)node_729)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_695;
    __dec_obj293=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_692);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj294=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_693);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj295=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_694);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result242__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value902=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2450, "struct tuple2$2sFunpcharph")),equaler_696,(char*)come_increment_ref_count(real_fun_name_697))));
    last_code_692 = come_decrement_ref_count2(last_code_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_693 = come_decrement_ref_count2(last_code2_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_694 = come_decrement_ref_count2(last_code3_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_697 = come_decrement_ref_count2(real_fun_name_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_698,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value902,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_731;
char* __dec_obj296;
char* last_code2_732;
char* __dec_obj297;
char* last_code3_733;
char* __dec_obj298;
struct sClass* current_stack_frame_struct_734;
struct sFun* equaler_735;
void* __right_value903 = (void*)0;
char* real_fun_name_736;
void* __right_value904 = (void*)0;
struct sType* type2_737;
struct sClass* klass_738;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct buffer* source_739;
char* name_740;
int i_743;
struct list$1tuple2$2charphsTypephph* o2_saved_744;
struct tuple2$2charphsTypeph* it_745;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_746;
struct sType* field_type_747;
char* p_751;
int sline_752;
char* sname_753;
char* head_754;
struct buffer* source3_755;
struct buffer* __dec_obj299;
void* __right_value907 = (void*)0;
char* __dec_obj300;
void* __right_value908 = (void*)0;
struct sBlock* block_756;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sType* result_type_757;
void* __right_value911 = (void*)0;
char* name_758;
void* __right_value912 = (void*)0;
struct sType* left_type_759;
void* __right_value913 = (void*)0;
struct sType* right_type_760;
struct sType* __list_values27___761[2];
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct list$1sTypeph* param_types_762;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
char* __list_values28___763[2];
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct list$1charph* param_names_764;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct list$1charph* param_default_parametors_765;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct buffer* header_buf_766;
void* __right_value924 = (void*)0;
int i_767;
struct sType* param_type_768;
char* param_name_769;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sFun* fun_770;
void* __right_value930 = (void*)0;
struct sFun* fun2_771;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value937 = (void*)0;
struct sNode* node_772;
struct buffer* __dec_obj305;
char* __dec_obj306;
char* __dec_obj307;
char* __dec_obj308;
char* __dec_obj309;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct tuple2$2sFunpcharph* __result245__;
    last_code_731=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_732=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_733=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj298=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_734=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_735=((void*)0);
    real_fun_name_736=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_737=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_737;
    klass_738=type->mClass;
    if(type->mPointerNum>0&&!klass_738->mNumber) {
        source_739=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2475, "buffer"))));
        buffer_append_char(source_739,123);
        if(klass_738->mProtocol) {
            name_740="_protocol_obj";
            char source2_741[1024];
            memset(&source2_741, 0, sizeof(char)            *(1024)            );
            snprintf(source2_741,1024,"return !left.%s.equals(right.%s);\n",name_740,name_740);
            buffer_append_str(source_739,source2_741);
        }
        else {
            char source2_742[1024];
            memset(&source2_742, 0, sizeof(char)            *(1024)            );
            snprintf(source2_742,1024,"return !(");
            buffer_append_str(source_739,source2_742);
            i_743=0;
            klass_738=map$2charphsClassphp_operator_load_element(info->classes,klass_738->mName);
            for(            o2_saved_744=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_738->mFields)),it_745=list$1tuple2$2charphsTypephph_begin((o2_saved_744));            !list$1tuple2$2charphsTypephph_end((o2_saved_744));            it_745=list$1tuple2$2charphsTypephph_next((o2_saved_744))            ){
                multiple_assign_var13=it_745;
                name_746=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_747=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_747->mClass->mName)&&type->mPointerNum==field_type_747->mPointerNum&&field_type_747->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_748[1024];
                memset(&source2_748, 0, sizeof(char)                *(1024)                );
                snprintf(source2_748,1024,"left.%s.equals(right.%s)",name_746,name_746);
                buffer_append_str(source_739,source2_748);
                if(i_743==list$1tuple2$2charphsTypephph_length(klass_738->mFields)-1) {
                    char source2_749[1024];
                    memset(&source2_749, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_749,1024,");");
                    buffer_append_str(source_739,source2_749);
                }
                else {
                    char source2_750[1024];
                    memset(&source2_750, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_750,1024," && ");
                    buffer_append_str(source_739,source2_750);
                }
                i_743++;
                name_746 = come_decrement_ref_count2(name_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_744,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_739,125);
        p_751=info->p;
        sline_752=info->sline;
        sname_753=(char*)come_increment_ref_count(info->sname);
        head_754=info->head;
        source3_755=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_739);
        /* a*/come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_739->buf;
        info->head=source_739->buf;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_736));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_756=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_757=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2538, "sType")),"bool",(_Bool)0,info));
        name_758=(char*)come_increment_ref_count(string_clone(real_fun_name_736));
        left_type_759=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_759->mHeap=(_Bool)0;
        right_type_760=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_760->mHeap=(_Bool)0;
        {__list_values27___761[0]=come_increment_ref_count(left_type_759);
__list_values27___761[1]=come_increment_ref_count(right_type_760);
}        param_types_762=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2544, "struct list$1sTypeph")),2,__list_values27___761));
        {__list_values28___763[0]=come_increment_ref_count(((char*)(__right_value916=__builtin_string("left"))));
__list_values28___763[1]=come_increment_ref_count(((char*)(__right_value917=__builtin_string("right"))));
}        param_names_764=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2545, "struct list$1charph")),2,__list_values28___763));
        __right_value916 = come_decrement_ref_count2(__right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value917 = come_decrement_ref_count2(__right_value917, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_765=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2546, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_765,((void*)0));
        list$1charph_push_back(param_default_parametors_765,((void*)0));
        header_buf_766=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2550, "buffer"))));
        buffer_append_str(header_buf_766,((char*)(__right_value924=make_come_type_name_string(result_type_757,info))));
        __right_value924 = come_decrement_ref_count2(__right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_766," ");
        buffer_append_str(header_buf_766,real_fun_name_736);
        buffer_append_str(header_buf_766,"(");
        for(        i_767=0;        i_767<list$1sTypeph_length(param_types_762);        i_767++        ){
            param_type_768=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_762,i_767), "05function.c", 2558, 11));
            param_name_769=((char*)come_null_check(list$1charphp_operator_load_element(param_names_764,i_767), "05function.c", 2559, 12));
            buffer_append_str(header_buf_766,((char*)(__right_value925=make_come_type_name_string(param_type_768,info))));
            __right_value925 = come_decrement_ref_count2(__right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_766," ");
            buffer_append_str(header_buf_766,param_name_769);
            if(i_767!=list$1sTypeph_length(param_types_762)-1) {
                buffer_append_str(header_buf_766,",");
            }
        }
        buffer_append_str(header_buf_766,")");
        result_type_757->mStatic=(_Bool)0;
        fun_770=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2573, "sFun")),(char*)come_increment_ref_count(name_758),(struct sType*)come_increment_ref_count(result_type_757),(struct list$1sTypeph*)come_increment_ref_count(param_types_762),(struct list$1charph*)come_increment_ref_count(param_names_764),(struct list$1charph*)come_increment_ref_count(param_default_parametors_765),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_756),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_766)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_771=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value930=__builtin_string(fun_name))));
        __right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_771==((void*)0)||fun2_771->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_758)),(struct sFun*)come_increment_ref_count(fun_770));
        }
        equaler_735=fun_770;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2589, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value933=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2589, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_770),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_772=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value933,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_772,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj305=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_755);
        /* a*/come_call_finalizer3(__dec_obj305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_751;
        info->head=head_754;
        info->sline=sline_752;
        __dec_obj306=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_753);
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_739,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_753 = come_decrement_ref_count2(sname_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_755,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_756,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_757,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_758 = come_decrement_ref_count2(name_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_759,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_760,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_762,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_764,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_765,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_766,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_770,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_734;
    __dec_obj307=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_731);
    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj308=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_732);
    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj309=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_733);
    __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value939=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2609, "struct tuple2$2sFunpcharph")),equaler_735,(char*)come_increment_ref_count(real_fun_name_736))));
    last_code_731 = come_decrement_ref_count2(last_code_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_732 = come_decrement_ref_count2(last_code2_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_733 = come_decrement_ref_count2(last_code3_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_736 = come_decrement_ref_count2(real_fun_name_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_737,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value939,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_774;
char* __dec_obj310;
char* last_code2_775;
char* __dec_obj311;
char* last_code3_776;
char* __dec_obj312;
struct sClass* current_stack_frame_struct_777;
struct sFun* equaler_778;
void* __right_value940 = (void*)0;
char* real_fun_name_779;
void* __right_value941 = (void*)0;
struct sType* type2_780;
struct sClass* klass_781;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct buffer* source_782;
char* name_783;
struct list$1tuple2$2charphsTypephph* o2_saved_785;
struct tuple2$2charphsTypeph* it_786;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_787;
struct sType* field_type_788;
char* p_790;
int sline_791;
char* sname_792;
char* head_793;
struct buffer* source3_794;
struct buffer* __dec_obj313;
void* __right_value944 = (void*)0;
char* __dec_obj314;
void* __right_value945 = (void*)0;
struct sBlock* block_795;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sType* result_type_796;
void* __right_value948 = (void*)0;
char* name_797;
void* __right_value949 = (void*)0;
struct sType* left_type_798;
void* __right_value950 = (void*)0;
struct sType* right_type_799;
struct sType* __list_values29___800[2];
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct list$1sTypeph* param_types_801;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
char* __list_values30___802[2];
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct list$1charph* param_names_803;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct list$1charph* param_default_parametors_804;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct buffer* header_buf_805;
void* __right_value961 = (void*)0;
int i_806;
struct sType* param_type_807;
char* param_name_808;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sFun* fun_809;
void* __right_value967 = (void*)0;
struct sFun* fun2_810;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value974 = (void*)0;
struct sNode* node_811;
struct buffer* __dec_obj319;
char* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
char* __dec_obj323;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct tuple2$2sFunpcharph* __result248__;
    last_code_774=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_775=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_776=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj312=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_777=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_778=((void*)0);
    real_fun_name_779=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_780=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_780;
    klass_781=type->mClass;
    if(type->mPointerNum>0&&!klass_781->mNumber) {
        source_782=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2634, "buffer"))));
        buffer_append_char(source_782,123);
        if(klass_781->mProtocol) {
            name_783="_protocol_obj";
            char source2_784[1024];
            memset(&source2_784, 0, sizeof(char)            *(1024)            );
            snprintf(source2_784,1024,"return left.%s.equals(right.%s);\n",name_783,name_783);
            buffer_append_str(source_782,source2_784);
        }
        else {
            klass_781=map$2charphsClassphp_operator_load_element(info->classes,klass_781->mName);
            for(            o2_saved_785=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_781->mFields)),it_786=list$1tuple2$2charphsTypephph_begin((o2_saved_785));            !list$1tuple2$2charphsTypephph_end((o2_saved_785));            it_786=list$1tuple2$2charphsTypephph_next((o2_saved_785))            ){
                multiple_assign_var14=it_786;
                name_787=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_788=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_788->mClass->mName)&&type->mPointerNum==field_type_788->mPointerNum&&field_type_788->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_789[1024];
                memset(&source2_789, 0, sizeof(char)                *(1024)                );
                snprintf(source2_789,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_787,name_787);
                buffer_append_str(source_782,source2_789);
                name_787 = come_decrement_ref_count2(name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_788,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_785,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_782,"return true;\n");
        buffer_append_char(source_782,125);
        p_790=info->p;
        sline_791=info->sline;
        sname_792=(char*)come_increment_ref_count(info->sname);
        head_793=info->head;
        source3_794=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj313=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_782);
        /* a*/come_call_finalizer3(__dec_obj313,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_782->buf;
        info->head=source_782->buf;
        __dec_obj314=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_779));
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_795=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_796=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2680, "sType")),"bool",(_Bool)0,info));
        name_797=(char*)come_increment_ref_count(string_clone(real_fun_name_779));
        left_type_798=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_798->mHeap=(_Bool)0;
        right_type_799=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_799->mHeap=(_Bool)0;
        {__list_values29___800[0]=come_increment_ref_count(left_type_798);
__list_values29___800[1]=come_increment_ref_count(right_type_799);
}        param_types_801=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2686, "struct list$1sTypeph")),2,__list_values29___800));
        {__list_values30___802[0]=come_increment_ref_count(((char*)(__right_value953=__builtin_string("left"))));
__list_values30___802[1]=come_increment_ref_count(((char*)(__right_value954=__builtin_string("right"))));
}        param_names_803=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2687, "struct list$1charph")),2,__list_values30___802));
        __right_value953 = come_decrement_ref_count2(__right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_804=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2688, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_804,((void*)0));
        list$1charph_push_back(param_default_parametors_804,((void*)0));
        header_buf_805=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2692, "buffer"))));
        buffer_append_str(header_buf_805,((char*)(__right_value961=make_come_type_name_string(result_type_796,info))));
        __right_value961 = come_decrement_ref_count2(__right_value961, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_805," ");
        buffer_append_str(header_buf_805,real_fun_name_779);
        buffer_append_str(header_buf_805,"(");
        for(        i_806=0;        i_806<list$1sTypeph_length(param_types_801);        i_806++        ){
            param_type_807=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_801,i_806), "05function.c", 2700, 13));
            param_name_808=((char*)come_null_check(list$1charphp_operator_load_element(param_names_803,i_806), "05function.c", 2701, 14));
            buffer_append_str(header_buf_805,((char*)(__right_value962=make_come_type_name_string(param_type_807,info))));
            __right_value962 = come_decrement_ref_count2(__right_value962, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_805," ");
            buffer_append_str(header_buf_805,param_name_808);
            if(i_806!=list$1sTypeph_length(param_types_801)-1) {
                buffer_append_str(header_buf_805,",");
            }
        }
        buffer_append_str(header_buf_805,")");
        result_type_796->mStatic=(_Bool)0;
        fun_809=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2715, "sFun")),(char*)come_increment_ref_count(name_797),(struct sType*)come_increment_ref_count(result_type_796),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_803),(struct list$1charph*)come_increment_ref_count(param_default_parametors_804),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_795),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_805)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_810=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value967=__builtin_string(fun_name))));
        __right_value967 = come_decrement_ref_count2(__right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_810==((void*)0)||fun2_810->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_797)),(struct sFun*)come_increment_ref_count(fun_809));
        }
        equaler_778=fun_809;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2731, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value970=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2731, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_809),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_811=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value970,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_811,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj319=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_794);
        /* a*/come_call_finalizer3(__dec_obj319,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_790;
        info->head=head_793;
        info->sline=sline_791;
        __dec_obj320=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_792);
        __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_792 = come_decrement_ref_count2(sname_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_794,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_795,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_796,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_797 = come_decrement_ref_count2(name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_798,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_799,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_804,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_805,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_809,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_811) { node_811 = come_decrement_ref_count2(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_777;
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_774);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_775);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj323=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_776);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result248__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value976=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2751, "struct tuple2$2sFunpcharph")),equaler_778,(char*)come_increment_ref_count(real_fun_name_779))));
    last_code_774 = come_decrement_ref_count2(last_code_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_775 = come_decrement_ref_count2(last_code2_775, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_776 = come_decrement_ref_count2(last_code3_776, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_779 = come_decrement_ref_count2(real_fun_name_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_780,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value976,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_813;
char* __dec_obj324;
char* last_code2_814;
char* __dec_obj325;
char* last_code3_815;
char* __dec_obj326;
struct sClass* current_stack_frame_struct_816;
struct sFun* cloner_817;
void* __right_value977 = (void*)0;
char* real_fun_name_818;
void* __right_value978 = (void*)0;
struct sType* type2_819;
struct sClass* klass_820;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct buffer* source_821;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
char* name_822;
struct list$1tuple2$2charphsTypephph* o2_saved_824;
struct tuple2$2charphsTypeph* it_825;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_826;
struct sType* field_type_827;
struct list$1tuple2$2charphsTypephph* o2_saved_830;
struct tuple2$2charphsTypeph* it_831;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_832;
struct sType* field_type_833;
void* __right_value983 = (void*)0;
char* p_837;
int sline_838;
char* sname_839;
struct buffer* source3_840;
char* head_841;
struct buffer* __dec_obj327;
void* __right_value984 = (void*)0;
char* __dec_obj328;
void* __right_value985 = (void*)0;
struct sBlock* block_842;
void* __right_value986 = (void*)0;
struct sType* result_type_843;
void* __right_value987 = (void*)0;
char* name_844;
void* __right_value988 = (void*)0;
struct sType* self_type_845;
struct sType* __list_values31___846[1];
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct list$1sTypeph* param_types_847;
void* __right_value991 = (void*)0;
char* __list_values32___848[1];
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct list$1charph* param_names_849;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct list$1charph* param_default_parametors_850;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct buffer* header_buf_851;
void* __right_value998 = (void*)0;
int i_852;
struct sType* param_type_853;
char* param_name_854;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sFun* fun_855;
void* __right_value1004 = (void*)0;
struct sFun* fun2_856;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1011 = (void*)0;
struct sNode* node_857;
char* __dec_obj333;
struct buffer* __dec_obj334;
char* __dec_obj335;
char* __dec_obj336;
char* __dec_obj337;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct tuple2$2sFunpcharph* __result251__;
    last_code_813=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj324=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_814=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj325=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_815=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj326=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_816=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_817=((void*)0);
    real_fun_name_818=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_819=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_819;
    klass_820=type->mClass;
    if(type->mPointerNum>0&&!klass_820->mNumber) {
        source_821=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2776, "buffer"))));
        buffer_append_str(source_821,"{\n");
        buffer_append_str(source_821,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_821,((char*)(__right_value982=xsprintf("var result = new %s;\n",((char*)(__right_value981=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_820->mProtocol) {
            name_822="_protocol_obj";
            char source2_823[1024];
            memset(&source2_823, 0, sizeof(char)            *(1024)            );
            snprintf(source2_823,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_821,source2_823);
            klass_820=map$2charphsClassphp_operator_load_element(info->classes,klass_820->mName);
            for(            o2_saved_824=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_820->mFields)),it_825=list$1tuple2$2charphsTypephph_begin((o2_saved_824));            !list$1tuple2$2charphsTypephph_end((o2_saved_824));            it_825=list$1tuple2$2charphsTypephph_next((o2_saved_824))            ){
                multiple_assign_var15=it_825;
                name_826=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_827=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_827->mClass->mName)&&type->mPointerNum==field_type_827->mPointerNum&&field_type_827->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_826,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_827->mArrayNum)>0) {
                        char source2_828[1024];
                        memset(&source2_828, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_828,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_826,name_826,name_826);
                        buffer_append_str(source_821,source2_828);
                    }
                    else {
                        char source2_829[1024];
                        memset(&source2_829, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_829,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_826,name_826);
                        buffer_append_str(source_821,source2_829);
                    }
                }
                name_826 = come_decrement_ref_count2(name_826, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_827,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_824,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_820=map$2charphsClassphp_operator_load_element(info->classes,klass_820->mName);
            for(            o2_saved_830=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_820->mFields)),it_831=list$1tuple2$2charphsTypephph_begin((o2_saved_830));            !list$1tuple2$2charphsTypephph_end((o2_saved_830));            it_831=list$1tuple2$2charphsTypephph_next((o2_saved_830))            ){
                multiple_assign_var16=it_831;
                name_832=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_833=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_833->mClass->mName)&&type->mPointerNum==field_type_833->mPointerNum&&field_type_833->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_833->mHeap) {
                    char source2_834[1024];
                    memset(&source2_834, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_834,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_832,name_832,name_832);
                    buffer_append_str(source_821,source2_834);
                }
                else {
                    if(list$1sNodeph_length(field_type_833->mArrayNum)>0) {
                        char source2_835[1024];
                        memset(&source2_835, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_835,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_832,name_832,name_832);
                        buffer_append_str(source_821,source2_835);
                    }
                    else {
                        char source2_836[1024];
                        memset(&source2_836, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_836,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_832,name_832);
                        buffer_append_str(source_821,source2_836);
                    }
                }
                name_832 = come_decrement_ref_count2(name_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_830,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_821,((char*)(__right_value983=xsprintf("return result;"))));
        __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_821,125);
        p_837=info->p;
        sline_838=info->sline;
        sname_839=(char*)come_increment_ref_count(info->sname);
        source3_840=(struct buffer*)come_increment_ref_count(info->source);
        head_841=info->head;
        __dec_obj327=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_821);
        /* a*/come_call_finalizer3(__dec_obj327,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj328=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_818));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_842=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_843=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_844=(char*)come_increment_ref_count(string_clone(real_fun_name_818));
        self_type_845=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_845->mHeap=(_Bool)0;
        {__list_values31___846[0]=come_increment_ref_count(self_type_845);
}        param_types_847=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2870, "struct list$1sTypeph")),1,__list_values31___846));
        {__list_values32___848[0]=come_increment_ref_count(((char*)(__right_value991=__builtin_string("self"))));
}        param_names_849=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2871, "struct list$1charph")),1,__list_values32___848));
        __right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_850=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2872, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_850,((void*)0));
        header_buf_851=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2875, "buffer"))));
        buffer_append_str(header_buf_851,((char*)(__right_value998=make_come_type_name_string(result_type_843,info))));
        __right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_851," ");
        buffer_append_str(header_buf_851,real_fun_name_818);
        buffer_append_str(header_buf_851,"(");
        for(        i_852=0;        i_852<list$1sTypeph_length(param_types_847);        i_852++        ){
            param_type_853=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_847,i_852), "05function.c", 2883, 15));
            param_name_854=((char*)come_null_check(list$1charphp_operator_load_element(param_names_849,i_852), "05function.c", 2884, 16));
            buffer_append_str(header_buf_851,((char*)(__right_value999=make_come_type_name_string(param_type_853,info))));
            __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_851," ");
            buffer_append_str(header_buf_851,param_name_854);
            if(i_852!=list$1sTypeph_length(param_types_847)-1) {
                buffer_append_str(header_buf_851,",");
            }
        }
        buffer_append_str(header_buf_851,")");
        result_type_843->mStatic=(_Bool)0;
        fun_855=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2898, "sFun")),(char*)come_increment_ref_count(name_844),(struct sType*)come_increment_ref_count(result_type_843),(struct list$1sTypeph*)come_increment_ref_count(param_types_847),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_842),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_851)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_855->mCloner=(_Bool)1;
        fun2_856=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1004=__builtin_string(fun_name))));
        __right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_856==((void*)0)||fun2_856->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_844)),(struct sFun*)come_increment_ref_count(fun_855));
        }
        cloner_817=fun_855;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2915, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1007=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2915, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_855),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_857=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1007,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_857,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj333=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_839);
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_838;
        __dec_obj334=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_840);
        /* a*/come_call_finalizer3(__dec_obj334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_837;
        info->head=head_841;
        info->sline=sline_838;
        /*i*/come_call_finalizer3(source_821,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_839 = come_decrement_ref_count2(sname_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_840,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_842,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_844 = come_decrement_ref_count2(name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_845,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_847,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_851,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_855,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_857) { node_857 = come_decrement_ref_count2(node_857, ((struct sNode*)node_857)->finalize, ((struct sNode*)node_857)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_816;
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_813);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_814);
    __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj337=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_815);
    __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result251__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1013=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2937, "struct tuple2$2sFunpcharph")),cloner_817,(char*)come_increment_ref_count(real_fun_name_818))));
    last_code_813 = come_decrement_ref_count2(last_code_813, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_814 = come_decrement_ref_count2(last_code2_814, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_815 = come_decrement_ref_count2(last_code3_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_818 = come_decrement_ref_count2(real_fun_name_818, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_819,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1013,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj329;
struct sFun* __dec_obj330;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj329=self->sname;
            __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(self->mFun==gComeFunResultObject) {
            __dec_obj330=self->mFun;
            /* a*/come_call_finalizer3(__dec_obj330,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result249__;
void* __right_value1008 = (void*)0;
struct sFunNode* result_858;
void* __right_value1009 = (void*)0;
char* __dec_obj331;
void* __right_value1010 = (void*)0;
struct sFun* __dec_obj332;
struct sFunNode* __result250__;
    if(self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_858=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(self!=((void*)0)) {
        result_858->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj331=result_858->sname;
        result_858->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj332=result_858->mFun;
        result_858->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /* a*/come_call_finalizer3(__dec_obj332,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_858;
    /*i*/come_call_finalizer3(result_858,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

