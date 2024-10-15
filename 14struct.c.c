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
struct sStructNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct sClassNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
    _Bool mOutput;
};
struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};
struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
void output_struct_header(struct sClass* klass, struct sInfo* info);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);
_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self);
char* sGenericsStructNode_kind(struct sGenericsStructNode* self);
_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
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
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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










char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_64;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __result65__;
void* __right_value118 = (void*)0;
char* __result66__;
    p_64=class_name;
    while(*p_64) {
        if(*p_64==36) {
            __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=string_substring(((char*)(__right_value116=__builtin_string(class_name))),0,p_64-class_name)));
            __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result65__;
        }
        else {
            p_64++;
        }
    }
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string(class_name)));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* buf_65;
struct sClass* klass_66;
char* class_name_67;
int i_68;
struct sType* type_69;
void* __right_value121 = (void*)0;
char* type_name_85;
int i_86;
void* __right_value122 = (void*)0;
char* __result69__;
    buf_65=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))));
    klass_66=generics_type->mClass;
    class_name_67=klass_66->mName;
    buffer_append_str(buf_65,class_name_67);
    if(list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_65,36);
        buffer_append_char(buf_65,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_68=0;        i_68<list$1sTypeph_length(generics_type->mGenericsTypes);        i_68++        ){
            type_69=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_68), "14struct.c", 33, 0));
            type_name_85=(char*)come_increment_ref_count(create_generics_name(type_69,info));
            buffer_append_str(buf_65,type_name_85);
            for(            i_86=0;            i_86<type_69->mPointerNum;            i_86++            ){
                buffer_append_char(buf_65,112);
            }
            if(type_69->mHeap) {
                buffer_append_str(buf_65,"h");
            }
            type_name_85 = come_decrement_ref_count2(type_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result69__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=buffer_to_string(buf_65)));
    /*i*/come_call_finalizer3(buf_65,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_70;
int i_71;
struct sType* __result67__;
struct sType* default_value_72;
struct sType* __result68__;
default_value_72 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_70=self->head;
    i_71=0;
    while(it_70!=((void*)0)) {
        if(position==i_71) {
            __result67__ = gComeFunResultObject = __result_obj__ = it_70->item;
            gComeFunResultObject = (void*)0;
            return __result67__;
        }
        it_70=it_70->next;
        i_71++;
    }
    memset(&default_value_72,0,sizeof(struct sType*));
    __result68__ = gComeFunResultObject = __result_obj__ = default_value_72;
    /*i*/come_call_finalizer3(default_value_72,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj15;
struct tuple1$1sTypeph* __dec_obj17;
char* __dec_obj19;
struct list$1sTypeph* __dec_obj20;
struct list$1sNodeph* __dec_obj22;
struct list$1sTypeph* __dec_obj24;
struct list$1charph* __dec_obj25;
struct tuple1$1sTypeph* __dec_obj27;
struct sNode* __dec_obj29;
struct sNode* __dec_obj30;
char* __dec_obj31;
char* __dec_obj32;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj15=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj15,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj17=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj17,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj19=self->mGenericsName;
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj20=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj22=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj22,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj24=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj25=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj25,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj27=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj27,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj29=self->mAlignas;
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj30=self->mSizeNum;
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj31=self->mOriginalTypeName;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj32=self->mAsmName;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_73;
struct list_item$1sTypeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj21;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj21=self->item;
            /* a*/come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_75;
struct list_item$1sTypeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_77;
struct list_item$1sNodeph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj23;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj23=self->item;
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_79;
struct list_item$1sNodeph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_81;
struct list_item$1charph* prev_it_82;
    it_81=self->head;
    while(it_81!=((void*)0)) {
        prev_it_82=it_81;
        it_81=it_81->next;
        /*i*/come_call_finalizer3(prev_it_82,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj26;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_83;
struct list_item$1charph* prev_it_84;
    it_83=self->head;
    while(it_83!=((void*)0)) {
        prev_it_84=it_83;
        it_83=it_83->next;
        /*i*/come_call_finalizer3(prev_it_84,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj28;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj28=self->v1;
            /* a*/come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct buffer* buf_87;
void* __right_value125 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_88;
struct tuple2$2charphsTypeph* it_91;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_94;
struct sType* type_95;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
    if(!klass->mOutputed) {
        klass->mOutputed=(_Bool)1;
        buf_87=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))));
        buffer_append_str(buf_87,((char*)(__right_value125=xsprintf("struct %s\n{\n",klass->mName))));
        __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        o2_saved_88=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_91=list$1tuple2$2charphsTypephph_begin((o2_saved_88));        !list$1tuple2$2charphsTypephph_end((o2_saved_88));        it_91=list$1tuple2$2charphsTypephph_next((o2_saved_88))        ){
            multiple_assign_var1=it_91;
            name_94=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_95=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_95->mStatic=(_Bool)0;
            buffer_append_str(buf_87,"    ");
            buffer_append_str(buf_87,((char*)(__right_value126=make_define_var(type_95,name_94,(_Bool)0,info))));
            __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_87,";\n");
            name_94 = come_decrement_ref_count2(name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_88,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_87,"};\n");
        if(info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(__right_value127=buffer_to_string(buf_87))));
            __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_87,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_89;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* __result71__;
struct tuple2$2charphsTypeph* result_90;
struct tuple2$2charphsTypeph* __result72__;
result_89 = (void*)0;
result_90 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_89,0,sizeof(struct tuple2$2charphsTypeph*));
        __result70__ = gComeFunResultObject = __result_obj__ = result_89;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    self->it=self->head;
    if(self->it) {
        __result71__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    memset(&result_90,0,sizeof(struct tuple2$2charphsTypeph*));
    __result72__ = gComeFunResultObject = __result_obj__ = result_90;
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_92;
struct tuple2$2charphsTypeph* __result73__;
struct tuple2$2charphsTypeph* __result74__;
struct tuple2$2charphsTypeph* result_93;
struct tuple2$2charphsTypeph* __result75__;
result_92 = (void*)0;
result_93 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_92,0,sizeof(struct tuple2$2charphsTypeph*));
        __result73__ = gComeFunResultObject = __result_obj__ = result_92;
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result74__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    memset(&result_93,0,sizeof(struct tuple2$2charphsTypeph*));
    __result75__ = gComeFunResultObject = __result_obj__ = result_93;
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_96;
struct list_item$1tuple2$2charphsTypephph* prev_it_97;
    it_96=self->head;
    while(it_96!=((void*)0)) {
        prev_it_97=it_96;
        it_96=it_96->next;
        /*i*/come_call_finalizer3(prev_it_97,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj33;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            /* a*/come_call_finalizer3(__dec_obj33,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* buf_98;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_99;
struct tuple2$2charphsTypeph* it_100;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_101;
struct sType* type_102;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
    if(!klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_98=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))));
        if(klass->mParentClassName) {
            buffer_append_str(buf_98,((char*)(__right_value130=xsprintf("struct %s extends %s\n{\n",klass->mName,klass->mParentClassName))));
            __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_98,((char*)(__right_value131=xsprintf("struct %s\n{\n",klass->mName))));
            __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        for(        o2_saved_99=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_100=list$1tuple2$2charphsTypephph_begin((o2_saved_99));        !list$1tuple2$2charphsTypephph_end((o2_saved_99));        it_100=list$1tuple2$2charphsTypephph_next((o2_saved_99))        ){
            multiple_assign_var2=it_100;
            name_101=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_102=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_102->mStatic=(_Bool)0;
            buffer_append_str(buf_98,"    ");
            buffer_append_str(buf_98,((char*)(__right_value132=make_define_var_no_solved(type_102,name_101,(_Bool)0,(_Bool)0,info))));
            __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_98,";\n");
            name_101 = come_decrement_ref_count2(name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_99,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_98,"};\n");
        if(info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value133=buffer_to_string(buf_98))));
            __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_103;
struct sClass* klass_104;
int i_105;
_Bool result_106;
    type2_103=type->mNoSolvedGenericsType->v1;
    if(type2_103&&is_no_contained_generics_types(type2_103,info)) {
        return (_Bool)0;
    }
    klass_104=type->mClass;
    if(klass_104->mGenerics) {
        return (_Bool)0;
    }
    if(klass_104->mMethodGenerics) {
        return (_Bool)0;
    }
    for(    i_105=0;    i_105<list$1sTypeph_length(type->mGenericsTypes);    i_105++    ){
        result_106=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_105), "14struct.c", 144, 1)),info);
        if(!result_106) {
            return (_Bool)0;
        }
    }
    return (_Bool)1;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_107;
struct sClass* klass_108;
int i_109;
_Bool result_110;
    type2_107=type->mNoSolvedGenericsType->v1;
    if(type2_107&&is_contained_method_generics_types(type2_107,info)) {
        return (_Bool)1;
    }
    klass_108=type->mClass;
    if(klass_108->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_109=0;    i_109<list$1sTypeph_length(type->mGenericsTypes);    i_109++    ){
        result_110=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_109), "14struct.c", 168, 2)),info);
        if(result_110) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value134 = (void*)0;
