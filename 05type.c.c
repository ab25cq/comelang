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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
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
void skip_paren(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
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










void skip_paren(struct sInfo* info){
int nest_64;
    nest_64=0;
    while((_Bool)1) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_64++;
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_64--;
                if(nest_64==0) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_65;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct buffer* fname_66;
void* __right_value118 = (void*)0;
char* __dec_obj15;
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(*info->p==35) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(strmemcmp(info->p,"pragma")) {
            while(*info->p) {
                if(*info->p==10) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(xisdigit(*info->p)) {
                line_65=0;
                fname_66=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 58, "buffer"))));
                while(xisdigit(*info->p)) {
                    line_65=line_65*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_66,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_65;
                __dec_obj15=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_66));
                __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf(info);
                /*i*/come_call_finalizer3(fname_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_67;
    c_67=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_67==59||c_67==32||c_67==9||c_67==10||c_67==10);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* buf_68;
void* __right_value121 = (void*)0;
_Bool _if_conditional1;
void* __right_value122 = (void*)0;
char* __result65__;
void* __right_value123 = (void*)0;
char* result_69;
void* __right_value124 = (void*)0;
char* __result70__;
char* __result71__;
    buf_68=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 120, "buffer"))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_68,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if((_if_conditional1=(string_length(((char*)(__right_value121=buffer_to_string(buf_68))))==0)),    (__right_value121 = come_decrement_ref_count2(__right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_69=(char*)come_increment_ref_count(buffer_to_string(buf_68));
    if(info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_69)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value124=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_69), "05type.c", 138, 0)))));
        /*i*/come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_69 = come_decrement_ref_count2(result_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_69 = come_decrement_ref_count2(result_69, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_70;
unsigned int hash_71;
unsigned int it_72;
char* __result66__;
char* __result67__;
char* __result68__;
char* __result69__;
default_value_70 = (void*)0;
    memset(&default_value_70,0,sizeof(char*));
    hash_71=string_get_hash_key(((char*)key))%self->size;
    it_72=hash_71;
    while((_Bool)1) {
        if(self->item_existance[it_72]) {
            if(string_equals(self->keys[it_72],key)) {
                __result66__ = gComeFunResultObject = __result_obj__ = self->items[it_72];
                default_value_70 = come_decrement_ref_count2(default_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result66__;
            }
            it_72++;
            if(it_72>=self->size) {
                it_72=0;
            }
            else {
                if(it_72==hash_71) {
                    __result67__ = gComeFunResultObject = __result_obj__ = default_value_70;
                    default_value_70 = come_decrement_ref_count2(default_value_70, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result67__;
                }
            }
        }
        else {
            __result68__ = gComeFunResultObject = __result_obj__ = default_value_70;
            default_value_70 = come_decrement_ref_count2(default_value_70, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result68__;
        }
    }
    __result69__ = gComeFunResultObject = __result_obj__ = default_value_70;
    default_value_70 = come_decrement_ref_count2(default_value_70, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_73;
int sline_74;
char* buf_75;
void* __right_value125 = (void*)0;
char* __dec_obj16;
void* __right_value126 = (void*)0;
char* __dec_obj17;
char* __result72__;
buf_75 = (void*)0;
    p_73=info->p;
    sline_74=info->sline;
    if(xisalpha(*info->p)||*info->p==95) {
        __dec_obj16=buf_75;
        buf_75=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj17=buf_75;
        buf_75=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_73;
    info->sline=sline_74;
    __result72__ = gComeFunResultObject = __result_obj__ = buf_75;
    buf_75 = come_decrement_ref_count2(buf_75, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(*info->p==32||*info->p==9) {
            info->p++;
        }
        else {
            if(*info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sTypeph* o2_saved_76;
struct sType* it_79;
_Bool __result79__;
    for(    o2_saved_76=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_79=list$1sTypeph_begin((o2_saved_76));    !list$1sTypeph_end((o2_saved_76));    it_79=list$1sTypeph_next((o2_saved_76))    ){
        if(is_contained_generics_class(it_79,info)) {
            __result79__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_76,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result79__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_76,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_77;
struct sType* __result73__;
struct sType* __result74__;
struct sType* result_78;
struct sType* __result75__;
result_77 = (void*)0;
result_78 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_77,0,sizeof(struct sType*));
        __result73__ = gComeFunResultObject = __result_obj__ = result_77;
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    self->it=self->head;
    if(self->it) {
        __result74__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    memset(&result_78,0,sizeof(struct sType*));
    __result75__ = gComeFunResultObject = __result_obj__ = result_78;
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_80;
struct sType* __result76__;
struct sType* __result77__;
struct sType* result_81;
struct sType* __result78__;
result_80 = (void*)0;
result_81 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_80,0,sizeof(struct sType*));
        __result76__ = gComeFunResultObject = __result_obj__ = result_80;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result77__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    memset(&result_81,0,sizeof(struct sType*));
    __result78__ = gComeFunResultObject = __result_obj__ = result_81;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_82;
struct list_item$1sTypeph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj18;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj18=self->item;
            /* a*/come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj19;
struct tuple1$1sTypeph* __dec_obj21;
char* __dec_obj23;
struct list$1sTypeph* __dec_obj24;
struct list$1sNodeph* __dec_obj25;
struct list$1sTypeph* __dec_obj27;
struct list$1charph* __dec_obj28;
struct tuple1$1sTypeph* __dec_obj30;
struct sNode* __dec_obj32;
struct sNode* __dec_obj33;
char* __dec_obj34;
char* __dec_obj35;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj19=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj19,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj21=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj23=self->mGenericsName;
            __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj24=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj25=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj27=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj28=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj28,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj30=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj32=self->mAlignas;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj33=self->mSizeNum;
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj34=self->mOriginalTypeName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj35=self->mAsmName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_84;
struct list_item$1sTypeph* prev_it_85;
    it_84=self->head;
    while(it_84!=((void*)0)) {
        prev_it_85=it_84;
        it_84=it_84->next;
        /*i*/come_call_finalizer3(prev_it_85,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_86;
struct list_item$1sNodeph* prev_it_87;
    it_86=self->head;
    while(it_86!=((void*)0)) {
        prev_it_87=it_86;
        it_86=it_86->next;
        /*i*/come_call_finalizer3(prev_it_87,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj26;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_88;
struct list_item$1sNodeph* prev_it_89;
    it_88=self->head;
    while(it_88!=((void*)0)) {
        prev_it_89=it_88;
        it_88=it_88->next;
        /*i*/come_call_finalizer3(prev_it_89,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_90;
struct list_item$1charph* prev_it_91;
    it_90=self->head;
    while(it_90!=((void*)0)) {
        prev_it_91=it_90;
        it_90=it_90->next;
        /*i*/come_call_finalizer3(prev_it_91,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj29;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_92;
struct list_item$1charph* prev_it_93;
    it_92=self->head;
    while(it_92!=((void*)0)) {
        prev_it_93=it_92;
        it_92=it_92->next;
        /*i*/come_call_finalizer3(prev_it_93,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj31;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj31=self->v1;
            /* a*/come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1sTypeph* param_types_94;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1charph* param_names_95;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1charph* param_default_parametors_96;
_Bool var_args_97;
void* __right_value136 = (void*)0;
void* __right_value168 = (void*)0;
struct sType* type__101;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
_Bool void_param_117;
char* p_118;
int sline_119;
void* __right_value171 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_120;
char* param_name_121;
_Bool err_122;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result99__;
void* __right_value174 = (void*)0;
struct sType* param_type2_123;
void* __right_value178 = (void*)0;
void* __right_value182 = (void*)0;
char* p_130;
_Bool no_comma_131;
void* __right_value183 = (void*)0;
struct sNode* node_132;
char* p2_133;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result103__;
    param_types_94=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 199, "list$1sTypeph"))));
    param_names_95=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 200, "list$1charph"))));
    param_default_parametors_96=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 201, "list$1charph"))));
    var_args_97=(_Bool)0;
    if(in_constructor_) {
        list$1charph_add(param_names_95,(char*)come_increment_ref_count(xsprintf("self")));
        type__101=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        type__101->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_94,(struct sType*)come_increment_ref_count(type__101));
        list$1charph_add(param_default_parametors_96,((void*)0));
        /*i*/come_call_finalizer3(type__101,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->in_class) {
            list$1charph_add(param_names_95,(char*)come_increment_ref_count(xsprintf("self")));
            list$1sTypeph_add(param_types_94,(struct sType*)come_increment_ref_count(sType_clone(info->impl_type)));
            list$1charph_add(param_default_parametors_96,((void*)0));
        }
    }
    expected_next_character(40,info);
    void_param_117=(_Bool)0;
    {
        p_118=info->p;
        sline_119=info->sline;
        if(strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                void_param_117=(_Bool)1;
            }
        }
        info->p=p_118;
        info->sline=sline_119;
    }
    if(void_param_117) {
        if(strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value171=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_120=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_121=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_122=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value171,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_122) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result99__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value173=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 263, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                /*i*/come_call_finalizer3(param_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_121 = come_decrement_ref_count2(param_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_94,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_95,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_96,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value173,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result99__;
            }
            param_type2_123=(struct sType*)come_increment_ref_count(solve_generics(param_type_120,info->generics_type,info));
            param_type2_123->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_94,(struct sType*)come_increment_ref_count(sType_clone(param_type2_123)));
            list$1charph_push_back(param_names_95,(char*)come_increment_ref_count(string_clone(param_name_121)));
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_130=info->p;
                no_comma_131=info->no_comma;
                info->no_comma=(_Bool)1;
                node_132=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_131;
                p2_133=info->p;
                char buf_134[p2_133-p_130+1];
                memset(&buf_134, 0, sizeof(char)                *(p2_133-p_130+1)                );
                memcpy(buf_134,p_130,p2_133-p_130);
                buf_134[p2_133-p_130]=0;
                list$1charph_push_back(param_default_parametors_96,(char*)come_increment_ref_count(__builtin_string(buf_134)));
                if(node_132) { node_132 = come_decrement_ref_count2(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_96,((void*)0));
            }
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_97=(_Bool)1;
                    expected_next_character(41,info);
                    /*i*/come_call_finalizer3(param_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_121 = come_decrement_ref_count2(param_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_type2_123,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*i*/come_call_finalizer3(param_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_121 = come_decrement_ref_count2(param_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_type2_123,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            /*i*/come_call_finalizer3(param_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_121 = come_decrement_ref_count2(param_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_type2_123,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result103__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value186=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 323, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")),(struct list$1sTypeph*)come_increment_ref_count(param_types_94),(struct list$1charph*)come_increment_ref_count(param_names_95),(struct list$1charph*)come_increment_ref_count(param_default_parametors_96),var_args_97)));
    /*i*/come_call_finalizer3(param_types_94,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_95,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_96,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value186,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result80__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
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
void* __right_value133 = (void*)0;
struct list_item$1charph* litem_98;
char* __dec_obj36;
void* __right_value134 = (void*)0;
struct list_item$1charph* litem_99;
char* __dec_obj37;
void* __right_value135 = (void*)0;
struct list_item$1charph* litem_100;
char* __dec_obj38;
struct list$1charph* __result82__;
    if(self->len==0) {
        litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value133=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj36=litem_98->item;
        litem_98->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else {
        if(self->len==1) {
            litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value134=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_99->prev=self->head;
            litem_99->next=((void*)0);
            __dec_obj37=litem_99->item;
            litem_99->item=(char*)come_increment_ref_count(item);
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_99;
            self->head->next=litem_99;
        }
        else {
            litem_100=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_100->prev=self->tail;
            litem_100->next=((void*)0);
            __dec_obj38=litem_100->item;
            litem_100->item=(char*)come_increment_ref_count(item);
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_100;
            self->tail=litem_100;
        }
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result83__;
void* __right_value137 = (void*)0;
struct sType* result_102;
void* __right_value140 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value141 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value142 = (void*)0;
char* __dec_obj43;
void* __right_value149 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value157 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value158 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value162 = (void*)0;
struct list$1charph* __dec_obj53;
void* __right_value163 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value164 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value165 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value166 = (void*)0;
char* __dec_obj57;
void* __right_value167 = (void*)0;
char* __dec_obj58;
struct sType* __result97__;
    if(self==(void*)0) {
        __result83__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    result_102=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_102->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_102->mNoSolvedGenericsType;
        result_102->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_102->mOriginalLoadVarType;
        result_102->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_102->mGenericsName;
        result_102->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_102->mGenericsTypes;
        result_102->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_102->mArrayNum;
        result_102->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_102->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_102->mParamTypes;
        result_102->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj53=result_102->mParamNames;
        result_102->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj54=result_102->mResultType;
        result_102->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_102->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj55=result_102->mAlignas;
        result_102->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_102->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_102->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_102->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_102->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_102->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_102->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_102->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_102->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_102->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_102->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_102->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_102->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_102->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_102->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_102->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_102->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_102->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_102->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_102->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_102->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_102->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_102->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_102->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_102->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_102->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_102->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_102->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj56=result_102->mSizeNum;
        result_102->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_102->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_102->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_102->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj57=result_102->mOriginalTypeName;
        result_102->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_102->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_102->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_102->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_102->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_102->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_102->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_102->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_102->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_102->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj58=result_102->mAsmName;
        result_102->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_102->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_102->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_102->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_102->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_102->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_102->mOriginIsArray=self->mOriginIsArray;
    }
    __result97__ = gComeFunResultObject = __result_obj__ = result_102;
    /*i*/come_call_finalizer3(result_102,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result84__;
void* __right_value138 = (void*)0;
struct tuple1$1sTypeph* result_103;
void* __right_value139 = (void*)0;
struct sType* __dec_obj39;
struct tuple1$1sTypeph* __result85__;
    if(self==(void*)0) {
        __result84__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    result_103=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj39=result_103->v1;
        result_103->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_103;
    /*i*/come_call_finalizer3(result_103,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
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
struct list$1sTypeph* __result86__;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct list$1sTypeph* result_104;
struct list_item$1sTypeph* it_105;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __result88__;
    if(self==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    result_104=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_105=self->head;
    while(it_105!=((void*)0)) {
        list$1sTypeph_add(result_104,(struct sType*)come_increment_ref_count(sType_clone(it_105->item)));
        it_105=it_105->next;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_104;
    /*i*/come_call_finalizer3(result_104,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj44;
void* __right_value146 = (void*)0;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj45;
void* __right_value147 = (void*)0;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj46;
struct list$1sTypeph* __result87__;
    if(self->len==0) {
        litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value145=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_106->prev=((void*)0);
        litem_106->next=((void*)0);
        __dec_obj44=litem_106->item;
        litem_106->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_106;
        self->head=litem_106;
    }
    else {
        if(self->len==1) {
            litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value146=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_107->prev=self->head;
            litem_107->next=((void*)0);
            __dec_obj45=litem_107->item;
            litem_107->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_107;
            self->head->next=litem_107;
        }
        else {
            litem_108=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value147=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_108->prev=self->tail;
            litem_108->next=((void*)0);
            __dec_obj46=litem_108->item;
            litem_108->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_108;
            self->tail=litem_108;
        }
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result89__;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct list$1sNodeph* result_109;
struct list_item$1sNodeph* it_110;
void* __right_value156 = (void*)0;
struct list$1sNodeph* __result94__;
    if(self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_109=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_110=self->head;
    while(it_110!=((void*)0)) {
        list$1sNodeph_add(result_109,(struct sNode*)come_increment_ref_count(sNode_clone(it_110->item)));
        it_110=it_110->next;
    }
    __result94__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value152 = (void*)0;
struct list_item$1sNodeph* litem_111;
struct sNode* __dec_obj48;
void* __right_value153 = (void*)0;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj49;
void* __right_value154 = (void*)0;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result91__;
    if(self->len==0) {
        litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj48=litem_111->item;
        litem_111->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_111;
        self->head=litem_111;
    }
    else {
        if(self->len==1) {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_112->prev=self->head;
            litem_112->next=((void*)0);
            __dec_obj49=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_112;
            self->head->next=litem_112;
        }
        else {
            litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value154=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_113->prev=self->tail;
            litem_113->next=((void*)0);
            __dec_obj50=litem_113->item;
            litem_113->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_113;
            self->tail=litem_113;
        }
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result92__;
void* __right_value155 = (void*)0;
struct sNode* result_114;
struct sNode* __result93__;
    if(self==(void*)0) {
        __result92__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    result_114=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_114->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_114->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_114->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_114->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_114->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_114->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_114->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_114->kind=self->kind;
    }
    __result93__ = gComeFunResultObject = __result_obj__ = result_114;
    if(result_114) { result_114 = come_decrement_ref_count2(result_114, ((struct sNode*)result_114)->finalize, ((struct sNode*)result_114)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result95__;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct list$1charph* result_115;
struct list_item$1charph* it_116;
void* __right_value161 = (void*)0;
struct list$1charph* __result96__;
    if(self==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    result_115=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_116=self->head;
    while(it_116!=((void*)0)) {
        list$1charph_add(result_115,(char*)come_increment_ref_count(string_clone(it_116->item)));
        it_116=it_116->next;
    }
    __result96__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj59;
char* __dec_obj60;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            /* a*/come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj60=self->v2;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result98__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value175 = (void*)0;
struct list_item$1sTypeph* litem_124;
struct sType* __dec_obj61;
void* __right_value176 = (void*)0;
struct list_item$1sTypeph* litem_125;
struct sType* __dec_obj62;
void* __right_value177 = (void*)0;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj63;
struct list$1sTypeph* __result100__;
    if(self->len==0) {
        litem_124=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value175=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        __dec_obj61=litem_124->item;
        litem_124->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_124;
        self->head=litem_124;
    }
    else {
        if(self->len==1) {
            litem_125=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value176=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_125->prev=self->head;
            litem_125->next=((void*)0);
            __dec_obj62=litem_125->item;
            litem_125->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_125;
            self->head->next=litem_125;
        }
        else {
            litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_126->prev=self->tail;
            litem_126->next=((void*)0);
            __dec_obj63=litem_126->item;
            litem_126->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_126;
            self->tail=litem_126;
        }
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value179 = (void*)0;
struct list_item$1charph* litem_127;
char* __dec_obj64;
void* __right_value180 = (void*)0;
struct list_item$1charph* litem_128;
char* __dec_obj65;
void* __right_value181 = (void*)0;
struct list_item$1charph* litem_129;
char* __dec_obj66;
struct list$1charph* __result101__;
    if(self->len==0) {
        litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value179=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        __dec_obj64=litem_127->item;
        litem_127->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_127;
        self->head=litem_127;
    }
    else {
        if(self->len==1) {
            litem_128=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value180=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_128->prev=self->head;
            litem_128->next=((void*)0);
            __dec_obj65=litem_128->item;
            litem_128->item=(char*)come_increment_ref_count(item);
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_128;
            self->head->next=litem_128;
        }
        else {
            litem_129=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value181=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_129->prev=self->tail;
            litem_129->next=((void*)0);
            __dec_obj66=litem_129->item;
            litem_129->item=(char*)come_increment_ref_count(item);
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_129;
            self->tail=litem_129;
        }
    }
    self->len++;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj67;
struct list$1charph* __dec_obj68;
struct list$1charph* __dec_obj69;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result102__;
    __dec_obj67=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj68=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj68,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj69=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    /* a*/come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj70;
struct list$1charph* __dec_obj71;
struct list$1charph* __dec_obj72;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj70=self->v1;
            /* a*/come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj71=self->v2;
            /* a*/come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj72=self->v3;
            /* a*/come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __right_value187 = (void*)0;
struct sType* right_type2_135;
struct sType* left_no_solved_generics_type_136;
struct sType* right_no_solved_generics_type_137;
struct sClass* left_class_138;
struct sClass* right_class_139;
_Bool parent_class_140;
_Bool __result108__;
int i_148;
void* __right_value188 = (void*)0;
char* __dec_obj80;
void* __right_value189 = (void*)0;
struct sType* __dec_obj81;
void* __right_value190 = (void*)0;
struct sType* __dec_obj82;
_Bool __result111__;
_Bool __result112__;
_Bool __result113__;
_Bool __result114__;
_Bool __result115__;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct buffer* buf2_152;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
char* __dec_obj83;
void* __right_value199 = (void*)0;
struct sType* __dec_obj84;
void* __right_value200 = (void*)0;
struct sType* __dec_obj85;
_Bool __result116__;
_Bool __result117__;
_Bool __result118__;
void* __right_value201 = (void*)0;
char* method_name_153;
struct sType* obj_type_156;
struct sType* obj_type2_157;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* __dec_obj101;
_Bool __result123__;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct buffer* buf2_158;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* type_159;
void* __right_value208 = (void*)0;
char* __dec_obj102;
void* __right_value209 = (void*)0;
struct sType* __dec_obj103;
void* __right_value210 = (void*)0;
struct sType* __dec_obj104;
void* __right_value211 = (void*)0;
char* method_name_160;
struct sType* obj_type_161;
struct sType* obj_type2_162;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
char* __dec_obj105;
_Bool __result124__;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct buffer* buf2_163;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct sType* type_164;
void* __right_value218 = (void*)0;
char* __dec_obj106;
void* __right_value219 = (void*)0;
struct sType* __dec_obj107;
void* __right_value220 = (void*)0;
struct sType* __dec_obj108;
_Bool __result125__;
_Bool __result126__;
_Bool __result127__;
_Bool __result128__;
void* __right_value221 = (void*)0;
char* tmp_165;
void* __right_value222 = (void*)0;
char* __dec_obj109;
void* __right_value223 = (void*)0;
struct sType* __dec_obj110;
void* __right_value224 = (void*)0;
struct sType* __dec_obj111;
_Bool __result129__;
_Bool __result130__;
void* __right_value225 = (void*)0;
char* tmp_166;
void* __right_value226 = (void*)0;
char* __dec_obj112;
void* __right_value227 = (void*)0;
struct sType* __dec_obj113;
_Bool __result131__;
int i_167;
_Bool __result132__;
    right_type2_135=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_136=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_137=right_type2_135->mNoSolvedGenericsType->v1;
    left_class_138=left_type->mClass;
    right_class_139=right_type2_135->mClass;
    parent_class_140=(_Bool)0;
    if(string_operator_not_equals(left_class_138->mName,right_class_139->mName)) {
        while(left_class_138&&right_class_139) {
            if(string_operator_equals(left_class_138->mName,right_class_139->mName)) {
                parent_class_140=(_Bool)1;
            }
            if(right_class_139->mParentClassName) {
                right_class_139=map$2charphsClassphp_operator_load_element(info->classes,right_class_139->mParentClassName);
            }
            else {
                right_class_139=((void*)0);
            }
        }
    }
    if(left_no_solved_generics_type_136&&right_no_solved_generics_type_137) {
        if(right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else {
            if(string_operator_equals(left_type->mClass->mName,right_type2_135->mClass->mName)&&left_type->mPointerNum==right_type2_135->mPointerNum) {
            }
            else {
                if(string_operator_equals(left_type->mClass->mName,right_type2_135->mClass->mName)&&(left_type->mPointerNum!=right_type2_135->mPointerNum||left_type->mHeap!=right_type2_135->mHeap)) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_136->mGenericsTypes),left_no_solved_generics_type_136->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_137->mGenericsTypes),right_no_solved_generics_type_137->mClass->mName,right_type2_135->mClass->mName);
                    exit(2);
                }
                else {
                    if(list$1sTypeph_length(left_no_solved_generics_type_136->mGenericsTypes)>0) {
                        if((string_operator_equals(left_no_solved_generics_type_136->mClass->mName,"void")&&left_no_solved_generics_type_136->mPointerNum>0&&right_no_solved_generics_type_137->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_137->mClass->mName,"void")&&right_no_solved_generics_type_137->mPointerNum>0&&left_no_solved_generics_type_136->mPointerNum>0)) {
                        }
                        else {
                            if(list$1sTypeph_length(left_no_solved_generics_type_136->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_137->mGenericsTypes)) {
                                if(print_err_msg) {
                                    err_msg(info,"generics type parametor number error");
                                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_136->mGenericsTypes),left_no_solved_generics_type_136->mClass->mName,left_type->mClass->mName);
                                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_137->mGenericsTypes),right_no_solved_generics_type_137->mClass->mName,right_type2_135->mClass->mName);
                                    exit(2);
                                }
                                __result108__ = (_Bool)0;
                                /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result108__;
                            }
                            for(                            i_148=0;                            i_148<list$1sTypeph_length(left_no_solved_generics_type_136->mGenericsTypes);                            i_148++                            ){
                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_136->mGenericsTypes,i_148), "05type.c", 380, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_137->mGenericsTypes,i_148), "05type.c", 380, 2)),come_value,(_Bool)0,(_Bool)1,info);
                            }
                            check_assign_type(msg,left_no_solved_generics_type_136,right_no_solved_generics_type_137,come_value,(_Bool)0,(_Bool)1,info);
                        }
                    }
                }
            }
        }
    }
    else {
        if(left_type->mHeap&&!right_type2_135->mHeap&&left_type->mPointerNum>0&&right_type2_135->mPointerNum>0&&string_operator_not_equals(right_type2_135->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
            err_msg(info,"%s",msg);
            err_msg(info,"type error heap");
            printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum,right_type2_135->mHeap);
            exit(2);
        }
        else {
            if(parent_class_140&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
                __dec_obj80=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj81=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                /* a*/come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj82=right_type2_135;
                right_type2_135=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                /* a*/come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(check_no_pointer) {
                    if(left_type->mPointerNum>0) {
                        if(right_type2_135->mPointerNum>0) {
                            if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_135->mClass->mName,"void")) {
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                                }
                                else {
                                    if(string_operator_not_equals(left_type->mClass->mName,right_type2_135->mClass->mName)) {
                                        if(print_err_msg) {
                                            err_msg(info,"type error1");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                            exit(2);
                                        }
                                        __result111__ = (_Bool)0;
                                        /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result111__;
                                    }
                                }
                            }
                        }
                        else {
                            if(right_type->mPointerNum==0) {
                            }
                            else {
                                if(print_err_msg) {
                                    err_msg(info,"type error2");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                    exit(2);
                                }
                                __result112__ = (_Bool)0;
                                /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result112__;
                            }
                        }
                    }
                    else {
                        if(left_type->mPointerNum==0&&right_type2_135->mPointerNum>0) {
                            if(print_err_msg) {
                                err_msg(info,"type error3");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                exit(2);
                            }
                            __result113__ = (_Bool)0;
                            /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result113__;
                        }
                        else {
                            if(left_type->mPointerNum>0&&right_type2_135->mPointerNum==0&&string_operator_equals(right_type2_135->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
                            }
                            else {
                                if(string_operator_not_equals(left_type->mClass->mName,right_type2_135->mClass->mName)) {
                                    if(print_err_msg) {
                                        err_msg(info,"type error4");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                        exit(2);
                                    }
                                    __result114__ = (_Bool)0;
                                    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result114__;
                                }
                            }
                        }
                    }
                }
                else {
                    if(!left_type->mNullValue&&right_type2_135->mNullValue) {
                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_135->mClass->mName,"__builtin_va_list")) {
                        }
                        else {
                            if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                            }
                            else {
                                if(string_operator_equals(right_type2_135->mClass->mName,"void")&&right_type2_135->mPointerNum==0) {
                                    if(print_err_msg) {
                                        err_msg(info,"type error6");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                        exit(2);
                                    }
                                    __result115__ = (_Bool)0;
                                    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result115__;
                                }
                                else {
                                    buf2_152=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 468, "buffer"))));
                                    buffer_append_str(buf2_152,((char*)(__right_value197=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value193=string_to_string(come_value->c_value))),((char*)(__right_value194=string_to_string(info->sname))),((char*)(__right_value195=int_to_string(info->sline))),((char*)(__right_value196=int_to_string(gComeDebugStackFrameID++)))))));
                                    __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __dec_obj83=come_value->c_value;
                                    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_152));
                                    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj84=come_value->type;
                                    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                    /* a*/come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value->var=((void*)0);
                                    __dec_obj85=right_type2_135;
                                    right_type2_135=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                    /* a*/come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(buf2_152,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                    else {
                        if(string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
                            if(string_operator_equals(right_type2_135->mClass->mName,"integer")&&right_type2_135->mPointerNum==1) {
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_135->mClass->mName,"__builtin_va_list")) {
                                }
                                else {
                                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                                    }
                                    else {
                                        if(string_operator_equals(right_type2_135->mClass->mName,"lambda")) {
                                            if(print_err_msg) {
                                                err_msg(info,"type error7");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                exit(2);
                                            }
                                            __result116__ = (_Bool)0;
                                            /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result116__;
                                        }
                                        else {
                                            if(string_operator_equals(right_type2_135->mClass->mName,"void")&&right_type2_135->mPointerNum>0) {
                                            }
                                            else {
                                                if(string_operator_equals(right_type2_135->mClass->mName,"void")) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error8");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result117__ = (_Bool)0;
                                                    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    return __result117__;
                                                }
                                                else {
                                                    if(string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_135->mClass->mName,"lambda")) {
                                                    }
                                                    else {
                                                        if(right_type2_135->mPointerNum>0) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error9");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result118__ = (_Bool)0;
                                                            /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result118__;
                                                        }
                                                        else {
                                                            method_name_153=(char*)come_increment_ref_count(create_method_name(right_type2_135,(_Bool)0,"to_integer",info,(_Bool)1));
                                                            if(map$2charphsFunph_at(info->funcs,method_name_153,((void*)0))==((void*)0)) {
                                                                obj_type_156=right_type2_135->mNoSolvedGenericsType->v1;
                                                                if(obj_type_156&&list$1sTypeph_length(obj_type_156->mGenericsTypes)>0) {
                                                                    obj_type2_157=right_type2_135;
                                                                    __dec_obj101=method_name_153;
                                                                    method_name_153=(char*)come_increment_ref_count(make_generics_function(obj_type2_157,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                                                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                }
                                                                else {
                                                                    if(print_err_msg) {
                                                                        err_msg(info,"require to_string implementation(%s)",right_type2_135->mClass->mName);
                                                                        exit(2);
                                                                    }
                                                                    __result123__ = (_Bool)0;
                                                                    method_name_153 = come_decrement_ref_count2(method_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result123__;
                                                                }
                                                            }
                                                            buf2_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 535, "buffer"))));
                                                            buffer_append_str(buf2_158,method_name_153);
                                                            buffer_append_str(buf2_158,"(");
                                                            buffer_append_str(buf2_158,come_value->c_value);
                                                            buffer_append_str(buf2_158,")");
                                                            type_159=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 542, "sType")),"integer",(_Bool)0,info));
                                                            type_159->mHeap=(_Bool)1;
                                                            type_159->mPointerNum=1;
                                                            __dec_obj102=come_value->c_value;
                                                            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_158));
                                                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            __dec_obj103=come_value->type;
                                                            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_159));
                                                            /* a*/come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_value->var=((void*)0);
                                                            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_159),info,(_Bool)0);
                                                            __dec_obj104=right_type2_135;
                                                            right_type2_135=(struct sType*)come_increment_ref_count(sType_clone(type_159));
                                                            /* a*/come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            method_name_153 = come_decrement_ref_count2(method_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            /*i*/come_call_finalizer3(buf2_158,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            /*i*/come_call_finalizer3(type_159,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                            if(string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
                                method_name_160=(char*)come_increment_ref_count(create_method_name(right_type2_135,(_Bool)0,"to_int",info,(_Bool)1));
                                if(map$2charphsFunph_at(info->funcs,method_name_160,((void*)0))==((void*)0)) {
                                    obj_type_161=right_type2_135->mNoSolvedGenericsType->v1;
                                    if(obj_type_161&&list$1sTypeph_length(obj_type_161->mGenericsTypes)>0) {
                                        obj_type2_162=right_type2_135;
                                        __dec_obj105=method_name_160;
                                        method_name_160=(char*)come_increment_ref_count(make_generics_function(obj_type2_162,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    else {
                                        if(print_err_msg) {
                                            err_msg(info,"require to_string implementation(%s)",right_type2_135->mClass->mName);
                                            exit(1);
                                        }
                                        __result124__ = (_Bool)0;
                                        method_name_160 = come_decrement_ref_count2(method_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result124__;
                                    }
                                }
                                buf2_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 572, "buffer"))));
                                buffer_append_str(buf2_163,method_name_160);
                                buffer_append_str(buf2_163,"(");
                                buffer_append_str(buf2_163,come_value->c_value);
                                buffer_append_str(buf2_163,")");
                                type_164=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 579, "sType")),"int",(_Bool)0,info));
                                __dec_obj106=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_163));
                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj107=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_164));
                                /* a*/come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value->var=((void*)0);
                                __dec_obj108=right_type2_135;
                                right_type2_135=(struct sType*)come_increment_ref_count(sType_clone(type_164));
                                /* a*/come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
                                method_name_160 = come_decrement_ref_count2(method_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(buf2_163,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
                                    if(string_operator_equals(right_type2_135->mClass->mName,"char")&&right_type2_135->mPointerNum==1) {
                                    }
                                    else {
                                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_135->mClass->mName,"__builtin_va_list")) {
                                        }
                                        else {
                                            if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                                            }
                                            else {
                                                if(string_operator_equals(right_type2_135->mClass->mName,"lambda")) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error10");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result125__ = (_Bool)0;
                                                    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    return __result125__;
                                                }
                                                else {
                                                    if(string_operator_equals(right_type2_135->mClass->mName,"void")&&right_type2_135->mPointerNum>0) {
                                                    }
                                                    else {
                                                        if(string_operator_equals(right_type2_135->mClass->mName,"void")) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error11");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result126__ = (_Bool)0;
                                                            /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result126__;
                                                        }
                                                        else {
                                                            if(string_operator_not_equals(left_type->mClass->mName,right_type2_135->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_135->mPointerNum==0)) {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"type error12");
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                                    exit(2);
                                                                }
                                                                __result127__ = (_Bool)0;
                                                                /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result127__;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
                                        if(string_operator_equals(right_type2_135->mClass->mName,"void")&&right_type2_135->mPointerNum==1) {
                                        }
                                        else {
                                            if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_135->mClass->mName,"__builtin_va_list")) {
                                            }
                                            else {
                                                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                                                }
                                                else {
                                                    if(string_operator_equals(right_type2_135->mClass->mName,"lambda")) {
                                                    }
                                                    else {
                                                        if(string_operator_equals(right_type2_135->mClass->mName,"void")&&right_type2_135->mPointerNum>0) {
                                                        }
                                                        else {
                                                            if(string_operator_equals(right_type2_135->mClass->mName,"void")) {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"type error13");
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                                    exit(2);
                                                                }
                                                                __result128__ = (_Bool)0;
                                                                /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result128__;
                                                            }
                                                            else {
                                                                if(right_type2_135->mPointerNum==0) {
                                                                    tmp_165=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                                                                    __dec_obj109=come_value->c_value;
                                                                    come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_165));
                                                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    __dec_obj110=come_value->type;
                                                                    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                                                    /* a*/come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_value->var=((void*)0);
                                                                    __dec_obj111=right_type2_135;
                                                                    right_type2_135=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                                                    /* a*/come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    tmp_165 = come_decrement_ref_count2(tmp_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
                                            if(right_type2_135->mPointerNum>0||(right_type2_135->mPointerNum==0&&right_type2_135->mClass->mStruct)) {
                                                if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_135->mClass->mName,"void")) {
                                                }
                                                else {
                                                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                                                    }
                                                    else {
                                                        if(string_operator_not_equals(left_type->mClass->mName,right_type2_135->mClass->mName)) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error14");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result129__ = (_Bool)0;
                                                            /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result129__;
                                                        }
                                                        else {
                                                            if(left_type->mPointerNum!=right_type2_135->mPointerNum) {
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                            }
                                                            else {
                                                                if(list$1sNodeph_length(right_type2_135->mArrayNum)>0) {
                                                                    printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                    printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                    printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum,list$1sNodeph_length(right_type2_135->mArrayNum));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_135->mClass->mName,"void")) {
                                                }
                                                else {
                                                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_135->mClass->mName,"va_list")) {
                                                    }
                                                    else {
                                                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_135->mClass->mName,"__builtin_va_list")) {
                                                        }
                                                        else {
                                                            if(string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_135->mClass->mName,"lambda")) {
                                                            }
                                                            else {
                                                                if(left_type->mPointerNum>0&&right_type2_135->mPointerNum==0&&string_operator_equals(right_type2_135->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
                                                                    if(print_err_msg) {
                                                                        err_msg(info,"type error15");
                                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                        printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                                        exit(2);
                                                                    }
                                                                    __result130__ = (_Bool)0;
                                                                    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result130__;
                                                                }
                                                                else {
                                                                    if(left_type->mPointerNum>0&&!(string_operator_equals(right_type2_135->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_135->mPointerNum==0) {
                                                                        tmp_166=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
                                                                        __dec_obj112=come_value->c_value;
                                                                        come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_166));
                                                                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        __dec_obj113=come_value->type;
                                                                        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                                                        /* a*/come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        __result131__ = (_Bool)1;
                                                                        tmp_166 = come_decrement_ref_count2(tmp_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result131__;
                                                                        tmp_166 = come_decrement_ref_count2(tmp_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if(list$1sTypeph_length(left_type->mGenericsTypes)>0) {
                                                if(list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_135->mGenericsTypes)) {
                                                    err_msg(info,"generics type number error");
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    printf("right type is %s pointer num %d\n",right_type2_135->mClass->mName,right_type2_135->mPointerNum);
                                                    exit(2);
                                                }
                                                for(                                                i_167=0;                                                i_167<list$1sTypeph_length(left_type->mGenericsTypes);                                                i_167++                                                ){
                                                    check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_167), "05type.c", 747, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_135->mGenericsTypes,i_167), "05type.c", 747, 4)),come_value,(_Bool)0,(_Bool)1,info);
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
    __result132__ = (_Bool)1;
    /*i*/come_call_finalizer3(right_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_141;
unsigned int hash_142;
unsigned int it_143;
struct sClass* __result104__;
struct sClass* __result105__;
struct sClass* __result106__;
struct sClass* __result107__;
default_value_141 = (void*)0;
    memset(&default_value_141,0,sizeof(struct sClass*));
    hash_142=string_get_hash_key(((char*)key))%self->size;
    it_143=hash_142;
    while((_Bool)1) {
        if(self->item_existance[it_143]) {
            if(string_equals(self->keys[it_143],key)) {
                __result104__ = gComeFunResultObject = __result_obj__ = self->items[it_143];
                /*i*/come_call_finalizer3(default_value_141,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result104__;
            }
            it_143++;
            if(it_143>=self->size) {
                it_143=0;
            }
            else {
                if(it_143==hash_142) {
                    __result105__ = gComeFunResultObject = __result_obj__ = default_value_141;
                    /*i*/come_call_finalizer3(default_value_141,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result105__;
                }
            }
        }
        else {
            __result106__ = gComeFunResultObject = __result_obj__ = default_value_141;
            /*i*/come_call_finalizer3(default_value_141,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result106__;
        }
    }
    __result107__ = gComeFunResultObject = __result_obj__ = default_value_141;
    /*i*/come_call_finalizer3(default_value_141,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj73;
struct list$1tuple2$2charphsTypephph* __dec_obj74;
char* __dec_obj78;
char* __dec_obj79;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj73=self->mName;
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj74=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj74,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj78=self->mDeclareSName;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj79=self->mParentClassName;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct tuple2$2charphsTypeph* __dec_obj75;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj75=self->item;
            /* a*/come_call_finalizer3(__dec_obj75,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj76;
struct sType* __dec_obj77;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj76=self->v1;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj77=self->v2;
            /* a*/come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_149;
int i_150;
struct sType* __result109__;
struct sType* default_value_151;
struct sType* __result110__;
default_value_151 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_149=self->head;
    i_150=0;
    while(it_149!=((void*)0)) {
        if(position==i_150) {
            __result109__ = gComeFunResultObject = __result_obj__ = it_149->item;
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
        it_149=it_149->next;
        i_150++;
    }
    memset(&default_value_151,0,sizeof(struct sType*));
    __result110__ = gComeFunResultObject = __result_obj__ = default_value_151;
    /*i*/come_call_finalizer3(default_value_151,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_154;
unsigned int it_155;
struct sFun* __result119__;
struct sFun* __result120__;
struct sFun* __result121__;
struct sFun* __result122__;
    hash_154=string_get_hash_key(((char*)key))%self->size;
    it_155=hash_154;
    while((_Bool)1) {
        if(self->item_existance[it_155]) {
            if(string_equals(self->keys[it_155],key)) {
                __result119__ = gComeFunResultObject = __result_obj__ = self->items[it_155];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result119__;
            }
            it_155++;
            if(it_155>=self->size) {
                it_155=0;
            }
            else {
                if(it_155==hash_154) {
                    __result120__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result120__;
                }
            }
        }
        else {
            __result121__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result121__;
        }
    }
    __result122__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj86;
struct sType* __dec_obj87;
struct list$1sTypeph* __dec_obj88;
struct list$1charph* __dec_obj89;
struct list$1charph* __dec_obj90;
struct sType* __dec_obj91;
struct sBlock* __dec_obj92;
struct buffer* __dec_obj95;
struct buffer* __dec_obj96;
struct buffer* __dec_obj97;
struct buffer* __dec_obj98;
char* __dec_obj99;
char* __dec_obj100;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj86=self->mName;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj87=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj88=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj89=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj90=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj91=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj92=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj92,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj95=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj96=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj97=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj98=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj99=self->mComeHeader;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj100=self->mDeclareSName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj93;
struct sVarTable* __dec_obj94;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj93=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj94=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj94,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __right_value228 = (void*)0;
struct sType* right_type2_168;
void* __right_value229 = (void*)0;
char* method_name_169;
struct sType* obj_type_170;
struct sType* obj_type2_171;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
char* __dec_obj114;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* buf2_172;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* type_173;
void* __right_value236 = (void*)0;
char* __dec_obj115;
void* __right_value237 = (void*)0;
struct sType* __dec_obj116;
void* __right_value238 = (void*)0;
struct sType* __dec_obj117;
void* __right_value239 = (void*)0;
char* method_name_174;
struct sType* obj_type_175;
struct sType* obj_type2_176;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
char* __dec_obj118;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct buffer* buf2_177;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* type_178;
void* __right_value246 = (void*)0;
char* __dec_obj119;
void* __right_value247 = (void*)0;
struct sType* __dec_obj120;
void* __right_value248 = (void*)0;
struct sType* __dec_obj121;
    right_type2_168=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    if(string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
        if(string_operator_equals(right_type2_168->mClass->mName,"integer")&&right_type2_168->mPointerNum==1) {
        }
        else {
            if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_168->mClass->mName,"__builtin_va_list")) {
            }
            else {
                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_168->mClass->mName,"va_list")) {
                }
                else {
                    if(string_operator_equals(right_type2_168->mClass->mName,"lambda")) {
                    }
                    else {
                        if(string_operator_equals(right_type2_168->mClass->mName,"void")&&right_type2_168->mPointerNum>0) {
                        }
                        else {
                            if(string_operator_equals(right_type2_168->mClass->mName,"void")) {
                            }
                            else {
                                if(left_type->mPointerNum>0&&right_type2_168->mPointerNum==0&&string_operator_equals(right_type2_168->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
                                }
                                else {
                                    if(right_type->mPointerNum>0) {
                                    }
                                    else {
                                        method_name_169=(char*)come_increment_ref_count(create_method_name(right_type2_168,(_Bool)0,"to_integer",info,(_Bool)1));
                                        if(map$2charphsFunph_at(info->funcs,method_name_169,((void*)0))==((void*)0)) {
                                            obj_type_170=right_type2_168->mNoSolvedGenericsType->v1;
                                            if(obj_type_170&&list$1sTypeph_length(obj_type_170->mGenericsTypes)>0) {
                                                obj_type2_171=right_type2_168;
                                                __dec_obj114=method_name_169;
                                                method_name_169=(char*)come_increment_ref_count(make_generics_function(obj_type2_171,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                                                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            else {
                                                err_msg(info,"require to_string implementation(%s)",right_type2_168->mClass->mName);
                                                exit(1);
                                            }
                                        }
                                        buf2_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 790, "buffer"))));
                                        buffer_append_str(buf2_172,method_name_169);
                                        buffer_append_str(buf2_172,"(");
                                        buffer_append_str(buf2_172,come_value->c_value);
                                        buffer_append_str(buf2_172,")");
                                        type_173=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 797, "sType")),"integer",(_Bool)0,info));
                                        type_173->mHeap=(_Bool)1;
                                        type_173->mPointerNum=1;
                                        __dec_obj115=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_172));
                                        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj116=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_173));
                                        /* a*/come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_value->var=((void*)0);
                                        append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_173),info,(_Bool)0);
                                        __dec_obj117=right_type2_168;
                                        right_type2_168=(struct sType*)come_increment_ref_count(sType_clone(type_173));
                                        /* a*/come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        method_name_169 = come_decrement_ref_count2(method_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(buf2_172,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        if(string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
            method_name_174=(char*)come_increment_ref_count(create_method_name(right_type2_168,(_Bool)0,"to_int",info,(_Bool)1));
            if(map$2charphsFunph_at(info->funcs,method_name_174,((void*)0))==((void*)0)) {
                obj_type_175=right_type2_168->mNoSolvedGenericsType->v1;
                if(obj_type_175&&list$1sTypeph_length(obj_type_175->mGenericsTypes)>0) {
                    obj_type2_176=right_type2_168;
                    __dec_obj118=method_name_174;
                    method_name_174=(char*)come_increment_ref_count(make_generics_function(obj_type2_176,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_168->mClass->mName);
                    exit(1);
                }
            }
            buf2_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 824, "buffer"))));
            buffer_append_str(buf2_177,method_name_174);
            buffer_append_str(buf2_177,"(");
            buffer_append_str(buf2_177,come_value->c_value);
            buffer_append_str(buf2_177,")");
            type_178=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 831, "sType")),"int",(_Bool)0,info));
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_177));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_178));
            /* a*/come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_168;
            right_type2_168=(struct sType*)come_increment_ref_count(sType_clone(type_178));
            /* a*/come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            method_name_174 = come_decrement_ref_count2(method_name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_177,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    /*i*/come_call_finalizer3(right_type2_168,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sType* result_type_179;
char* var_name_180;
char* p_181;
int sline_182;
void* __right_value250 = (void*)0;
char* word_183;
_Bool between_brace_184;
char* p_185;
int sline_186;
void* __right_value251 = (void*)0;
char* word_187;
char* p_188;
int sline_189;
void* __right_value252 = (void*)0;
char* word_190;
void* __right_value253 = (void*)0;
char* __dec_obj122;
void* __right_value254 = (void*)0;
char* __dec_obj123;
_Bool no_comma_192;
void* __right_value255 = (void*)0;
struct sNode* node_193;
struct sNode* __dec_obj124;
char* p_194;
int sline_195;
void* __right_value256 = (void*)0;
char* word_196;
void* __right_value257 = (void*)0;
struct sNode* node_197;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct tuple2$2sTypephcharph* __result135__;
    result_type_179=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(!first) {
        result_type_179->mPointerNum=result_type_179->mTypedefOriginalPointerNum;
    }
    var_name_180=((void*)0);
    {
        p_181=info->p;
        sline_182=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            word_183=(char*)come_increment_ref_count(parse_word(info));
            if(string_operator_equals(word_183,"const")||string_operator_equals(word_183,"__restrict")||string_operator_equals(word_183,"restrict")||string_operator_equals(word_183,"__user")||string_operator_equals(word_183,"volatile")||string_operator_equals(word_183,"_Nonnull")||string_operator_equals(word_183,"_Nullable")||string_operator_equals(word_183,"_Null_unspecified")||string_operator_equals(word_183,"__user")||string_operator_equals(word_183,"_Addr")) {
            }
            else {
                info->p=p_181;
                info->sline=sline_182;
            }
            word_183 = come_decrement_ref_count2(word_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_181;
            info->sline=sline_182;
        }
    }
    between_brace_184=(_Bool)0;
    {
        p_185=info->p;
        sline_186=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_187=(char*)come_increment_ref_count(parse_word(info));
                if(is_type_name(word_187,info)) {
                }
                else {
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p!=40) {
                            between_brace_184=(_Bool)1;
                        }
                    }
                }
                word_187 = come_decrement_ref_count2(word_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_185;
        info->sline=sline_186;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_188=info->p;
            sline_189=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_190=(char*)come_increment_ref_count(parse_word(info));
                if(string_operator_equals(word_190,"const")||string_operator_equals(word_190,"__restrict")||string_operator_equals(word_190,"restrict")||string_operator_equals(word_190,"__user")||string_operator_equals(word_190,"volatile")||string_operator_equals(word_190,"_Nonnull")||string_operator_equals(word_190,"_Nullable")||string_operator_equals(word_190,"_Null_unspecified")||string_operator_equals(word_190,"__user")||string_operator_equals(word_190,"_Addr")) {
                }
                else {
                    info->p=p_188;
                    info->sline=sline_189;
                }
                word_190 = come_decrement_ref_count2(word_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_188;
                info->sline=sline_189;
            }
        }
        result_type_179->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(between_brace_184&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(xisalnum(*info->p)||*info->p==95) {
        __dec_obj122=var_name_180;
        var_name_180=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_191=0;
        num_anonymous_var_name_191++;
        __dec_obj123=var_name_180;
        var_name_180=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_191));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(between_brace_184&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(*info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_192=info->no_comma;
        info->no_comma=(_Bool)1;
        node_193=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_192;
        __dec_obj124=result_type_179->mSizeNum;
        result_type_179->mSizeNum=(struct sNode*)come_increment_ref_count(node_193);
        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_194=info->p;
            sline_195=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_196=(char*)come_increment_ref_count(parse_word(info));
                if(string_operator_equals(word_196,"const")||string_operator_equals(word_196,"__restrict")||string_operator_equals(word_196,"restrict")||string_operator_equals(word_196,"__user")||string_operator_equals(word_196,"volatile")||string_operator_equals(word_196,"_Nonnull")||string_operator_equals(word_196,"_Nullable")||string_operator_equals(word_196,"_Null_unspecified")||string_operator_equals(word_196,"__user")||string_operator_equals(word_196,"_Addr")) {
                }
                else {
                    info->p=p_194;
                    info->sline=sline_195;
                }
                word_196 = come_decrement_ref_count2(word_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_194;
                info->sline=sline_195;
            }
        }
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_179->mArrayPointerType=(_Bool)1;
            result_type_179->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_197=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_179->mArrayNum,(struct sNode*)come_increment_ref_count(node_197));
        parse_sharp_v5(info);
        result_type_179->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_197) { node_197 = come_decrement_ref_count2(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    ((char*)(__right_value261=parse_attribute(info)));
    __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result135__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value263=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1004, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_179),(char*)come_increment_ref_count(var_name_180))));
    /*i*/come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value263,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
