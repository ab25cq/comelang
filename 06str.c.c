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
struct sStrNode
{
    int sline;
    char* sname;
    char* value;
};
struct sSStringNode
{
    int sline;
    char* sname;
    char* value;
    struct list$1sNodeph* exps;
};
struct sCharNode
{
    int sline;
    char* sname;
    int value;
};
struct sWCharNode
{
    int sline;
    char* sname;
    int value;
    _Bool quote;
};
struct sWStringNode
{
    int sline;
    char* sname;
    int* value;
};
struct sRegexNode
{
    int sline;
    char* sname;
    char* str;
    _Bool global;
    _Bool ignore_case;
};
struct sListNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* list_elements;
};
struct sTupleNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sSomeNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sNoneNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sMapNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_none(struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __dec_obj16;
struct sStrNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sStrNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct CVALUE* come_value_64;
void* __right_value121 = (void*)0;
char* __dec_obj19;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sType* __dec_obj20;
_Bool __result68__;
    come_value_64=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))));
    __dec_obj19=come_value_64->c_value;
    come_value_64->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj20=come_value_64->type;
    come_value_64->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_64->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_64));
    add_come_last_code(info,"%s;\n",come_value_64->c_value);
    __result68__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result68__;
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

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj21;
struct tuple1$1sTypeph* __dec_obj23;
struct tuple1$1sTypeph* __dec_obj25;
char* __dec_obj27;
struct list$1sTypeph* __dec_obj28;
struct list$1sNodeph* __dec_obj30;
struct list$1sTypeph* __dec_obj32;
struct list$1charph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct sNode* __dec_obj37;
struct sNode* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj21=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj23=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj23,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj25=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj25,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj27=self->mGenericsName;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj28=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj30=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj30,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj32=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj32,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj33=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj33,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj35=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj37=self->mAlignas;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj38=self->mSizeNum;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj39=self->mOriginalTypeName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj40=self->mAsmName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_65;
struct list_item$1sTypeph* prev_it_66;
    it_65=self->head;
    while(it_65!=((void*)0)) {
        prev_it_66=it_65;
        it_65=it_65->next;
        /*i*/come_call_finalizer3(prev_it_66,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj29;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            /* a*/come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_67;
struct list_item$1sTypeph* prev_it_68;
    it_67=self->head;
    while(it_67!=((void*)0)) {
        prev_it_68=it_67;
        it_67=it_67->next;
        /*i*/come_call_finalizer3(prev_it_68,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_69;
struct list_item$1sNodeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        /*i*/come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj31;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_71;
struct list_item$1sNodeph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_73;
struct list_item$1charph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj34;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_75;
struct list_item$1charph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            /* a*/come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
struct list_item$1CVALUEph* litem_77;
struct CVALUE* __dec_obj41;
void* __right_value125 = (void*)0;
struct list_item$1CVALUEph* litem_78;
struct CVALUE* __dec_obj45;
void* __right_value126 = (void*)0;
struct list_item$1CVALUEph* litem_79;
struct CVALUE* __dec_obj46;
struct list$1CVALUEph* __result67__;
    if(self->len==0) {
        litem_77=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_77->prev=((void*)0);
        litem_77->next=((void*)0);
        __dec_obj41=litem_77->item;
        litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_77;
        self->head=litem_77;
    }
    else {
        if(self->len==1) {
            litem_78=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_78->prev=self->head;
            litem_78->next=((void*)0);
            __dec_obj45=litem_78->item;
            litem_78->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_78;
            self->head->next=litem_78;
        }
        else {
            litem_79=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value126=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_79->prev=self->tail;
            litem_79->next=((void*)0);
            __dec_obj46=litem_79->item;
            litem_79->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_79;
            self->tail=litem_79;
        }
    }
    self->len++;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj42;
struct sType* __dec_obj43;
char* __dec_obj44;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj42=self->c_value;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj43=self->type;
            /* a*/come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj44=self->c_value_without_right_value_objects;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
char* __dec_obj47;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __dec_obj51;
struct sSStringNode* __result75__;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj51=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    /* a*/come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
char* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value137=__builtin_string("sSStringNode")));
    __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct CVALUE* come_value_86;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct buffer* buf_87;
struct list$1sNodeph* o2_saved_88;
struct sNode* it_91;
_Bool __result83__;
void* __right_value142 = (void*)0;
struct CVALUE* come_value_94;
void* __right_value171 = (void*)0;
struct sType* come_value_type_95;
void* __right_value172 = (void*)0;
char* method_name_108;
struct sType* obj_type_111;
struct sType* obj_type2_112;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
char* __dec_obj91;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct buffer* buf2_113;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct sType* type_114;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
char* c_value_115;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct sType* type2_116;
void* __right_value183 = (void*)0;
char* __dec_obj92;
void* __right_value184 = (void*)0;
struct sType* __dec_obj93;
_Bool __result100__;
    come_value_86=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 51, "CVALUE"))));
    buf_87=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 53, "buffer"))));
    buffer_append_str(buf_87,"xsprintf(\"");
    buffer_append_str(buf_87,self->value);
    buffer_append_str(buf_87,"\"");
    if(list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_88=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_91=list$1sNodeph_begin((o2_saved_88));        !list$1sNodeph_end((o2_saved_88));        it_91=list$1sNodeph_next((o2_saved_88))        ){
            if(!node_compile(it_91,info)) {
                __result83__ = (_Bool)0;
                /*i*/come_call_finalizer3(o2_saved_88,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_87,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result83__;
            }
            come_value_94=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            come_value_type_95=(struct sType*)come_increment_ref_count(sType_clone(come_value_94->type));
            if(list$1sNodeph_length(come_value_type_95->mArrayNum)>0) {
                come_value_type_95->mPointerNum+=list$1sNodeph_length(come_value_type_95->mArrayNum);
            }
            method_name_108=(char*)come_increment_ref_count(create_method_name(come_value_type_95,(_Bool)0,"to_string",info,(_Bool)1));
            if(map$2charphsFunph_at(info->funcs,method_name_108,((void*)0))==((void*)0)) {
                obj_type_111=come_value_94->type->mNoSolvedGenericsType->v1;
                if(obj_type_111&&list$1sTypeph_length(obj_type_111->mGenericsTypes)>0) {
                    obj_type2_112=come_value_94->type;
                    __dec_obj91=method_name_108;
                    method_name_108=(char*)come_increment_ref_count(make_generics_function(obj_type2_112,(char*)come_increment_ref_count(__builtin_string("to_string")),info,(_Bool)1));
                    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_94->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 88, "buffer"))));
            buffer_append_str(buf2_113,method_name_108);
            buffer_append_str(buf2_113,"(");
            buffer_append_str(buf2_113,come_value_94->c_value);
            buffer_append_str(buf2_113,")");
            type_114=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 95, "sType")),"char*",(_Bool)0,info));
            type_114->mHeap=(_Bool)1;
            c_value_115=(char*)come_increment_ref_count(append_object_to_right_values(((char*)(__right_value179=buffer_to_string(buf2_113))),(struct sType*)come_increment_ref_count(type_114),info));
            __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_87,",");
            buffer_append_str(buf_87,c_value_115);
            /*i*/come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
            method_name_108 = come_decrement_ref_count2(method_name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_113,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_114,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_115 = come_decrement_ref_count2(c_value_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_88,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_87,")");
    type2_116=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 107, "sType")),"char*",(_Bool)0,info));
    type2_116->mHeap=(_Bool)1;
    __dec_obj92=come_value_86->c_value;
    come_value_86->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_87));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value_86->type;
    come_value_86->type=(struct sType*)come_increment_ref_count(sType_clone(type2_116));
    /* a*/come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_86->var=((void*)0);
    append_object_to_right_values2(come_value_86,(struct sType*)come_increment_ref_count(type2_116),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
    add_come_last_code(info,"%s;\n",come_value_86->c_value);
    __result100__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_87,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_116,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result100__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result69__;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1sNodeph* result_80;
struct list_item$1sNodeph* it_81;
void* __right_value135 = (void*)0;
struct list$1sNodeph* __result74__;
    if(self==((void*)0)) {
        __result69__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_80=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_81=self->head;
    while(it_81!=((void*)0)) {
        list$1sNodeph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        it_81=it_81->next;
    }
    __result74__ = gComeFunResultObject = __result_obj__ = result_80;
    /*i*/come_call_finalizer3(result_80,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result70__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj48;
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_83;
struct sNode* __dec_obj49;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_84;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result71__;
    if(self->len==0) {
        litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value131=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_82->prev=((void*)0);
        litem_82->next=((void*)0);
        __dec_obj48=litem_82->item;
        litem_82->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_82;
        self->head=litem_82;
    }
    else {
        if(self->len==1) {
            litem_83=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_83->prev=self->head;
            litem_83->next=((void*)0);
            __dec_obj49=litem_83->item;
            litem_83->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_83;
            self->head->next=litem_83;
        }
        else {
            litem_84=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_84->prev=self->tail;
            litem_84->next=((void*)0);
            __dec_obj50=litem_84->item;
            litem_84->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_84;
            self->tail=litem_84;
        }
    }
    self->len++;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result72__;
void* __right_value134 = (void*)0;
struct sNode* result_85;
struct sNode* __result73__;
    if(self==(void*)0) {
        __result72__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_85=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_85->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_85->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_85->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_85->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_85->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_85->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_85->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_85->kind=self->kind;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_85;
    if(result_85) { result_85 = come_decrement_ref_count2(result_85, ((struct sNode*)result_85)->finalize, ((struct sNode*)result_85)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_89;
struct sNode* __result77__;
struct sNode* __result78__;
struct sNode* result_90;
struct sNode* __result79__;
result_89 = (void*)0;
result_90 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_89,0,sizeof(struct sNode*));
        __result77__ = gComeFunResultObject = __result_obj__ = result_89;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    self->it=self->head;
    if(self->it) {
        __result78__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    memset(&result_90,0,sizeof(struct sNode*));
    __result79__ = gComeFunResultObject = __result_obj__ = result_90;
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_92;
struct sNode* __result80__;
struct sNode* __result81__;
struct sNode* result_93;
struct sNode* __result82__;
result_92 = (void*)0;
result_93 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_92,0,sizeof(struct sNode*));
        __result80__ = gComeFunResultObject = __result_obj__ = result_92;
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result81__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    memset(&result_93,0,sizeof(struct sNode*));
    __result82__ = gComeFunResultObject = __result_obj__ = result_93;
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result84__;
void* __right_value143 = (void*)0;
struct sType* result_96;
void* __right_value146 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value147 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value148 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value149 = (void*)0;
char* __dec_obj60;
void* __right_value156 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value157 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value158 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value165 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value166 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value168 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value169 = (void*)0;
char* __dec_obj74;
void* __right_value170 = (void*)0;
char* __dec_obj75;
struct sType* __result95__;
    if(self==(void*)0) {
        __result84__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    result_96=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_96->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=result_96->mNoSolvedGenericsType;
        result_96->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj58=result_96->mOriginalLoadVarType;
        result_96->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj59=result_96->mNoExceptionType;
        result_96->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_96->mGenericsName;
        result_96->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_96->mGenericsTypes;
        result_96->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_96->mArrayNum;
        result_96->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_96->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_96->mParamTypes;
        result_96->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_96->mParamNames;
        result_96->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_96->mResultType;
        result_96->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_96->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_96->mAlignas;
        result_96->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_96->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_96->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_96->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_96->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_96->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_96->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_96->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_96->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_96->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_96->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_96->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_96->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_96->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_96->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_96->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_96->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_96->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_96->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_96->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_96->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_96->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_96->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_96->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_96->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_96->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_96->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_96->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_96->mSizeNum;
        result_96->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_96->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_96->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_96->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_96->mOriginalTypeName;
        result_96->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_96->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_96->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_96->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_96->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_96->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_96->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_96->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_96->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_96->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_96->mAsmName;
        result_96->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_96->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_96->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_96->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_96->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_96->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_96->mOriginIsArray=self->mOriginIsArray;
    }
    __result95__ = gComeFunResultObject = __result_obj__ = result_96;
    /*i*/come_call_finalizer3(result_96,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result85__;
void* __right_value144 = (void*)0;
struct tuple1$1sTypeph* result_97;
void* __right_value145 = (void*)0;
struct sType* __dec_obj55;
struct tuple1$1sTypeph* __result86__;
    if(self==(void*)0) {
        __result85__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    result_97=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj55=result_97->v1;
        result_97->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_97;
    /*i*/come_call_finalizer3(result_97,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj56;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj56=self->v1;
            /* a*/come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result87__;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct list$1sTypeph* result_98;
struct list_item$1sTypeph* it_99;
void* __right_value155 = (void*)0;
struct list$1sTypeph* __result90__;
    if(self==((void*)0)) {
        __result87__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    result_98=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_99=self->head;
    while(it_99!=((void*)0)) {
        list$1sTypeph_add(result_98,(struct sType*)come_increment_ref_count(sType_clone(it_99->item)));
        it_99=it_99->next;
    }
    __result90__ = gComeFunResultObject = __result_obj__ = result_98;
    /*i*/come_call_finalizer3(result_98,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value152 = (void*)0;
struct list_item$1sTypeph* litem_100;
struct sType* __dec_obj61;
void* __right_value153 = (void*)0;
struct list_item$1sTypeph* litem_101;
struct sType* __dec_obj62;
void* __right_value154 = (void*)0;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj63;
struct list$1sTypeph* __result89__;
    if(self->len==0) {
        litem_100=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value152=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj61=litem_100->item;
        litem_100->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_100;
        self->head=litem_100;
    }
    else {
        if(self->len==1) {
            litem_101=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value153=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_101->prev=self->head;
            litem_101->next=((void*)0);
            __dec_obj62=litem_101->item;
            litem_101->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_101;
            self->head->next=litem_101;
        }
        else {
            litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value154=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_102->prev=self->tail;
            litem_102->next=((void*)0);
            __dec_obj63=litem_102->item;
            litem_102->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_102;
            self->tail=litem_102;
        }
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result91__;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct list$1charph* result_103;
struct list_item$1charph* it_104;
void* __right_value164 = (void*)0;
struct list$1charph* __result94__;
    if(self==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    result_103=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_104=self->head;
    while(it_104!=((void*)0)) {
        list$1charph_add(result_103,(char*)come_increment_ref_count(string_clone(it_104->item)));
        it_104=it_104->next;
    }
    __result94__ = gComeFunResultObject = __result_obj__ = result_103;
    /*i*/come_call_finalizer3(result_103,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
struct list_item$1charph* litem_105;
char* __dec_obj67;
void* __right_value162 = (void*)0;
struct list_item$1charph* litem_106;
char* __dec_obj68;
void* __right_value163 = (void*)0;
struct list_item$1charph* litem_107;
char* __dec_obj69;
struct list$1charph* __result93__;
    if(self->len==0) {
        litem_105=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_105->prev=((void*)0);
        litem_105->next=((void*)0);
        __dec_obj67=litem_105->item;
        litem_105->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_105;
        self->head=litem_105;
    }
    else {
        if(self->len==1) {
            litem_106=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_106->prev=self->head;
            litem_106->next=((void*)0);
            __dec_obj68=litem_106->item;
            litem_106->item=(char*)come_increment_ref_count(item);
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_106;
            self->head->next=litem_106;
        }
        else {
            litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_107->prev=self->tail;
            litem_107->next=((void*)0);
            __dec_obj69=litem_107->item;
            litem_107->item=(char*)come_increment_ref_count(item);
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_107;
            self->tail=litem_107;
        }
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_109;
unsigned int it_110;
struct sFun* __result96__;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
    hash_109=string_get_hash_key(((char*)key))%self->size;
    it_110=hash_109;
    while((_Bool)1) {
        if(self->item_existance[it_110]) {
            if(string_equals(self->keys[it_110],key)) {
                __result96__ = gComeFunResultObject = __result_obj__ = self->items[it_110];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result96__;
            }
            it_110++;
            if(it_110>=self->size) {
                it_110=0;
            }
            else {
                if(it_110==hash_109) {
                    __result97__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result97__;
                }
            }
        }
        else {
            __result98__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result98__;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj76;
struct sType* __dec_obj77;
struct list$1sTypeph* __dec_obj78;
struct list$1charph* __dec_obj79;
struct list$1charph* __dec_obj80;
struct sType* __dec_obj81;
struct sBlock* __dec_obj82;
struct buffer* __dec_obj85;
struct buffer* __dec_obj86;
struct buffer* __dec_obj87;
struct buffer* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj76=self->mName;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj77=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj78=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj78,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj79=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj80=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj81=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj82=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj82,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj85=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj86=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj87=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj88=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj88,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj89=self->mComeHeader;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj90=self->mDeclareSName;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj83;
struct sVarTable* __dec_obj84;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj83=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj83,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj84=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj84,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value185 = (void*)0;
struct sCharNode* __result101__;
    ((struct sNodeBase*)(__right_value185=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value185,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("sCharNode")));
    __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct CVALUE* come_value_117;
void* __right_value189 = (void*)0;
char* __dec_obj95;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sType* __dec_obj96;
_Bool __result103__;
    come_value_117=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 140, "CVALUE"))));
    __dec_obj95=come_value_117->c_value;
    come_value_117->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj96=come_value_117->type;
    come_value_117->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 143, "sType")),"char",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_117->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
    add_come_last_code(info,"%s;\n",come_value_117->c_value);
    __result103__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result103__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct sWCharNode* __result104__;
    ((struct sNodeBase*)(__right_value192=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value192,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value193 = (void*)0;
char* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string("sWCharNode")));
    __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct CVALUE* come_value_118;
void* __right_value196 = (void*)0;
char* __dec_obj98;
void* __right_value197 = (void*)0;
char* __dec_obj99;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sType* __dec_obj100;
_Bool __result106__;
    come_value_118=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 171, "CVALUE"))));
    if(self->quote) {
        __dec_obj98=come_value_118->c_value;
        come_value_118->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj99=come_value_118->c_value;
        come_value_118->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj100=come_value_118->type;
    come_value_118->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 179, "sType")),"int",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_118->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_118));
    add_come_last_code(info,"%s;\n",come_value_118->c_value);
    __result106__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result106__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
int* __dec_obj101;
struct sWStringNode* __result107__;
    ((struct sNodeBase*)(__right_value200=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value200,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj101=self->value;
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
char* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value201=__builtin_string("sWStringNode")));
    __right_value201 = come_decrement_ref_count2(__right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct CVALUE* come_value_119;
void* __right_value204 = (void*)0;
char* __dec_obj104;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct sType* __dec_obj105;
_Bool __result109__;
    come_value_119=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 206, "CVALUE"))));
    __dec_obj104=come_value_119->c_value;
    come_value_119->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=come_value_119->type;
    come_value_119->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 209, "sType")),"int*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_119->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
    add_come_last_code(info,"%s;\n",come_value_119->c_value);
    __result109__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