char* new_name_111;
void* __right_value169 = (void*)0;
struct sType* type2_114;
struct sClass* generics_class_133;
_Bool __result98__;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sClass* new_class_139;
void* __right_value175 = (void*)0;
int i_181;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* it_183;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_184;
struct sType* type_185;
void* __right_value176 = (void*)0;
struct sType* new_type_186;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sType* __dec_obj74;
struct sClass* generics_class_192;
_Bool __result123__;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct sClass* new_class_193;
void* __right_value187 = (void*)0;
_Bool existance_method_generics_194;
int i_195;
struct list$1tuple2$2charphsTypephph* o2_saved_196;
struct tuple2$2charphsTypeph* it_197;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_198;
struct sType* type_199;
void* __right_value188 = (void*)0;
struct sType* new_type_200;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sType* __dec_obj75;
void* __right_value194 = (void*)0;
struct sType* __dec_obj76;
_Bool __result124__;
    new_name_111=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_111)) {
        type2_114=(struct sType*)come_increment_ref_count(sType_clone(type));
        generics_class_133=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(generics_class_133==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result98__ = (_Bool)0;
            /*i*/come_call_finalizer3(type2_114,sType_finalize, 0, 0, 0, 0, (void*)0);
            new_name_111 = come_decrement_ref_count2(new_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result98__;
        }
        new_class_139=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 192, "sClass")),new_name_111,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_111)),(struct sClass*)come_increment_ref_count(new_class_139));
        i_181=0;
        for(        o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_133->mFields)),it_183=list$1tuple2$2charphsTypephph_begin((o2_saved_182));        !list$1tuple2$2charphsTypephph_end((o2_saved_182));        it_183=list$1tuple2$2charphsTypephph_next((o2_saved_182))        ){
            multiple_assign_var3=it_183;
            name_184=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_185=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_186=(struct sType*)come_increment_ref_count(solve_generics(type_185,type2_114,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_139->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 202, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_184)),(struct sType*)come_increment_ref_count(sType_clone(new_type_186)))));
            name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(new_type_186,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_182,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj74=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_139;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_139,info);
        /*i*/come_call_finalizer3(type2_114,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(new_class_139,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(!map$2charphsClassph_find(info->classes,new_name_111)) {
            generics_class_192=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            if(generics_class_192==((void*)0)) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result123__ = (_Bool)0;
                new_name_111 = come_decrement_ref_count2(new_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result123__;
            }
            new_class_193=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 220, "sClass")),new_name_111,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_111)),(struct sClass*)come_increment_ref_count(new_class_193));
            existance_method_generics_194=(_Bool)0;
            i_195=0;
            for(            o2_saved_196=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_192->mFields)),it_197=list$1tuple2$2charphsTypephph_begin((o2_saved_196));            !list$1tuple2$2charphsTypephph_end((o2_saved_196));            it_197=list$1tuple2$2charphsTypephph_next((o2_saved_196))            ){
                multiple_assign_var4=it_197;
                name_198=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                type_199=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                new_type_200=(struct sType*)come_increment_ref_count(solve_generics(type_199,generics_type,info));
                if(is_contained_method_generics_types(new_type_200,info)) {
                    existance_method_generics_194=(_Bool)1;
                }
                list$1tuple2$2charphsTypephph_push_back(new_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 235, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_198)),(struct sType*)come_increment_ref_count(sType_clone(new_type_200)))));
                name_198 = come_decrement_ref_count2(name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_199,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(new_type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_196,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj75=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
            /* a*/come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_193;
            list$1sTypeph_reset(type->mGenericsTypes);
            if(!existance_method_generics_194) {
                output_struct(new_class_193,info);
            }
            /*i*/come_call_finalizer3(new_class_193,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(type->mNoSolvedGenericsType->v1==((void*)0)) {
                __dec_obj76=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
                /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_111);
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result124__ = (_Bool)1;
    new_name_111 = come_decrement_ref_count2(new_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_112;
int it_113;
    hash_112=string_get_hash_key(((char*)key))%self->size;
    it_113=hash_112;
    while((_Bool)1) {
        if(self->item_existance[it_113]) {
            if(string_equals(self->keys[it_113],key)) {
                return (_Bool)1;
            }
            it_113++;
            if(it_113>=self->size) {
                it_113=0;
            }
            else {
                if(it_113==hash_112) {
                    return (_Bool)0;
                }
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result76__;
void* __right_value135 = (void*)0;
struct sType* result_115;
void* __right_value138 = (void*)0;
struct tuple1$1sTypeph* __dec_obj38;
void* __right_value139 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value140 = (void*)0;
char* __dec_obj40;
void* __right_value147 = (void*)0;
struct list$1sTypeph* __dec_obj44;
void* __right_value155 = (void*)0;
struct list$1sNodeph* __dec_obj48;
void* __right_value156 = (void*)0;
struct list$1sTypeph* __dec_obj49;
void* __right_value163 = (void*)0;
struct list$1charph* __dec_obj53;
void* __right_value164 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value165 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value166 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value167 = (void*)0;
char* __dec_obj57;
void* __right_value168 = (void*)0;
char* __dec_obj58;
struct sType* __result93__;
    if(self==(void*)0) {
        __result76__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_115=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_115->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj38=result_115->mNoSolvedGenericsType;
        result_115->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj39=result_115->mOriginalLoadVarType;
        result_115->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj40=result_115->mGenericsName;
        result_115->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj44=result_115->mGenericsTypes;
        result_115->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj48=result_115->mArrayNum;
        result_115->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_115->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj49=result_115->mParamTypes;
        result_115->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj53=result_115->mParamNames;
        result_115->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj54=result_115->mResultType;
        result_115->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_115->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj55=result_115->mAlignas;
        result_115->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_115->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_115->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_115->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_115->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_115->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_115->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_115->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_115->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_115->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_115->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_115->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_115->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_115->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_115->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_115->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_115->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_115->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_115->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_115->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_115->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_115->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_115->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_115->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_115->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_115->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_115->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_115->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj56=result_115->mSizeNum;
        result_115->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_115->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_115->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_115->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj57=result_115->mOriginalTypeName;
        result_115->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_115->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_115->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_115->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_115->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_115->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_115->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_115->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_115->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_115->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj58=result_115->mAsmName;
        result_115->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_115->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_115->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_115->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_115->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_115->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_115->mOriginIsArray=self->mOriginIsArray;
    }
    __result93__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result77__;
void* __right_value136 = (void*)0;
struct tuple1$1sTypeph* result_116;
void* __right_value137 = (void*)0;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result78__;
    if(self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_116=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj36=result_116->v1;
        result_116->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result79__;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct list$1sTypeph* result_117;
struct list_item$1sTypeph* it_118;
void* __right_value146 = (void*)0;
struct list$1sTypeph* __result82__;
    if(self==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_117=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_118=self->head;
    while(it_118!=((void*)0)) {
        list$1sTypeph_add(result_117,(struct sType*)come_increment_ref_count(sType_clone(it_118->item)));
        it_118=it_118->next;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_117;
    /*i*/come_call_finalizer3(result_117,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct list_item$1sTypeph* litem_119;
struct sType* __dec_obj41;
void* __right_value144 = (void*)0;
struct list_item$1sTypeph* litem_120;
struct sType* __dec_obj42;
void* __right_value145 = (void*)0;
struct list_item$1sTypeph* litem_121;
struct sType* __dec_obj43;
struct list$1sTypeph* __result81__;
    if(self->len==0) {
        litem_119=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value143=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_119->prev=((void*)0);
        litem_119->next=((void*)0);
        __dec_obj41=litem_119->item;
        litem_119->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_119;
        self->head=litem_119;
    }
    else {
        if(self->len==1) {
            litem_120=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value144=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_120->prev=self->head;
            litem_120->next=((void*)0);
            __dec_obj42=litem_120->item;
            litem_120->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_120;
            self->head->next=litem_120;
        }
        else {
            litem_121=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value145=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_121->prev=self->tail;
            litem_121->next=((void*)0);
            __dec_obj43=litem_121->item;
            litem_121->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_121;
            self->tail=litem_121;
        }
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result83__;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct list$1sNodeph* result_122;
struct list_item$1sNodeph* it_123;
void* __right_value154 = (void*)0;
struct list$1sNodeph* __result88__;
    if(self==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    result_122=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_123=self->head;
    while(it_123!=((void*)0)) {
        list$1sNodeph_add(result_122,(struct sNode*)come_increment_ref_count(sNode_clone(it_123->item)));
        it_123=it_123->next;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_122;
    /*i*/come_call_finalizer3(result_122,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value150 = (void*)0;
struct list_item$1sNodeph* litem_124;
struct sNode* __dec_obj45;
void* __right_value151 = (void*)0;
struct list_item$1sNodeph* litem_125;
struct sNode* __dec_obj46;
void* __right_value152 = (void*)0;
struct list_item$1sNodeph* litem_126;
struct sNode* __dec_obj47;
struct list$1sNodeph* __result85__;
    if(self->len==0) {
        litem_124=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value150=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        __dec_obj45=litem_124->item;
        litem_124->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_124;
        self->head=litem_124;
    }
    else {
        if(self->len==1) {
            litem_125=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value151=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_125->prev=self->head;
            litem_125->next=((void*)0);
            __dec_obj46=litem_125->item;
            litem_125->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_125;
            self->head->next=litem_125;
        }
        else {
            litem_126=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_126->prev=self->tail;
            litem_126->next=((void*)0);
            __dec_obj47=litem_126->item;
            litem_126->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_126;
            self->tail=litem_126;
        }
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result86__;
void* __right_value153 = (void*)0;
struct sNode* result_127;
struct sNode* __result87__;
    if(self==(void*)0) {
        __result86__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    result_127=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_127->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_127->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_127->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_127->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_127->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_127->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_127->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_127->kind=self->kind;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_127;
    if(result_127) { result_127 = come_decrement_ref_count2(result_127, ((struct sNode*)result_127)->finalize, ((struct sNode*)result_127)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result89__;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct list$1charph* result_128;
struct list_item$1charph* it_129;
void* __right_value162 = (void*)0;
struct list$1charph* __result92__;
    if(self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_128=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_129=self->head;
    while(it_129!=((void*)0)) {
        list$1charph_add(result_128,(char*)come_increment_ref_count(string_clone(it_129->item)));
        it_129=it_129->next;
    }
    __result92__ = gComeFunResultObject = __result_obj__ = result_128;
    /*i*/come_call_finalizer3(result_128,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value159 = (void*)0;
struct list_item$1charph* litem_130;
char* __dec_obj50;
void* __right_value160 = (void*)0;
struct list_item$1charph* litem_131;
char* __dec_obj51;
void* __right_value161 = (void*)0;
struct list_item$1charph* litem_132;
char* __dec_obj52;
struct list$1charph* __result91__;
    if(self->len==0) {
        litem_130=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value159=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        __dec_obj50=litem_130->item;
        litem_130->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_130;
        self->head=litem_130;
    }
    else {
        if(self->len==1) {
            litem_131=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value160=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_131->prev=self->head;
            litem_131->next=((void*)0);
            __dec_obj51=litem_131->item;
            litem_131->item=(char*)come_increment_ref_count(item);
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_131;
            self->head->next=litem_131;
        }
        else {
            litem_132=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_132->prev=self->tail;
            litem_132->next=((void*)0);
            __dec_obj52=litem_132->item;
            litem_132->item=(char*)come_increment_ref_count(item);
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_132;
            self->tail=litem_132;
        }
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_134;
unsigned int hash_135;
unsigned int it_136;
struct sClass* __result94__;
struct sClass* __result95__;
struct sClass* __result96__;
struct sClass* __result97__;
default_value_134 = (void*)0;
    memset(&default_value_134,0,sizeof(struct sClass*));
    hash_135=string_get_hash_key(((char*)key))%self->size;
    it_136=hash_135;
    while((_Bool)1) {
        if(self->item_existance[it_136]) {
            if(string_equals(self->keys[it_136],key)) {
                __result94__ = gComeFunResultObject = __result_obj__ = self->items[it_136];
                /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result94__;
            }
            it_136++;
            if(it_136>=self->size) {
                it_136=0;
            }
            else {
                if(it_136==hash_135) {
                    __result95__ = gComeFunResultObject = __result_obj__ = default_value_134;
                    /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result95__;
                }
            }
        }
        else {
            __result96__ = gComeFunResultObject = __result_obj__ = default_value_134;
            /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result96__;
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = default_value_134;
    /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj59;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj59=self->mName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj60=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj61=self->mDeclareSName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj62=self->mParentClassName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_137;
struct list_item$1tuple2$2charphsTypephph* prev_it_138;
    it_137=self->head;
    while(it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*i*/come_call_finalizer3(prev_it_138,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_157;
unsigned int it_158;
_Bool same_key_exist_175;
char* it2_178;
struct map$2charphsClassph* __result119__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_157=string_get_hash_key(key)%self->size;
    it_158=hash_157;
    while((_Bool)1) {
        if(self->item_existance[it_158]) {
            if(string_equals(self->keys[it_158],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_158]);
                    self->keys[it_158] = come_decrement_ref_count2(self->keys[it_158], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_158]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_158]);
                    self->keys[it_158]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_158],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_158]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_158]=item;
                }
                break;
            }
            it_158++;
            if(it_158>=self->size) {
                it_158=0;
            }
            else {
                if(it_158==hash_157) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_158]=(_Bool)1;
            if(1) {
                self->keys[it_158]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_158]=key;
            }
            if(1) {
                self->items[it_158]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_158]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_175=(_Bool)0;
    for(    it2_178=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_178=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_178,key)) {
            same_key_exist_175=(_Bool)1;
        }
    }
    if(!same_key_exist_175) {
        list$1charp_push_back(self->key_list,key);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_140;
void* __right_value172 = (void*)0;
char** keys_141;
void* __right_value173 = (void*)0;
struct sClass** items_142;
void* __right_value174 = (void*)0;
_Bool* item_existance_143;
int len_144;
char* it_147;
struct sClass* default_value_150;
struct sClass* it2_151;
unsigned int hash_154;
int n_155;
struct sClass* default_value_156;
default_value_150 = (void*)0;
default_value_156 = (void*)0;
    size_140=self->size*10;
    keys_141=(char**)come_increment_ref_count(((char**)(__right_value172=(char**)come_calloc(1, sizeof(char*)*(1*(size_140)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_142=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value173=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_140)), "/usr/local/include/comelang.h", 1622, "sClass*%"))));
    item_existance_143=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value174=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_140)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_144=0;
    for(    it_147=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_147=map$2charphsClassph_next(self)    ){
        memset(&default_value_150,0,sizeof(struct sClass*));
        it2_151=map$2charphsClassph_at(self,it_147,default_value_150);
        hash_154=string_get_hash_key(it_147)%size_140;
        n_155=hash_154;
        while((_Bool)1) {
            if(item_existance_143[n_155]) {
                n_155++;
                if(n_155>=size_140) {
                    n_155=0;
                }
                else {
                    if(n_155==hash_154) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_143[n_155]=(_Bool)1;
                keys_141[n_155]=it_147;
                items_142[n_155]=map$2charphsClassph_at(self,it_147,default_value_156);
                len_144++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_141;
    self->items=items_142;
    self->item_existance=item_existance_143;
    self->size=size_140;
    self->len=len_144;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_145;
char* __result99__;
char* __result100__;
char* result_146;
char* __result101__;
result_145 = (void*)0;
result_146 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_145,0,sizeof(char*));
        __result99__ = gComeFunResultObject = __result_obj__ = result_145;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result100__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    memset(&result_146,0,sizeof(char*));
    __result101__ = gComeFunResultObject = __result_obj__ = result_146;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_148;
char* __result102__;
char* __result103__;
char* result_149;
char* __result104__;
result_148 = (void*)0;
result_149 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_148,0,sizeof(char*));
        __result102__ = gComeFunResultObject = __result_obj__ = result_148;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result103__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    memset(&result_149,0,sizeof(char*));
    __result104__ = gComeFunResultObject = __result_obj__ = result_149;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_152;
unsigned int it_153;
struct sClass* __result105__;
struct sClass* __result106__;
struct sClass* __result107__;
struct sClass* __result108__;
    hash_152=string_get_hash_key(((char*)key))%self->size;
    it_153=hash_152;
    while((_Bool)1) {
        if(self->item_existance[it_153]) {
            if(string_equals(self->keys[it_153],key)) {
                __result105__ = gComeFunResultObject = __result_obj__ = self->items[it_153];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result105__;
            }
            it_153++;
            if(it_153>=self->size) {
                it_153=0;
            }
            else {
                if(it_153==hash_152) {
                    __result106__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result106__;
                }
            }
        }
        else {
            __result107__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
    }
    __result108__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_159;
struct list_item$1charp* it_160;
struct list$1charp* __result112__;
    it2_159=0;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        if(charp_equals(it_160->item,item)) {
            list$1charp_delete(self,it2_159,it2_159+1);
            break;
        }
        it2_159++;
        it_160=it_160->next;
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_161;
struct list$1charp* __result109__;
struct list_item$1charp* it_164;
int i_165;
struct list_item$1charp* prev_it_166;
struct list_item$1charp* it_167;
int i_168;
struct list_item$1charp* prev_it_169;
struct list_item$1charp* it_170;
struct list_item$1charp* head_prev_it_171;
struct list_item$1charp* tail_it_172;
int i_173;
struct list_item$1charp* prev_it_174;
struct list$1charp* __result111__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_161=tail;
        tail=head;
        head=tmp_161;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result109__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_164=self->head;
            i_165=0;
            while(it_164!=((void*)0)) {
                if(i_165<tail) {
                    prev_it_166=it_164;
                    it_164=it_164->next;
                    i_165++;
                    /*i*/come_call_finalizer3(prev_it_166,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_165==tail) {
                        self->head=it_164;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_164=it_164->next;
                        i_165++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_167=self->head;
                i_168=0;
                while(it_167!=((void*)0)) {
                    if(i_168==head) {
                        self->tail=it_167->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_168>=head) {
                        prev_it_169=it_167;
                        it_167=it_167->next;
                        i_168++;
                        /*i*/come_call_finalizer3(prev_it_169,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_167=it_167->next;
                        i_168++;
                    }
                }
            }
            else {
                it_170=self->head;
                head_prev_it_171=((void*)0);
                tail_it_172=((void*)0);
                i_173=0;
                while(it_170!=((void*)0)) {
                    if(i_173==head) {
                        head_prev_it_171=it_170->prev;
                    }
                    if(i_173==tail) {
                        tail_it_172=it_170;
                    }
                    if(i_173>=head&&i_173<tail) {
                        prev_it_174=it_170;
                        it_170=it_170->next;
                        i_173++;
                        /*i*/come_call_finalizer3(prev_it_174,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_170=it_170->next;
                        i_173++;
                    }
                }
                if(head_prev_it_171!=((void*)0)) {
                    head_prev_it_171->next=tail_it_172;
                }
                if(tail_it_172!=((void*)0)) {
                    tail_it_172->prev=head_prev_it_171;
                }
            }
        }
    }
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_162;
struct list_item$1charp* prev_it_163;
struct list$1charp* __result110__;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_176;
char* __result113__;
char* __result114__;
char* result_177;
char* __result115__;
result_176 = (void*)0;
result_177 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_176,0,sizeof(char*));
        __result113__ = gComeFunResultObject = __result_obj__ = result_176;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    self->it=self->head;
    if(self->it) {
        __result114__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    memset(&result_177,0,sizeof(char*));
    __result115__ = gComeFunResultObject = __result_obj__ = result_177;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_179;
char* __result116__;
char* __result117__;
char* result_180;
char* __result118__;
result_179 = (void*)0;
result_180 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_179,0,sizeof(char*));
        __result116__ = gComeFunResultObject = __result_obj__ = result_179;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result117__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    memset(&result_180,0,sizeof(char*));
    __result118__ = gComeFunResultObject = __result_obj__ = result_180;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_187;
struct tuple2$2charphsTypeph* __dec_obj63;
void* __right_value178 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_188;
struct tuple2$2charphsTypeph* __dec_obj66;
void* __right_value179 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_189;
struct tuple2$2charphsTypeph* __dec_obj69;
struct list$1tuple2$2charphsTypephph* __result120__;
    if(self->len==0) {
        litem_187=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value177=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple2$2charphsTypephph"))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        __dec_obj63=litem_187->item;
        litem_187->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj63,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_187;
        self->head=litem_187;
    }
    else {
        if(self->len==1) {
            litem_188=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value178=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple2$2charphsTypephph"))));
            litem_188->prev=self->head;
            litem_188->next=((void*)0);
            __dec_obj66=litem_188->item;
            litem_188->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj66,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_188;
            self->head->next=litem_188;
        }
        else {
            litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value179=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple2$2charphsTypephph"))));
            litem_189->prev=self->tail;
            litem_189->next=((void*)0);
            __dec_obj69=litem_189->item;
            litem_189->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_189;
            self->tail=litem_189;
        }
    }
    self->len++;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj72;
struct sType* __dec_obj73;
struct tuple2$2charphsTypeph* __result121__;
    __dec_obj72=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj73=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_190;
struct list_item$1sTypeph* prev_it_191;
struct list$1sTypeph* __result122__;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        /*i*/come_call_finalizer3(prev_it_191,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
char* __dec_obj78;
void* __right_value211 = (void*)0;
struct sClass* __dec_obj96;
struct sStructNode* __result133__;
    ((struct sNodeBase*)(__right_value195=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value195,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj96=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /* a*/come_call_finalizer3(__dec_obj96,sClass_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value212=__builtin_string("sStructNode")));
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __right_value213 = (void*)0;
struct sClass* klass_208;
void* __right_value214 = (void*)0;
char* name_209;
void* __right_value215 = (void*)0;
struct sClass* klass2_210;
void* __right_value216 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj100;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* type_214;
void* __right_value222 = (void*)0;
_Bool __result150__;
    klass_208=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_209=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(map$2charphsClassph_at(info->classes,name_209,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_209),(struct sClass*)come_increment_ref_count(sClass_clone(klass_208)));
    }
    else {
        if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_209,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_208->mFields)>0) {
            klass2_210=map$2charphsClassph_at(info->classes,name_209,((void*)0));
            __dec_obj100=klass2_210->mFields;
            klass2_210->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_208->mFields));
            /* a*/come_call_finalizer3(__dec_obj100,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(map$2charphsTypephp_operator_load_element(info->types,name_209)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_209), "14struct.c", 294, 3))->mTypedef) {
    }
    else {
        type_214=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 297, "sType")),name_209,(_Bool)0,info));
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_209),(struct sType*)come_increment_ref_count(sType_clone(type_214)));
        /*i*/come_call_finalizer3(type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self->mOutput) {
        output_struct(klass_208,info);
    }
    __result150__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_208,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result150__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj77;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj77=self->sname;
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result125__;
void* __right_value197 = (void*)0;
struct sClass* result_201;
void* __right_value198 = (void*)0;
char* __dec_obj79;
void* __right_value208 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj93;
void* __right_value209 = (void*)0;
char* __dec_obj94;
void* __right_value210 = (void*)0;
char* __dec_obj95;
struct sClass* __result132__;
    if(self==(void*)0) {
        __result125__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    result_201=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"));
    if(self!=((void*)0)) {
        result_201->mStruct=self->mStruct;
    }
    if(self!=((void*)0)) {
        result_201->mFloat=self->mFloat;
    }
    if(self!=((void*)0)) {
        result_201->mUnion=self->mUnion;
    }
    if(self!=((void*)0)) {
        result_201->mGenerics=self->mGenerics;
    }
    if(self!=((void*)0)) {
        result_201->mMethodGenerics=self->mMethodGenerics;
    }
    if(self!=((void*)0)) {
        result_201->mEnum=self->mEnum;
    }
    if(self!=((void*)0)) {
        result_201->mProtocol=self->mProtocol;
    }
    if(self!=((void*)0)) {
        result_201->mNumber=self->mNumber;
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj79=result_201->mName;
        result_201->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_201->mGenericsNum=self->mGenericsNum;
    }
    if(self!=((void*)0)) {
        result_201->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj93=result_201->mFields;
        result_201->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(self->mFields));
        /* a*/come_call_finalizer3(__dec_obj93,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_201->mOutputed=self->mOutputed;
    }
    if(self!=((void*)0)) {
        result_201->mOutputed2=self->mOutputed2;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj94=result_201->mDeclareSName;
        result_201->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_201->mNobodyStruct=self->mNobodyStruct;
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj95=result_201->mParentClassName;
        result_201->mParentClassName=(char*)come_increment_ref_count(string_clone(self->mParentClassName));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_201;
    /*i*/come_call_finalizer3(result_201,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result126__;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_202;
struct list_item$1tuple2$2charphsTypephph* it_203;
void* __right_value207 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result131__;
    if(self==((void*)0)) {
        __result126__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    result_202=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 137, "list$1tuple2$2charphsTypephph"))));
    it_203=self->head;
    while(it_203!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_202,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_203->item)));
        it_203=it_203->next;
    }
    __result131__ = gComeFunResultObject = __result_obj__ = result_202;
    /*i*/come_call_finalizer3(result_202,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result127__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_204;
struct tuple2$2charphsTypeph* __dec_obj80;
void* __right_value202 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_205;
struct tuple2$2charphsTypeph* __dec_obj83;
void* __right_value203 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_206;
struct tuple2$2charphsTypeph* __dec_obj86;
struct list$1tuple2$2charphsTypephph* __result128__;
    if(self->len==0) {
        litem_204=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value201=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1tuple2$2charphsTypephph"))));
        litem_204->prev=((void*)0);
        litem_204->next=((void*)0);
        __dec_obj80=litem_204->item;
        litem_204->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj80,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_204;
        self->head=litem_204;
    }
    else {
        if(self->len==1) {
            litem_205=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value202=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1tuple2$2charphsTypephph"))));
            litem_205->prev=self->head;
            litem_205->next=((void*)0);
            __dec_obj83=litem_205->item;
            litem_205->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj83,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_205;
            self->head->next=litem_205;
        }
        else {
            litem_206=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value203=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1tuple2$2charphsTypephph"))));
            litem_206->prev=self->tail;
            litem_206->next=((void*)0);
            __dec_obj86=litem_206->item;
            litem_206->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj86,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_206;
            self->tail=litem_206;
        }
    }
    self->len++;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj87;
struct sType* __dec_obj88;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj87=self->v1;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj88=self->v2;
            /* a*/come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result129__;
void* __right_value204 = (void*)0;
struct tuple2$2charphsTypeph* result_207;
void* __right_value205 = (void*)0;
char* __dec_obj89;
void* __right_value206 = (void*)0;
struct sType* __dec_obj90;
struct tuple2$2charphsTypeph* __result130__;
    if(self==(void*)0) {
        __result129__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    result_207=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj89=result_207->v1;
        result_207->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj90=result_207->v2;
        result_207->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /* a*/come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = result_207;
    /*i*/come_call_finalizer3(result_207,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj91;
struct sType* __dec_obj92;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj91=self->v1;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj92=self->v2;
            /* a*/come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_211;
unsigned int hash_212;
unsigned int it_213;
struct sType* __result135__;
struct sType* __result136__;
struct sType* __result137__;
struct sType* __result138__;
default_value_211 = (void*)0;
    memset(&default_value_211,0,sizeof(struct sType*));
    hash_212=string_get_hash_key(((char*)key))%self->size;
    it_213=hash_212;
    while((_Bool)1) {
        if(self->item_existance[it_213]) {
            if(string_equals(self->keys[it_213],key)) {
                __result135__ = gComeFunResultObject = __result_obj__ = self->items[it_213];
                /*i*/come_call_finalizer3(default_value_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result135__;
            }
            it_213++;
            if(it_213>=self->size) {
                it_213=0;
            }
            else {
                if(it_213==hash_212) {
                    __result136__ = gComeFunResultObject = __result_obj__ = default_value_211;
                    /*i*/come_call_finalizer3(default_value_211,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result136__;
                }
            }
        }
        else {
            __result137__ = gComeFunResultObject = __result_obj__ = default_value_211;
            /*i*/come_call_finalizer3(default_value_211,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result137__;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = default_value_211;
    /*i*/come_call_finalizer3(default_value_211,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_232;
unsigned int it_233;
_Bool same_key_exist_234;
char* it2_235;
struct map$2charphsTypeph* __result149__;
    if(self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_232=string_get_hash_key(key)%self->size;
    it_233=hash_232;
    while((_Bool)1) {
        if(self->item_existance[it_233]) {
            if(string_equals(self->keys[it_233],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_233]);
                    self->keys[it_233] = come_decrement_ref_count2(self->keys[it_233], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_233]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_233]);
                    self->keys[it_233]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_233],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_233]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_233]=item;
                }
                break;
            }
            it_233++;
            if(it_233>=self->size) {
                it_233=0;
            }
            else {
                if(it_233==hash_232) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_233]=(_Bool)1;
            if(1) {
                self->keys[it_233]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_233]=key;
            }
            if(1) {
                self->items[it_233]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_233]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_234=(_Bool)0;
    for(    it2_235=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_235=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_235,key)) {
            same_key_exist_234=(_Bool)1;
        }
    }
    if(!same_key_exist_234) {
        list$1charp_push_back(self->key_list,key);
    }
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_215;
void* __right_value219 = (void*)0;
char** keys_216;
void* __right_value220 = (void*)0;
struct sType** items_217;
void* __right_value221 = (void*)0;
_Bool* item_existance_218;
int len_219;
char* it_222;
struct sType* default_value_225;
struct sType* it2_226;
unsigned int hash_229;
int n_230;
struct sType* default_value_231;
default_value_225 = (void*)0;
default_value_231 = (void*)0;
    size_215=self->size*10;
    keys_216=(char**)come_increment_ref_count(((char**)(__right_value219=(char**)come_calloc(1, sizeof(char*)*(1*(size_215)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_217=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value220=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_215)), "/usr/local/include/comelang.h", 1622, "sType*%"))));
    item_existance_218=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value221=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_215)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_219=0;
    for(    it_222=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_222=map$2charphsTypeph_next(self)    ){
        memset(&default_value_225,0,sizeof(struct sType*));
        it2_226=map$2charphsTypeph_at(self,it_222,default_value_225);
        hash_229=string_get_hash_key(it_222)%size_215;
        n_230=hash_229;
        while((_Bool)1) {
            if(item_existance_218[n_230]) {
                n_230++;
                if(n_230>=size_215) {
                    n_230=0;
                }
                else {
                    if(n_230==hash_229) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_218[n_230]=(_Bool)1;
                keys_216[n_230]=it_222;
                items_217[n_230]=map$2charphsTypeph_at(self,it_222,default_value_231);
                len_219++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_216;
    self->items=items_217;
    self->item_existance=item_existance_218;
    self->size=size_215;
    self->len=len_219;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_220;
char* __result139__;
char* __result140__;
char* result_221;
char* __result141__;
result_220 = (void*)0;
result_221 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_220,0,sizeof(char*));
        __result139__ = gComeFunResultObject = __result_obj__ = result_220;
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result140__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    memset(&result_221,0,sizeof(char*));
    __result141__ = gComeFunResultObject = __result_obj__ = result_221;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_223;
char* __result142__;
char* __result143__;
char* result_224;
char* __result144__;
result_223 = (void*)0;
result_224 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_223,0,sizeof(char*));
        __result142__ = gComeFunResultObject = __result_obj__ = result_223;
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result143__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    memset(&result_224,0,sizeof(char*));
    __result144__ = gComeFunResultObject = __result_obj__ = result_224;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_227;
unsigned int it_228;
struct sType* __result145__;
struct sType* __result146__;
struct sType* __result147__;
struct sType* __result148__;
    hash_227=string_get_hash_key(((char*)key))%self->size;
    it_228=hash_227;
    while((_Bool)1) {
        if(self->item_existance[it_228]) {
            if(string_equals(self->keys[it_228],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_228];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_228++;
            if(it_228>=self->size) {
                it_228=0;
            }
            else {
                if(it_228==hash_227) {
                    __result146__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result146__;
                }
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* __dec_obj101;
void* __right_value225 = (void*)0;
struct sClass* __dec_obj102;
struct sStructNobodyNode* __result151__;
    ((struct sNodeBase*)(__right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj101=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj102=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /* a*/come_call_finalizer3(__dec_obj102,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
char* __result152__;
    __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=__builtin_string("sStructNobodyNode")));
    __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value227 = (void*)0;
char* name_236;
struct sClass* klass_237;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* type_238;
void* __right_value231 = (void*)0;
_Bool __result153__;
    name_236=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_237=self->mClass;
    if(map$2charphsClassph_at(info->classes,name_236,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_236),(struct sClass*)come_increment_ref_count(sClass_clone(klass_237)));
    }
    type_238=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 338, "sType")),name_236,(_Bool)0,info));
    if(map$2charphsTypephp_operator_load_element(info->types,name_236)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_236), "14struct.c", 340, 4))->mTypedef) {
    }
    else {
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_236),(struct sType*)come_increment_ref_count(sType_clone(type_238)));
    }
    if(info->output_header_file&&string_operator_not_equals(klass_237->mDeclareSName,info->base_sname)) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_236);
    }
    __result153__ = (_Bool)1;
    name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_238,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
struct sGenericsStructNode* __result154__;
    ((struct sNodeBase*)(__right_value232=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value232,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self){
    return (_Bool)1;
}

char* sGenericsStructNode_kind(struct sGenericsStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
char* __result155__;
    __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=__builtin_string("sGenericsStructNode")));
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
char* __dec_obj107;
void* __right_value236 = (void*)0;
struct sClass* __dec_obj108;
struct list$1sNodeph* __dec_obj109;
struct sClassNode* __result156__;
    ((struct sNodeBase*)(__right_value234=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value234,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj107=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /* a*/come_call_finalizer3(__dec_obj108,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj109=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    /* a*/come_call_finalizer3(__dec_obj109,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
char* __result157__;
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=__builtin_string("sClassNode")));
    __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value238 = (void*)0;
struct sClass* klass_239;
void* __right_value239 = (void*)0;
char* name_240;
void* __right_value240 = (void*)0;
struct sClass* klass2_241;
void* __right_value241 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj114;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* type_242;
void* __right_value244 = (void*)0;
struct list$1sNodeph* o2_saved_243;
struct sNode* it_246;
_Bool __result164__;
_Bool __result165__;
    klass_239=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_240=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(map$2charphsClassph_at(info->classes,name_240,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_240),(struct sClass*)come_increment_ref_count(sClass_clone(klass_239)));
    }
    else {
        if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_240,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_239->mFields)>0) {
            klass2_241=map$2charphsClassph_at(info->classes,name_240,((void*)0));
            __dec_obj114=klass2_241->mFields;
            klass2_241->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_239->mFields));
            /* a*/come_call_finalizer3(__dec_obj114,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_242=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 417, "sType")),name_240,(_Bool)0,info));
    if(map$2charphsTypephp_operator_load_element(info->types,name_240)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_240), "14struct.c", 418, 5))->mTypedef) {
    }
    else {
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_240),(struct sType*)come_increment_ref_count(sType_clone(type_242)));
    }
    if(self->mOutput) {
        output_struct(klass_239,info);
    }
    for(    o2_saved_243=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_246=list$1sNodeph_begin((o2_saved_243));    !list$1sNodeph_end((o2_saved_243));    it_246=list$1sNodeph_next((o2_saved_243))    ){
        if(!node_compile(it_246,info)) {
            __result164__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_243,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_239,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result164__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_243,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(self->mOutput) {
        output_struct_header(klass_239,info);
    }
    __result165__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_239,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_244;
struct sNode* __result158__;
struct sNode* __result159__;
struct sNode* result_245;
struct sNode* __result160__;
result_244 = (void*)0;
result_245 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_244,0,sizeof(struct sNode*));
        __result158__ = gComeFunResultObject = __result_obj__ = result_244;
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    self->it=self->head;
    if(self->it) {
        __result159__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    memset(&result_245,0,sizeof(struct sNode*));
    __result160__ = gComeFunResultObject = __result_obj__ = result_245;
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_247;
struct sNode* __result161__;
struct sNode* __result162__;
struct sNode* result_248;
struct sNode* __result163__;
result_247 = (void*)0;
result_248 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_247,0,sizeof(struct sNode*));
        __result161__ = gComeFunResultObject = __result_obj__ = result_247;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result162__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    memset(&result_248,0,sizeof(struct sNode*));
    __result163__ = gComeFunResultObject = __result_obj__ = result_248;
    gComeFunResultObject = (void*)0;
    return __result163__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_249;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sClass* __dec_obj115;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sClass* __dec_obj116;
_Bool output_250;
struct sClass* parent_class_251;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* parent_class_name_252;
struct sNode* __result166__;
_Bool multiple_declare_253;
char* p_254;
int sline_255;
void* __right_value252 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_256;
char* name_257;
_Bool err_258;
void* __right_value253 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_259;
char* name_260;
_Bool err_261;
void* __right_value254 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_262;
char* name2_263;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_264;
char* name2_265;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_266;
char* name_267;
_Bool err_268;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* __dec_obj121;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* __right_value272 = (void*)0;
struct sNode* __result169__;
klass_249 = (void*)0;
memset(&output_250, 0, sizeof(_Bool));
    if(map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0)) {
        __dec_obj115=klass_249;
        klass_249=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 447, "sClass")),((char*)(__right_value246=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj115,sClass_finalize, 0, 0, 0, 0, (void*)0);
        __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_249));
    }
    else {
        __dec_obj116=klass_249;
        klass_249=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        /* a*/come_call_finalizer3(__dec_obj116,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(list$1tuple2$2charphsTypephph_length(klass_249->mFields)>0) {
        output_250=(_Bool)0;
    }
    else {
        output_250=(_Bool)1;
    }
    parent_class_251=((void*)0);
    if(parsecmp("extends",info)) {
        ((char*)(__right_value250=parse_word(info)));
        __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_252=(char*)come_increment_ref_count(parse_word(info));
        parent_class_251=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_252);
        if(parent_class_251==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_252);
            __result166__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_252 = come_decrement_ref_count2(parent_class_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_249,sClass_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result166__;
        }
        parent_class_name_252 = come_decrement_ref_count2(parent_class_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        multiple_declare_253=(_Bool)0;
        {
            p_254=info->p;
            sline_255=info->sline;
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value252=backtrace_parse_type((_Bool)1,info)));
            type_256=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_257=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_258=multiple_assign_var5->v3;
            /*g*/come_call_finalizer3(__right_value252,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_258&&*info->p==44) {
                multiple_declare_253=(_Bool)1;
            }
            info->p=p_254;
            info->sline=sline_255;
            /*i*/come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_257 = come_decrement_ref_count2(name_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_253) {
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value253=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_259=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_260=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_261=multiple_assign_var6->v3;
            /*g*/come_call_finalizer3(__right_value253,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value254=parse_variable_name((struct sType*)come_increment_ref_count(base_type_259),(_Bool)1,info)));
            type2_262=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_263=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*g*/come_call_finalizer3(__right_value254,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(output_250) {
                list$1tuple2$2charphsTypephph_push_back(klass_249->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 500, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_263),(struct sType*)come_increment_ref_count(type2_262))));
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value257=parse_variable_name((struct sType*)come_increment_ref_count(base_type_259),(_Bool)0,info)));
                type2_264=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_265=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                /*g*/come_call_finalizer3(__right_value257,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(output_250) {
                    list$1tuple2$2charphsTypephph_push_back(klass_249->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 510, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_265),(struct sType*)come_increment_ref_count(type2_264))));
                }
                /*i*/come_call_finalizer3(type2_264,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_265 = come_decrement_ref_count2(name2_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(base_type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_262,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_263 = come_decrement_ref_count2(name2_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value260=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_266=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_267=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_268=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value260,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_268) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(output_250) {
                list$1tuple2$2charphsTypephph_push_back(klass_249->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 523, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_267),(struct sType*)come_increment_ref_count(type2_266))));
            }
            /*i*/come_call_finalizer3(type2_266,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_267 = come_decrement_ref_count2(name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    if(parent_class_251) {
        __dec_obj121=klass_249->mParentClassName;
        klass_249->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_251->mName));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_249->mName),(struct sClass*)come_increment_ref_count(sClass_clone(klass_249)));
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 545, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(__right_value267=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 545, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_249),output_250,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result169__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value272=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass_249,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value267,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value272) { __right_value272 = come_decrement_ref_count2(__right_value272, ((struct sNode*)__right_value272)->finalize, ((struct sNode*)__right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj117;
char* __dec_obj118;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj117=self->v1;
            /* a*/come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj118=self->v2;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj119;
char* __dec_obj120;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj119=self->v1;
            /* a*/come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj120=self->v2;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_270;
void* __right_value273 = (void*)0;
char* type_name_271;
struct sClass* struct_class_272;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sClass* __dec_obj128;
struct sClass* __dec_obj129;
char* source_tail_273;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct buffer* header_274;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* __right_value286 = (void*)0;
struct sNode* __result172__;
void* __right_value287 = (void*)0;
char* T_278;
void* __right_value291 = (void*)0;
struct sClass* generics_class_282;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sClass* __dec_obj139;
void* __right_value294 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_283;
char* name_284;
_Bool err_285;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* name2_286;
void* __right_value298 = (void*)0;
struct sType* type3_287;
_Bool no_comma_288;
void* __right_value299 = (void*)0;
struct sNode* node_289;
struct sNode* __dec_obj140;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* source_tail_290;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct buffer* header_291;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* __right_value312 = (void*)0;
struct sNode* __result177__;
_Bool output_293;
struct sClass* struct_class_294;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sClass* __dec_obj143;
void* __right_value315 = (void*)0;
struct sClass* __dec_obj144;
struct sClass* parent_class_295;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* parent_class_name_296;
struct sNode* __result178__;
_Bool multiple_declare_297;
char* p_298;
int sline_299;
void* __right_value318 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_300;
char* name_301;
_Bool err_302;
void* __right_value319 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_303;
char* name_304;
_Bool err_305;
void* __right_value320 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_306;
char* name2_307;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_308;
char* name2_309;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_310;
char* name_311;
_Bool err_312;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sClass* klass2_313;
char* source_tail_314;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* header_315;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj145;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* __right_value343 = (void*)0;
struct sNode* __result181__;
char* source_head_317;
void* __right_value344 = (void*)0;
char* type_name_318;
struct sClass* parent_class_319;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* parent_class_name_320;
struct sNode* __result182__;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1sClassp* parent_classes_321;
struct sClass* parent_class2_324;
_Bool output_328;
struct sClass* struct_class_329;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sClass* __dec_obj152;
void* __right_value354 = (void*)0;
struct sClass* __dec_obj153;
struct sClass* defining_class_330;
void* __right_value355 = (void*)0;
char* __dec_obj154;
void* __right_value356 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1sClassp* o2_saved_336;
struct sClass* parent_339;
struct list$1tuple2$2charphsTypephph* o2_saved_342;
struct tuple2$2charphsTypeph* it_343;
void* __right_value363 = (void*)0;
struct sClass* klass2_344;
void* __right_value364 = (void*)0;
char* __dec_obj155;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1sClassp* o2_saved_345;
struct sClass* parent_346;
struct list$1tuple2$2charphsTypephph* o2_saved_347;
struct tuple2$2charphsTypeph* it_348;
void* __right_value367 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_349;
struct tuple2$2charphsTypeph* it_350;
void* __right_value368 = (void*)0;
char* head_351;
char* p_saved_352;
int sline_saved_353;
char* sname_saved_354;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct list$1sNodeph* methods_355;
void* __right_value371 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
struct map$2charphcharph* __dec_obj158;
_Bool include__358;
_Bool multiple_declare_359;
char* p_360;
int sline_361;
void* __right_value372 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_362;
char* name_363;
_Bool err_364;
_Bool define_function_flag_365;
char* p_366;
int sline_367;
_Bool invalid_type_368;
void* __right_value373 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_369;
char* fun_name_370;
_Bool err_371;
char* word_372;
void* __right_value374 = (void*)0;
char* __dec_obj159;
void* __right_value375 = (void*)0;
char* __dec_obj160;
char* __dec_obj161;
void* __right_value376 = (void*)0;
char* __dec_obj162;
char* tail_373;
int pointer_num_374;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* __dec_obj163;
void* __right_value379 = (void*)0;
struct sNode* method_375;
struct sType* __dec_obj164;
void* __right_value383 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_379;
char* name_380;
_Bool err_381;
void* __right_value384 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_382;
char* name2_383;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_384;
char* name2_385;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
char* module_name_386;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1charph* params_387;
void* __right_value394 = (void*)0;
char* word_388;
void* __right_value395 = (void*)0;
char* __dec_obj168;
void* __right_value396 = (void*)0;
char* __dec_obj169;
struct sNode* __result198__;
struct sClassModule* module_392;
void* __right_value397 = (void*)0;
void* __right_value403 = (void*)0;
struct map$2charphcharph* __dec_obj175;
int i_396;
struct list$1charph* o2_saved_397;
char* it_400;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* __dec_obj176;
void* __right_value411 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_427;
char* name_428;
_Bool err_429;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __dec_obj177;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* __right_value424 = (void*)0;
struct sNode* __result223__;
void* __right_value425 = (void*)0;
struct sNode* __result224__;
struct_class_272 = (void*)0;
generics_class_282 = (void*)0;
struct_class_294 = (void*)0;
struct_class_329 = (void*)0;
    if(charp_operator_equals(buf,"struct")) {
        source_head_270=head;
        type_name_271=(char*)come_increment_ref_count(parse_word(info));
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(map$2charphsClassph_at(info->classes,type_name_271,((void*)0))==((void*)0)) {
                __dec_obj128=struct_class_272;
                struct_class_272=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 561, "sClass")),type_name_271,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj128,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_272->mNobodyStruct=(_Bool)1;
            }
            else {
                __dec_obj129=struct_class_272;
                struct_class_272=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_271,((void*)0)));
                /* a*/come_call_finalizer3(__dec_obj129,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_272->mNobodyStruct=(_Bool)1;
            }
            source_tail_273=info->p;
            header_274=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 571, "buffer"))));
            buffer_append(header_274,source_head_270,source_tail_273-source_head_270);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value278=buffer_to_string(header_274))));
            __right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 576, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(__right_value281=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 576, "sStructNobodyNode")),(char*)come_increment_ref_count(__builtin_string(type_name_271)),(struct sClass*)come_increment_ref_count(struct_class_272),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result172__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value286=_inf_value2));
            /*i*/come_call_finalizer3(struct_class_272,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_274,buffer_finalize, 0, 0, 0, 0, (void*)0);
            type_name_271 = come_decrement_ref_count2(type_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value281,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value286) { __right_value286 = come_decrement_ref_count2(__right_value286, ((struct sNode*)__right_value286)->finalize, ((struct sNode*)__right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result172__;
            /*i*/come_call_finalizer3(struct_class_272,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_274,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==60) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    T_278=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(string_clone(T_278)));
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_278 = come_decrement_ref_count2(T_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    T_278 = come_decrement_ref_count2(T_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(map$2charphsClassph_at(info->generics_classes,type_name_271,((void*)0))!=((void*)0)) {
                    err_msg(info,"redifined generics struct(%s)",type_name_271);
                    exit(2);
                }
                else {
                    __dec_obj139=generics_class_282;
                    generics_class_282=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 610, "sClass")),type_name_271,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj139,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(map$2charphsClassph_at(info->generics_classes,type_name_271,((void*)0))==((void*)0)) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_271),(struct sClass*)come_increment_ref_count(generics_class_282));
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value294=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_283=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_284=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_285=multiple_assign_var10->v3;
                    /*g*/come_call_finalizer3(__right_value294,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(!err_285) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(*info->p==44) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_282->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 630, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_284),(struct sType*)come_increment_ref_count(type2_283))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_286=(char*)come_increment_ref_count(parse_word(info));
                            type3_287=(struct sType*)come_increment_ref_count(sType_clone(type2_283));
                            if(*info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_288=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_289=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                info->no_comma=no_comma_288;
                                __dec_obj140=type3_287->mSizeNum;
                                type3_287->mSizeNum=(struct sNode*)come_increment_ref_count(node_289);
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_282->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 652, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_286),(struct sType*)come_increment_ref_count(type3_287))));
                            name2_286 = come_decrement_ref_count2(name2_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(type3_287,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_282->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 656, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_284),(struct sType*)come_increment_ref_count(type2_283))));
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(type2_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    /*i*/come_call_finalizer3(type2_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                ((char*)(__right_value304=parse_attribute(info)));
                __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_reset(info->generics_type_names);
                source_tail_290=info->p;
                header_291=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 681, "buffer"))));
                buffer_append_str(header_291,"struct ");
                buffer_append(header_291,source_head_270,source_tail_290-source_head_270);
                add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value307=buffer_to_string(header_291))));
                __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 687, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(__right_value309=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 687, "sGenericsStructNode")),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result177__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value312=_inf_value3));
                /*i*/come_call_finalizer3(generics_class_282,sClass_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_291,buffer_finalize, 0, 0, 0, 0, (void*)0);
                type_name_271 = come_decrement_ref_count2(type_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value309,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value312) { __right_value312 = come_decrement_ref_count2(__right_value312, ((struct sNode*)__right_value312)->finalize, ((struct sNode*)__right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result177__;
                /*i*/come_call_finalizer3(generics_class_282,sClass_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_291,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                output_293=(_Bool)1;
                if(map$2charphsClassph_at(info->classes,type_name_271,((void*)0))==((void*)0)) {
                    __dec_obj143=struct_class_294;
                    struct_class_294=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 694, "sClass")),type_name_271,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj143,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj144=struct_class_294;
                    struct_class_294=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_271,((void*)0))));
                    /* a*/come_call_finalizer3(__dec_obj144,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    if(list$1tuple2$2charphsTypephph_length(struct_class_294->mFields)>0) {
                        output_293=(_Bool)0;
                    }
                }
                parent_class_295=((void*)0);
                if(parsecmp("extends",info)) {
                    ((char*)(__right_value316=parse_word(info)));
                    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_name_296=(char*)come_increment_ref_count(parse_word(info));
                    parent_class_295=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_296);
                    if(parent_class_295==((void*)0)) {
                        err_msg(info,"invalid class name(%s)",parent_class_name_296);
                        __result178__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                        parent_class_name_296 = come_decrement_ref_count2(parent_class_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(struct_class_294,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_271 = come_decrement_ref_count2(type_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        gComeFunResultObject = (void*)0;
                        return __result178__;
                    }
                    parent_class_name_296 = come_decrement_ref_count2(parent_class_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_declare_297=(_Bool)0;
                    {
                        p_298=info->p;
                        sline_299=info->sline;
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value318=backtrace_parse_type((_Bool)1,info)));
                        type_300=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_301=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_302=multiple_assign_var11->v3;
                        /*g*/come_call_finalizer3(__right_value318,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(err_302&&*info->p==44) {
                            multiple_declare_297=(_Bool)1;
                        }
                        info->p=p_298;
                        info->sline=sline_299;
                        /*i*/come_call_finalizer3(type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_301 = come_decrement_ref_count2(name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_297) {
                        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value319=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_303=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_304=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_305=multiple_assign_var12->v3;
                        /*g*/come_call_finalizer3(__right_value319,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value320=parse_variable_name((struct sType*)come_increment_ref_count(base_type_303),(_Bool)1,info)));
                        type2_306=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_307=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        /*g*/come_call_finalizer3(__right_value320,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_294->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 742, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_307),(struct sType*)come_increment_ref_count(type2_306))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var14=((struct tuple2$2sTypephcharph*)(__right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_303),(_Bool)0,info)));
                            type2_308=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_309=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            /*g*/come_call_finalizer3(__right_value323,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_294->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 750, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_309),(struct sType*)come_increment_ref_count(type2_308))));
                            /*i*/come_call_finalizer3(type2_308,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_309 = come_decrement_ref_count2(name2_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(base_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type2_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_307 = come_decrement_ref_count2(name2_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value326=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_310=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_311=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_312=multiple_assign_var15->v3;
                        /*g*/come_call_finalizer3(__right_value326,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_312) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_294->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 760, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_311),(struct sType*)come_increment_ref_count(type2_310))));
                        /*i*/come_call_finalizer3(type2_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_311 = come_decrement_ref_count2(name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                ((char*)(__right_value329=parse_attribute(info)));
                __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_reset(info->generics_type_names);
                klass2_313=map$2charphsClassph_at(info->classes,type_name_271,((void*)0));
                if(klass2_313==((void*)0)||klass2_313->mNobodyStruct) {
                    if(klass2_313) {
                        klass2_313->mNobodyStruct=(_Bool)0;
                    }
                    source_tail_314=info->p;
                    header_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 789, "buffer"))));
                    buffer_append(header_315,source_head_270,source_tail_314-source_head_270);
                    add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value332=buffer_to_string(header_315))));
                    __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    /*i*/come_call_finalizer3(header_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(parent_class_295) {
                    __dec_obj145=struct_class_294->mParentClassName;
                    struct_class_294->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_295->mName));
                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_294->mName),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_294)));
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 800, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(__right_value338=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 800, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name_271)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_294)),output_293,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result181__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value343=_inf_value4));
                /*i*/come_call_finalizer3(struct_class_294,sClass_finalize, 0, 0, 0, 0, (void*)0);
                type_name_271 = come_decrement_ref_count2(type_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value338,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value343) { __right_value343 = come_decrement_ref_count2(__right_value343, ((struct sNode*)__right_value343)->finalize, ((struct sNode*)__right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result181__;
                /*i*/come_call_finalizer3(struct_class_294,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_271 = come_decrement_ref_count2(type_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(buf,"class")) {
            source_head_317=head;
            type_name_318=(char*)come_increment_ref_count(parse_word(info));
            add_come_code_at_come_header(info,"struct %s;\n",type_name_318);
            parent_class_319=((void*)0);
            if(parsecmp("extends",info)) {
                ((char*)(__right_value345=parse_word(info)));
                __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_320=(char*)come_increment_ref_count(parse_word(info));
                parent_class_319=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_320);
                if(parent_class_319==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_320);
                    __result182__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_320 = come_decrement_ref_count2(parent_class_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_318 = come_decrement_ref_count2(type_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result182__;
                }
                parent_class_name_320 = come_decrement_ref_count2(parent_class_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parent_classes_321=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 825, "list$1sClassp"))));
            parent_class2_324=parent_class_319;
            while(parent_class2_324) {
                list$1sClassp_add(parent_classes_321,parent_class2_324);
                if(parent_class_319->mParentClassName) {
                    parent_class2_324=map$2charphsClassphp_operator_load_element(info->classes,parent_class_319->mParentClassName);
                }
                else {
                    parent_class2_324=((void*)0);
                }
            }
            output_328=(_Bool)1;
            if(map$2charphsClassph_at(info->classes,type_name_318,((void*)0))==((void*)0)) {
                __dec_obj152=struct_class_329;
                struct_class_329=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 842, "sClass")),type_name_318,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj152,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj153=struct_class_329;
                struct_class_329=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_318,((void*)0))));
                /* a*/come_call_finalizer3(__dec_obj153,sClass_finalize, 0, 0, 0, 0, (void*)0);
                if(list$1tuple2$2charphsTypephph_length(struct_class_329->mFields)>0) {
                    output_328=(_Bool)0;
                }
            }
            defining_class_330=info->defining_class;
            info->defining_class=struct_class_329;
            if(map$2charphsClassph_at(info->classes,type_name_318,((void*)0))==((void*)0)) {
                if(parent_class_319) {
                    __dec_obj154=struct_class_329->mParentClassName;
                    struct_class_329->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_319->mName));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_318),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_329)));
                for(                o2_saved_336=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value362=list$1sClassp_reverse(parent_classes_321))))),parent_339=list$1sClassp_begin((o2_saved_336)) ,                /*f*/come_call_finalizer3(__right_value362,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                0;                !list$1sClassp_end((o2_saved_336));                parent_339=list$1sClassp_next((o2_saved_336))                ){
                    for(                    o2_saved_342=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_339->mFields)),it_343=list$1tuple2$2charphsTypephph_begin((o2_saved_342));                    !list$1tuple2$2charphsTypephph_end((o2_saved_342));                    it_343=list$1tuple2$2charphsTypephph_next((o2_saved_342))                    ){
                        list$1tuple2$2charphsTypephph_add(struct_class_329->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_343)));
                    }
                    /*i*/come_call_finalizer3(o2_saved_342,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_336,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_318,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_329->mFields)>0) {
                    klass2_344=map$2charphsClassph_at(info->classes,type_name_318,((void*)0));
                    if(parent_class_319) {
                        __dec_obj155=klass2_344->mParentClassName;
                        klass2_344->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_319->mName));
                        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_318),(struct sClass*)come_increment_ref_count(sClass_clone(klass2_344)));
                    for(                    o2_saved_345=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value366=list$1sClassp_reverse(parent_classes_321))))),parent_346=list$1sClassp_begin((o2_saved_345)) ,                    /*f*/come_call_finalizer3(__right_value366,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                    0;                    !list$1sClassp_end((o2_saved_345));                    parent_346=list$1sClassp_next((o2_saved_345))                    ){
                        for(                        o2_saved_347=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_346->mFields)),it_348=list$1tuple2$2charphsTypephph_begin((o2_saved_347));                        !list$1tuple2$2charphsTypephph_end((o2_saved_347));                        it_348=list$1tuple2$2charphsTypephph_next((o2_saved_347))                        ){
                            list$1tuple2$2charphsTypephph_add(klass2_344->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_348)));
                        }
                        /*i*/come_call_finalizer3(o2_saved_347,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_345,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    for(                    o2_saved_349=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_329->mFields)),it_350=list$1tuple2$2charphsTypephph_begin((o2_saved_349));                    !list$1tuple2$2charphsTypephph_end((o2_saved_349));                    it_350=list$1tuple2$2charphsTypephph_next((o2_saved_349))                    ){
                        list$1tuple2$2charphsTypephph_add(klass2_344->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_350)));
                    }
                    /*i*/come_call_finalizer3(o2_saved_349,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(123,info);
            head_351=info->p;
            p_saved_352=((void*)0);
            sline_saved_353=0;
            sname_saved_354=((void*)0);
            methods_355=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 892, "list$1sNodeph"))));
            while((_Bool)1) {
                if(p_saved_352) {
                    if(*info->p==0) {
                        info->p=p_saved_352;
                        info->sline=sline_saved_353;
                        __dec_obj156=info->sname;
                        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_354));
                        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                        p_saved_352=((void*)0);
                        sline_saved_353=0;
                        __dec_obj157=sname_saved_354;
                        sname_saved_354=((void*)0);
                        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj158=info->module_params;
                        info->module_params=((void*)0);
                        /* a*/come_call_finalizer3(__dec_obj158,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                parse_sharp_v5(info);
                if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                include__358=parsecmp("include",info);
                multiple_declare_359=(_Bool)0;
                if(include__358==(_Bool)0) {
                    p_360=info->p;
                    sline_361=info->sline;
                    if(memcmp(info->p,"new(",4)!=0) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value372=backtrace_parse_type((_Bool)1,info)));
                        type_362=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        name_363=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_364=multiple_assign_var16->v3;
                        /*g*/come_call_finalizer3(__right_value372,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(err_364&&*info->p==44) {
                            multiple_declare_359=(_Bool)1;
                        }
                        /*i*/come_call_finalizer3(type_362,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_363 = come_decrement_ref_count2(name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_360;
                    info->sline=sline_361;
                }
                define_function_flag_365=(_Bool)0;
                if(include__358==(_Bool)0) {
                    p_366=info->p;
                    sline_367=info->sline;
                    if(memcmp(info->p,"new(",4)==0) {
                        define_function_flag_365=(_Bool)1;
                    }
                    else {
                        invalid_type_368=(_Bool)0;
                        if(xisalpha(*info->p)||*info->p==95) {
                            multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value373=backtrace_parse_type((_Bool)0,info)));
                            result_type_369=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                            fun_name_370=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            err_371=multiple_assign_var17->v3;
                            /*g*/come_call_finalizer3(__right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            /*i*/come_call_finalizer3(result_type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_370 = come_decrement_ref_count2(fun_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_372=((void*)0);
                        if(xisalnum(*info->p)||*info->p==95) {
                            __dec_obj159=word_372;
                            word_372=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            if(string_operator_equals(word_372,"extern")) {
                                __dec_obj160=word_372;
                                word_372=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        else {
                            __dec_obj161=word_372;
                            word_372=((void*)0);
                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        info->no_output_err=(_Bool)0;
                        if(word_372) {
                            if(is_type_name(word_372,info)) {
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
                                    __dec_obj162=word_372;
                                    word_372=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                            if(strlen(word_372)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                                define_function_flag_365=(_Bool)1;
                            }
                        }
                        word_372 = come_decrement_ref_count2(word_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_366;
                    info->sline=sline_367;
                }
                if(define_function_flag_365) {
                    tail_373=info->p;
                    pointer_num_374=1;
                    __dec_obj163=info->impl_type;
                    info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1002, "sType")),type_name_318,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                    info->impl_type->mPointerNum=pointer_num_374;
                    info->in_class=(_Bool)1;
                    method_375=(struct sNode*)come_increment_ref_count(parse_function(info));
                    __dec_obj164=info->impl_type;
                    info->impl_type=((void*)0);
                    /* a*/come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
                    info->in_class=(_Bool)0;
                    list$1sNodeph_push_back(methods_355,(struct sNode*)come_increment_ref_count(method_375));
                    if(method_375) { method_375 = come_decrement_ref_count2(method_375, ((struct sNode*)method_375)->finalize, ((struct sNode*)method_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(multiple_declare_359) {
                        multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value383=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_379=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name_380=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        err_381=multiple_assign_var18->v3;
                        /*g*/come_call_finalizer3(__right_value383,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value384=parse_variable_name((struct sType*)come_increment_ref_count(base_type_379),(_Bool)1,info)));
                        type2_382=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                        name2_383=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                        /*g*/come_call_finalizer3(__right_value384,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_329->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1021, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_383),(struct sType*)come_increment_ref_count(type2_382))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var20=((struct tuple2$2sTypephcharph*)(__right_value387=parse_variable_name((struct sType*)come_increment_ref_count(base_type_379),(_Bool)0,info)));
                            type2_384=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                            name2_385=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            /*g*/come_call_finalizer3(__right_value387,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_329->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1029, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_385),(struct sType*)come_increment_ref_count(type2_384))));
                            /*i*/come_call_finalizer3(type2_384,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_385 = come_decrement_ref_count2(name2_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        expected_next_character(59,info);
                        /*i*/come_call_finalizer3(base_type_379,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_383 = come_decrement_ref_count2(name2_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(parsecmp("include",info)) {
                            ((char*)(__right_value390=parse_word(info)));
                            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_386=(char*)come_increment_ref_count(parse_word(info));
                            params_387=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1038, "list$1charph"))));
                            if(*info->p==60) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                while((_Bool)1) {
                                    word_388=(char*)come_increment_ref_count(parse_word(info));
                                    list$1charph_add(params_387,(char*)come_increment_ref_count(word_388));
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"invalid source end");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==62) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                word_388 = come_decrement_ref_count2(word_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid charactor(%c)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    word_388 = come_decrement_ref_count2(word_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            if(*info->p==59) {
                                info->p++;
                            }
                            skip_spaces_and_lf(info);
                            p_saved_352=info->p;
                            sline_saved_353=info->sline;
                            __dec_obj168=sname_saved_354;
                            sname_saved_354=(char*)come_increment_ref_count(__builtin_string(info->sname));
                            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __dec_obj169=info->sname;
                            info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_386));
                            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->sline=0;
                            if(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_386)==((void*)0)) {
                                err_msg(info,"module not found");
                                __result198__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                                module_name_386 = come_decrement_ref_count2(module_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(params_387,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_318 = come_decrement_ref_count2(type_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(parent_classes_321,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(struct_class_329,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                sname_saved_354 = come_decrement_ref_count2(sname_saved_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(methods_355,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                gComeFunResultObject = (void*)0;
                                return __result198__;
                            }
                            module_392=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_386), "14struct.c", 1085, 6));
                            if(list$1charph_length(module_392->mParams)!=list$1charph_length(params_387)) {
                                err_msg(info,"invalid parametor number");
                                exit(1);
                            }
                            __dec_obj175=info->module_params;
                            info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1092, "map$2charphcharph"))));
                            /* a*/come_call_finalizer3(__dec_obj175,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                            i_396=0;
                            for(                            o2_saved_397=(struct list$1charph*)come_increment_ref_count((module_392->mParams)),it_400=list$1charph_begin((o2_saved_397));                            !list$1charph_end((o2_saved_397));                            it_400=list$1charph_next((o2_saved_397))                            ){
                                ((char*)(__right_value409=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_400)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(list$1charphp_operator_load_element(params_387,i_396), "14struct.c", 1096, 7)))))));
                                __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            /*i*/come_call_finalizer3(o2_saved_397,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=module_392->mText;
                            info->sline=module_392->mSLine;
                            __dec_obj176=info->sname;
                            info->sname=(char*)come_increment_ref_count(__builtin_string(module_392->mSName));
                            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                            module_name_386 = come_decrement_ref_count2(module_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(params_387,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value411=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type2_427=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                            name_428=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                            err_429=multiple_assign_var21->v3;
                            /*g*/come_call_finalizer3(__right_value411,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_429) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            list$1tuple2$2charphsTypephph_push_back(struct_class_329->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1110, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_428),(struct sType*)come_increment_ref_count(type2_427))));
                            if(*info->p==59) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            /*i*/come_call_finalizer3(type2_427,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_428 = come_decrement_ref_count2(name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                parse_sharp_v5(info);
                if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            if(p_saved_352) {
                if(info->p==0) {
                    info->p=p_saved_352;
                    info->sline=sline_saved_353;
                    __dec_obj177=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_354));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_352=((void*)0);
                    sline_saved_353=0;
                }
            }
            list$1charph_reset(info->generics_type_names);
            info->defining_class=defining_class_330;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1143, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(__right_value418=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1143, "sClassNode")),(char*)come_increment_ref_count(__builtin_string(type_name_318)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_329)),(struct list$1sNodeph*)come_increment_ref_count(methods_355),output_328,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value424=_inf_value5));
            type_name_318 = come_decrement_ref_count2(type_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(parent_classes_321,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(struct_class_329,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_354 = come_decrement_ref_count2(sname_saved_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(methods_355,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value418,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value424) { __right_value424 = come_decrement_ref_count2(__right_value424, ((struct sNode*)__right_value424)->finalize, ((struct sNode*)__right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result223__;
            type_name_318 = come_decrement_ref_count2(type_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(parent_classes_321,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(struct_class_329,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_354 = come_decrement_ref_count2(sname_saved_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(methods_355,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=top_level_v97(buf,head,head_sline,info)));
    if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj130;
char* __dec_obj131;
struct sClass* __dec_obj132;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj130=self->sname;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj131=self->mName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(self->mClass==gComeFunResultObject) {
            __dec_obj132=self->mClass;
            /* a*/come_call_finalizer3(__dec_obj132,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result170__;
void* __right_value282 = (void*)0;
struct sStructNobodyNode* result_275;
void* __right_value283 = (void*)0;
char* __dec_obj133;
void* __right_value284 = (void*)0;
char* __dec_obj134;
void* __right_value285 = (void*)0;
struct sClass* __dec_obj135;
struct sStructNobodyNode* __result171__;
    if(self==(void*)0) {
        __result170__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    result_275=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"));
    if(self!=((void*)0)) {
        result_275->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj133=result_275->sname;
        result_275->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj134=result_275->mName;
        result_275->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj135=result_275->mClass;
        result_275->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /* a*/come_call_finalizer3(__dec_obj135,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result171__ = gComeFunResultObject = __result_obj__ = result_275;
    /*i*/come_call_finalizer3(result_275,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_276;
struct list_item$1charph* prev_it_277;
struct list$1charph* __result173__;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        /*i*/come_call_finalizer3(prev_it_277,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct list_item$1charph* litem_279;
char* __dec_obj136;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_280;
char* __dec_obj137;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_281;
char* __dec_obj138;
struct list$1charph* __result174__;
    if(self->len==0) {
        litem_279=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value288=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj136=litem_279->item;
        litem_279->item=(char*)come_increment_ref_count(item);
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else {
        if(self->len==1) {
            litem_280=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_280->prev=self->head;
            litem_280->next=((void*)0);
            __dec_obj137=litem_280->item;
            litem_280->item=(char*)come_increment_ref_count(item);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_280;
            self->head->next=litem_280;
        }
        else {
            litem_281=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_281->prev=self->tail;
            litem_281->next=((void*)0);
            __dec_obj138=litem_281->item;
            litem_281->item=(char*)come_increment_ref_count(item);
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_281;
            self->tail=litem_281;
        }
    }
    self->len++;
    __result174__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
char* __dec_obj141;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj141=self->sname;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__=(void*)0;
struct sGenericsStructNode* __result175__;
void* __right_value310 = (void*)0;
struct sGenericsStructNode* result_292;
void* __right_value311 = (void*)0;
char* __dec_obj142;
struct sGenericsStructNode* __result176__;
    if(self==(void*)0) {
        __result175__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    result_292=(struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"));
    if(self!=((void*)0)) {
        result_292->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj142=result_292->sname;
        result_292->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result176__ = gComeFunResultObject = __result_obj__ = result_292;
    /*i*/come_call_finalizer3(result_292,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj146;
char* __dec_obj147;
struct sClass* __dec_obj148;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj147=self->mName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(self->mClass==gComeFunResultObject) {
            __dec_obj148=self->mClass;
            /* a*/come_call_finalizer3(__dec_obj148,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result179__;
void* __right_value339 = (void*)0;
struct sStructNode* result_316;
void* __right_value340 = (void*)0;
char* __dec_obj149;
void* __right_value341 = (void*)0;
char* __dec_obj150;
void* __right_value342 = (void*)0;
struct sClass* __dec_obj151;
struct sStructNode* __result180__;
    if(self==(void*)0) {
        __result179__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    result_316=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"));
    if(self!=((void*)0)) {
        result_316->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_316->sname;
        result_316->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj150=result_316->mName;
        result_316->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj151=result_316->mClass;
        result_316->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /* a*/come_call_finalizer3(__dec_obj151,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_316->mOutput=self->mOutput;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_316;
    /*i*/come_call_finalizer3(result_316,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result183__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result183__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_322;
struct list_item$1sClassp* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        /*i*/come_call_finalizer3(prev_it_323,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
struct list_item$1sClassp* litem_325;
void* __right_value350 = (void*)0;
struct list_item$1sClassp* litem_326;
void* __right_value351 = (void*)0;
struct list_item$1sClassp* litem_327;
struct list$1sClassp* __result184__;
    if(self->len==0) {
        litem_325=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value349=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sClassp"))));
        litem_325->prev=((void*)0);
        litem_325->next=((void*)0);
        litem_325->item=item;
        self->tail=litem_325;
        self->head=litem_325;
    }
    else {
        if(self->len==1) {
            litem_326=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value350=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sClassp"))));
            litem_326->prev=self->head;
            litem_326->next=((void*)0);
            litem_326->item=item;
            self->tail=litem_326;
            self->head->next=litem_326;
        }
        else {
            litem_327=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value351=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sClassp"))));
            litem_327->prev=self->tail;
            litem_327->next=((void*)0);
            litem_327->item=item;
            self->tail->next=litem_327;
            self->tail=litem_327;
        }
    }
    self->len++;
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1sClassp* result_331;
struct list_item$1sClassp* it_332;
struct list$1sClassp* __result186__;
    result_331=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "/usr/local/include/comelang.h", 874, "list$1sClassp"))));
    it_332=self->tail;
    while(it_332!=((void*)0)) {
        list$1sClassp_push_back(result_331,it_332->item);
        it_332=it_332->prev;
    }
    __result186__ = gComeFunResultObject = __result_obj__ = result_331;
    /*i*/come_call_finalizer3(result_331,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
struct list_item$1sClassp* litem_333;
void* __right_value360 = (void*)0;
struct list_item$1sClassp* litem_334;
void* __right_value361 = (void*)0;
struct list_item$1sClassp* litem_335;
struct list$1sClassp* __result185__;
    if(self->len==0) {
        litem_333=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value359=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sClassp"))));
        litem_333->prev=((void*)0);
        litem_333->next=((void*)0);
        litem_333->item=item;
        self->tail=litem_333;
        self->head=litem_333;
    }
    else {
        if(self->len==1) {
            litem_334=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value360=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sClassp"))));
            litem_334->prev=self->head;
            litem_334->next=((void*)0);
            litem_334->item=item;
            self->tail=litem_334;
            self->head->next=litem_334;
        }
        else {
            litem_335=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value361=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sClassp"))));
            litem_335->prev=self->tail;
            litem_335->next=((void*)0);
            litem_335->item=item;
            self->tail->next=litem_335;
            self->tail=litem_335;
        }
    }
    self->len++;
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result185__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_337;
struct sClass* __result187__;
struct sClass* __result188__;
struct sClass* result_338;
struct sClass* __result189__;
result_337 = (void*)0;
result_338 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_337,0,sizeof(struct sClass*));
        __result187__ = gComeFunResultObject = __result_obj__ = result_337;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    self->it=self->head;
    if(self->it) {
        __result188__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    memset(&result_338,0,sizeof(struct sClass*));
    __result189__ = gComeFunResultObject = __result_obj__ = result_338;
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_340;
struct sClass* __result190__;
struct sClass* __result191__;
struct sClass* result_341;
struct sClass* __result192__;
result_340 = (void*)0;
result_341 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_340,0,sizeof(struct sClass*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_340;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_341,0,sizeof(struct sClass*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_341;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_356;
int i_357;
    for(    i_356=0;    i_356<self->size;    i_356++    ){
        if(self->item_existance[i_356]) {
            if(1) {
                self->items[i_356] = come_decrement_ref_count2(self->items[i_356], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_357=0;    i_357<self->size;    i_357++    ){
        if(self->item_existance[i_357]) {
            if(1) {
                self->keys[i_357] = come_decrement_ref_count2(self->keys[i_357], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
struct list_item$1sNodeph* litem_376;
struct sNode* __dec_obj165;
void* __right_value381 = (void*)0;
struct list_item$1sNodeph* litem_377;
struct sNode* __dec_obj166;
void* __right_value382 = (void*)0;
struct list_item$1sNodeph* litem_378;
struct sNode* __dec_obj167;
struct list$1sNodeph* __result193__;
    if(self->len==0) {
        litem_376=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value380=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj165=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_376;
        self->head=litem_376;
    }
    else {
        if(self->len==1) {
            litem_377=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value381=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
            litem_377->prev=self->head;
            litem_377->next=((void*)0);
            __dec_obj166=litem_377->item;
            litem_377->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_377;
            self->head->next=litem_377;
        }
        else {
            litem_378=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value382=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
            litem_378->prev=self->tail;
            litem_378->next=((void*)0);
            __dec_obj167=litem_378->item;
            litem_378->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_378;
            self->tail=litem_378;
        }
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_389;
unsigned int hash_390;
unsigned int it_391;
struct sClassModule* __result194__;
struct sClassModule* __result195__;
struct sClassModule* __result196__;
struct sClassModule* __result197__;
default_value_389 = (void*)0;
    memset(&default_value_389,0,sizeof(struct sClassModule*));
    hash_390=string_get_hash_key(((char*)key))%self->size;
    it_391=hash_390;
    while((_Bool)1) {
        if(self->item_existance[it_391]) {
            if(string_equals(self->keys[it_391],key)) {
                __result194__ = gComeFunResultObject = __result_obj__ = self->items[it_391];
                /*i*/come_call_finalizer3(default_value_389,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result194__;
            }
            it_391++;
            if(it_391>=self->size) {
                it_391=0;
            }
            else {
                if(it_391==hash_390) {
                    __result195__ = gComeFunResultObject = __result_obj__ = default_value_389;
                    /*i*/come_call_finalizer3(default_value_389,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result195__;
                }
            }
        }
        else {
            __result196__ = gComeFunResultObject = __result_obj__ = default_value_389;
            /*i*/come_call_finalizer3(default_value_389,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result196__;
        }
    }
    __result197__ = gComeFunResultObject = __result_obj__ = default_value_389;
    /*i*/come_call_finalizer3(default_value_389,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj170;
char* __dec_obj171;
struct list$1charph* __dec_obj172;
char* __dec_obj173;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj170=self->mName;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        if(self->mText==gComeFunResultObject) {
            __dec_obj171=self->mText;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(self->mParams==gComeFunResultObject) {
            __dec_obj172=self->mParams;
            /* a*/come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(self->mSName==gComeFunResultObject) {
            __dec_obj173=self->mSName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
int i_393;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct list$1charp* __dec_obj174;
struct map$2charphcharph* __result200__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value398=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value399=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value400=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_393=0;    i_393<128;    i_393++    ){
        self->item_existance[i_393]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj174=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj174,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result199__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_394;
int i_395;
    for(    i_394=0;    i_394<self->size;    i_394++    ){
        if(self->item_existance[i_394]) {
            if(1) {
                self->items[i_394] = come_decrement_ref_count2(self->items[i_394], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_395=0;    i_395<self->size;    i_395++    ){
        if(self->item_existance[i_395]) {
            if(1) {
                self->keys[i_395] = come_decrement_ref_count2(self->keys[i_395], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_398;
char* __result201__;
char* __result202__;
char* result_399;
char* __result203__;
result_398 = (void*)0;
result_399 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_398,0,sizeof(char*));
        __result201__ = gComeFunResultObject = __result_obj__ = result_398;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    self->it=self->head;
    if(self->it) {
        __result202__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    memset(&result_399,0,sizeof(char*));
    __result203__ = gComeFunResultObject = __result_obj__ = result_399;
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_401;
char* __result204__;
char* __result205__;
char* result_402;
char* __result206__;
result_401 = (void*)0;
result_402 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_401,0,sizeof(char*));
        __result204__ = gComeFunResultObject = __result_obj__ = result_401;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result205__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    memset(&result_402,0,sizeof(char*));
    __result206__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_403;
int i_404;
char* __result207__;
char* default_value_405;
char* __result208__;
default_value_405 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_403=self->head;
    i_404=0;
    while(it_403!=((void*)0)) {
        if(position==i_404) {
            __result207__ = gComeFunResultObject = __result_obj__ = it_403->item;
            gComeFunResultObject = (void*)0;
            return __result207__;
        }
        it_403=it_403->next;
        i_404++;
    }
    memset(&default_value_405,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = default_value_405;
    default_value_405 = come_decrement_ref_count2(default_value_405, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result220__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result220__ = gComeFunResultObject = __result_obj__ = item;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_423;
unsigned int it_424;
_Bool same_key_exist_425;
char* it2_426;
struct map$2charphcharph* __result219__;
    if(self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_423=string_get_hash_key(key)%self->size;
    it_424=hash_423;
    while((_Bool)1) {
        if(self->item_existance[it_424]) {
            if(string_equals(self->keys[it_424],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_424]);
                    self->keys[it_424] = come_decrement_ref_count2(self->keys[it_424], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_424]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_424]);
                    self->keys[it_424]=key;
                }
                if(1) {
                    self->items[it_424] = come_decrement_ref_count2(self->items[it_424], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_424]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_424]=item;
                }
                break;
            }
            it_424++;
            if(it_424>=self->size) {
                it_424=0;
            }
            else {
                if(it_424==hash_423) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_424]=(_Bool)1;
            if(1) {
                self->keys[it_424]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_424]=key;
            }
            if(1) {
                self->items[it_424]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_424]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_425=(_Bool)0;
    for(    it2_426=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_426=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_426,key)) {
            same_key_exist_425=(_Bool)1;
        }
    }
    if(!same_key_exist_425) {
        list$1charp_push_back(self->key_list,key);
    }
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_406;
void* __right_value406 = (void*)0;
char** keys_407;
void* __right_value407 = (void*)0;
char** items_408;
void* __right_value408 = (void*)0;
_Bool* item_existance_409;
int len_410;
char* it_413;
char* default_value_416;
char* it2_417;
unsigned int hash_420;
int n_421;
char* default_value_422;
default_value_416 = (void*)0;
default_value_422 = (void*)0;
    size_406=self->size*10;
    keys_407=(char**)come_increment_ref_count(((char**)(__right_value406=(char**)come_calloc(1, sizeof(char*)*(1*(size_406)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_408=(char**)come_increment_ref_count(((char**)(__right_value407=(char**)come_calloc(1, sizeof(char*)*(1*(size_406)), "/usr/local/include/comelang.h", 1622, "char*%"))));
    item_existance_409=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value408=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_406)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_410=0;
    for(    it_413=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_413=map$2charphcharph_next(self)    ){
        memset(&default_value_416,0,sizeof(char*));
        it2_417=map$2charphcharph_at(self,it_413,default_value_416);
        hash_420=string_get_hash_key(it_413)%size_406;
        n_421=hash_420;
        while((_Bool)1) {
            if(item_existance_409[n_421]) {
                n_421++;
                if(n_421>=size_406) {
                    n_421=0;
                }
                else {
                    if(n_421==hash_420) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_409[n_421]=(_Bool)1;
                keys_407[n_421]=it_413;
                items_408[n_421]=map$2charphcharph_at(self,it_413,default_value_422);
                len_410++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_407;
    self->items=items_408;
    self->item_existance=item_existance_409;
    self->size=size_406;
    self->len=len_410;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_411;
char* __result209__;
char* __result210__;
char* result_412;
char* __result211__;
result_411 = (void*)0;
result_412 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_411,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_411;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_412,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_412;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_414;
char* __result212__;
char* __result213__;
char* result_415;
char* __result214__;
result_414 = (void*)0;
result_415 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_414,0,sizeof(char*));
        __result212__ = gComeFunResultObject = __result_obj__ = result_414;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result213__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    memset(&result_415,0,sizeof(char*));
    __result214__ = gComeFunResultObject = __result_obj__ = result_415;
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_418;
unsigned int it_419;
char* __result215__;
char* __result216__;
char* __result217__;
char* __result218__;
    hash_418=string_get_hash_key(((char*)key))%self->size;
    it_419=hash_418;
    while((_Bool)1) {
        if(self->item_existance[it_419]) {
            if(string_equals(self->keys[it_419],key)) {
                __result215__ = gComeFunResultObject = __result_obj__ = self->items[it_419];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
            it_419++;
            if(it_419>=self->size) {
                it_419=0;
            }
            else {
                if(it_419==hash_418) {
                    __result216__ = gComeFunResultObject = __result_obj__ = default_value;
                    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result216__;
                }
            }
        }
        else {
            __result217__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj178;
char* __dec_obj179;
struct sClass* __dec_obj180;
struct list$1sNodeph* __dec_obj181;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj178=self->sname;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj179=self->mName;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(self->mClass==gComeFunResultObject) {
            __dec_obj180=self->mClass;
            /* a*/come_call_finalizer3(__dec_obj180,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(self->mMethods==gComeFunResultObject) {
            __dec_obj181=self->mMethods;
            /* a*/come_call_finalizer3(__dec_obj181,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result221__;
void* __right_value419 = (void*)0;
struct sClassNode* result_430;
void* __right_value420 = (void*)0;
char* __dec_obj182;
void* __right_value421 = (void*)0;
char* __dec_obj183;
void* __right_value422 = (void*)0;
struct sClass* __dec_obj184;
void* __right_value423 = (void*)0;
struct list$1sNodeph* __dec_obj185;
struct sClassNode* __result222__;
    if(self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_430=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"));
    if(self!=((void*)0)) {
        result_430->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_430->sname;
        result_430->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj183=result_430->mName;
        result_430->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj184=result_430->mClass;
        result_430->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /* a*/come_call_finalizer3(__dec_obj184,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj185=result_430->mMethods;
        result_430->mMethods=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mMethods));
        /* a*/come_call_finalizer3(__dec_obj185,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_430->mOutput=self->mOutput;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_430;
    /*i*/come_call_finalizer3(result_430,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_431;
char* p_432;
int sline_433;
void* __right_value426 = (void*)0;
char* type_name_434;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
char* type_name_435;
void* __right_value431 = (void*)0;
struct sNode* __result225__;
void* __right_value432 = (void*)0;
struct sNode* __result226__;
    define_struct_431=(_Bool)0;
    {
        p_432=info->p;
        sline_433=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                type_name_434=(char*)come_increment_ref_count(parse_word(info));
                if(parsecmp("extends",info)) {
                    ((char*)(__right_value427=parse_word(info)));
                    __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value428=parse_word(info)));
                    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(*info->p==123) {
                    ((char*)(__right_value429=skip_block(info)));
                    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        define_struct_431=(_Bool)1;
                    }
                }
                type_name_434 = come_decrement_ref_count2(type_name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_432;
        info->sline=sline_433;
    }
    if(define_struct_431) {
        type_name_435=(char*)come_increment_ref_count(parse_word(info));
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value431=parse_struct((char*)come_increment_ref_count(type_name_435),info)));
        type_name_435 = come_decrement_ref_count2(type_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value431) { __right_value431 = come_decrement_ref_count2(__right_value431, ((struct sNode*)__right_value431)->finalize, ((struct sNode*)__right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        type_name_435 = come_decrement_ref_count2(type_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value432=string_node_v13(buf,head,head_sline,info)));
    if(__right_value432) { __right_value432 = come_decrement_ref_count2(__right_value432, ((struct sNode*)__right_value432)->finalize, ((struct sNode*)__right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result226__;
}