struct list_item$1sNodeph* litem_198;
struct sNode* __dec_obj125;
void* __right_value259 = (void*)0;
struct list_item$1sNodeph* litem_199;
struct sNode* __dec_obj126;
void* __right_value260 = (void*)0;
struct list_item$1sNodeph* litem_200;
struct sNode* __dec_obj127;
struct list$1sNodeph* __result133__;
    if(self->len==0) {
        litem_198=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value258=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        __dec_obj125=litem_198->item;
        litem_198->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_198;
        self->head=litem_198;
    }
    else {
        if(self->len==1) {
            litem_199=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value259=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
            litem_199->prev=self->head;
            litem_199->next=((void*)0);
            __dec_obj126=litem_199->item;
            litem_199->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_199;
            self->head->next=litem_199;
        }
        else {
            litem_200=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value260=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
            litem_200->prev=self->tail;
            litem_200->next=((void*)0);
            __dec_obj127=litem_200->item;
            litem_200->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_200;
            self->tail=litem_200;
        }
    }
    self->len++;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj128;
char* __dec_obj129;
struct tuple2$2sTypephcharph* __result134__;
    __dec_obj128=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj129=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj130;
char* __dec_obj131;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj130=self->v1;
            /* a*/come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj131=self->v2;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_201;
int sline_202;
void* __right_value264 = (void*)0;
char* word_203;
    p_201=info->p;
    sline_202=info->sline;
    if(xisalpha(*info->p)||*info->p==95) {
        word_203=(char*)come_increment_ref_count(parse_word(info));
        if(string_operator_equals(word_203,"const")||string_operator_equals(word_203,"__restrict")||string_operator_equals(word_203,"restrict")||string_operator_equals(word_203,"__user")||string_operator_equals(word_203,"volatile")||string_operator_equals(word_203,"_Nonnull")||string_operator_equals(word_203,"_Nullable")||string_operator_equals(word_203,"_Null_unspecified")||string_operator_equals(word_203,"__user")||string_operator_equals(word_203,"_Addr")) {
        }
        else {
            info->p=p_201;
            info->sline=sline_202;
        }
        word_203 = come_decrement_ref_count2(word_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_201;
        info->sline=sline_202;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_204;
void* __right_value265 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_205;
char* name_206;
_Bool err_207;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct tuple3$3sTypephcharphbool* __result137__;
    no_output_err_204=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value265=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_205=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_206=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_207=multiple_assign_var2->v3;
    /*g*/come_call_finalizer3(__right_value265,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_204;
    __result137__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value267=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1036, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_205),(char*)come_increment_ref_count(name_206),err_207)));
    /*i*/come_call_finalizer3(type_205,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value267,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj132;
char* __dec_obj133;
struct tuple3$3sTypephcharphbool* __result136__;
    __dec_obj132=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj133=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_208;
int head_sline_209;
void* __right_value268 = (void*)0;
char* type_name_210;
void* __right_value269 = (void*)0;
char* __dec_obj134;
_Bool record__211;
_Bool constant_212;
_Bool static__213;
_Bool volatile__214;
_Bool register__215;
_Bool unsigned__216;
_Bool long__217;
_Bool long_long_218;
_Bool short__219;
_Bool restrict__220;
_Bool struct__221;
_Bool union__222;
_Bool enum__223;
_Bool no_heap_224;
_Bool extern__225;
_Bool inline__226;
_Bool come_mem_core__227;
_Bool uniq__228;
struct sNode* alignas__229;
_Bool anonymous_type_230;
_Bool anonymous_name_231;
char* p_232;
int sline_233;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
char* __dec_obj135;
void* __right_value272 = (void*)0;
char* __dec_obj136;
void* __right_value273 = (void*)0;
char* __dec_obj137;
char* p_234;
int sline_235;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct tuple3$3sTypephcharphbool* __result138__;
char* p_236;
int sline_237;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct tuple3$3sTypephcharphbool* __result139__;
void* __right_value280 = (void*)0;
struct sNode* node_238;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple3$3sTypephcharphbool* __result140__;
char* p_239;
int sline_240;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* __dec_obj138;
void* __right_value286 = (void*)0;
char* __dec_obj139;
void* __right_value287 = (void*)0;
char* __dec_obj140;
char* p_241;
int sline_242;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct tuple3$3sTypephcharphbool* __result141__;
void* __right_value291 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_243;
char* name_244;
_Bool err_245;
char* p_246;
int sline_247;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct tuple3$3sTypephcharphbool* __result142__;
void* __right_value296 = (void*)0;
char* __dec_obj141;
void* __right_value297 = (void*)0;
char* __dec_obj142;
void* __right_value298 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_248;
char* name_249;
_Bool err_250;
char* p_251;
int sline_252;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct tuple3$3sTypephcharphbool* __result143__;
void* __right_value302 = (void*)0;
struct sNode* exp_253;
struct sNode* __dec_obj143;
void* __right_value303 = (void*)0;
char* __dec_obj144;
void* __right_value304 = (void*)0;
char* __dec_obj145;
void* __right_value305 = (void*)0;
char* __dec_obj146;
void* __right_value306 = (void*)0;
char* __dec_obj147;
void* __right_value307 = (void*)0;
char* __dec_obj148;
void* __right_value308 = (void*)0;
char* __dec_obj149;
void* __right_value309 = (void*)0;
char* __dec_obj150;
void* __right_value310 = (void*)0;
char* __dec_obj151;
void* __right_value311 = (void*)0;
char* __dec_obj152;
void* __right_value312 = (void*)0;
char* __dec_obj153;
void* __right_value313 = (void*)0;
char* __dec_obj154;
char* p_254;
int sline_255;
void* __right_value314 = (void*)0;
char* __dec_obj155;
void* __right_value315 = (void*)0;
char* __dec_obj156;
void* __right_value316 = (void*)0;
char* __dec_obj157;
void* __right_value317 = (void*)0;
char* __dec_obj158;
void* __right_value318 = (void*)0;
char* __dec_obj159;
void* __right_value319 = (void*)0;
char* __dec_obj160;
char* p_256;
int sline_257;
void* __right_value320 = (void*)0;
char* __dec_obj161;
char* p_258;
int sline_259;
void* __right_value321 = (void*)0;
char* __dec_obj162;
void* __right_value322 = (void*)0;
char* __dec_obj163;
void* __right_value323 = (void*)0;
char* __dec_obj164;
char* p_260;
int sline_261;
void* __right_value324 = (void*)0;
char* __dec_obj165;
void* __right_value325 = (void*)0;
char* __dec_obj166;
void* __right_value326 = (void*)0;
char* __dec_obj167;
void* __right_value327 = (void*)0;
char* __dec_obj168;
void* __right_value328 = (void*)0;
char* __dec_obj169;
void* __right_value329 = (void*)0;
char* __dec_obj170;
void* __right_value330 = (void*)0;
char* __dec_obj171;
void* __right_value331 = (void*)0;
char* __dec_obj172;
void* __right_value332 = (void*)0;
char* __dec_obj173;
void* __right_value333 = (void*)0;
char* __dec_obj174;
char* p_262;
int sline_263;
void* __right_value334 = (void*)0;
char* __dec_obj175;
void* __right_value335 = (void*)0;
char* __dec_obj176;
int pointer_num_264;
_Bool heap_265;
_Bool lambda_flag_266;
char* pX_267;
int slineX_268;
void* __right_value336 = (void*)0;
struct sType* type_269;
char* var_name_270;
_Bool function_pointer_flag_271;
char* p_272;
int sline_273;
void* __right_value337 = (void*)0;
char* word_274;
_Bool var_name_between_brace_275;
char* p_276;
int sline_277;
void* __right_value338 = (void*)0;
char* word_278;
void* __right_value339 = (void*)0;
char* __dec_obj177;
void* __right_value340 = (void*)0;
struct sNode* node_280;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple3$3sTypephcharphbool* __result144__;
int pointer_num_281;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __dec_obj178;
void* __right_value345 = (void*)0;
char* __dec_obj179;
void* __right_value346 = (void*)0;
struct sNode* node_282;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple3$3sTypephcharphbool* __result145__;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* __dec_obj180;
void* __right_value351 = (void*)0;
char* __dec_obj181;
void* __right_value352 = (void*)0;
struct sNode* node_283;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple3$3sTypephcharphbool* __result146__;
int pointer_num_284;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __dec_obj182;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct tuple3$3sTypephcharphbool* __result147__;
void* __right_value359 = (void*)0;
char* __dec_obj183;
void* __right_value360 = (void*)0;
char* __dec_obj184;
void* __right_value361 = (void*)0;
char* __dec_obj185;
void* __right_value362 = (void*)0;
char* __dec_obj186;
_Bool no_comma_287;
void* __right_value363 = (void*)0;
struct sNode* node_288;
struct sNode* __dec_obj187;
struct sType* result_type_289;
void* __right_value364 = (void*)0;
struct sType* __dec_obj188;
int i_298;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* __dec_obj189;
int i_302;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj190;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj191;
struct sNode* __dec_obj192;
void* __right_value373 = (void*)0;
char* __dec_obj193;
void* __right_value374 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5;
struct list$1sTypeph* param_types_303;
struct list$1charph* param_names_304;
struct list$1charph* param_default_parametors_305;
_Bool var_args_306;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* __dec_obj194;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct tuple1$1sTypeph* __dec_obj196;
struct list$1sTypeph* __dec_obj197;
struct list$1charph* __dec_obj198;
int function_pointer_num_307;
struct sType* result_type_308;
void* __right_value379 = (void*)0;
struct sType* __dec_obj199;
int i_309;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* __dec_obj200;
int i_310;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sType* __dec_obj201;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sType* __dec_obj202;
struct sNode* __dec_obj203;
void* __right_value388 = (void*)0;
char* __dec_obj204;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct tuple3$3sTypephcharphbool* __result161__;
void* __right_value391 = (void*)0;
char* __dec_obj205;
_Bool function_pointer_array_312;
void* __right_value392 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6;
struct list$1sTypeph* param_types_313;
struct list$1charph* param_names_314;
struct list$1charph* param_default_parametors_315;
_Bool var_args_316;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* __dec_obj206;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple1$1sTypeph* __dec_obj207;
struct list$1sTypeph* __dec_obj208;
struct list$1charph* __dec_obj209;
void* __right_value398 = (void*)0;
struct sNode* exp_317;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct tuple3$3sTypephcharphbool* __result163__;
void* __right_value401 = (void*)0;
struct CVALUE* come_value_318;
void* __right_value402 = (void*)0;
struct sType* __dec_obj212;
void* __right_value403 = (void*)0;
char* __dec_obj213;
void* __right_value404 = (void*)0;
char* __dec_obj214;
void* __right_value405 = (void*)0;
char* __dec_obj215;
void* __right_value406 = (void*)0;
char* __dec_obj216;
_Bool no_comma_321;
void* __right_value407 = (void*)0;
struct sNode* node_322;
struct sNode* __dec_obj217;
void* __right_value408 = (void*)0;
struct sType* __dec_obj221;
void* __right_value409 = (void*)0;
char* __dec_obj222;
struct sNode* __dec_obj223;
int i_323;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* __dec_obj224;
struct sNode* __dec_obj225;
int i_324;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sType* __dec_obj226;
struct sNode* __dec_obj227;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct tuple3$3sTypephcharphbool* __result164__;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sType* __dec_obj228;
void* __right_value420 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* generics_type_325;
char* var_name_326;
_Bool err_327;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct tuple3$3sTypephcharphbool* __result165__;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct tuple3$3sTypephcharphbool* __result166__;
void* __right_value425 = (void*)0;
struct sType* __dec_obj229;
void* __right_value426 = (void*)0;
char* new_name_328;
struct sNode* __dec_obj230;
struct sClass* klass_329;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sClass* klass_371;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* __dec_obj231;
struct sNode* __dec_obj232;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1sTypeph* types_372;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_373;
char* name_374;
_Bool err_375;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple3$3sTypephcharphbool* __result188__;
void* __right_value442 = (void*)0;
int num_tuples_376;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* __dec_obj233;
struct list$1sTypeph* o2_saved_377;
struct sType* it_378;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* __dec_obj234;
void* __right_value448 = (void*)0;
char* new_name_379;
void* __right_value449 = (void*)0;
char* __dec_obj235;
void* __right_value450 = (void*)0;
char* __dec_obj236;
void* __right_value451 = (void*)0;
char* __dec_obj237;
void* __right_value452 = (void*)0;
char* __dec_obj238;
_Bool no_comma_382;
void* __right_value453 = (void*)0;
struct sNode* node_383;
struct sNode* __dec_obj239;
void* __right_value454 = (void*)0;
struct sNode* node_384;
void* __right_value455 = (void*)0;
char* asm_name_385;
char* __dec_obj240;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple3$3sTypephcharphbool* __result189__;
type_269 = (void*)0;
var_name_270 = (void*)0;
result_type_289 = (void*)0;
result_type_308 = (void*)0;
    head_208=info->p;
    head_sline_209=info->sline;
    info->define_struct=(_Bool)0;
    type_name_210=(char*)come_increment_ref_count(parse_word(info));
    while(string_operator_equals(type_name_210,"__extension__")) {
        __dec_obj134=type_name_210;
        type_name_210=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    record__211=(_Bool)0;
    constant_212=(_Bool)0;
    static__213=(_Bool)0;
    volatile__214=(_Bool)0;
    register__215=(_Bool)0;
    unsigned__216=(_Bool)0;
    long__217=(_Bool)0;
    long_long_218=(_Bool)0;
    short__219=(_Bool)0;
    restrict__220=(_Bool)0;
    struct__221=(_Bool)0;
    union__222=(_Bool)0;
    enum__223=(_Bool)0;
    no_heap_224=(_Bool)0;
    extern__225=(_Bool)0;
    inline__226=(_Bool)0;
    come_mem_core__227=(_Bool)0;
    uniq__228=(_Bool)0;
    alignas__229=((void*)0);
    anonymous_type_230=(_Bool)0;
    anonymous_name_231=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name_210,"struct")) {
            struct__221=(_Bool)1;
            if(*info->p==123) {
                p_232=info->p;
                sline_233=info->sline;
                ((char*)(__right_value270=skip_block(info)));
                __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    anonymous_name_231=(_Bool)1;
                    anonymous_type_230=(_Bool)1;
                    __dec_obj135=type_name_210;
                    type_name_210=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_232;
                    info->sline=sline_233;
                    break;
                }
                else {
                    anonymous_type_230=(_Bool)1;
                    __dec_obj136=type_name_210;
                    type_name_210=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_232;
                    info->sline=sline_233;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(*info->p!=62) {
                __dec_obj137=type_name_210;
                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(*info->p==60) {
                    p_234=info->p;
                    sline_235=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(*info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==123) {
                            }
                            else {
                                info->p=p_234;
                                info->sline=sline_235;
                            }
                            break;
                        }
                        else {
                            if(*info->p==0) {
                                err_msg(info,"invalid struct definition");
                                __result138__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value275=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1130, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value275,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                gComeFunResultObject = (void*)0;
                                return __result138__;
                            }
                            else {
                                info->p++;
                            }
                        }
                    }
                }
                if(*info->p==123) {
                    p_236=info->p;
                    sline_237=info->sline;
                    ((char*)(__right_value276=skip_block(info)));
                    __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                        ((char*)(__right_value277=parse_attribute(info)));
                        __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(*info->p==59) {
                        info->p=head_208;
                        info->sline=head_sline_209;
                        info->define_struct=(_Bool)1;
                        __result139__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value279=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1152, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value279,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result139__;
                    }
                    else {
                        info->p=p_236;
                        info->sline=sline_237;
                        node_238=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_210),info));
                        if(!node_compile(node_238,info)) {
                            __result140__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value282=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1164, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value282,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result140__;
                        }
                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else {
            if(string_operator_equals(type_name_210,"union")) {
                union__222=(_Bool)1;
                if(*info->p==123) {
                    p_239=info->p;
                    sline_240=info->sline;
                    ((char*)(__right_value283=skip_block(info)));
                    __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                        ((char*)(__right_value284=parse_attribute(info)));
                        __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(*info->p==59) {
                        info->p=head_208;
                        info->sline=head_sline_209;
                        info->define_struct=(_Bool)0;
                        anonymous_type_230=(_Bool)1;
                        __dec_obj138=type_name_210;
                        type_name_210=(char*)come_increment_ref_count(__builtin_string(""));
                        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                        info->p=p_239;
                        info->sline=sline_240;
                        break;
                    }
                    else {
                        anonymous_type_230=(_Bool)1;
                        __dec_obj139=type_name_210;
                        type_name_210=(char*)come_increment_ref_count(__builtin_string(""));
                        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        info->p=p_239;
                        info->sline=sline_240;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj140=type_name_210;
                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(*info->p==123) {
                    p_241=info->p;
                    sline_242=info->sline;
                    ((char*)(__right_value288=skip_block(info)));
                    __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        info->p=head_208;
                        info->sline=head_sline_209;
                        info->define_struct=(_Bool)1;
                        __result141__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value290=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1221, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value290,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result141__;
                    }
                    else {
                        anonymous_type_230=(_Bool)1;
                        info->p=p_241;
                        info->sline=sline_242;
                        break;
                    }
                }
            }
            else {
                if(string_operator_equals(type_name_210,"enum")) {
                    enum__223=(_Bool)1;
                    parse_sharp_v5(info);
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value291=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        type_243=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                        name_244=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                        err_245=multiple_assign_var3->v3;
                        /*g*/come_call_finalizer3(__right_value291,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        /*i*/come_call_finalizer3(type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==123) {
                        p_246=info->p;
                        sline_247=info->sline;
                        ((char*)(__right_value292=skip_block(info)));
                        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                            ((char*)(__right_value293=parse_attribute(info)));
                            __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(*info->p==59) {
                            info->p=head_208;
                            info->sline=head_sline_209;
                            info->define_struct=(_Bool)1;
                            __result142__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value295=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1259, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value295,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result142__;
                        }
                        else {
                            anonymous_type_230=(_Bool)1;
                            __dec_obj141=type_name_210;
                            type_name_210=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_246;
                            info->sline=sline_247;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj142=type_name_210;
                    type_name_210=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                    parse_sharp_v5(info);
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value298=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        type_248=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                        name_249=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                        err_250=multiple_assign_var4->v3;
                        /*g*/come_call_finalizer3(__right_value298,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        /*i*/come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_249 = come_decrement_ref_count2(name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==123) {
                        p_251=info->p;
                        sline_252=info->sline;
                        ((char*)(__right_value299=skip_block(info)));
                        __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==59) {
                            info->p=head_208;
                            info->sline=head_sline_209;
                            info->define_struct=(_Bool)1;
                            __result143__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value301=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1295, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value301,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result143__;
                        }
                        else {
                            anonymous_type_230=(_Bool)1;
                            info->p=p_251;
                            info->sline=sline_252;
                            break;
                        }
                    }
                }
                else {
                    if(string_operator_equals(type_name_210,"_Alignas")) {
                        expected_next_character(40,info);
                        exp_253=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        __dec_obj143=alignas__229;
                        alignas__229=(struct sNode*)come_increment_ref_count(exp_253);
                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                        expected_next_character(41,info);
                        __dec_obj144=type_name_210;
                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(exp_253) { exp_253 = come_decrement_ref_count2(exp_253, ((struct sNode*)exp_253)->finalize, ((struct sNode*)exp_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(string_operator_equals(type_name_210,"const")) {
                            constant_212=(_Bool)1;
                            __dec_obj145=type_name_210;
                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            if(string_operator_equals(type_name_210,"static")) {
                                static__213=(_Bool)1;
                                __dec_obj146=type_name_210;
                                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                if(string_operator_equals(type_name_210,"uniq")) {
                                    uniq__228=(_Bool)1;
                                    __dec_obj147=type_name_210;
                                    type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                else {
                                    if(string_operator_equals(type_name_210,"_Nullable")) {
                                        __dec_obj148=type_name_210;
                                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    else {
                                        if(string_operator_equals(type_name_210,"record")) {
                                            record__211=(_Bool)1;
                                            __dec_obj149=type_name_210;
                                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        else {
                                            if(string_operator_equals(type_name_210,"come_mem_core")) {
                                                come_mem_core__227=(_Bool)1;
                                                __dec_obj150=type_name_210;
                                                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            else {
                                                if(string_operator_equals(type_name_210,"extern")) {
                                                    extern__225=(_Bool)1;
                                                    __dec_obj151=type_name_210;
                                                    type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                }
                                                else {
                                                    if(string_operator_equals(type_name_210,"_Noreturn")) {
                                                        __dec_obj152=type_name_210;
                                                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    }
                                                    else {
                                                        if(string_operator_equals(type_name_210,"inline")||string_operator_equals(type_name_210,"__inline")||string_operator_equals(type_name_210,"__inline__")||string_operator_equals(type_name_210,"__always_inline")) {
                                                            inline__226=(_Bool)1;
                                                            __dec_obj153=type_name_210;
                                                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        }
                                                        else {
                                                            if(string_operator_equals(type_name_210,"volatile")) {
                                                                volatile__214=(_Bool)1;
                                                                __dec_obj154=type_name_210;
                                                                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            }
                                                            else {
                                                                if(string_operator_equals(type_name_210,"long")) {
                                                                    {
                                                                        p_254=info->p;
                                                                        sline_255=info->sline;
                                                                        if(!xisalpha(*info->p)) {
                                                                            info->p=p_254;
                                                                            info->sline=sline_255;
                                                                            __dec_obj155=type_name_210;
                                                                            type_name_210=(char*)come_increment_ref_count(__builtin_string("long"));
                                                                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            break;
                                                                        }
                                                                        else {
                                                                            __dec_obj156=type_name_210;
                                                                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            if(string_operator_equals(type_name_210,"unsigned")) {
                                                                                __dec_obj157=type_name_210;
                                                                                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                if(string_operator_equals(type_name_210,"int")) {
                                                                                    long__217=(_Bool)1;
                                                                                    unsigned__216=(_Bool)1;
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(string_operator_equals(type_name_210,"long")) {
                                                                                    p_254=info->p;
                                                                                    sline_255=info->sline;
                                                                                    if(xisalpha(*info->p)) {
                                                                                        long_long_218=(_Bool)1;
                                                                                        __dec_obj158=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        long__217=(_Bool)1;
                                                                                        break;
                                                                                    }
                                                                                    if(string_operator_equals(type_name_210,"int")) {
                                                                                        long_long_218=(_Bool)1;
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        if(!is_type_name(type_name_210,info)) {
                                                                                            __dec_obj159=type_name_210;
                                                                                            type_name_210=(char*)come_increment_ref_count(__builtin_string("long"));
                                                                                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            long_long_218=(_Bool)1;
                                                                                            info->p=p_254;
                                                                                            info->sline=sline_255;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(is_type_name(type_name_210,info)) {
                                                                                        if(long__217) {
                                                                                            long_long_218=(_Bool)1;
                                                                                            long__217=(_Bool)0;
                                                                                        }
                                                                                        else {
                                                                                            long__217=(_Bool)1;
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        info->p=p_254;
                                                                                        info->sline=sline_255;
                                                                                        __dec_obj160=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(__builtin_string("long"));
                                                                                        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    if(string_operator_equals(type_name_210,"unsigned")) {
                                                                        unsigned__216=(_Bool)1;
                                                                        if(xisalpha(*info->p)||*info->p==95) {
                                                                            p_256=info->p;
                                                                            sline_257=info->sline;
                                                                            __dec_obj161=type_name_210;
                                                                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            if(string_operator_equals(type_name_210,"short")) {
                                                                                if(xisalpha(*info->p)||*info->p==95) {
                                                                                    p_258=info->p;
                                                                                    sline_259=info->sline;
                                                                                    __dec_obj162=type_name_210;
                                                                                    type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    if(is_type_name(type_name_210,info)) {
                                                                                        short__219=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        short__219=(_Bool)1;
                                                                                        __dec_obj163=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        info->p=p_258;
                                                                                        info->sline=sline_259;
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    short__219=(_Bool)1;
                                                                                    __dec_obj164=type_name_210;
                                                                                    type_name_210=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(string_operator_equals(type_name_210,"long")) {
                                                                                    if(xisalpha(*info->p)||*info->p==95) {
                                                                                        p_260=info->p;
                                                                                        sline_261=info->sline;
                                                                                        __dec_obj165=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        if(is_type_name(type_name_210,info)) {
                                                                                            long__217=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            long__217=(_Bool)1;
                                                                                            __dec_obj166=type_name_210;
                                                                                            type_name_210=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            info->p=p_260;
                                                                                            info->sline=sline_261;
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        long__217=(_Bool)1;
                                                                                        __dec_obj167=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(!is_type_name(type_name_210,info)) {
                                                                                        __dec_obj168=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        info->p=p_256;
                                                                                        info->sline=sline_257;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            __dec_obj169=type_name_210;
                                                                            type_name_210=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(string_operator_equals(type_name_210,"signed")||string_operator_equals(type_name_210,"__signed__")) {
                                                                            unsigned__216=(_Bool)0;
                                                                            __dec_obj170=type_name_210;
                                                                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(string_operator_equals(type_name_210,"register")) {
                                                                                register__215=(_Bool)1;
                                                                                __dec_obj171=type_name_210;
                                                                                type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            }
                                                                            else {
                                                                                if(string_operator_equals(type_name_210,"restrict")) {
                                                                                    restrict__220=(_Bool)1;
                                                                                    __dec_obj172=type_name_210;
                                                                                    type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    if(string_operator_equals(type_name_210,"_Addr")) {
                                                                                        __dec_obj173=type_name_210;
                                                                                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        if(string_operator_equals(type_name_210,"__restrict")) {
                                                                                            restrict__220=(_Bool)1;
                                                                                            __dec_obj174=type_name_210;
                                                                                            type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            if(string_operator_equals(type_name_210,"short")) {
                                                                                                short__219=(_Bool)1;
                                                                                                if(*info->p==58) {
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    if(xisalnum(*info->p)) {
                                                                                                        p_262=info->p;
                                                                                                        sline_263=info->sline;
                                                                                                        __dec_obj175=type_name_210;
                                                                                                        type_name_210=(char*)come_increment_ref_count(parse_word(info));
                                                                                                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        if(string_operator_equals(type_name_210,"int")) {
                                                                                                            break;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(string_operator_equals(type_name_210,"short")) {
                                                                                                                short__219=(_Bool)0;
                                                                                                                break;
                                                                                                            }
                                                                                                            else {
                                                                                                                if(is_type_name(type_name_210,info)) {
                                                                                                                    info->p=p_262;
                                                                                                                    info->sline=sline_263;
                                                                                                                }
                                                                                                                else {
                                                                                                                    __dec_obj176=type_name_210;
                                                                                                                    type_name_210=(char*)come_increment_ref_count(__builtin_string("short"));
                                                                                                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    info->p=p_262;
                                                                                                                    info->sline=sline_263;
                                                                                                                    break;
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                    else {
                                                                                                        break;
                                                                                                    }
                                                                                                }
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
    skip_pointer_attribute(info);
    pointer_num_264=0;
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_264++;
    }
    heap_265=(_Bool)0;
    if(*info->p==37) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_265=(_Bool)1;
    }
    lambda_flag_266=(_Bool)0;
    {
        pX_267=info->p;
        slineX_268=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value336=parse_word(info)));
            __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(*info->p==40&&info->in_typedef) {
                lambda_flag_266=(_Bool)1;
            }
        }
        info->p=pX_267;
        info->sline=slineX_268;
    }
    function_pointer_flag_271=(_Bool)0;
    {
        p_272=info->p;
        sline_273=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(*info->p==42||*info->p==94) {
                function_pointer_flag_271=(_Bool)1;
            }
            else {
                if(xisalpha(*info->p)||*info->p==95) {
                    word_274=(char*)come_increment_ref_count(parse_word(info));
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==40) {
                            function_pointer_flag_271=(_Bool)1;
                        }
                    }
                    word_274 = come_decrement_ref_count2(word_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_272;
        info->sline=sline_273;
    }
    var_name_between_brace_275=(_Bool)0;
    {
        p_276=info->p;
        sline_277=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_278=(char*)come_increment_ref_count(parse_word(info));
                if(is_type_name(word_278,info)) {
                }
                else {
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p!=40) {
                            var_name_between_brace_275=(_Bool)1;
                        }
                    }
                }
                word_278 = come_decrement_ref_count2(word_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_276;
        info->sline=sline_277;
    }
    if(anonymous_type_230&&*info->p==123) {
        static int anonymous_num_279=0;
        if(struct__221) {
            if(string_operator_equals(type_name_210,"")) {
                __dec_obj177=type_name_210;
                type_name_210=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_279));
                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_280=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_210),info));
            if(!node_compile(node_280,info)) {
                err_msg(info,"parse_struct is failed");
                __result144__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value342=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1675, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value342,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result144__;
            }
            pointer_num_281=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_281++;
            }
            __dec_obj178=type_269;
            type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1685, "sType")),type_name_210,(_Bool)0,info));
            /* a*/come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_269->mPointerNum=pointer_num_281;
            if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__223) {
                if(string_operator_equals(type_name_210,"")) {
                    __dec_obj179=type_name_210;
                    type_name_210=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_279));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                node_282=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_210),info));
                if(!info->no_output_err) {
                    if(!node_compile(node_282,info)) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result145__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value348=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1699, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value348,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result145__;
                    }
                }
                __dec_obj180=type_269;
                type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1703, "sType")),type_name_210,(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__222) {
                    if(string_operator_equals(type_name_210,"")) {
                        __dec_obj181=type_name_210;
                        type_name_210=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_279));
                        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    node_283=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_210),info));
                    if(!node_compile(node_283,info)) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result146__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value354=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1715, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value354,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result146__;
                    }
                    pointer_num_284=0;
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_284++;
                    }
                    __dec_obj182=type_269;
                    type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1726, "sType")),type_name_210,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
                    type_269->mPointerNum=pointer_num_284;
                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result147__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value358=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1732, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value358,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result147__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(var_name_between_brace_275&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                __dec_obj183=var_name_270;
                var_name_270=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(anonymous_name_231) {
                    static int num_anonymous_var_name_285=0;
                    num_anonymous_var_name_285++;
                    __dec_obj184=var_name_270;
                    var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_285));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj185=var_name_270;
                        var_name_270=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        static int num_anonymous_var_name_286=0;
                        num_anonymous_var_name_286++;
                        __dec_obj186=var_name_270;
                        var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_286));
                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
            }
            if(var_name_between_brace_275&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_287=info->no_comma;
                info->no_comma=(_Bool)1;
                node_288=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_287;
                __dec_obj187=type_269->mSizeNum;
                type_269->mSizeNum=(struct sNode*)come_increment_ref_count(node_288);
                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_288) { node_288 = come_decrement_ref_count2(node_288, ((struct sNode*)node_288)->finalize, ((struct sNode*)node_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_266) {
            if(map$2charphsTypephp_operator_load_element(info->types,type_name_210)) {
                __dec_obj188=result_type_289;
                result_type_289=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_210)));
                /* a*/come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_type_289->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_289->mClass->mName), "05type.c", 1781, 5));
            }
            else {
                if(list$1charph_contained(info->generics_type_names,type_name_210)) {
                    for(                    i_298=0;                    i_298<list$1charph_length(info->generics_type_names);                    i_298++                    ){
                        if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_298), "05type.c", 1785, 6)),type_name_210)) {
                            __dec_obj189=result_type_289;
                            result_type_289=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1786, "sType")),((char*)(__right_value366=xsprintf("generics_type%d",i_298))),(_Bool)0,info));
                            /* a*/come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
                            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    if(list$1charph_contained(info->method_generics_type_names,type_name_210)) {
                        for(                        i_302=0;                        i_302<list$1charph_length(info->method_generics_type_names);                        i_302++                        ){
                            if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_302), "05type.c", 1792, 7)),type_name_210)) {
                                __dec_obj190=result_type_289;
                                result_type_289=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1793, "sType")),((char*)(__right_value369=xsprintf("mgenerics_type%d",i_302))),(_Bool)0,info));
                                /* a*/come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj191=result_type_289;
                        result_type_289=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1798, "sType")),type_name_210,(_Bool)0,info));
                        /* a*/come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            result_type_289->mConstant=result_type_289->mConstant||constant_212;
            __dec_obj192=result_type_289->mAlignas;
            result_type_289->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
            if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_289->mComeMemCore=result_type_289->mComeMemCore||come_mem_core__227;
            result_type_289->mRegister=register__215;
            result_type_289->mUnsigned=result_type_289->mUnsigned||unsigned__216;
            result_type_289->mVolatile=volatile__214;
            result_type_289->mRecord=result_type_289->mStatic||static__213;
            result_type_289->mUniq=result_type_289->mUniq||uniq__228;
            result_type_289->mStatic=result_type_289->mRecord||record__211;
            result_type_289->mExtern=result_type_289->mExtern||extern__225;
            result_type_289->mInline=result_type_289->mInline||inline__226;
            result_type_289->mRestrict=result_type_289->mRestrict||restrict__220;
            result_type_289->mLongLong=result_type_289->mLongLong||long_long_218;
            result_type_289->mLong=result_type_289->mLong||long__217;
            result_type_289->mShort=result_type_289->mShort||short__219;
            result_type_289->mPointerNum=pointer_num_264;
            result_type_289->mHeap=result_type_289->mHeap||heap_265;
            __dec_obj193=var_name_270;
            var_name_270=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value374=parse_params(info,(_Bool)0)));
            param_types_303=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
            param_names_304=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
            param_default_parametors_305=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
            var_args_306=multiple_assign_var5->v4;
            /*g*/come_call_finalizer3(__right_value374,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj194=type_269;
            type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1823, "sType")),"lambda",(_Bool)0,info));
            /* a*/come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj196=type_269->mResultType;
            type_269->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1825, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_289)));
            /* a*/come_call_finalizer3(__dec_obj196,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj197=type_269->mParamTypes;
            type_269->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_303);
            /* a*/come_call_finalizer3(__dec_obj197,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj198=type_269->mParamNames;
            type_269->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_304);
            /* a*/come_call_finalizer3(__dec_obj198,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            type_269->mVarArgs=var_args_306;
            type_269->mExtern=extern__225;
            /*i*/come_call_finalizer3(result_type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_303,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_305,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_271) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                function_pointer_num_307=0;
                while(*info->p==42||*info->p==94) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    function_pointer_num_307++;
                }
                skip_pointer_attribute(info);
                if(map$2charphsTypephp_operator_load_element(info->types,type_name_210)) {
                    __dec_obj199=result_type_308;
                    result_type_308=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_210)));
                    /* a*/come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
                    result_type_308->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_308->mClass->mName), "05type.c", 1849, 8));
                }
                else {
                    if(list$1charph_contained(info->generics_type_names,type_name_210)) {
                        for(                        i_309=0;                        i_309<list$1charph_length(info->generics_type_names);                        i_309++                        ){
                            if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_309), "05type.c", 1854, 9)),type_name_210)) {
                                __dec_obj200=result_type_308;
                                result_type_308=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1855, "sType")),((char*)(__right_value381=xsprintf("generics_type%d",i_309))),(_Bool)0,info));
                                /* a*/come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        if(list$1charph_contained(info->method_generics_type_names,type_name_210)) {
                            for(                            i_310=0;                            i_310<list$1charph_length(info->method_generics_type_names);                            i_310++                            ){
                                if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_310), "05type.c", 1861, 10)),type_name_210)) {
                                    __dec_obj201=result_type_308;
                                    result_type_308=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1862, "sType")),((char*)(__right_value384=xsprintf("mgenerics_type%d",i_310))),(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            __dec_obj202=result_type_308;
                            result_type_308=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1867, "sType")),type_name_210,(_Bool)0,info));
                            /* a*/come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                result_type_308->mConstant=result_type_308->mConstant||constant_212;
                __dec_obj203=result_type_308->mAlignas;
                result_type_308->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_308->mComeMemCore=result_type_308->mComeMemCore||come_mem_core__227;
                result_type_308->mRegister=register__215;
                result_type_308->mUnsigned=result_type_308->mUnsigned||unsigned__216;
                result_type_308->mVolatile=volatile__214;
                result_type_308->mStatic=result_type_308->mStatic||static__213;
                result_type_308->mUniq=result_type_308->mUniq||uniq__228;
                result_type_308->mRecord=result_type_308->mRecord||record__211;
                result_type_308->mExtern=result_type_308->mExtern||extern__225;
                result_type_308->mInline=result_type_308->mInline||inline__226;
                result_type_308->mRestrict=result_type_308->mRestrict||restrict__220;
                result_type_308->mLongLong=result_type_308->mLongLong||long_long_218;
                result_type_308->mLong=result_type_308->mLong||long__217;
                result_type_308->mShort=result_type_308->mShort||short__219;
                result_type_308->mPointerNum+=pointer_num_264;
                result_type_308->mHeap=result_type_308->mHeap||heap_265;
                if(xisalnum(*info->p)||*info->p==95) {
                    __dec_obj204=var_name_270;
                    var_name_270=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(*info->p==40) {
                        __result161__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value390=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1891, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(result_type_308),(char*)come_increment_ref_count(var_name_270),(_Bool)0)));
                        /*i*/come_call_finalizer3(result_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value390,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result161__;
                    }
                }
                else {
                    static int num_anonymous_var_name_311=0;
                    num_anonymous_var_name_311++;
                    __dec_obj205=var_name_270;
                    var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_311));
                    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                function_pointer_array_312=(_Bool)0;
                if(*info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        function_pointer_array_312=(_Bool)1;
                    }
                }
                expected_next_character(41,info);
                multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value392=parse_params(info,(_Bool)0)));
                param_types_313=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
                param_names_314=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
                param_default_parametors_315=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
                var_args_316=multiple_assign_var6->v4;
                /*g*/come_call_finalizer3(__right_value392,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj206=type_269;
                type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1913, "sType")),"lambda",(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj207=type_269->mResultType;
                type_269->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1915, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(sType_clone(result_type_308))));
                /* a*/come_call_finalizer3(__dec_obj207,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj208=type_269->mParamTypes;
                type_269->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_313);
                /* a*/come_call_finalizer3(__dec_obj208,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj209=type_269->mParamNames;
                type_269->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_314);
                /* a*/come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                type_269->mVarArgs=var_args_316;
                type_269->mExtern=extern__225;
                if(function_pointer_array_312) {
                    type_269->mLambdaArray=(_Bool)1;
                }
                type_269->mFunctionPointerNum=function_pointer_num_307;
                /*i*/come_call_finalizer3(result_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_313,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_314,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_315,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(type_name_210,"__typeof__")&&*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_317=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    expected_next_character(41,info);
                    if(!node_compile(exp_317,info)) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result163__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value400=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 1936, "struct tuple3$3sTypepcharphbool")),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_317) { exp_317 = come_decrement_ref_count2(exp_317, ((struct sNode*)exp_317)->finalize, ((struct sNode*)exp_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value400,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result163__;
                    }
                    come_value_318=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    __dec_obj212=type_269;
                    type_269=(struct sType*)come_increment_ref_count(sType_clone(come_value_318->type));
                    /* a*/come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(var_name_between_brace_275&&*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            __dec_obj213=var_name_270;
                            var_name_270=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            if(anonymous_name_231) {
                                static int num_anonymous_var_name_319=0;
                                num_anonymous_var_name_319++;
                                __dec_obj214=var_name_270;
                                var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_319));
                                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj215=var_name_270;
                                    var_name_270=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                else {
                                    static int num_anonymous_var_name_320=0;
                                    num_anonymous_var_name_320++;
                                    __dec_obj216=var_name_270;
                                    var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_320));
                                    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                        }
                        if(var_name_between_brace_275&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_321=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_322=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_321;
                            __dec_obj217=type_269->mSizeNum;
                            type_269->mSizeNum=(struct sNode*)come_increment_ref_count(node_322);
                            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_322) { node_322 = come_decrement_ref_count2(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_317) { exp_317 = come_decrement_ref_count2(exp_317, ((struct sNode*)exp_317)->finalize, ((struct sNode*)exp_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_318,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(map$2charphsTypephp_operator_load_element(info->types,type_name_210)) {
                        __dec_obj221=type_269;
                        type_269=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_210)));
                        /* a*/come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_269->mTypedefOriginalPointerNum=type_269->mPointerNum;
                        type_269->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_269->mClass->mName), "05type.c", 1991, 11));
                        __dec_obj222=type_269->mOriginalTypeName;
                        type_269->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_210));
                        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                        type_269->mOriginalTypeNamePointerNum=pointer_num_264;
                        type_269->mOriginalTypeNameHeap=heap_265;
                        type_269->mConstant=type_269->mConstant||constant_212;
                        __dec_obj223=type_269->mAlignas;
                        type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
                        if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); }
                        type_269->mComeMemCore=type_269->mComeMemCore||come_mem_core__227;
                        type_269->mRegister=register__215;
                        type_269->mUnsigned=type_269->mUnsigned||unsigned__216;
                        type_269->mVolatile=volatile__214;
                        type_269->mStatic=type_269->mStatic||static__213;
                        type_269->mUniq=type_269->mUniq||uniq__228;
                        type_269->mRecord=type_269->mRecord||record__211;
                        type_269->mExtern=type_269->mExtern||extern__225;
                        type_269->mInline=type_269->mInline||inline__226;
                        type_269->mRestrict=type_269->mRestrict||restrict__220;
                        type_269->mLongLong=type_269->mLongLong||long_long_218;
                        type_269->mLong=type_269->mLong||long__217;
                        type_269->mShort=type_269->mShort||short__219;
                        type_269->mPointerNum+=pointer_num_264;
                        type_269->mHeap=type_269->mHeap||heap_265;
                    }
                    else {
                        if(list$1charph_contained(info->generics_type_names,type_name_210)) {
                            for(                            i_323=0;                            i_323<list$1charph_length(info->generics_type_names);                            i_323++                            ){
                                if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_323), "05type.c", 2016, 12)),type_name_210)) {
                                    __dec_obj224=type_269;
                                    type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2017, "sType")),((char*)(__right_value411=xsprintf("generics_type%d",i_323))),(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_269->mConstant=type_269->mConstant||constant_212;
                            __dec_obj225=type_269->mAlignas;
                            type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
                            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                            type_269->mComeMemCore=type_269->mComeMemCore||come_mem_core__227;
                            type_269->mRegister=register__215;
                            type_269->mUnsigned=type_269->mUnsigned||unsigned__216;
                            type_269->mVolatile=volatile__214;
                            type_269->mStatic=type_269->mStatic||static__213;
                            type_269->mUniq=type_269->mUniq||uniq__228;
                            type_269->mRecord=type_269->mRecord||record__211;
                            type_269->mExtern=type_269->mExtern||extern__225;
                            type_269->mInline=type_269->mInline||inline__226;
                            type_269->mRestrict=type_269->mRestrict||restrict__220;
                            type_269->mLongLong=type_269->mLongLong||long_long_218;
                            type_269->mLong=type_269->mLong||long__217;
                            type_269->mShort=type_269->mShort||short__219;
                            type_269->mPointerNum+=pointer_num_264;
                            type_269->mHeap=type_269->mHeap||heap_265;
                        }
                        else {
                            if(list$1charph_contained(info->method_generics_type_names,type_name_210)) {
                                for(                                i_324=0;                                i_324<list$1charph_length(info->method_generics_type_names);                                i_324++                                ){
                                    if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_324), "05type.c", 2041, 13)),type_name_210)) {
                                        __dec_obj226=type_269;
                                        type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2042, "sType")),((char*)(__right_value414=xsprintf("mgenerics_type%d",i_324))),(_Bool)0,info));
                                        /* a*/come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                type_269->mConstant=type_269->mConstant||constant_212;
                                __dec_obj227=type_269->mAlignas;
                                type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                type_269->mComeMemCore=type_269->mComeMemCore||come_mem_core__227;
                                type_269->mRegister=register__215;
                                type_269->mUnsigned=type_269->mUnsigned||unsigned__216;
                                type_269->mVolatile=volatile__214;
                                type_269->mStatic=type_269->mStatic||static__213;
                                type_269->mUniq=type_269->mUniq||uniq__228;
                                type_269->mRecord=type_269->mRecord||record__211;
                                type_269->mExtern=type_269->mExtern||extern__225;
                                type_269->mInline=type_269->mInline||inline__226;
                                type_269->mRestrict=type_269->mRestrict||restrict__220;
                                type_269->mLongLong=type_269->mLongLong||long_long_218;
                                type_269->mLong=type_269->mLong||long__217;
                                type_269->mShort=type_269->mShort||short__219;
                                type_269->mPointerNum+=pointer_num_264;
                                type_269->mHeap=type_269->mHeap||heap_265;
                            }
                            else {
                                if(*info->p==60) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_210)==((void*)0)) {
                                        __result164__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value417=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2070, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*g*/come_call_finalizer3(__right_value417,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        gComeFunResultObject = (void*)0;
                                        return __result164__;
                                    }
                                    __dec_obj228=type_269;
                                    type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2073, "sType")),type_name_210,(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    while((_Bool)1) {
                                        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value420=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_325=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                        var_name_326=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                        err_327=multiple_assign_var7->v3;
                                        /*g*/come_call_finalizer3(__right_value420,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(!err_327) {
                                            __result165__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value422=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2079, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            /*i*/come_call_finalizer3(generics_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_326 = come_decrement_ref_count2(var_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            /*g*/come_call_finalizer3(__right_value422,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            gComeFunResultObject = (void*)0;
                                            return __result165__;
                                        }
                                        list$1sTypeph_push_back(type_269->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_325));
                                        if(*info->p==44) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            if(*info->p==62) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                /*i*/come_call_finalizer3(generics_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_326 = come_decrement_ref_count2(var_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid generics type\n");
                                                __result166__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value424=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2096, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                /*i*/come_call_finalizer3(generics_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_326 = come_decrement_ref_count2(var_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                /*g*/come_call_finalizer3(__right_value424,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                gComeFunResultObject = (void*)0;
                                                return __result166__;
                                            }
                                        }
                                        /*i*/come_call_finalizer3(generics_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_326 = come_decrement_ref_count2(var_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(is_contained_generics_class(type_269,info)) {
                                        __dec_obj229=type_269;
                                        type_269=(struct sType*)come_increment_ref_count(solve_generics(type_269,info->generics_type,info));
                                        /* a*/come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        if(!output_generics_struct(type_269,type_269,info)) {
                                            new_name_328=(char*)come_increment_ref_count(create_generics_name(type_269,info));
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_328);
                                            exit(7);
                                            new_name_328 = come_decrement_ref_count2(new_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    type_269->mConstant=type_269->mConstant||constant_212;
                                    __dec_obj230=type_269->mAlignas;
                                    type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
                                    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_269->mComeMemCore=type_269->mComeMemCore||come_mem_core__227;
                                    type_269->mRegister=register__215;
                                    type_269->mUnsigned=type_269->mUnsigned||unsigned__216;
                                    type_269->mVolatile=volatile__214;
                                    type_269->mStatic=type_269->mStatic||static__213;
                                    type_269->mUniq=type_269->mUniq||uniq__228;
                                    type_269->mRecord=type_269->mRecord||record__211;
                                    type_269->mExtern=type_269->mExtern||extern__225;
                                    type_269->mInline=type_269->mInline||inline__226;
                                    type_269->mRestrict=type_269->mRestrict||restrict__220;
                                    type_269->mLongLong=type_269->mLongLong||long_long_218;
                                    type_269->mLong=type_269->mLong||long__217;
                                    type_269->mShort=type_269->mShort||short__219;
                                    type_269->mPointerNum+=pointer_num_264;
                                    type_269->mHeap=type_269->mHeap||heap_265;
                                }
                                else {
                                    if(struct__221) {
                                        klass_329=map$2charphsClassphp_operator_load_element(info->classes,type_name_210);
                                        if(klass_329==((void*)0)&&*info->p!=60) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_210),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2135, "sClass")),type_name_210,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                                        }
                                    }
                                    if(union__222) {
                                        klass_371=map$2charphsClassphp_operator_load_element(info->classes,type_name_210);
                                        if(klass_371==((void*)0)&&*info->p!=60) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_210),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2142, "sClass")),type_name_210,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                                        }
                                    }
                                    __dec_obj231=type_269;
                                    type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2146, "sType")),type_name_210,(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    type_269->mConstant=type_269->mConstant||constant_212;
                                    __dec_obj232=type_269->mAlignas;
                                    type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__229);
                                    if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_269->mComeMemCore=type_269->mComeMemCore||come_mem_core__227;
                                    type_269->mRegister=register__215;
                                    type_269->mUnsigned=type_269->mUnsigned||unsigned__216;
                                    type_269->mVolatile=volatile__214;
                                    type_269->mStatic=type_269->mStatic||static__213;
                                    type_269->mUniq=type_269->mUniq||uniq__228;
                                    type_269->mRecord=type_269->mRecord||record__211;
                                    type_269->mExtern=type_269->mExtern||extern__225;
                                    type_269->mInline=type_269->mInline||inline__226;
                                    type_269->mRestrict=type_269->mRestrict||restrict__220;
                                    type_269->mLongLong=type_269->mLongLong||long_long_218;
                                    type_269->mLong=type_269->mLong||long__217;
                                    type_269->mShort=type_269->mShort||short__219;
                                    type_269->mPointerNum+=pointer_num_264;
                                    type_269->mHeap=type_269->mHeap||heap_265;
                                }
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_269->mPointerNum++;
                        if(type_269->mNoSolvedGenericsType->v1) {
                            type_269->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(*info->p==37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_269->mHeap=(_Bool)1;
                        if(type_269->mNoSolvedGenericsType->v1) {
                            type_269->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(*info->p==38) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_269->mNoHeap=(_Bool)1;
                        if(type_269->mNoSolvedGenericsType->v1) {
                            type_269->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(*info->p==63) {
                        info->p++;
                        if(*info->p==63) {
                            info->p++;
                            type_269->mGuardValue=(_Bool)1;
                        }
                        else {
                            type_269->mNullValue=(_Bool)1;
                        }
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==96) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_269->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_269->mPointerNum++;
                        if(type_269->mNoSolvedGenericsType->v1) {
                            type_269->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(*info->p==37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_269->mHeap=(_Bool)1;
                        if(type_269->mNoSolvedGenericsType->v1) {
                            type_269->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(parse_multiple_type&&*info->p==44) {
                        types_372=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2248, "list$1sTypeph"))));
                        list$1sTypeph_push_back(types_372,(struct sType*)come_increment_ref_count(sType_clone(type_269)));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value439=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_373=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                            name_374=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                            err_375=multiple_assign_var8->v3;
                            /*g*/come_call_finalizer3(__right_value439,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_375) {
                                __result188__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value441=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2259, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                /*i*/come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_374 = come_decrement_ref_count2(name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(types_372,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                                var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*g*/come_call_finalizer3(__right_value441,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                gComeFunResultObject = (void*)0;
                                return __result188__;
                            }
                            list$1sTypeph_push_back(types_372,(struct sType*)come_increment_ref_count(sType_clone(type2_373)));
                            /*i*/come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_374 = come_decrement_ref_count2(name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_376=list$1sTypeph_length(types_372);
                        __dec_obj233=type_269;
                        type_269=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2267, "sType")),((char*)(__right_value444=xsprintf("tuple%d",num_tuples_376))),(_Bool)0,info));
                        /* a*/come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                        __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_269->mPointerNum++;
                        type_269->mHeap=(_Bool)1;
                        for(                        o2_saved_377=(struct list$1sTypeph*)come_increment_ref_count((types_372)),it_378=list$1sTypeph_begin((o2_saved_377));                        !list$1sTypeph_end((o2_saved_377));                        it_378=list$1sTypeph_next((o2_saved_377))                        ){
                            list$1sTypeph_push_back(type_269->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_378)));
                        }
                        /*i*/come_call_finalizer3(o2_saved_377,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        if(is_contained_generics_class(type_269,info)) {
                            __dec_obj234=type_269;
                            type_269=(struct sType*)come_increment_ref_count(solve_generics(type_269,info->generics_type,info));
                            /* a*/come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(!output_generics_struct(type_269,type_269,info)) {
                                new_name_379=(char*)come_increment_ref_count(create_generics_name(type_269,info));
                                printf("output generics is failed(%s)\n",new_name_379);
                                exit(9);
                                new_name_379 = come_decrement_ref_count2(new_name_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        type_269->mMultipleTypes=(_Bool)1;
                        /*i*/come_call_finalizer3(types_372,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(var_name_between_brace_275&&*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            __dec_obj235=var_name_270;
                            var_name_270=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            if(anonymous_name_231) {
                                static int num_anonymous_var_name_380=0;
                                num_anonymous_var_name_380++;
                                __dec_obj236=var_name_270;
                                var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_380));
                                __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj237=var_name_270;
                                    var_name_270=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                else {
                                    static int num_anonymous_var_name_381=0;
                                    num_anonymous_var_name_381++;
                                    __dec_obj238=var_name_270;
                                    var_name_270=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_381));
                                    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                        }
                        if(var_name_between_brace_275&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_382=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_383=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_382;
                            __dec_obj239=type_269->mSizeNum;
                            type_269->mSizeNum=(struct sNode*)come_increment_ref_count(node_383);
                            if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_383) { node_383 = come_decrement_ref_count2(node_383, ((struct sNode*)node_383)->finalize, ((struct sNode*)node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_269->mArrayPointerType=(_Bool)1;
            type_269->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_384=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_269->mArrayNum,(struct sNode*)come_increment_ref_count(node_384));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_385=(char*)come_increment_ref_count(parse_attribute(info));
    __dec_obj240=type_269->mAsmName;
    type_269->mAsmName=(char*)come_increment_ref_count(asm_name_385);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    __result189__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value457=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2363, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_269),(char*)come_increment_ref_count(var_name_270),(_Bool)1)));
    type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__229) { alignas__229 = come_decrement_ref_count2(alignas__229, ((struct sNode*)alignas__229)->finalize, ((struct sNode*)alignas__229)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_270 = come_decrement_ref_count2(var_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_385 = come_decrement_ref_count2(asm_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value457,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_290;
unsigned int hash_291;
unsigned int it_292;
struct sType* __result148__;
struct sType* __result149__;
struct sType* __result150__;
struct sType* __result151__;
default_value_290 = (void*)0;
    memset(&default_value_290,0,sizeof(struct sType*));
    hash_291=string_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while((_Bool)1) {
        if(self->item_existance[it_292]) {
            if(string_equals(self->keys[it_292],key)) {
                __result148__ = gComeFunResultObject = __result_obj__ = self->items[it_292];
                /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result148__;
            }
            it_292++;
            if(it_292>=self->size) {
                it_292=0;
            }
            else {
                if(it_292==hash_291) {
                    __result149__ = gComeFunResultObject = __result_obj__ = default_value_290;
                    /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result149__;
                }
            }
        }
        else {
            __result150__ = gComeFunResultObject = __result_obj__ = default_value_290;
            /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result150__;
        }
    }
    __result151__ = gComeFunResultObject = __result_obj__ = default_value_290;
    /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_295;
    for(    it_295=list$1charph_begin(self);    !list$1charph_end(self);    it_295=list$1charph_next(self)    ){
        if(string_operator_equals(it_295,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_293;
char* __result152__;
char* __result153__;
char* result_294;
char* __result154__;
result_293 = (void*)0;
result_294 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_293,0,sizeof(char*));
        __result152__ = gComeFunResultObject = __result_obj__ = result_293;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    self->it=self->head;
    if(self->it) {
        __result153__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    memset(&result_294,0,sizeof(char*));
    __result154__ = gComeFunResultObject = __result_obj__ = result_294;
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_296;
char* __result155__;
char* __result156__;
char* result_297;
char* __result157__;
result_296 = (void*)0;
result_297 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_296,0,sizeof(char*));
        __result155__ = gComeFunResultObject = __result_obj__ = result_296;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result156__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    memset(&result_297,0,sizeof(char*));
    __result157__ = gComeFunResultObject = __result_obj__ = result_297;
    gComeFunResultObject = (void*)0;
    return __result157__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_299;
int i_300;
char* __result158__;
char* default_value_301;
char* __result159__;
default_value_301 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_299=self->head;
    i_300=0;
    while(it_299!=((void*)0)) {
        if(position==i_300) {
            __result158__ = gComeFunResultObject = __result_obj__ = it_299->item;
            gComeFunResultObject = (void*)0;
            return __result158__;
        }
        it_299=it_299->next;
        i_300++;
    }
    memset(&default_value_301,0,sizeof(char*));
    __result159__ = gComeFunResultObject = __result_obj__ = default_value_301;
    default_value_301 = come_decrement_ref_count2(default_value_301, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj195;
struct tuple1$1sTypeph* __result160__;
    __dec_obj195=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj210;
struct tuple3$3sTypepcharphbool* __result162__;
    self->v1=v1;
    __dec_obj210=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj211;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj211=self->v2;
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj218;
struct sType* __dec_obj219;
char* __dec_obj220;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj218=self->c_value;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj219=self->type;
            /* a*/come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj220=self->c_value_without_right_value_objects;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_347;
unsigned int it_348;
_Bool same_key_exist_365;
char* it2_368;
struct map$2charphsClassph* __result187__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_347=string_get_hash_key(key)%self->size;
    it_348=hash_347;
    while((_Bool)1) {
        if(self->item_existance[it_348]) {
            if(string_equals(self->keys[it_348],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_348]);
                    self->keys[it_348] = come_decrement_ref_count2(self->keys[it_348], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_348]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_348]);
                    self->keys[it_348]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_348],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_348]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_348]=item;
                }
                break;
            }
            it_348++;
            if(it_348>=self->size) {
                it_348=0;
            }
            else {
                if(it_348==hash_347) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_348]=(_Bool)1;
            if(1) {
                self->keys[it_348]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_348]=key;
            }
            if(1) {
                self->items[it_348]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_348]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_365=(_Bool)0;
    for(    it2_368=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_368=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_368,key)) {
            same_key_exist_365=(_Bool)1;
        }
    }
    if(!same_key_exist_365) {
        list$1charp_push_back(self->key_list,key);
    }
    __result187__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_330;
void* __right_value427 = (void*)0;
char** keys_331;
void* __right_value428 = (void*)0;
struct sClass** items_332;
void* __right_value429 = (void*)0;
_Bool* item_existance_333;
int len_334;
char* it_337;
struct sClass* default_value_340;
struct sClass* it2_341;
unsigned int hash_344;
int n_345;
struct sClass* default_value_346;
default_value_340 = (void*)0;
default_value_346 = (void*)0;
    size_330=self->size*10;
    keys_331=(char**)come_increment_ref_count(((char**)(__right_value427=(char**)come_calloc(1, sizeof(char*)*(1*(size_330)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_332=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value428=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_330)), "/usr/local/include/comelang.h", 1622, "sClass*%"))));
    item_existance_333=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value429=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_330)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_334=0;
    for(    it_337=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_337=map$2charphsClassph_next(self)    ){
        memset(&default_value_340,0,sizeof(struct sClass*));
        it2_341=map$2charphsClassph_at(self,it_337,default_value_340);
        hash_344=string_get_hash_key(it_337)%size_330;
        n_345=hash_344;
        while((_Bool)1) {
            if(item_existance_333[n_345]) {
                n_345++;
                if(n_345>=size_330) {
                    n_345=0;
                }
                else {
                    if(n_345==hash_344) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_333[n_345]=(_Bool)1;
                keys_331[n_345]=it_337;
                items_332[n_345]=map$2charphsClassph_at(self,it_337,default_value_346);
                len_334++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_331;
    self->items=items_332;
    self->item_existance=item_existance_333;
    self->size=size_330;
    self->len=len_334;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_335;
char* __result167__;
char* __result168__;
char* result_336;
char* __result169__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_335,0,sizeof(char*));
        __result167__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result168__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    memset(&result_336,0,sizeof(char*));
    __result169__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_338;
char* __result170__;
char* __result171__;
char* result_339;
char* __result172__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_338,0,sizeof(char*));
        __result170__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result171__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    memset(&result_339,0,sizeof(char*));
    __result172__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_342;
unsigned int it_343;
struct sClass* __result173__;
struct sClass* __result174__;
struct sClass* __result175__;
struct sClass* __result176__;
    hash_342=string_get_hash_key(((char*)key))%self->size;
    it_343=hash_342;
    while((_Bool)1) {
        if(self->item_existance[it_343]) {
            if(string_equals(self->keys[it_343],key)) {
                __result173__ = gComeFunResultObject = __result_obj__ = self->items[it_343];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result173__;
            }
            it_343++;
            if(it_343>=self->size) {
                it_343=0;
            }
            else {
                if(it_343==hash_342) {
                    __result174__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result174__;
                }
            }
        }
        else {
            __result175__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result175__;
        }
    }
    __result176__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_349;
struct list_item$1charp* it_350;
struct list$1charp* __result180__;
    it2_349=0;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        if(charp_equals(it_350->item,item)) {
            list$1charp_delete(self,it2_349,it2_349+1);
            break;
        }
        it2_349++;
        it_350=it_350->next;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_351;
struct list$1charp* __result177__;
struct list_item$1charp* it_354;
int i_355;
struct list_item$1charp* prev_it_356;
struct list_item$1charp* it_357;
int i_358;
struct list_item$1charp* prev_it_359;
struct list_item$1charp* it_360;
struct list_item$1charp* head_prev_it_361;
struct list_item$1charp* tail_it_362;
int i_363;
struct list_item$1charp* prev_it_364;
struct list$1charp* __result179__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_351=tail;
        tail=head;
        head=tmp_351;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result177__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_354=self->head;
            i_355=0;
            while(it_354!=((void*)0)) {
                if(i_355<tail) {
                    prev_it_356=it_354;
                    it_354=it_354->next;
                    i_355++;
                    /*i*/come_call_finalizer3(prev_it_356,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_355==tail) {
                        self->head=it_354;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_354=it_354->next;
                        i_355++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_357=self->head;
                i_358=0;
                while(it_357!=((void*)0)) {
                    if(i_358==head) {
                        self->tail=it_357->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_358>=head) {
                        prev_it_359=it_357;
                        it_357=it_357->next;
                        i_358++;
                        /*i*/come_call_finalizer3(prev_it_359,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_357=it_357->next;
                        i_358++;
                    }
                }
            }
            else {
                it_360=self->head;
                head_prev_it_361=((void*)0);
                tail_it_362=((void*)0);
                i_363=0;
                while(it_360!=((void*)0)) {
                    if(i_363==head) {
                        head_prev_it_361=it_360->prev;
                    }
                    if(i_363==tail) {
                        tail_it_362=it_360;
                    }
                    if(i_363>=head&&i_363<tail) {
                        prev_it_364=it_360;
                        it_360=it_360->next;
                        i_363++;
                        /*i*/come_call_finalizer3(prev_it_364,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_360=it_360->next;
                        i_363++;
                    }
                }
                if(head_prev_it_361!=((void*)0)) {
                    head_prev_it_361->next=tail_it_362;
                }
                if(tail_it_362!=((void*)0)) {
                    tail_it_362->prev=head_prev_it_361;
                }
            }
        }
    }
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_352;
struct list_item$1charp* prev_it_353;
struct list$1charp* __result178__;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        /*i*/come_call_finalizer3(prev_it_353,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_366;
char* __result181__;
char* __result182__;
char* result_367;
char* __result183__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result181__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    self->it=self->head;
    if(self->it) {
        __result182__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    memset(&result_367,0,sizeof(char*));
    __result183__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_369;
char* __result184__;
char* __result185__;
char* result_370;
char* __result186__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result184__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result185__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    memset(&result_370,0,sizeof(char*));
    __result186__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result186__;
}