char* __dec_obj106;
struct sRegexNode* __result110__;
    ((struct sNodeBase*)(__right_value207=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value207,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
char* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value209=__builtin_string("sRegexNode")));
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct CVALUE* come_value_120;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
char* __dec_obj109;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* __dec_obj110;
_Bool __result112__;
    come_value_120=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 238, "CVALUE"))));
    __dec_obj109=come_value_120->c_value;
    come_value_120->c_value=(char*)come_increment_ref_count(xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(__right_value212=__builtin_string("1"))):((char*)(__right_value213=__builtin_string("0"))),self->global?((char*)(__right_value214=__builtin_string("1"))):((char*)(__right_value215=__builtin_string("0")))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj110=come_value_120->type;
    come_value_120->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 241, "sType")),"come_regex",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_120->type->mPointerNum=1;
    come_value_120->type->mHeap=(_Bool)1;
    come_value_120->var=((void*)0);
    append_object_to_right_values2(come_value_120,(struct sType*)come_increment_ref_count(come_value_120->type),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
    add_come_last_code(info,"%s;\n",come_value_120->c_value);
    __result112__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
struct list$1sNodeph* __dec_obj111;
struct sListNode* __result113__;
    ((struct sNodeBase*)(__right_value219=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value219,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj111=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    /* a*/come_call_finalizer3(__dec_obj111,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=__builtin_string("sListNode")));
    __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_121;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1CVALUEph* params_122;
struct sType* list_element_type_125;
struct list$1sNodeph* o2_saved_126;
struct sNode* it_127;
_Bool __result116__;
void* __right_value223 = (void*)0;
struct CVALUE* come_value_128;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sType* __dec_obj115;
void* __right_value226 = (void*)0;
struct sType* type_values_129;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
char* var_name_134;
void* __right_value232 = (void*)0;
struct sVar* var__135;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct buffer* source_136;
int i_137;
struct list$1CVALUEph* o2_saved_138;
struct CVALUE* it_141;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* list_type_147;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* obj_type_151;
char* fun_name_152;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
char* generics_fun_name_153;
struct sFun* fun_154;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj122;
_Bool __result127__;
void* __right_value251 = (void*)0;
struct sType* result_type_155;
struct sType* type_156;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* obj_value_157;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* num_string_158;
void* __right_value256 = (void*)0;
struct sType* type2_159;
void* __right_value257 = (void*)0;
char* type_name_160;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __dec_obj123;
void* __right_value260 = (void*)0;
struct sType* type3_161;
void* __right_value261 = (void*)0;
struct sType* __dec_obj124;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1CVALUEph* come_params_162;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value2_166;
void* __right_value266 = (void*)0;
char* __dec_obj125;
struct sType* __dec_obj126;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct CVALUE* come_value3_167;
void* __right_value269 = (void*)0;
char* __dec_obj127;
struct sType* __dec_obj128;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct buffer* buf_168;
int j_169;
struct list$1CVALUEph* o2_saved_170;
struct CVALUE* it_171;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct CVALUE* come_value4_172;
void* __right_value274 = (void*)0;
char* __dec_obj129;
void* __right_value275 = (void*)0;
struct sType* __dec_obj130;
_Bool __result130__;
    list_elements_121=self->list_elements;
    params_122=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 273, "list$1CVALUEph"))));
    list_element_type_125=((void*)0);
    for(    o2_saved_126=(list_elements_121),it_127=list$1sNodeph_begin((o2_saved_126));    !list$1sNodeph_end((o2_saved_126));    it_127=list$1sNodeph_next((o2_saved_126))    ){
        if(!node_compile(it_127,info)) {
            __result116__ = (_Bool)0;
            /*i*/come_call_finalizer3(params_122,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_125,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result116__;
        }
        come_value_128=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(list_element_type_125) {
            check_assign_type(((char*)(__right_value224=xsprintf("invalid list element type"))),list_element_type_125,come_value_128->type,come_value_128,(_Bool)0,(_Bool)1,info);
            __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_122,(struct CVALUE*)come_increment_ref_count(come_value_128));
        __dec_obj115=list_element_type_125;
        list_element_type_125=(struct sType*)come_increment_ref_count(sType_clone(come_value_128->type));
        /* a*/come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_129=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_125));
    list$1sNodeph_push_back(type_values_129->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_122),info)));
    type_values_129->mHeap=(_Bool)0;
    static int list_value_num_133=0;
    var_name_134=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_133));
    add_variable_to_table(var_name_134,(struct sType*)come_increment_ref_count(sType_clone(type_values_129)),info);
    var__135=get_variable_from_table(info->lv_table,var_name_134);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value233=make_define_var(type_values_129,var__135->mCValueName,(_Bool)0,info))));
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 306, "buffer"))));
    buffer_append_str(source_136,"{");
    i_137=0;
    for(    o2_saved_138=(struct list$1CVALUEph*)come_increment_ref_count((params_122)),it_141=list$1CVALUEph_begin((o2_saved_138));    !list$1CVALUEph_end((o2_saved_138));    it_141=list$1CVALUEph_next((o2_saved_138))    ){
        if(list_element_type_125->mHeap) {
            buffer_append_str(source_136,((char*)(__right_value236=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__135->mCValueName,i_137,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_122,i_137), "06str.c", 313, 0))->c_value))));
            __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_136,((char*)(__right_value237=xsprintf("%s[%d]=%s;\n",var__135->mCValueName,i_137,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_122,i_137), "06str.c", 316, 1))->c_value))));
            __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        i_137++;
    }
    /*i*/come_call_finalizer3(o2_saved_138,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_136,"}");
    add_come_code(info,"%s",((char*)(__right_value238=buffer_to_string(source_136))));
    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list_type_147=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 325, "sType")),"list",(_Bool)0,info));
    list$1sTypeph_push_back(list_type_147->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(list_element_type_125)));
    obj_type_151=(struct sType*)come_increment_ref_count(sType_clone(list_type_147));
    fun_name_152="initialize_with_values";
    generics_fun_name_153=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value247=make_generics_function(obj_type_151,(char*)come_increment_ref_count(__builtin_string(fun_name_152)),info,(_Bool)1)))));
    __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_154=map$2charphsFunph_at(info->funcs,generics_fun_name_153,((void*)0));
    if(fun_154==((void*)0)) {
        __dec_obj122=generics_fun_name_153;
        generics_fun_name_153=(char*)come_increment_ref_count(create_method_name(obj_type_151,(_Bool)0,((char*)(__right_value249=__builtin_string(fun_name_152))),info,(_Bool)1));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_154=map$2charphsFunph_at(info->funcs,generics_fun_name_153,((void*)0));
        if(fun_154==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_153,info->come_fun->mName);
            __result127__ = (_Bool)1;
            /*i*/come_call_finalizer3(params_122,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_125,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_values_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_134 = come_decrement_ref_count2(var_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_136,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_153 = come_decrement_ref_count2(generics_fun_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result127__;
        }
    }
    result_type_155=(struct sType*)come_increment_ref_count(sType_clone(fun_154->mResultType));
    result_type_155->mStatic=(_Bool)0;
    type_156=list_type_147;
    obj_value_157=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 351, "CVALUE"))));
    num_string_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 353, "buffer"))));
    buffer_append_str(num_string_158,"1");
    type2_159=(struct sType*)come_increment_ref_count(solve_generics(type_156,type_156,info));
    type_name_160=(char*)come_increment_ref_count(make_type_name_string(type2_159,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj123=obj_value_157->c_value;
    obj_value_157->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_160,type_name_160,((char*)(__right_value258=buffer_to_string(num_string_158))),info->sname,info->sline,type_name_160));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_161=(struct sType*)come_increment_ref_count(sType_clone(type2_159));
    type3_161->mPointerNum++;
    type3_161->mHeap=(_Bool)1;
    type2_159->mHeap=(_Bool)1;
    __dec_obj124=obj_value_157->type;
    obj_value_157->type=(struct sType*)come_increment_ref_count(sType_clone(type2_159));
    /* a*/come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_157->type->mPointerNum++;
    obj_value_157->var=((void*)0);
    append_object_to_right_values2(obj_value_157,(struct sType*)come_increment_ref_count(type3_161),info,(_Bool)0);
    come_params_162=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 373, "list$1CVALUEph"))));
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_154->mParamTypes,0), "06str.c", 375, 2))->mHeap&&obj_value_157->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_154->mParamTypes,0), "06str.c", 376, 3)),obj_value_157->type,obj_value_157,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_162,(struct CVALUE*)come_increment_ref_count(obj_value_157));
    come_value2_166=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 380, "CVALUE"))));
    __dec_obj125=come_value2_166->c_value;
    come_value2_166->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_122)));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj126=come_value2_166->type;
    come_value2_166->type=((void*)0);
    /* a*/come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_166->var=((void*)0);
    list$1CVALUEph_push_back(come_params_162,(struct CVALUE*)come_increment_ref_count(come_value2_166));
    come_value3_167=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 388, "CVALUE"))));
    __dec_obj127=come_value3_167->c_value;
    come_value3_167->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__135->mCValueName));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj128=come_value3_167->type;
    come_value3_167->type=((void*)0);
    /* a*/come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_167->var=((void*)0);
    list$1CVALUEph_push_back(come_params_162,(struct CVALUE*)come_increment_ref_count(come_value3_167));
    buf_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 396, "buffer"))));
    buffer_append_str(buf_168,generics_fun_name_153);
    buffer_append_str(buf_168,"(");
    j_169=0;
    for(    o2_saved_170=(struct list$1CVALUEph*)come_increment_ref_count((come_params_162)),it_171=list$1CVALUEph_begin((o2_saved_170));    !list$1CVALUEph_end((o2_saved_170));    it_171=list$1CVALUEph_next((o2_saved_170))    ){
        buffer_append_str(buf_168,it_171->c_value);
        if(j_169!=list$1CVALUEph_length(come_params_162)-1) {
            buffer_append_str(buf_168,",");
        }
        j_169++;
    }
    /*i*/come_call_finalizer3(o2_saved_170,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_168,")");
    come_value4_172=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 413, "CVALUE"))));
    __dec_obj129=come_value4_172->c_value;
    come_value4_172->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_168));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value4_172->type;
    come_value4_172->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_155));
    /* a*/come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_172->type->mStatic=(_Bool)0;
    come_value4_172->var=((void*)0);
    if(result_type_155->mHeap) {
        append_object_to_right_values2(come_value4_172,(struct sType*)come_increment_ref_count(result_type_155),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_172));
    add_come_last_code(info,"%s;\n",come_value4_172->c_value);
    __result130__ = (_Bool)1;
    /*i*/come_call_finalizer3(params_122,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_element_type_125,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_values_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_134 = come_decrement_ref_count2(var_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_136,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_153 = come_decrement_ref_count2(generics_fun_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_155,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_158,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_159,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_160 = come_decrement_ref_count2(type_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_161,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_162,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result130__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_123;
struct list_item$1CVALUEph* prev_it_124;
    it_123=self->head;
    while(it_123!=((void*)0)) {
        prev_it_124=it_123;
        it_123=it_123->next;
        /*i*/come_call_finalizer3(prev_it_124,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj114;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj114=self->item;
            /* a*/come_call_finalizer3(__dec_obj114,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
struct list_item$1sNodeph* litem_130;
struct sNode* __dec_obj116;
void* __right_value228 = (void*)0;
struct list_item$1sNodeph* litem_131;
struct sNode* __dec_obj117;
void* __right_value229 = (void*)0;
struct list_item$1sNodeph* litem_132;
struct sNode* __dec_obj118;
struct list$1sNodeph* __result117__;
    if(self->len==0) {
        litem_130=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value227=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        __dec_obj116=litem_130->item;
        litem_130->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_130;
        self->head=litem_130;
    }
    else {
        if(self->len==1) {
            litem_131=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value228=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
            litem_131->prev=self->head;
            litem_131->next=((void*)0);
            __dec_obj117=litem_131->item;
            litem_131->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_131;
            self->head->next=litem_131;
        }
        else {
            litem_132=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value229=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
            litem_132->prev=self->tail;
            litem_132->next=((void*)0);
            __dec_obj118=litem_132->item;
            litem_132->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_132;
            self->tail=litem_132;
        }
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_139;
struct CVALUE* __result118__;
struct CVALUE* __result119__;
struct CVALUE* result_140;
struct CVALUE* __result120__;
result_139 = (void*)0;
result_140 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_139,0,sizeof(struct CVALUE*));
        __result118__ = gComeFunResultObject = __result_obj__ = result_139;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    self->it=self->head;
    if(self->it) {
        __result119__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    memset(&result_140,0,sizeof(struct CVALUE*));
    __result120__ = gComeFunResultObject = __result_obj__ = result_140;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_142;
struct CVALUE* __result121__;
struct CVALUE* __result122__;
struct CVALUE* result_143;
struct CVALUE* __result123__;
result_142 = (void*)0;
result_143 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_142,0,sizeof(struct CVALUE*));
        __result121__ = gComeFunResultObject = __result_obj__ = result_142;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result122__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    memset(&result_143,0,sizeof(struct CVALUE*));
    __result123__ = gComeFunResultObject = __result_obj__ = result_143;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_144;
int i_145;
struct CVALUE* __result124__;
struct CVALUE* default_value_146;
struct CVALUE* __result125__;
default_value_146 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_144=self->head;
    i_145=0;
    while(it_144!=((void*)0)) {
        if(position==i_145) {
            __result124__ = gComeFunResultObject = __result_obj__ = it_144->item;
            gComeFunResultObject = (void*)0;
            return __result124__;
        }
        it_144=it_144->next;
        i_145++;
    }
    memset(&default_value_146,0,sizeof(struct CVALUE*));
    __result125__ = gComeFunResultObject = __result_obj__ = default_value_146;
    /*i*/come_call_finalizer3(default_value_146,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj119;
void* __right_value242 = (void*)0;
struct list_item$1sTypeph* litem_149;
struct sType* __dec_obj120;
void* __right_value243 = (void*)0;
struct list_item$1sTypeph* litem_150;
struct sType* __dec_obj121;
struct list$1sTypeph* __result126__;
    if(self->len==0) {
        litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value241=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        __dec_obj119=litem_148->item;
        litem_148->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_148;
        self->head=litem_148;
    }
    else {
        if(self->len==1) {
            litem_149=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value242=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_149->prev=self->head;
            litem_149->next=((void*)0);
            __dec_obj120=litem_149->item;
            litem_149->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_149;
            self->head->next=litem_149;
        }
        else {
            litem_150=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_150->prev=self->tail;
            litem_150->next=((void*)0);
            __dec_obj121=litem_150->item;
            litem_150->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_150;
            self->tail=litem_150;
        }
    }
    self->len++;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_163;
int i_164;
struct sType* __result128__;
struct sType* default_value_165;
struct sType* __result129__;
default_value_165 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_163=self->head;
    i_164=0;
    while(it_163!=((void*)0)) {
        if(position==i_164) {
            __result128__ = gComeFunResultObject = __result_obj__ = it_163->item;
            gComeFunResultObject = (void*)0;
            return __result128__;
        }
        it_163=it_163->next;
        i_164++;
    }
    memset(&default_value_165,0,sizeof(struct sType*));
    __result129__ = gComeFunResultObject = __result_obj__ = default_value_165;
    /*i*/come_call_finalizer3(default_value_165,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj131;
struct sTupleNode* __result131__;
    ((struct sNodeBase*)(__right_value276=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value276,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj131=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    /* a*/come_call_finalizer3(__dec_obj131,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
char* __result132__;
    __result132__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value277=__builtin_string("sTupleNode")));
    __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_173;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1sTypeph* tuple_types_174;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1CVALUEph* tuple_values_175;
struct list$1sNodeph* o2_saved_176;
struct sNode* it_177;
_Bool __result133__;
void* __right_value282 = (void*)0;
struct CVALUE* come_value_178;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sType* type_180;
struct list$1sTypeph* o2_saved_181;
struct sType* it_184;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* obj_value_187;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct buffer* num_string_188;
void* __right_value297 = (void*)0;
struct sType* type2_189;
void* __right_value298 = (void*)0;
char* type_name_190;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
char* __dec_obj137;
void* __right_value301 = (void*)0;
struct sType* type3_191;
void* __right_value302 = (void*)0;
struct sType* __dec_obj138;
void* __right_value303 = (void*)0;
struct sType* obj_type_192;
char* fun_name_193;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* generics_fun_name_194;
struct sFun* fun_195;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj139;
_Bool __result142__;
void* __right_value309 = (void*)0;
struct sType* result_type_196;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1CVALUEph* come_params_197;
int i_198;
struct list$1CVALUEph* o2_saved_199;
struct CVALUE* it_200;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_201;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct buffer* buf_202;
int j_203;
struct list$1CVALUEph* o2_saved_204;
struct CVALUE* it_205;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct CVALUE* come_value2_206;
void* __right_value317 = (void*)0;
char* __dec_obj140;
void* __right_value318 = (void*)0;
struct sType* __dec_obj141;
_Bool __result143__;
    tuple_elements_173=self->tuple_elements;
    tuple_types_174=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 450, "list$1sTypeph"))));
    tuple_values_175=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 451, "list$1CVALUEph"))));
    for(    o2_saved_176=(tuple_elements_173),it_177=list$1sNodeph_begin((o2_saved_176));    !list$1sNodeph_end((o2_saved_176));    it_177=list$1sNodeph_next((o2_saved_176))    ){
        if(!node_compile(it_177,info)) {
            __result133__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_174,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_175,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result133__;
        }
        come_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_175,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_178)));
        list$1sTypeph_push_back(tuple_types_174,(struct sType*)come_increment_ref_count(sType_clone(come_value_178->type)));
        /*i*/come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_180=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 465, "sType")),((char*)(__right_value290=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_174)))),(_Bool)0,info));
    __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_181=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_174)),it_184=list$1sTypeph_begin((o2_saved_181));    !list$1sTypeph_end((o2_saved_181));    it_184=list$1sTypeph_next((o2_saved_181))    ){
        list$1sTypeph_push_back(type_180->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_184)));
    }
    /*i*/come_call_finalizer3(o2_saved_181,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_187=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 471, "CVALUE"))));
    num_string_188=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 473, "buffer"))));
    buffer_append_str(num_string_188,"1");
    type2_189=(struct sType*)come_increment_ref_count(solve_generics(type_180,type_180,info));
    type_name_190=(char*)come_increment_ref_count(make_type_name_string(type2_189,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj137=obj_value_187->c_value;
    obj_value_187->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_190,type_name_190,((char*)(__right_value299=buffer_to_string(num_string_188))),info->sname,info->sline,type_name_190));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_191=(struct sType*)come_increment_ref_count(sType_clone(type2_189));
    type3_191->mPointerNum++;
    type3_191->mHeap=(_Bool)1;
    type2_189->mHeap=(_Bool)1;
    __dec_obj138=obj_value_187->type;
    obj_value_187->type=(struct sType*)come_increment_ref_count(sType_clone(type2_189));
    /* a*/come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_187->type->mPointerNum++;
    obj_value_187->var=((void*)0);
    append_object_to_right_values2(obj_value_187,(struct sType*)come_increment_ref_count(type3_191),info,(_Bool)0);
    obj_type_192=(struct sType*)come_increment_ref_count(sType_clone(type2_189));
    fun_name_193="initialize";
    generics_fun_name_194=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value305=make_generics_function(obj_type_192,(char*)come_increment_ref_count(__builtin_string(fun_name_193)),info,(_Bool)1)))));
    __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_195=map$2charphsFunph_at(info->funcs,generics_fun_name_194,((void*)0));
    if(fun_195==((void*)0)) {
        __dec_obj139=generics_fun_name_194;
        generics_fun_name_194=(char*)come_increment_ref_count(create_method_name(obj_type_192,(_Bool)0,((char*)(__right_value307=__builtin_string(fun_name_193))),info,(_Bool)1));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_195=map$2charphsFunph_at(info->funcs,generics_fun_name_194,((void*)0));
        if(fun_195==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_194,info->come_fun->mName);
            __result142__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_174,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_175,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_191,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_194 = come_decrement_ref_count2(generics_fun_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result142__;
        }
    }
    result_type_196=(struct sType*)come_increment_ref_count(sType_clone(fun_195->mResultType));
    result_type_196->mStatic=(_Bool)0;
    come_params_197=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 514, "list$1CVALUEph"))));
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_195->mParamTypes,0), "06str.c", 516, 4))->mHeap&&obj_value_187->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_195->mParamTypes,0), "06str.c", 517, 5)),obj_value_187->type,obj_value_187,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(obj_value_187));
    i_198=1;
    for(    o2_saved_199=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_175)),it_200=list$1CVALUEph_begin((o2_saved_199));    !list$1CVALUEph_end((o2_saved_199));    it_200=list$1CVALUEph_next((o2_saved_199))    ){
        come_value_201=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_200));
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_195->mParamTypes,i_198), "06str.c", 525, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_195->mParamTypes,i_198), "06str.c", 525, 7))->mHeap&&come_value_201->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_195->mParamTypes,i_198), "06str.c", 526, 8)),come_value_201->type,come_value_201,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(come_value_201));
        i_198++;
        /*i*/come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 533, "buffer"))));
    buffer_append_str(buf_202,generics_fun_name_194);
    buffer_append_str(buf_202,"(");
    j_203=0;
    for(    o2_saved_204=(struct list$1CVALUEph*)come_increment_ref_count((come_params_197)),it_205=list$1CVALUEph_begin((o2_saved_204));    !list$1CVALUEph_end((o2_saved_204));    it_205=list$1CVALUEph_next((o2_saved_204))    ){
        buffer_append_str(buf_202,it_205->c_value);
        if(j_203!=list$1CVALUEph_length(come_params_197)-1) {
            buffer_append_str(buf_202,",");
        }
        j_203++;
    }
    /*i*/come_call_finalizer3(o2_saved_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_202,")");
    come_value2_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 550, "CVALUE"))));
    __dec_obj140=come_value2_206->c_value;
    come_value2_206->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_202));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value2_206->type;
    come_value2_206->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_196));
    /* a*/come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_206->type->mStatic=(_Bool)0;
    come_value2_206->var=((void*)0);
    if(result_type_196->mHeap) {
        append_object_to_right_values2(come_value2_206,(struct sType*)come_increment_ref_count(result_type_196),info,(_Bool)0);
    }
    add_come_last_code(info,"%s;\n",come_value2_206->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_206));
    __result143__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_174,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_175,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_191,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_194 = come_decrement_ref_count2(generics_fun_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result143__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result134__;
void* __right_value283 = (void*)0;
struct CVALUE* result_179;
void* __right_value284 = (void*)0;
char* __dec_obj134;
void* __right_value285 = (void*)0;
struct sType* __dec_obj135;
void* __right_value286 = (void*)0;
char* __dec_obj136;
struct CVALUE* __result135__;
    if(self==(void*)0) {
        __result134__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    result_179=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj134=result_179->c_value;
        result_179->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj135=result_179->type;
        result_179->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_179->var=self->var;
    }
    if(self!=((void*)0)) {
        result_179->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj136=result_179->c_value_without_right_value_objects;
        result_179->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_179;
    /*i*/come_call_finalizer3(result_179,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_182;
struct sType* __result136__;
struct sType* __result137__;
struct sType* result_183;
struct sType* __result138__;
result_182 = (void*)0;
result_183 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_182,0,sizeof(struct sType*));
        __result136__ = gComeFunResultObject = __result_obj__ = result_182;
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    self->it=self->head;
    if(self->it) {
        __result137__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    memset(&result_183,0,sizeof(struct sType*));
    __result138__ = gComeFunResultObject = __result_obj__ = result_183;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_185;
struct sType* __result139__;
struct sType* __result140__;
struct sType* result_186;
struct sType* __result141__;
result_185 = (void*)0;
result_186 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_185,0,sizeof(struct sType*));
        __result139__ = gComeFunResultObject = __result_obj__ = result_185;
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result140__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    memset(&result_186,0,sizeof(struct sType*));
    __result141__ = gComeFunResultObject = __result_obj__ = result_186;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
struct list$1sNodeph* __dec_obj142;
struct sSomeNode* __result144__;
    ((struct sNodeBase*)(__right_value319=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value319,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    /* a*/come_call_finalizer3(__dec_obj142,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
char* __result145__;
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=__builtin_string("sSomeNode")));
    __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_207;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1sTypeph* tuple_types_208;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1CVALUEph* tuple_values_209;
struct list$1sNodeph* o2_saved_210;
struct sNode* it_211;
_Bool __result146__;
void* __right_value325 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* type_213;
struct list$1sTypeph* o2_saved_214;
struct sType* it_215;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct CVALUE* obj_value_216;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct buffer* num_string_217;
void* __right_value336 = (void*)0;
struct sType* type2_218;
void* __right_value337 = (void*)0;
char* type_name_219;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
char* __dec_obj145;
void* __right_value340 = (void*)0;
struct sType* type3_220;
void* __right_value341 = (void*)0;
struct sType* __dec_obj146;
void* __right_value342 = (void*)0;
struct sType* obj_type_221;
char* fun_name_222;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* generics_fun_name_223;
struct sFun* fun_224;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* __dec_obj147;
_Bool __result147__;
void* __right_value348 = (void*)0;
struct sType* result_type_225;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1CVALUEph* come_params_226;
int i_227;
struct list$1CVALUEph* o2_saved_228;
struct CVALUE* it_229;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_230;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* buf_231;
int j_232;
struct list$1CVALUEph* o2_saved_233;
struct CVALUE* it_234;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct CVALUE* come_value2_235;
void* __right_value356 = (void*)0;
char* __dec_obj148;
void* __right_value357 = (void*)0;
struct sType* __dec_obj149;
_Bool __result148__;
    tuple_elements_207=self->tuple_elements;
    tuple_types_208=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 587, "list$1sTypeph"))));
    tuple_values_209=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 588, "list$1CVALUEph"))));
    for(    o2_saved_210=(tuple_elements_207),it_211=list$1sNodeph_begin((o2_saved_210));    !list$1sNodeph_end((o2_saved_210));    it_211=list$1sNodeph_next((o2_saved_210))    ){
        if(!node_compile(it_211,info)) {
            __result146__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_208,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_209,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result146__;
        }
        come_value_212=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_209,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_212)));
        list$1sTypeph_push_back(tuple_types_208,(struct sType*)come_increment_ref_count(sType_clone(come_value_212->type)));
        /*i*/come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 602, "sType")),((char*)(__right_value329=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_208)))),(_Bool)0,info));
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_214=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_208)),it_215=list$1sTypeph_begin((o2_saved_214));    !list$1sTypeph_end((o2_saved_214));    it_215=list$1sTypeph_next((o2_saved_214))    ){
        list$1sTypeph_push_back(type_213->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_215)));
    }
    /*i*/come_call_finalizer3(o2_saved_214,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_216=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 608, "CVALUE"))));
    num_string_217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 610, "buffer"))));
    buffer_append_str(num_string_217,"1");
    type2_218=(struct sType*)come_increment_ref_count(solve_generics(type_213,type_213,info));
    type_name_219=(char*)come_increment_ref_count(make_type_name_string(type2_218,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj145=obj_value_216->c_value;
    obj_value_216->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_219,type_name_219,((char*)(__right_value338=buffer_to_string(num_string_217))),info->sname,info->sline,type_name_219));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_220=(struct sType*)come_increment_ref_count(sType_clone(type2_218));
    type3_220->mPointerNum++;
    type3_220->mHeap=(_Bool)1;
    type2_218->mHeap=(_Bool)1;
    __dec_obj146=obj_value_216->type;
    obj_value_216->type=(struct sType*)come_increment_ref_count(sType_clone(type2_218));
    /* a*/come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_216->type->mPointerNum++;
    obj_value_216->var=((void*)0);
    append_object_to_right_values2(obj_value_216,(struct sType*)come_increment_ref_count(type3_220),info,(_Bool)0);
    obj_type_221=(struct sType*)come_increment_ref_count(sType_clone(type2_218));
    fun_name_222="initialize";
    generics_fun_name_223=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value344=make_generics_function(obj_type_221,(char*)come_increment_ref_count(__builtin_string(fun_name_222)),info,(_Bool)1)))));
    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_224=map$2charphsFunph_at(info->funcs,generics_fun_name_223,((void*)0));
    if(fun_224==((void*)0)) {
        __dec_obj147=generics_fun_name_223;
        generics_fun_name_223=(char*)come_increment_ref_count(create_method_name(obj_type_221,(_Bool)0,((char*)(__right_value346=__builtin_string(fun_name_222))),info,(_Bool)1));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_224=map$2charphsFunph_at(info->funcs,generics_fun_name_223,((void*)0));
        if(fun_224==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_223,info->come_fun->mName);
            __result147__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_208,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_209,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_218,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_219 = come_decrement_ref_count2(type_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_220,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_223 = come_decrement_ref_count2(generics_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result147__;
        }
    }
    result_type_225=(struct sType*)come_increment_ref_count(sType_clone(fun_224->mResultType));
    result_type_225->mStatic=(_Bool)0;
    come_params_226=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 651, "list$1CVALUEph"))));
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_224->mParamTypes,0), "06str.c", 653, 9))->mHeap&&obj_value_216->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_224->mParamTypes,0), "06str.c", 654, 10)),obj_value_216->type,obj_value_216,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(obj_value_216));
    i_227=1;
    for(    o2_saved_228=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_209)),it_229=list$1CVALUEph_begin((o2_saved_228));    !list$1CVALUEph_end((o2_saved_228));    it_229=list$1CVALUEph_next((o2_saved_228))    ){
        come_value_230=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_229));
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_224->mParamTypes,i_227), "06str.c", 662, 11))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_224->mParamTypes,i_227), "06str.c", 662, 12))->mHeap&&come_value_230->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_224->mParamTypes,i_227), "06str.c", 663, 13)),come_value_230->type,come_value_230,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value_230));
        i_227++;
        /*i*/come_call_finalizer3(come_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_228,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_231=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 670, "buffer"))));
    buffer_append_str(buf_231,generics_fun_name_223);
    buffer_append_str(buf_231,"(");
    j_232=0;
    for(    o2_saved_233=(struct list$1CVALUEph*)come_increment_ref_count((come_params_226)),it_234=list$1CVALUEph_begin((o2_saved_233));    !list$1CVALUEph_end((o2_saved_233));    it_234=list$1CVALUEph_next((o2_saved_233))    ){
        buffer_append_str(buf_231,it_234->c_value);
        if(j_232!=list$1CVALUEph_length(come_params_226)-1) {
            buffer_append_str(buf_231,",");
        }
        j_232++;
    }
    /*i*/come_call_finalizer3(o2_saved_233,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_231,")");
    come_value2_235=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 687, "CVALUE"))));
    __dec_obj148=come_value2_235->c_value;
    come_value2_235->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_231));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value2_235->type;
    come_value2_235->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_225));
    /* a*/come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_235->type->mStatic=(_Bool)0;
    come_value2_235->var=((void*)0);
    if(result_type_225->mHeap) {
        append_object_to_right_values2(come_value2_235,(struct sType*)come_increment_ref_count(result_type_225),info,(_Bool)0);
    }
    add_come_last_code(info,"%s;\n",come_value2_235->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_235));
    __result148__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_208,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_209,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_218,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_219 = come_decrement_ref_count2(type_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_220,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_223 = come_decrement_ref_count2(generics_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_226,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
struct list$1sNodeph* __dec_obj150;
struct sNoneNode* __result149__;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj150=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    /* a*/come_call_finalizer3(__dec_obj150,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result150__;
    __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sNoneNode")));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_236;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1sTypeph* tuple_types_237;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1CVALUEph* tuple_values_238;
struct list$1sNodeph* o2_saved_239;
struct sNode* it_240;
_Bool __result151__;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_241;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* type_242;
struct list$1sTypeph* o2_saved_243;
struct sType* it_244;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* obj_value_245;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct buffer* num_string_246;
void* __right_value375 = (void*)0;
struct sType* type2_247;
void* __right_value376 = (void*)0;
char* type_name_248;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
char* __dec_obj153;
void* __right_value379 = (void*)0;
struct sType* type3_249;
void* __right_value380 = (void*)0;
struct sType* __dec_obj154;
void* __right_value381 = (void*)0;
struct sType* obj_type_250;
char* fun_name_251;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
char* generics_fun_name_252;
struct sFun* fun_253;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
char* __dec_obj155;
_Bool __result152__;
void* __right_value387 = (void*)0;
struct sType* result_type_254;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct list$1CVALUEph* come_params_255;
int i_256;
struct list$1CVALUEph* o2_saved_257;
struct CVALUE* it_258;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_259;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* buf_260;
int j_261;
struct list$1CVALUEph* o2_saved_262;
struct CVALUE* it_263;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value2_264;
void* __right_value395 = (void*)0;
char* __dec_obj156;
void* __right_value396 = (void*)0;
struct sType* __dec_obj157;
_Bool __result153__;
    tuple_elements_236=self->tuple_elements;
    tuple_types_237=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 724, "list$1sTypeph"))));
    tuple_values_238=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 725, "list$1CVALUEph"))));
    for(    o2_saved_239=(tuple_elements_236),it_240=list$1sNodeph_begin((o2_saved_239));    !list$1sNodeph_end((o2_saved_239));    it_240=list$1sNodeph_next((o2_saved_239))    ){
        if(!node_compile(it_240,info)) {
            __result151__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_237,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_238,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result151__;
        }
        come_value_241=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_238,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_241)));
        list$1sTypeph_push_back(tuple_types_237,(struct sType*)come_increment_ref_count(sType_clone(come_value_241->type)));
        /*i*/come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_242=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 739, "sType")),((char*)(__right_value368=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_237)))),(_Bool)0,info));
    __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_243=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_237)),it_244=list$1sTypeph_begin((o2_saved_243));    !list$1sTypeph_end((o2_saved_243));    it_244=list$1sTypeph_next((o2_saved_243))    ){
        list$1sTypeph_push_back(type_242->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_244)));
    }
    /*i*/come_call_finalizer3(o2_saved_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_245=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 745, "CVALUE"))));
    num_string_246=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 747, "buffer"))));
    buffer_append_str(num_string_246,"1");
    type2_247=(struct sType*)come_increment_ref_count(solve_generics(type_242,type_242,info));
    type_name_248=(char*)come_increment_ref_count(make_type_name_string(type2_247,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj153=obj_value_245->c_value;
    obj_value_245->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_248,type_name_248,((char*)(__right_value377=buffer_to_string(num_string_246))),info->sname,info->sline,type_name_248));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_249=(struct sType*)come_increment_ref_count(sType_clone(type2_247));
    type3_249->mPointerNum++;
    type3_249->mHeap=(_Bool)1;
    type2_247->mHeap=(_Bool)1;
    __dec_obj154=obj_value_245->type;
    obj_value_245->type=(struct sType*)come_increment_ref_count(sType_clone(type2_247));
    /* a*/come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_245->type->mPointerNum++;
    obj_value_245->var=((void*)0);
    append_object_to_right_values2(obj_value_245,(struct sType*)come_increment_ref_count(type3_249),info,(_Bool)0);
    obj_type_250=(struct sType*)come_increment_ref_count(sType_clone(type2_247));
    fun_name_251="initialize";
    generics_fun_name_252=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value383=make_generics_function(obj_type_250,(char*)come_increment_ref_count(__builtin_string(fun_name_251)),info,(_Bool)1)))));
    __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_253=map$2charphsFunph_at(info->funcs,generics_fun_name_252,((void*)0));
    if(fun_253==((void*)0)) {
        __dec_obj155=generics_fun_name_252;
        generics_fun_name_252=(char*)come_increment_ref_count(create_method_name(obj_type_250,(_Bool)0,((char*)(__right_value385=__builtin_string(fun_name_251))),info,(_Bool)1));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_253=map$2charphsFunph_at(info->funcs,generics_fun_name_252,((void*)0));
        if(fun_253==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_252,info->come_fun->mName);
            __result152__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_237,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_238,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_246,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_247,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_248 = come_decrement_ref_count2(type_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_249,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_252 = come_decrement_ref_count2(generics_fun_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result152__;
        }
    }
    result_type_254=(struct sType*)come_increment_ref_count(sType_clone(fun_253->mResultType));
    result_type_254->mStatic=(_Bool)0;
    come_params_255=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 788, "list$1CVALUEph"))));
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_253->mParamTypes,0), "06str.c", 790, 14))->mHeap&&obj_value_245->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_253->mParamTypes,0), "06str.c", 791, 15)),obj_value_245->type,obj_value_245,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_255,(struct CVALUE*)come_increment_ref_count(obj_value_245));
    i_256=1;
    for(    o2_saved_257=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_238)),it_258=list$1CVALUEph_begin((o2_saved_257));    !list$1CVALUEph_end((o2_saved_257));    it_258=list$1CVALUEph_next((o2_saved_257))    ){
        come_value_259=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_258));
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_253->mParamTypes,i_256), "06str.c", 799, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_253->mParamTypes,i_256), "06str.c", 799, 17))->mHeap&&come_value_259->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_253->mParamTypes,i_256), "06str.c", 800, 18)),come_value_259->type,come_value_259,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_255,(struct CVALUE*)come_increment_ref_count(come_value_259));
        i_256++;
        /*i*/come_call_finalizer3(come_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_257,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 807, "buffer"))));
    buffer_append_str(buf_260,generics_fun_name_252);
    buffer_append_str(buf_260,"(");
    j_261=0;
    for(    o2_saved_262=(struct list$1CVALUEph*)come_increment_ref_count((come_params_255)),it_263=list$1CVALUEph_begin((o2_saved_262));    !list$1CVALUEph_end((o2_saved_262));    it_263=list$1CVALUEph_next((o2_saved_262))    ){
        buffer_append_str(buf_260,it_263->c_value);
        if(j_261!=list$1CVALUEph_length(come_params_255)-1) {
            buffer_append_str(buf_260,",");
        }
        j_261++;
    }
    /*i*/come_call_finalizer3(o2_saved_262,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_260,")");
    come_value2_264=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 824, "CVALUE"))));
    __dec_obj156=come_value2_264->c_value;
    come_value2_264->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_260));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=come_value2_264->type;
    come_value2_264->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_254));
    /* a*/come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_264->type->mStatic=(_Bool)0;
    come_value2_264->var=((void*)0);
    if(result_type_254->mHeap) {
        append_object_to_right_values2(come_value2_264,(struct sType*)come_increment_ref_count(result_type_254),info,(_Bool)0);
    }
    add_come_last_code(info,"%s;\n",come_value2_264->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_264));
    __result153__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_237,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_238,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_246,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_247,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_248 = come_decrement_ref_count2(type_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_249,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_252 = come_decrement_ref_count2(generics_fun_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_260,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
struct list$1sNodeph* __dec_obj158;
struct list$1sNodeph* __dec_obj159;
struct sMapNode* __result154__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    /* a*/come_call_finalizer3(__dec_obj158,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj159=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    /* a*/come_call_finalizer3(__dec_obj159,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
char* __result155__;
    __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value398=__builtin_string("sMapNode")));
    __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_265;
struct list$1sNodeph* map_elements_266;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1CVALUEph* key_params_267;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct list$1CVALUEph* element_params_268;
struct sType* map_key_type_269;
struct sType* map_element_type_270;
int i_271;
struct sNode* key_elements_272;
struct sNode* elements_276;
_Bool __result158__;
void* __right_value403 = (void*)0;
struct CVALUE* come_value_277;
void* __right_value404 = (void*)0;
_Bool __result159__;
void* __right_value405 = (void*)0;
struct CVALUE* come_value2_278;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sType* __dec_obj163;
void* __right_value408 = (void*)0;
struct sType* __dec_obj164;
void* __right_value409 = (void*)0;
struct sType* key_type_values_280;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* var_name_281;
void* __right_value412 = (void*)0;
struct sVar* var__282;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sType* element_type_values_283;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* var_name2_284;
void* __right_value417 = (void*)0;
struct sVar* var2__285;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* source_286;
int i_287;
struct CVALUE* key_param_288;
struct CVALUE* element_param_289;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sType* map_type_290;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* obj_type_291;
char* fun_name_292;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* generics_fun_name_293;
struct sFun* fun_294;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
char* __dec_obj165;
_Bool __result160__;
void* __right_value436 = (void*)0;
struct sType* result_type_295;
struct sType* type_296;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct CVALUE* obj_value_297;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct buffer* num_string_298;
void* __right_value441 = (void*)0;
struct sType* type2_299;
void* __right_value442 = (void*)0;
char* type_name_300;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* __dec_obj166;
void* __right_value445 = (void*)0;
struct sType* type3_301;
void* __right_value446 = (void*)0;
struct sType* __dec_obj167;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1CVALUEph* come_params_302;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct CVALUE* come_value2_303;
void* __right_value451 = (void*)0;
char* __dec_obj168;
struct sType* __dec_obj169;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value3_304;
void* __right_value454 = (void*)0;
char* __dec_obj170;
struct sType* __dec_obj171;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct CVALUE* come_value4_305;
void* __right_value457 = (void*)0;
char* __dec_obj172;
struct sType* __dec_obj173;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct buffer* buf_306;
int j_307;
struct list$1CVALUEph* o2_saved_308;
struct CVALUE* it_309;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct CVALUE* come_value5_310;
void* __right_value462 = (void*)0;
char* __dec_obj174;
void* __right_value463 = (void*)0;
struct sType* __dec_obj175;
_Bool __result161__;
    map_key_elements_265=self->map_key_elements;
    map_elements_266=self->map_elements;
    key_params_267=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 864, "list$1CVALUEph"))));
    element_params_268=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 865, "list$1CVALUEph"))));
    map_key_type_269=((void*)0);
    map_element_type_270=((void*)0);
    for(    i_271=0;    i_271<list$1sNodeph_length(map_key_elements_265);    i_271++    ){
        key_elements_272=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_265,i_271), "06str.c", 870, 19));
        elements_276=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_266,i_271), "06str.c", 871, 20));
        if(!node_compile(key_elements_272,info)) {
            __result158__ = (_Bool)0;
            /*i*/come_call_finalizer3(key_params_267,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result158__;
        }
        come_value_277=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(map_key_type_269) {
            check_assign_type(((char*)(__right_value404=xsprintf("invalid map key type"))),map_key_type_269,come_value_277->type,come_value_277,(_Bool)0,(_Bool)1,info);
            __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(key_params_267,(struct CVALUE*)come_increment_ref_count(come_value_277));
        if(!node_compile(elements_276,info)) {
            __result159__ = (_Bool)0;
            /*i*/come_call_finalizer3(come_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_params_267,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result159__;
        }
        come_value2_278=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(map_element_type_270) {
            check_assign_type(((char*)(__right_value406=xsprintf("invalid map element type"))),map_element_type_270,come_value2_278->type,come_value2_278,(_Bool)0,(_Bool)1,info);
            __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(element_params_268,(struct CVALUE*)come_increment_ref_count(come_value2_278));
        __dec_obj163=map_key_type_269;
        map_key_type_269=(struct sType*)come_increment_ref_count(sType_clone(come_value_277->type));
        /* a*/come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj164=map_element_type_270;
        map_element_type_270=(struct sType*)come_increment_ref_count(sType_clone(come_value2_278->type));
        /* a*/come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_278,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    static int map_value_num_279=0;
    key_type_values_280=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_269));
    list$1sNodeph_push_back(key_type_values_280->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_267),info)));
    key_type_values_280->mHeap=(_Bool)0;
    var_name_281=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_279));
    add_variable_to_table(var_name_281,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_280)),info);
    var__282=get_variable_from_table(info->lv_table,var_name_281);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value413=make_define_var(key_type_values_280,var__282->mCValueName,(_Bool)0,info))));
    __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_283=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_270));
    list$1sNodeph_push_back(element_type_values_283->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_268),info)));
    element_type_values_283->mHeap=(_Bool)0;
    var_name2_284=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_279));
    add_variable_to_table(var_name2_284,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_283)),info);
    var2__285=get_variable_from_table(info->lv_table,var_name2_284);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value418=make_define_var(element_type_values_283,var2__285->mCValueName,(_Bool)0,info))));
    __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_286=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 929, "buffer"))));
    buffer_append_str(source_286,"{");
    for(    i_287=0;    i_287<list$1CVALUEph_length(key_params_267);    i_287++    ){
        key_param_288=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_267,i_287), "06str.c", 934, 21));
        element_param_289=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_268,i_287), "06str.c", 935, 22));
        if(map_key_type_269->mHeap) {
            buffer_append_str(source_286,((char*)(__right_value421=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__282->mCValueName,i_287,key_param_288->c_value))));
            __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_286,((char*)(__right_value422=xsprintf("%s[%d]=%s;\n",var__282->mCValueName,i_287,key_param_288->c_value))));
            __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(map_element_type_270->mHeap) {
            buffer_append_str(source_286,((char*)(__right_value423=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__285->mCValueName,i_287,element_param_289->c_value))));
            __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_286,((char*)(__right_value424=xsprintf("%s[%d]=%s;\n",var2__285->mCValueName,i_287,element_param_289->c_value))));
            __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    buffer_append_str(source_286,"}");
    add_come_code(info,"%s",((char*)(__right_value425=buffer_to_string(source_286))));
    __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    map_type_290=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 956, "sType")),"map",(_Bool)0,info));
    list$1sTypeph_push_back(map_type_290->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_key_type_269)));
    list$1sTypeph_push_back(map_type_290->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_element_type_270)));
    obj_type_291=(struct sType*)come_increment_ref_count(sType_clone(map_type_290));
    fun_name_292="initialize_with_values";
    generics_fun_name_293=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value432=make_generics_function(obj_type_291,(char*)come_increment_ref_count(__builtin_string(fun_name_292)),info,(_Bool)1)))));
    __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_294=map$2charphsFunph_at(info->funcs,generics_fun_name_293,((void*)0));
    if(fun_294==((void*)0)) {
        __dec_obj165=generics_fun_name_293;
        generics_fun_name_293=(char*)come_increment_ref_count(create_method_name(obj_type_291,(_Bool)0,((char*)(__right_value434=__builtin_string(fun_name_292))),info,(_Bool)1));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_294=map$2charphsFunph_at(info->funcs,generics_fun_name_293,((void*)0));
        if(fun_294==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_293,info->come_fun->mName);
            __result160__ = (_Bool)1;
            /*i*/come_call_finalizer3(key_params_267,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_type_values_280,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_281 = come_decrement_ref_count2(var_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_type_values_283,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_284 = come_decrement_ref_count2(var_name2_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_293 = come_decrement_ref_count2(generics_fun_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result160__;
        }
    }
    result_type_295=(struct sType*)come_increment_ref_count(sType_clone(fun_294->mResultType));
    result_type_295->mStatic=(_Bool)0;
    type_296=map_type_290;
    obj_value_297=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 983, "CVALUE"))));
    num_string_298=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 985, "buffer"))));
    buffer_append_str(num_string_298,"1");
    type2_299=(struct sType*)come_increment_ref_count(solve_generics(type_296,type_296,info));
    type_name_300=(char*)come_increment_ref_count(make_type_name_string(type2_299,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj166=obj_value_297->c_value;
    obj_value_297->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_300,type_name_300,((char*)(__right_value443=buffer_to_string(num_string_298))),info->sname,info->sline,type_name_300));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_301=(struct sType*)come_increment_ref_count(sType_clone(type2_299));
    type3_301->mPointerNum++;
    type3_301->mHeap=(_Bool)1;
    type2_299->mHeap=(_Bool)1;
    __dec_obj167=obj_value_297->type;
    obj_value_297->type=(struct sType*)come_increment_ref_count(sType_clone(type2_299));
    /* a*/come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_297->type->mPointerNum++;
    obj_value_297->var=((void*)0);
    append_object_to_right_values2(obj_value_297,(struct sType*)come_increment_ref_count(type3_301),info,(_Bool)0);
    come_params_302=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1005, "list$1CVALUEph"))));
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_294->mParamTypes,0), "06str.c", 1007, 23))->mHeap&&obj_value_297->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_294->mParamTypes,0), "06str.c", 1008, 24)),obj_value_297->type,obj_value_297,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_302,(struct CVALUE*)come_increment_ref_count(obj_value_297));
    come_value2_303=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1012, "CVALUE"))));
    __dec_obj168=come_value2_303->c_value;
    come_value2_303->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_267)));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=come_value2_303->type;
    come_value2_303->type=((void*)0);
    /* a*/come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_303->var=((void*)0);
    list$1CVALUEph_push_back(come_params_302,(struct CVALUE*)come_increment_ref_count(come_value2_303));
    come_value3_304=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1020, "CVALUE"))));
    __dec_obj170=come_value3_304->c_value;
    come_value3_304->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__282->mCValueName));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=come_value3_304->type;
    come_value3_304->type=((void*)0);
    /* a*/come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_304->var=((void*)0);
    list$1CVALUEph_push_back(come_params_302,(struct CVALUE*)come_increment_ref_count(come_value3_304));
    come_value4_305=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1028, "CVALUE"))));
    __dec_obj172=come_value4_305->c_value;
    come_value4_305->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__285->mCValueName));
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=come_value4_305->type;
    come_value4_305->type=((void*)0);
    /* a*/come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_305->var=((void*)0);
    list$1CVALUEph_push_back(come_params_302,(struct CVALUE*)come_increment_ref_count(come_value4_305));
    buf_306=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1036, "buffer"))));
    buffer_append_str(buf_306,generics_fun_name_293);
    buffer_append_str(buf_306,"(");
    j_307=0;
    for(    o2_saved_308=(struct list$1CVALUEph*)come_increment_ref_count((come_params_302)),it_309=list$1CVALUEph_begin((o2_saved_308));    !list$1CVALUEph_end((o2_saved_308));    it_309=list$1CVALUEph_next((o2_saved_308))    ){
        buffer_append_str(buf_306,it_309->c_value);
        if(j_307!=list$1CVALUEph_length(come_params_302)-1) {
            buffer_append_str(buf_306,",");
        }
        j_307++;
    }
    /*i*/come_call_finalizer3(o2_saved_308,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_306,")");
    come_value5_310=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1053, "CVALUE"))));
    __dec_obj174=come_value5_310->c_value;
    come_value5_310->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_306));
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=come_value5_310->type;
    come_value5_310->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_295));
    /* a*/come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_310->type->mStatic=(_Bool)0;
    come_value5_310->var=((void*)0);
    if(result_type_295->mHeap) {
        append_object_to_right_values2(come_value5_310,(struct sType*)come_increment_ref_count(result_type_295),info,(_Bool)0);
    }
    add_come_last_code(info,"%s;\n",come_value5_310->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_310));
    __result161__ = (_Bool)1;
    /*i*/come_call_finalizer3(key_params_267,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_params_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_element_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(key_type_values_280,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_281 = come_decrement_ref_count2(var_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_type_values_283,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_284 = come_decrement_ref_count2(var_name2_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_293 = come_decrement_ref_count2(generics_fun_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_297,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_299,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_300 = come_decrement_ref_count2(type_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_301,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_302,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_306,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value5_310,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result161__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_273;
int i_274;
struct sNode* __result156__;
struct sNode* default_value_275;
struct sNode* __result157__;
default_value_275 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_273=self->head;
    i_274=0;
    while(it_273!=((void*)0)) {
        if(position==i_274) {
            __result156__ = gComeFunResultObject = __result_obj__ = it_273->item;
            gComeFunResultObject = (void*)0;
            return __result156__;
        }
        it_273=it_273->next;
        i_274++;
    }
    memset(&default_value_275,0,sizeof(struct sNode*));
    __result157__ = gComeFunResultObject = __result_obj__ = default_value_275;
    if(default_value_275) { default_value_275 = come_decrement_ref_count2(default_value_275, ((struct sNode*)default_value_275)->finalize, ((struct sNode*)default_value_275)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result157__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_311;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1sNodeph* exps_312;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct buffer* value_313;
char* head_of_last_line_314;
int len_315;
void* __right_value468 = (void*)0;
struct sNode* exp_316;
int sline2_317;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* __right_value476 = (void*)0;
struct sNode* __result164__;
int sline_319;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct buffer* value_320;
char* p_321;
int sline_322;
int sline2_323;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* __right_value485 = (void*)0;
struct sNode* __result167__;
int sline_325;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct buffer* buf_326;
_Bool global_327;
_Bool ignore_case_328;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* __right_value494 = (void*)0;
struct sNode* __result170__;
int c_330;
int n_331;
int n_332;
unsigned long long int n_335;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* __right_value499 = (void*)0;
struct sNode* __result173__;
int c_337;
_Bool quote_338;
int n_339;
int n_340;
unsigned long long int n_343;
unsigned char p2_344;
int size_345;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* __right_value504 = (void*)0;
struct sNode* __result176__;
int sline_348;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct buffer* value_349;
char* p_350;
int sline_351;
int len_352;
int n_353;
unsigned long unsigned  int lont_356;
int n_357;
int sline2_358;
int len_359;
void* __right_value507 = (void*)0;
int* wstr_360;
char* str_361;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* __right_value513 = (void*)0;
struct sNode* __result179__;
int sline_363;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1sNodeph* exps_364;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct buffer* value_365;
char* p_366;
int sline_367;
void* __right_value518 = (void*)0;
struct sNode* exp_368;
char* p_369;
int len_370;
void* __right_value519 = (void*)0;
struct sNode* exp_371;
int sline2_372;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* __right_value527 = (void*)0;
struct sNode* __result182__;
char* p_374;
_Bool no_comma_375;
void* __right_value528 = (void*)0;
struct sNode* node_376;
char* p2_377;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct buffer* first_element_source_378;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1sNodeph* list_elements_379;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1sNodeph* map_keys_380;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1sNodeph* map_elements_381;
_Bool no_comma_382;
void* __right_value537 = (void*)0;
struct sNode* node2_383;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* __right_value544 = (void*)0;
struct sNode* __result185__;
_Bool no_comma_385;
void* __right_value545 = (void*)0;
struct sNode* node2_386;
void* __right_value546 = (void*)0;
struct sNode* node3_387;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* __right_value553 = (void*)0;
struct sNode* __result188__;
_Bool no_comma_389;
void* __right_value554 = (void*)0;
struct sNode* node2_390;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* __right_value560 = (void*)0;
struct sNode* __result191__;
void* __right_value561 = (void*)0;
struct sNode* __result192__;
memset(&c_330, 0, sizeof(int));
memset(&c_337, 0, sizeof(int));
memset(&quote_338, 0, sizeof(_Bool));
memset(&size_345, 0, sizeof(int));
memset(&lont_356, 0, sizeof(unsigned long unsigned  int));
    if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        info->p+=4;
        info->sline++;
        sline_311=info->sline;
        exps_312=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1081, "list$1sNodeph"))));
        value_313=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1082, "buffer"))));
        head_of_last_line_314=((void*)0);
        while(1) {
            if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(head_of_last_line_314) {
                    buffer_trim(value_313,info->p-head_of_last_line_314);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(*info->p==37) {
                    buffer_append_char(value_313,37);
                    buffer_append_char(value_313,37);
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        buffer_append_char(value_313,92);
                        buffer_append_char(value_313,34);
                        info->p++;
                    }
                    else {
                        if(*info->p==92) {
                            buffer_append_char(value_313,92);
                            info->p++;
                            if(xisdigit(*info->p)) {
                                len_315=0;
                                while(xisdigit(*info->p)&&len_315<3) {
                                    buffer_append_char(value_313,*info->p);
                                    info->p++;
                                    len_315++;
                                }
                            }
                            else {
                                if(*info->p==120||*info->p==88) {
                                    buffer_append_char(value_313,*info->p);
                                    info->p++;
                                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                        buffer_append_char(value_313,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(*info->p==123) {
                                        info->p++;
                                        exp_316=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        list$1sNodeph_add(exps_312,(struct sNode*)come_increment_ref_count(exp_316));
                                        if(*info->p==125) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_313,"%s");
                                        if(exp_316) { exp_316 = come_decrement_ref_count2(exp_316, ((struct sNode*)exp_316)->finalize, ((struct sNode*)exp_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_313,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(*info->p==0) {
                                sline2_317=info->sline;
                                info->sline=sline_311;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(*info->p==10) {
                                    buffer_append_char(value_313,92);
                                    buffer_append_char(value_313,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_314=info->p;
                                }
                                else {
                                    buffer_append_char(value_313,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1231, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(__right_value471=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1231, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_313)),(struct list$1sNodeph*)come_increment_ref_count(exps_312),sline_311,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result164__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value476=_inf_value1));
        /*i*/come_call_finalizer3(exps_312,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_313,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value471,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value476) { __right_value476 = come_decrement_ref_count2(__right_value476, ((struct sNode*)__right_value476)->finalize, ((struct sNode*)__right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result164__;
        /*i*/come_call_finalizer3(exps_312,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_313,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(*info->p==34) {
            info->p++;
            sline_319=info->sline;
            value_320=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1239, "buffer"))));
            while(1) {
                if(*info->p==34) {
                    info->p++;
                    p_321=info->p;
                    sline_322=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(*info->p==34) {
                        info->p++;
                    }
                    else {
                        info->p=p_321;
                        info->sline=sline_322;
                        break;
                    }
                }
                else {
                    if(*info->p==92) {
                        buffer_append_char(value_320,92);
                        info->p++;
                        if(*info->p==34) {
                            buffer_append_char(value_320,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_320,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(*info->p==0) {
                            sline2_323=info->sline;
                            info->sline=sline_319;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_323;
                            exit(2);
                        }
                        else {
                            if(*info->p==10) {
                                info->sline++;
                            }
                            buffer_append_char(value_320,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1291, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(__right_value481=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1291, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_320)),sline_319,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result167__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value485=_inf_value2));
            /*i*/come_call_finalizer3(value_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value481,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value485) { __right_value485 = come_decrement_ref_count2(__right_value485, ((struct sNode*)__right_value485)->finalize, ((struct sNode*)__right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result167__;
            /*i*/come_call_finalizer3(value_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==47) {
                info->p++;
                sline_325=info->sline;
                buf_326=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1298, "buffer"))));
                while((_Bool)1) {
                    if(*info->p==92&&*(info->p+1)==47) {
                        info->p++;
                        buffer_append_char(buf_326,*info->p);
                        info->p++;
                    }
                    else {
                        if(*info->p==47) {
                            info->p++;
                            break;
                        }
                        else {
                            if(*info->p==0) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_326,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_327=(_Bool)0;
                ignore_case_328=(_Bool)0;
                while(*info->p==103||*info->p==105) {
                    if(*info->p==103) {
                        info->p++;
                        global_327=(_Bool)1;
                    }
                    else {
                        if(*info->p==105) {
                            info->p++;
                            ignore_case_328=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1337, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(__right_value490=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count((struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1337, "sRegexNode")),(char*)come_increment_ref_count(buffer_to_string(buf_326)),global_327,ignore_case_328,sline_325,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result170__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value494=_inf_value3));
                /*i*/come_call_finalizer3(buf_326,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value490,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value494) { __right_value494 = come_decrement_ref_count2(__right_value494, ((struct sNode*)__right_value494)->finalize, ((struct sNode*)__right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result170__;
                /*i*/come_call_finalizer3(buf_326,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==39) {
                    info->p++;
                    if(*info->p==92) {
                        info->p++;
                        if(xisdigit(*info->p)) {
                            n_331=0;
                            while(xisdigit(*info->p)) {
                                n_331=n_331*8+*info->p-48;
                                info->p++;
                            }
                            c_330=n_331;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_330=10;
                                info->p++;
                                break;
                                case 116:
                                c_330=9;
                                info->p++;
                                break;
                                case 114:
                                c_330=13;
                                info->p++;
                                break;
                                case 97:
                                c_330=7;
                                info->p++;
                                break;
                                case 102:
                                c_330=12;
                                info->p++;
                                break;
                                case 118:
                                c_330=11;
                                info->p++;
                                break;
                                case 98:
                                c_330=8;
                                info->p++;
                                break;
                                case 92:
                                c_330=92;
                                info->p++;
                                break;
                                case 48:
                                c_330=0;
                                info->p++;
                                if(xisdigit(*info->p)) {
                                    n_332=0;
                                    while(xisdigit(*info->p)) {
                                        n_332=n_332*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_330=n_332;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_333[128];
                                    memset(&buf_333, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_333,"0x",128);
                                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                        char buf2_334[2];
                                        memset(&buf2_334, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_334[0]=*info->p;
                                        buf2_334[1]=0;
                                        info->p++;
                                        strncat(buf_333,buf2_334,128);
                                    }
                                    n_335=strtoll(buf_333,((void*)0),0);
                                    c_330=n_335;
                                }
                                break;
                                default:
                                c_330=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_330=*info->p;
                        info->p++;
                    }
                    if(*info->p!=39) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1454, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(__right_value496=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1454, "sCharNode")),c_330,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result173__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value499=_inf_value4));
                        /*g*/come_call_finalizer3(__right_value496,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value499) { __right_value499 = come_decrement_ref_count2(__right_value499, ((struct sNode*)__right_value499)->finalize, ((struct sNode*)__right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result173__;
                    }
                }
                else {
                    if(*info->p==76&&*(info->p+1)==39) {
                        info->p+=2;
                        if(*info->p==92) {
                            quote_338=(_Bool)1;
                            info->p++;
                            if(xisdigit(*info->p)) {
                                n_339=0;
                                while(xisdigit(*info->p)) {
                                    n_339=n_339*8+*info->p-48;
                                    info->p++;
                                }
                                c_337=n_339;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_337=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_337=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_337=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_337=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_337=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_337=0;
                                    info->p++;
                                    if(xisdigit(*info->p)) {
                                        n_340=0;
                                        while(xisdigit(*info->p)) {
                                            n_340=n_340*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_337=n_340;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_341[128];
                                        memset(&buf_341, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_341,"0x",128);
                                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                            char buf2_342[2];
                                            memset(&buf2_342, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_342[0]=*info->p;
                                            buf2_342[1]=0;
                                            info->p++;
                                            strncat(buf_341,buf2_342,128);
                                        }
                                        n_343=strtoll(buf_341,((void*)0),0);
                                        c_337=n_343;
                                    }
                                    break;
                                    default:
                                    c_337=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            quote_338=(_Bool)0;
                            p2_344=*(unsigned char*)info->p;
                            if(p2_344>127) {
                                char str_346[6+1];
                                memset(&str_346, 0, sizeof(char)                                *(6+1)                                );
                                size_345=((p2_344&128)>>7)+((p2_344&64)>>6)+((p2_344&32)>>5)+((p2_344&16)>>4);
                                if(size_345>6) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_346,info->p,size_345);
                                    str_346[size_345]=0;
                                    if(mbtowc(&c_337,str_346,size_345)<0) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                    }
                                    else {
                                        info->p+=size_345;
                                    }
                                }
                            }
                            else {
                                c_337=*info->p;
                                info->p++;
                            }
                        }
                        if(*info->p!=39) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1593, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(__right_value501=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1593, "sWCharNode")),c_337,quote_338,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result176__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value504=_inf_value5));
                            /*g*/come_call_finalizer3(__right_value501,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value504) { __right_value504 = come_decrement_ref_count2(__right_value504, ((struct sNode*)__right_value504)->finalize, ((struct sNode*)__right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result176__;
                        }
                    }
                    else {
                        if(*info->p==76&&*(info->p+1)==34) {
                            info->p+=2;
                            sline_348=info->sline;
                            value_349=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1602, "buffer"))));
                            while(1) {
                                if(*info->p==34) {
                                    info->p++;
                                    p_350=info->p;
                                    sline_351=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(*info->p==34) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_350;
                                        info->sline=sline_351;
                                        break;
                                    }
                                }
                                else {
                                    if(*info->p==92) {
                                        info->p++;
                                        if(xisdigit(*info->p)) {
                                            len_352=0;
                                            n_353=0;
                                            while(xisdigit(*info->p)&&len_352<3) {
                                                n_353=n_353*8+*info->p-48;
                                                info->p++;
                                                len_352++;
                                            }
                                            buffer_append_char(value_349,n_353);
                                        }
                                        else {
                                            if(*info->p==120||*info->p==88) {
                                                info->p++;
                                                char buf_354[128];
                                                memset(&buf_354, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_354,"0x",128);
                                                while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                                    char buf2_355[2];
                                                    memset(&buf2_355, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_355[0]=*info->p;
                                                    buf2_355[1]=0;
                                                    info->p++;
                                                    strncat(buf_354,buf2_355,128);
                                                }
                                                n_357=strtoll(buf_354,((void*)0),0);
                                                buffer_append_char(value_349,(char)n_357);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_349,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_349,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_349,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_349,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_349,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_349,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_349,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_349,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_349,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_349,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(*info->p==0) {
                                            sline2_358=info->sline;
                                            info->sline=sline_348;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_349,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_359=value_349->len;
                            wstr_360=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_359+1)), "06str.c", 1725, "int"));
                            str_361=value_349->buf;
                            if(mbstowcs(wstr_360,str_361,len_359+1)<0) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_360[len_359]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1736, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(__right_value509=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1736, "sWStringNode")),(int*)come_increment_ref_count(wstr_360),sline_348,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result179__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value513=_inf_value6));
                            /*i*/come_call_finalizer3(value_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_360 = come_decrement_ref_count2(wstr_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value509,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value513) { __right_value513 = come_decrement_ref_count2(__right_value513, ((struct sNode*)__right_value513)->finalize, ((struct sNode*)__right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result179__;
                            /*i*/come_call_finalizer3(value_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_360 = come_decrement_ref_count2(wstr_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if((*info->p==115||*info->p==83)&&*(info->p+1)==34) {
                                info->p+=2;
                                sline_363=info->sline;
                                exps_364=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1744, "list$1sNodeph"))));
                                value_365=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1745, "buffer"))));
                                while(1) {
                                    if(*info->p==34) {
                                        info->p++;
                                        p_366=info->p;
                                        sline_367=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(*info->p==34) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_366;
                                            info->sline=sline_367;
                                            break;
                                        }
                                    }
                                    else {
                                        if(*info->p==37) {
                                            buffer_append_char(value_365,37);
                                            buffer_append_char(value_365,37);
                                            info->p++;
                                        }
                                        else {
                                            if(*info->p==36) {
                                                info->p++;
                                                exp_368=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                list$1sNodeph_add(exps_364,(struct sNode*)come_increment_ref_count(exp_368));
                                                buffer_append_str(value_365,"%s");
                                                p_369=info->p-1;
                                                while(*p_369==32||*p_369==9) {
                                                    p_369--;
                                                }
                                                info->p=p_369+1;
                                                if(exp_368) { exp_368 = come_decrement_ref_count2(exp_368, ((struct sNode*)exp_368)->finalize, ((struct sNode*)exp_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(*info->p==92) {
                                                    buffer_append_char(value_365,92);
                                                    info->p++;
                                                    if(xisdigit(*info->p)) {
                                                        len_370=0;
                                                        while(xisdigit(*info->p)&&len_370<3) {
                                                            buffer_append_char(value_365,*info->p);
                                                            info->p++;
                                                            len_370++;
                                                        }
                                                    }
                                                    else {
                                                        if(*info->p==120||*info->p==88) {
                                                            buffer_append_char(value_365,*info->p);
                                                            info->p++;
                                                            while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                                                buffer_append_char(value_365,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(*info->p==123) {
                                                                info->p++;
                                                                exp_371=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                list$1sNodeph_add(exps_364,(struct sNode*)come_increment_ref_count(exp_371));
                                                                if(*info->p==125) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_365,"%s");
                                                                if(exp_371) { exp_371 = come_decrement_ref_count2(exp_371, ((struct sNode*)exp_371)->finalize, ((struct sNode*)exp_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_365,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(*info->p==0) {
                                                        sline2_372=info->sline;
                                                        info->sline=sline_363;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(*info->p==10) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_365,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1890, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(__right_value522=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1890, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_365)),(struct list$1sNodeph*)come_increment_ref_count(exps_364),sline_363,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result182__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value527=_inf_value7));
                                /*i*/come_call_finalizer3(exps_364,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(value_365,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*g*/come_call_finalizer3(__right_value522,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value527) { __right_value527 = come_decrement_ref_count2(__right_value527, ((struct sNode*)__right_value527)->finalize, ((struct sNode*)__right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result182__;
                                /*i*/come_call_finalizer3(exps_364,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(value_365,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(*info->p==91) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_374=info->p;
                                    no_comma_375=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_376=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                    info->no_comma=no_comma_375;
                                    p2_377=info->p;
                                    first_element_source_378=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1907, "buffer"))));
                                    buffer_append(first_element_source_378,p_374,p2_377-p_374);
                                    buffer_append_char(first_element_source_378,0);
                                    list_elements_379=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1912, "list$1sNodeph"))));
                                    map_keys_380=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1914, "list$1sNodeph"))));
                                    map_elements_381=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1915, "list$1sNodeph"))));
                                    if(*info->p==58) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_380,(struct sNode*)come_increment_ref_count(node_376));
                                        no_comma_382=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_383=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        info->no_comma=no_comma_382;
                                        list$1sNodeph_push_back(map_elements_381,(struct sNode*)come_increment_ref_count(node2_383));
                                        if(*info->p==93) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1937, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(__right_value539=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1937, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_380),(struct list$1sNodeph*)come_increment_ref_count(map_elements_381),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sNodeBase_sline;
                                            _inf_value8->sname=(void*)sNodeBase_sname;
                                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result185__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value544=_inf_value8));
                                            if(node2_383) { node2_383 = come_decrement_ref_count2(node2_383, ((struct sNode*)node2_383)->finalize, ((struct sNode*)node2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            /*i*/come_call_finalizer3(first_element_source_378,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            /*i*/come_call_finalizer3(list_elements_379,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            /*i*/come_call_finalizer3(map_keys_380,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            /*i*/come_call_finalizer3(map_elements_381,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            /*g*/come_call_finalizer3(__right_value539,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value544) { __right_value544 = come_decrement_ref_count2(__right_value544, ((struct sNode*)__right_value544)->finalize, ((struct sNode*)__right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            gComeFunResultObject = (void*)0;
                                            return __result185__;
                                        }
                                        else {
                                            expected_next_character(44,info);
                                            while((_Bool)1) {
                                                no_comma_385=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_386=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                info->no_comma=no_comma_385;
                                                list$1sNodeph_push_back(map_keys_380,(struct sNode*)come_increment_ref_count(node2_386));
                                                expected_next_character(58,info);
                                                no_comma_385=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_387=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                info->no_comma=no_comma_385;
                                                list$1sNodeph_push_back(map_elements_381,(struct sNode*)come_increment_ref_count(node3_387));
                                                if(*info->p==0) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(*info->p==44) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(*info->p==93) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_386) { node2_386 = come_decrement_ref_count2(node2_386, ((struct sNode*)node2_386)->finalize, ((struct sNode*)node2_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_387) { node3_387 = come_decrement_ref_count2(node3_387, ((struct sNode*)node3_387)->finalize, ((struct sNode*)node3_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_386) { node2_386 = come_decrement_ref_count2(node2_386, ((struct sNode*)node2_386)->finalize, ((struct sNode*)node2_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_387) { node3_387 = come_decrement_ref_count2(node3_387, ((struct sNode*)node3_387)->finalize, ((struct sNode*)node3_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1982, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(__right_value548=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1982, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_380),(struct list$1sNodeph*)come_increment_ref_count(map_elements_381),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result188__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value553=_inf_value9));
                                            if(node2_383) { node2_383 = come_decrement_ref_count2(node2_383, ((struct sNode*)node2_383)->finalize, ((struct sNode*)node2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            /*i*/come_call_finalizer3(first_element_source_378,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            /*i*/come_call_finalizer3(list_elements_379,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            /*i*/come_call_finalizer3(map_keys_380,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            /*i*/come_call_finalizer3(map_elements_381,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            /*g*/come_call_finalizer3(__right_value548,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value553) { __right_value553 = come_decrement_ref_count2(__right_value553, ((struct sNode*)__right_value553)->finalize, ((struct sNode*)__right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            gComeFunResultObject = (void*)0;
                                            return __result188__;
                                        }
                                        if(node2_383) { node2_383 = come_decrement_ref_count2(node2_383, ((struct sNode*)node2_383)->finalize, ((struct sNode*)node2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(*info->p==93) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_379,(struct sNode*)come_increment_ref_count(node_376));
                                        }
                                        else {
                                            if(*info->p==44) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_379,(struct sNode*)come_increment_ref_count(node_376));
                                                while((_Bool)1) {
                                                    no_comma_389=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_390=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                    info->no_comma=no_comma_389;
                                                    list$1sNodeph_push_back(list_elements_379,(struct sNode*)come_increment_ref_count(node2_390));
                                                    if(*info->p==0) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(*info->p==44) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(*info->p==93) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_390) { node2_390 = come_decrement_ref_count2(node2_390, ((struct sNode*)node2_390)->finalize, ((struct sNode*)node2_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_390) { node2_390 = come_decrement_ref_count2(node2_390, ((struct sNode*)node2_390)->finalize, ((struct sNode*)node2_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(list$1sNodeph_length(list_elements_379)>0) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2033, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(__right_value556=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2033, "sListNode")),(struct list$1sNodeph*)come_increment_ref_count(list_elements_379),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result191__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value560=_inf_value10));
                                        if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*i*/come_call_finalizer3(first_element_source_378,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(list_elements_379,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(map_keys_380,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(map_elements_381,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        /*g*/come_call_finalizer3(__right_value556,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value560) { __right_value560 = come_decrement_ref_count2(__right_value560, ((struct sNode*)__right_value560)->finalize, ((struct sNode*)__right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result191__;
                                    }
                                    else {
                                    }
                                    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    /*i*/come_call_finalizer3(first_element_source_378,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(list_elements_379,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(map_keys_380,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(map_elements_381,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    ((struct sNode*)(__right_value561=expression_node_v1(info)));
                                    if(__right_value561) { __right_value561 = come_decrement_ref_count2(__right_value561, ((struct sNode*)__right_value561)->finalize, ((struct sNode*)__right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result192__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj182;
char* __dec_obj183;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj182=self->sname;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        if(self->value==gComeFunResultObject) {
            __dec_obj183=self->value;
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result165__;
void* __right_value482 = (void*)0;
struct sStrNode* result_324;
void* __right_value483 = (void*)0;
char* __dec_obj184;
void* __right_value484 = (void*)0;
char* __dec_obj185;
struct sStrNode* __result166__;
    if(self==(void*)0) {
        __result165__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    result_324=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(self!=((void*)0)) {
        result_324->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj184=result_324->sname;
        result_324->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj185=result_324->value;
        result_324->value=(char*)come_increment_ref_count(string_clone(self->value));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result166__ = gComeFunResultObject = __result_obj__ = result_324;
    /*i*/come_call_finalizer3(result_324,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj186;
char* __dec_obj187;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        if(self->str==gComeFunResultObject) {
            __dec_obj187=self->str;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__=(void*)0;
struct sRegexNode* __result168__;
void* __right_value491 = (void*)0;
struct sRegexNode* result_329;
void* __right_value492 = (void*)0;
char* __dec_obj188;
void* __right_value493 = (void*)0;
char* __dec_obj189;
struct sRegexNode* __result169__;
    if(self==(void*)0) {
        __result168__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    result_329=(struct sRegexNode*)come_increment_ref_count((struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"));
    if(self!=((void*)0)) {
        result_329->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj188=result_329->sname;
        result_329->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        __dec_obj189=result_329->str;
        result_329->str=(char*)come_increment_ref_count(string_clone(self->str));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_329->global=self->global;
    }
    if(self!=((void*)0)) {
        result_329->ignore_case=self->ignore_case;
    }
    __result169__ = gComeFunResultObject = __result_obj__ = result_329;
    /*i*/come_call_finalizer3(result_329,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj190;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result171__;
void* __right_value497 = (void*)0;
struct sCharNode* result_336;
void* __right_value498 = (void*)0;
char* __dec_obj191;
struct sCharNode* __result172__;
    if(self==(void*)0) {
        __result171__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    result_336=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(self!=((void*)0)) {
        result_336->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_336->sname;
        result_336->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_336->value=self->value;
    }
    __result172__ = gComeFunResultObject = __result_obj__ = result_336;
    /*i*/come_call_finalizer3(result_336,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj192;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj192=self->sname;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result174__;
void* __right_value502 = (void*)0;
struct sWCharNode* result_347;
void* __right_value503 = (void*)0;
char* __dec_obj193;
struct sWCharNode* __result175__;
    if(self==(void*)0) {
        __result174__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    result_347=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(self!=((void*)0)) {
        result_347->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj193=result_347->sname;
        result_347->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_347->value=self->value;
    }
    if(self!=((void*)0)) {
        result_347->quote=self->quote;
    }
    __result175__ = gComeFunResultObject = __result_obj__ = result_347;
    /*i*/come_call_finalizer3(result_347,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj194;
int* __dec_obj195;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        if(self->value==gComeFunResultObject) {
            __dec_obj195=self->value;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result177__;
void* __right_value510 = (void*)0;
struct sWStringNode* result_362;
void* __right_value511 = (void*)0;
char* __dec_obj196;
void* __right_value512 = (void*)0;
int* __dec_obj197;
struct sWStringNode* __result178__;
    if(self==(void*)0) {
        __result177__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    result_362=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(self!=((void*)0)) {
        result_362->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj196=result_362->sname;
        result_362->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj197=result_362->value;
        result_362->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 6, "int*"));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result178__ = gComeFunResultObject = __result_obj__ = result_362;
    /*i*/come_call_finalizer3(result_362,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj198;
char* __dec_obj199;
struct list$1sNodeph* __dec_obj200;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj198=self->sname;
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        if(self->value==gComeFunResultObject) {
            __dec_obj199=self->value;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        if(self->exps==gComeFunResultObject) {
            __dec_obj200=self->exps;
            /* a*/come_call_finalizer3(__dec_obj200,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result180__;
void* __right_value523 = (void*)0;
struct sSStringNode* result_373;
void* __right_value524 = (void*)0;
char* __dec_obj201;
void* __right_value525 = (void*)0;
char* __dec_obj202;
void* __right_value526 = (void*)0;
struct list$1sNodeph* __dec_obj203;
struct sSStringNode* __result181__;
    if(self==(void*)0) {
        __result180__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    result_373=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(self!=((void*)0)) {
        result_373->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj201=result_373->sname;
        result_373->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj202=result_373->value;
        result_373->value=(char*)come_increment_ref_count(string_clone(self->value));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj203=result_373->exps;
        result_373->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        /* a*/come_call_finalizer3(__dec_obj203,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_373;
    /*i*/come_call_finalizer3(result_373,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj210;
struct list$1sNodeph* __dec_obj211;
struct list$1sNodeph* __dec_obj212;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj210=self->sname;
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(self->map_key_elements==gComeFunResultObject) {
            __dec_obj211=self->map_key_elements;
            /* a*/come_call_finalizer3(__dec_obj211,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(self->map_elements==gComeFunResultObject) {
            __dec_obj212=self->map_elements;
            /* a*/come_call_finalizer3(__dec_obj212,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result186__;
void* __right_value549 = (void*)0;
struct sMapNode* result_388;
void* __right_value550 = (void*)0;
char* __dec_obj213;
void* __right_value551 = (void*)0;
struct list$1sNodeph* __dec_obj214;
void* __right_value552 = (void*)0;
struct list$1sNodeph* __dec_obj215;
struct sMapNode* __result187__;
    if(self==(void*)0) {
        __result186__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    result_388=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(self!=((void*)0)) {
        result_388->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj213=result_388->sname;
        result_388->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj214=result_388->map_key_elements;
        result_388->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        /* a*/come_call_finalizer3(__dec_obj214,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj215=result_388->map_elements;
        result_388->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        /* a*/come_call_finalizer3(__dec_obj215,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result187__ = gComeFunResultObject = __result_obj__ = result_388;
    /*i*/come_call_finalizer3(result_388,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj216;
struct list$1sNodeph* __dec_obj217;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj216=self->sname;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(self->list_elements==gComeFunResultObject) {
            __dec_obj217=self->list_elements;
            /* a*/come_call_finalizer3(__dec_obj217,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result189__;
void* __right_value557 = (void*)0;
struct sListNode* result_391;
void* __right_value558 = (void*)0;
char* __dec_obj218;
void* __right_value559 = (void*)0;
struct list$1sNodeph* __dec_obj219;
struct sListNode* __result190__;
    if(self==(void*)0) {
        __result189__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    result_391=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(self!=((void*)0)) {
        result_391->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj218=result_391->sname;
        result_391->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj219=result_391->list_elements;
        result_391->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        /* a*/come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result190__ = gComeFunResultObject = __result_obj__ = result_391;
    /*i*/come_call_finalizer3(result_391,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1sNodeph* tuple_elements_392;
char* p_393;
_Bool no_comma_394;
void* __right_value564 = (void*)0;
struct sNode* node_395;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj220;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* __right_value571 = (void*)0;
struct sNode* __result195__;
    tuple_elements_392=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2047, "list$1sNodeph"))));
    while((_Bool)1) {
        p_393=info->p;
        no_comma_394=info->no_comma;
        info->no_comma=(_Bool)1;
        node_395=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj220=node_395;
        node_395=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_395),info));
        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); }
        info->no_comma=no_comma_394;
        list$1sNodeph_push_back(tuple_elements_392,(struct sNode*)come_increment_ref_count(node_395));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_395) { node_395 = come_decrement_ref_count2(node_395, ((struct sNode*)node_395)->finalize, ((struct sNode*)node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_395) { node_395 = come_decrement_ref_count2(node_395, ((struct sNode*)node_395)->finalize, ((struct sNode*)node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2076, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(__right_value567=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2076, "sTupleNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_392),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result195__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value571=_inf_value11));
    /*i*/come_call_finalizer3(tuple_elements_392,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value567,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value571) { __right_value571 = come_decrement_ref_count2(__right_value571, ((struct sNode*)__right_value571)->finalize, ((struct sNode*)__right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj221;
struct list$1sNodeph* __dec_obj222;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj221=self->sname;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(self->tuple_elements==gComeFunResultObject) {
            __dec_obj222=self->tuple_elements;
            /* a*/come_call_finalizer3(__dec_obj222,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result193__;
void* __right_value568 = (void*)0;
struct sTupleNode* result_396;
void* __right_value569 = (void*)0;
char* __dec_obj223;
void* __right_value570 = (void*)0;
struct list$1sNodeph* __dec_obj224;
struct sTupleNode* __result194__;
    if(self==(void*)0) {
        __result193__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    result_396=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(self!=((void*)0)) {
        result_396->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj223=result_396->sname;
        result_396->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj224=result_396->tuple_elements;
        result_396->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        /* a*/come_call_finalizer3(__dec_obj224,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result194__ = gComeFunResultObject = __result_obj__ = result_396;
    /*i*/come_call_finalizer3(result_396,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1sNodeph* tuple_elements_397;
struct sNode* node_398;
void* __right_value574 = (void*)0;
struct sNode* node2_399;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value12;
struct sSomeNode* _inf_obj_value12;
void* __right_value580 = (void*)0;
struct sNode* __result198__;
    tuple_elements_397=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2081, "list$1sNodeph"))));
    node_398=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_397,(struct sNode*)come_increment_ref_count(node_398));
    node2_399=(struct sNode*)come_increment_ref_count(create_true_object(info));
    list$1sNodeph_push_back(tuple_elements_397,(struct sNode*)come_increment_ref_count(node2_399));
    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2091, "struct sNode");
    _inf_obj_value12=come_increment_ref_count(((struct sSomeNode*)(__right_value576=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2091, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_397),info))));
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sSomeNode_finalize;
    _inf_value12->clone=(void*)sSomeNode_clone;
    _inf_value12->compile=(void*)sSomeNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sNodeBase_terminated;
    _inf_value12->kind=(void*)sSomeNode_kind;
    __result198__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value580=_inf_value12));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(tuple_elements_397,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_399) { node2_399 = come_decrement_ref_count2(node2_399, ((struct sNode*)node2_399)->finalize, ((struct sNode*)node2_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value576,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value580) { __right_value580 = come_decrement_ref_count2(__right_value580, ((struct sNode*)__right_value580)->finalize, ((struct sNode*)__right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result198__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1sNodeph* tuple_elements_401;
void* __right_value583 = (void*)0;
struct sNode* node_402;
void* __right_value584 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value585 = (void*)0;
struct sNode* node2_403;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value13;
struct sSomeNode* _inf_obj_value13;
void* __right_value591 = (void*)0;
struct sNode* __result201__;
    tuple_elements_401=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2096, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_402=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj229=node_402;
    node_402=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_402),info));
    if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); }
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_401,(struct sNode*)come_increment_ref_count(node_402));
    node2_403=(struct sNode*)come_increment_ref_count(create_true_object(info));
    list$1sNodeph_push_back(tuple_elements_401,(struct sNode*)come_increment_ref_count(node2_403));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2109, "struct sNode");
    _inf_obj_value13=come_increment_ref_count(((struct sSomeNode*)(__right_value587=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2109, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_401),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sSomeNode_finalize;
    _inf_value13->clone=(void*)sSomeNode_clone;
    _inf_value13->compile=(void*)sSomeNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sNodeBase_terminated;
    _inf_value13->kind=(void*)sSomeNode_kind;
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value591=_inf_value13));
    /*i*/come_call_finalizer3(tuple_elements_401,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_402) { node_402 = come_decrement_ref_count2(node_402, ((struct sNode*)node_402)->finalize, ((struct sNode*)node_402)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_403) { node2_403 = come_decrement_ref_count2(node2_403, ((struct sNode*)node2_403)->finalize, ((struct sNode*)node2_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value587,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value591) { __right_value591 = come_decrement_ref_count2(__right_value591, ((struct sNode*)__right_value591)->finalize, ((struct sNode*)__right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj230;
struct list$1sNodeph* __dec_obj231;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj230=self->sname;
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(self->tuple_elements==gComeFunResultObject) {
            __dec_obj231=self->tuple_elements;
            /* a*/come_call_finalizer3(__dec_obj231,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result199__;
void* __right_value588 = (void*)0;
struct sSomeNode* result_404;
void* __right_value589 = (void*)0;
char* __dec_obj232;
void* __right_value590 = (void*)0;
struct list$1sNodeph* __dec_obj233;
struct sSomeNode* __result200__;
    if(self==(void*)0) {
        __result199__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    result_404=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "sSomeNode"));
    if(self!=((void*)0)) {
        result_404->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_404->sname;
        result_404->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj233=result_404->tuple_elements;
        result_404->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        /* a*/come_call_finalizer3(__dec_obj233,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = result_404;
    /*i*/come_call_finalizer3(result_404,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1sNodeph* tuple_elements_405;
void* __right_value594 = (void*)0;
struct sNode* node_406;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value596 = (void*)0;
struct sNode* node2_407;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sNode* _inf_value14;
struct sNoneNode* _inf_obj_value14;
void* __right_value602 = (void*)0;
struct sNode* __result204__;
    tuple_elements_405=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2114, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_406=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj234=node_406;
    node_406=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_406),info));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_405,(struct sNode*)come_increment_ref_count(node_406));
    node2_407=(struct sNode*)come_increment_ref_count(create_false_object(info));
    list$1sNodeph_push_back(tuple_elements_405,(struct sNode*)come_increment_ref_count(node2_407));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2127, "struct sNode");
    _inf_obj_value14=come_increment_ref_count(((struct sNoneNode*)(__right_value598=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2127, "sNoneNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_405),info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sNoneNode_finalize;
    _inf_value14->clone=(void*)sNoneNode_clone;
    _inf_value14->compile=(void*)sNoneNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sNodeBase_terminated;
    _inf_value14->kind=(void*)sNoneNode_kind;
    __result204__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value602=_inf_value14));
    /*i*/come_call_finalizer3(tuple_elements_405,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_406) { node_406 = come_decrement_ref_count2(node_406, ((struct sNode*)node_406)->finalize, ((struct sNode*)node_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_407) { node2_407 = come_decrement_ref_count2(node2_407, ((struct sNode*)node2_407)->finalize, ((struct sNode*)node2_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value598,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value602) { __right_value602 = come_decrement_ref_count2(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj235;
struct list$1sNodeph* __dec_obj236;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj235=self->sname;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(self->tuple_elements==gComeFunResultObject) {
            __dec_obj236=self->tuple_elements;
            /* a*/come_call_finalizer3(__dec_obj236,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result202__;
void* __right_value599 = (void*)0;
struct sNoneNode* result_408;
void* __right_value600 = (void*)0;
char* __dec_obj237;
void* __right_value601 = (void*)0;
struct list$1sNodeph* __dec_obj238;
struct sNoneNode* __result203__;
    if(self==(void*)0) {
        __result202__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    result_408=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "sNoneNode"));
    if(self!=((void*)0)) {
        result_408->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_408->sname;
        result_408->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj238=result_408->tuple_elements;
        result_408->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        /* a*/come_call_finalizer3(__dec_obj238,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result203__ = gComeFunResultObject = __result_obj__ = result_408;
    /*i*/come_call_finalizer3(result_408,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

