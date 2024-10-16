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
struct sCurrentNode
{
    int sline;
    char* sname;
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
struct sMethodCallNode
{
    int sline;
    char* sname;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static void CVALUE_finalize(struct CVALUE* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sCurrentNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string(self->sname)));
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sCurrentNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
char* class_name_64;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sClass* current_stack_65;
struct sVarTable* vtable_66;
struct map$2charphsVarph* o2_saved_67;
char* it_70;
char* key_73;
struct sVar* value_74;
void* __right_value156 = (void*)0;
struct sType* type2_90;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct tuple2$2charphsTypeph* item_109;
void* __right_value160 = (void*)0;
struct sType* type3_110;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct tuple2$2charphsTypeph* item2_113;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct map$2charphsVarph* o2_saved_165;
char* it_166;
char* key_167;
struct sVar* value_168;
void* __right_value175 = (void*)0;
struct sType* type2_169;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct tuple2$2charphsTypeph* item_170;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct CVALUE* come_value_171;
void* __right_value180 = (void*)0;
char* __dec_obj84;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct sType* __dec_obj85;
_Bool __result123__;
    info->current_stack_num++;
    class_name_64=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_65=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 421, "sClass")),class_name_64,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_66=info->lv_table;
    while(vtable_66) {
        for(        o2_saved_67=(struct map$2charphsVarph*)come_increment_ref_count((vtable_66->mVars)),it_70=map$2charphsVarph_begin((o2_saved_67));        !map$2charphsVarph_end((o2_saved_67));        it_70=map$2charphsVarph_next((o2_saved_67))        ){
            key_73=it_70;
            value_74=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_66->mVars,key_73), "./common.h", 428, 0));
            type2_90=(struct sType*)come_increment_ref_count(sType_clone(value_74->mType));
            type2_90->mPointerNum++;
            item_109=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 434, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_74->mCValueName)),(struct sType*)come_increment_ref_count(type2_90)));
            if(value_74->mCValueName!=((void*)0)) {
                if(strcmp(value_74->mCValueName,"__list_values")==0) {
                }
                else {
                    if(strcmp(value_74->mCValueName,"__map_keys")==0) {
                    }
                    else {
                        if(strcmp(value_74->mCValueName,"__map_element")==0) {
                        }
                        else {
                            if(string_operator_equals(value_74->mType->mClass->mName,"va_list")||string_operator_equals(value_74->mType->mClass->mName,"__builtin_va_list")) {
                            }
                            else {
                                if(list$1sNodeph_length(type2_90->mArrayNum)==1) {
                                    type3_110=(struct sType*)come_increment_ref_count(sType_clone(type2_90));
                                    list$1sNodeph_reset(type3_110->mArrayNum);
                                    type3_110->mPointerNum++;
                                    type3_110->mOriginIsArray=(_Bool)1;
                                    item2_113=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 454, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_74->mCValueName)),(struct sType*)come_increment_ref_count(type3_110)));
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_65->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_113)));
                                    value_74->mType->mOriginIsArray=(_Bool)1;
                                    /*i*/come_call_finalizer3(type3_110,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(item2_113,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_65->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_109)));
                                }
                            }
                        }
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_90,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_109,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_67,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_66=vtable_66->mParent;
    }
    output_struct(current_stack_65,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_64),(struct sClass*)come_increment_ref_count(current_stack_65));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_64,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_64);
    vtable_66=info->lv_table;
    while(vtable_66) {
        for(        o2_saved_165=(struct map$2charphsVarph*)come_increment_ref_count((vtable_66->mVars)),it_166=map$2charphsVarph_begin((o2_saved_165));        !map$2charphsVarph_end((o2_saved_165));        it_166=map$2charphsVarph_next((o2_saved_165))        ){
            key_167=it_166;
            value_168=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_66->mVars,key_167), "./common.h", 479, 1));
            type2_169=(struct sType*)come_increment_ref_count(sType_clone(value_168->mType));
            item_170=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 483, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_168->mCValueName),(struct sType*)come_increment_ref_count(type2_169)));
            if(value_168->mCValueName!=((void*)0)) {
                if(strcmp(value_168->mCValueName,"__list_values")==0) {
                }
                else {
                    if(strcmp(value_168->mCValueName,"__map_keys")==0) {
                    }
                    else {
                        if(strcmp(value_168->mCValueName,"__map_element")==0) {
                        }
                        else {
                            if(string_operator_equals(value_168->mType->mClass->mName,"va_list")||string_operator_equals(value_168->mType->mClass->mName,"__builtin_va_list")) {
                            }
                            else {
                                if(string_operator_equals(type2_169->mClass->mName,"lambda")) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_168->mCValueName,value_168->mCValueName);
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_168->mCValueName,value_168->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_170,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_165,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_66=vtable_66->mParent;
    }
    come_value_171=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 512, "CVALUE"))));
    __dec_obj84=come_value_171->c_value;
    come_value_171->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj85=come_value_171->type;
    come_value_171->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 515, "sType")),class_name_64,(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_171->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_171->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
    __result123__ = (_Bool)1;
    class_name_64 = come_decrement_ref_count2(class_name_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_65,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result123__;
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_68;
char* __result68__;
char* __result69__;
char* result_69;
char* __result70__;
result_68 = (void*)0;
result_69 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_68,0,sizeof(char*));
        __result68__ = gComeFunResultObject = __result_obj__ = result_68;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result69__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    memset(&result_69,0,sizeof(char*));
    __result70__ = gComeFunResultObject = __result_obj__ = result_69;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_71;
char* __result71__;
char* __result72__;
char* result_72;
char* __result73__;
result_71 = (void*)0;
result_72 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_71,0,sizeof(char*));
        __result71__ = gComeFunResultObject = __result_obj__ = result_71;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result72__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    memset(&result_72,0,sizeof(char*));
    __result73__ = gComeFunResultObject = __result_obj__ = result_72;
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_75;
unsigned int hash_76;
unsigned int it_77;
struct sVar* __result74__;
struct sVar* __result75__;
struct sVar* __result76__;
struct sVar* __result77__;
default_value_75 = (void*)0;
    memset(&default_value_75,0,sizeof(struct sVar*));
    hash_76=string_get_hash_key(((char*)key))%self->size;
    it_77=hash_76;
    while((_Bool)1) {
        if(self->item_existance[it_77]) {
            if(string_equals(self->keys[it_77],key)) {
                __result74__ = gComeFunResultObject = __result_obj__ = self->items[it_77];
                /*i*/come_call_finalizer3(default_value_75,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result74__;
            }
            it_77++;
            if(it_77>=self->size) {
                it_77=0;
            }
            else {
                if(it_77==hash_76) {
                    __result75__ = gComeFunResultObject = __result_obj__ = default_value_75;
                    /*i*/come_call_finalizer3(default_value_75,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result75__;
                }
            }
        }
        else {
            __result76__ = gComeFunResultObject = __result_obj__ = default_value_75;
            /*i*/come_call_finalizer3(default_value_75,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result76__;
        }
    }
    __result77__ = gComeFunResultObject = __result_obj__ = default_value_75;
    /*i*/come_call_finalizer3(default_value_75,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj17;
char* __dec_obj18;
struct sType* __dec_obj19;
char* __dec_obj38;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj17=self->mName;
            __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj18=self->mCValueName;
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj19=self->mType;
            /* a*/come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj38=self->mFunName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
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
struct list_item$1sTypeph* it_78;
struct list_item$1sTypeph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_80;
struct list_item$1sTypeph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_82;
struct list_item$1sNodeph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_84;
struct list_item$1sNodeph* prev_it_85;
    it_84=self->head;
    while(it_84!=((void*)0)) {
        prev_it_85=it_84;
        it_84=it_84->next;
        /*i*/come_call_finalizer3(prev_it_85,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_86;
struct list_item$1charph* prev_it_87;
    it_86=self->head;
    while(it_86!=((void*)0)) {
        prev_it_87=it_86;
        it_86=it_86->next;
        /*i*/come_call_finalizer3(prev_it_87,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_88;
struct list_item$1charph* prev_it_89;
    it_88=self->head;
    while(it_88!=((void*)0)) {
        prev_it_89=it_88;
        it_88=it_88->next;
        /*i*/come_call_finalizer3(prev_it_89,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result78__;
void* __right_value122 = (void*)0;
struct sType* result_91;
void* __right_value125 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value126 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value127 = (void*)0;
char* __dec_obj43;
void* __right_value134 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value142 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value143 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value150 = (void*)0;
struct list$1charph* __dec_obj56;
void* __right_value151 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value152 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value153 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value154 = (void*)0;
char* __dec_obj60;
void* __right_value155 = (void*)0;
char* __dec_obj61;
struct sType* __result95__;
    if(self==(void*)0) {
        __result78__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_91=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_91->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_91->mNoSolvedGenericsType;
        result_91->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_91->mOriginalLoadVarType;
        result_91->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_91->mGenericsName;
        result_91->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_91->mGenericsTypes;
        result_91->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_91->mArrayNum;
        result_91->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_91->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_91->mParamTypes;
        result_91->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj56=result_91->mParamNames;
        result_91->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj56,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj57=result_91->mResultType;
        result_91->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_91->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj58=result_91->mAlignas;
        result_91->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_91->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_91->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_91->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_91->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_91->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_91->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_91->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_91->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_91->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_91->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_91->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_91->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_91->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_91->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_91->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_91->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_91->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_91->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_91->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_91->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_91->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_91->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_91->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_91->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_91->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_91->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_91->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj59=result_91->mSizeNum;
        result_91->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_91->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_91->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_91->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj60=result_91->mOriginalTypeName;
        result_91->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_91->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_91->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_91->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_91->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_91->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_91->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_91->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_91->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_91->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj61=result_91->mAsmName;
        result_91->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_91->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_91->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_91->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_91->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_91->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_91->mOriginIsArray=self->mOriginIsArray;
    }
    __result95__ = gComeFunResultObject = __result_obj__ = result_91;
    /*i*/come_call_finalizer3(result_91,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result79__;
void* __right_value123 = (void*)0;
struct tuple1$1sTypeph* result_92;
void* __right_value124 = (void*)0;
struct sType* __dec_obj39;
struct tuple1$1sTypeph* __result80__;
    if(self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_92=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj39=result_92->v1;
        result_92->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_92;
    /*i*/come_call_finalizer3(result_92,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
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
struct list$1sTypeph* __result81__;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1sTypeph* result_93;
struct list_item$1sTypeph* it_94;
void* __right_value133 = (void*)0;
struct list$1sTypeph* __result84__;
    if(self==((void*)0)) {
        __result81__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    result_93=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1sTypeph_add(result_93,(struct sType*)come_increment_ref_count(sType_clone(it_94->item)));
        it_94=it_94->next;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj44;
void* __right_value131 = (void*)0;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj45;
void* __right_value132 = (void*)0;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj46;
struct list$1sTypeph* __result83__;
    if(self->len==0) {
        litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj44=litem_95->item;
        litem_95->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj45=litem_96->item;
            litem_96->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj46=litem_97->item;
            litem_97->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_97;
            self->tail=litem_97;
        }
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result85__;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1sNodeph* result_98;
struct list_item$1sNodeph* it_99;
void* __right_value141 = (void*)0;
struct list$1sNodeph* __result90__;
    if(self==((void*)0)) {
        __result85__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    result_98=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_99=self->head;
    while(it_99!=((void*)0)) {
        list$1sNodeph_add(result_98,(struct sNode*)come_increment_ref_count(sNode_clone(it_99->item)));
        it_99=it_99->next;
    }
    __result90__ = gComeFunResultObject = __result_obj__ = result_98;
    /*i*/come_call_finalizer3(result_98,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result86__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct list_item$1sNodeph* litem_100;
struct sNode* __dec_obj48;
void* __right_value138 = (void*)0;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj49;
void* __right_value139 = (void*)0;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result87__;
    if(self->len==0) {
        litem_100=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj48=litem_100->item;
        litem_100->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_100;
        self->head=litem_100;
    }
    else {
        if(self->len==1) {
            litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value138=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_101->prev=self->head;
            litem_101->next=((void*)0);
            __dec_obj49=litem_101->item;
            litem_101->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_101;
            self->head->next=litem_101;
        }
        else {
            litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value139=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_102->prev=self->tail;
            litem_102->next=((void*)0);
            __dec_obj50=litem_102->item;
            litem_102->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_102;
            self->tail=litem_102;
        }
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result88__;
void* __right_value140 = (void*)0;
struct sNode* result_103;
struct sNode* __result89__;
    if(self==(void*)0) {
        __result88__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    result_103=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_103->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_103->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_103->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_103->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_103->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_103->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_103->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_103->kind=self->kind;
    }
    __result89__ = gComeFunResultObject = __result_obj__ = result_103;
    if(result_103) { result_103 = come_decrement_ref_count2(result_103, ((struct sNode*)result_103)->finalize, ((struct sNode*)result_103)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result91__;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1charph* result_104;
struct list_item$1charph* it_105;
void* __right_value149 = (void*)0;
struct list$1charph* __result94__;
    if(self==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    result_104=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_105=self->head;
    while(it_105!=((void*)0)) {
        list$1charph_add(result_104,(char*)come_increment_ref_count(string_clone(it_105->item)));
        it_105=it_105->next;
    }
    __result94__ = gComeFunResultObject = __result_obj__ = result_104;
    /*i*/come_call_finalizer3(result_104,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_106;
char* __dec_obj53;
void* __right_value147 = (void*)0;
struct list_item$1charph* litem_107;
char* __dec_obj54;
void* __right_value148 = (void*)0;
struct list_item$1charph* litem_108;
char* __dec_obj55;
struct list$1charph* __result93__;
    if(self->len==0) {
        litem_106=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_106->prev=((void*)0);
        litem_106->next=((void*)0);
        __dec_obj53=litem_106->item;
        litem_106->item=(char*)come_increment_ref_count(item);
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_106;
        self->head=litem_106;
    }
    else {
        if(self->len==1) {
            litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value147=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_107->prev=self->head;
            litem_107->next=((void*)0);
            __dec_obj54=litem_107->item;
            litem_107->item=(char*)come_increment_ref_count(item);
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_107;
            self->head->next=litem_107;
        }
        else {
            litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value148=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_108->prev=self->tail;
            litem_108->next=((void*)0);
            __dec_obj55=litem_108->item;
            litem_108->item=(char*)come_increment_ref_count(item);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_108;
            self->tail=litem_108;
        }
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj62;
struct sType* __dec_obj63;
struct tuple2$2charphsTypeph* __result96__;
    __dec_obj62=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_111;
struct list_item$1sNodeph* prev_it_112;
struct list$1sNodeph* __result97__;
    it_111=self->head;
    while(it_111!=((void*)0)) {
        prev_it_112=it_111;
        it_111=it_111->next;
        /*i*/come_call_finalizer3(prev_it_112,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value164 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_114;
struct tuple2$2charphsTypeph* __dec_obj66;
void* __right_value165 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_115;
struct tuple2$2charphsTypeph* __dec_obj69;
void* __right_value166 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_116;
struct tuple2$2charphsTypeph* __dec_obj72;
struct list$1tuple2$2charphsTypephph* __result98__;
    if(self->len==0) {
        litem_114=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value164=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple2$2charphsTypephph"))));
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        __dec_obj66=litem_114->item;
        litem_114->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj66,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_114;
        self->head=litem_114;
    }
    else {
        if(self->len==1) {
            litem_115=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value165=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple2$2charphsTypephph"))));
            litem_115->prev=self->head;
            litem_115->next=((void*)0);
            __dec_obj69=litem_115->item;
            litem_115->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_115;
            self->head->next=litem_115;
        }
        else {
            litem_116=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value166=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple2$2charphsTypephph"))));
            litem_116->prev=self->tail;
            litem_116->next=((void*)0);
            __dec_obj72=litem_116->item;
            litem_116->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj72,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_116;
            self->tail=litem_116;
        }
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj73;
struct sType* __dec_obj74;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj73=self->v1;
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj74=self->v2;
            /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result99__;
void* __right_value167 = (void*)0;
struct tuple2$2charphsTypeph* result_117;
void* __right_value168 = (void*)0;
char* __dec_obj75;
void* __right_value169 = (void*)0;
struct sType* __dec_obj76;
struct tuple2$2charphsTypeph* __result100__;
    if(self==(void*)0) {
        __result99__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    result_117=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj75=result_117->v1;
        result_117->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj76=result_117->v2;
        result_117->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = result_117;
    /*i*/come_call_finalizer3(result_117,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj77;
struct sType* __dec_obj78;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj77=self->v1;
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj78=self->v2;
            /* a*/come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_118;
int i_119;
    for(    i_118=0;    i_118<self->size;    i_118++    ){
        if(self->item_existance[i_118]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_118],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_119=0;    i_119<self->size;    i_119++    ){
        if(self->item_existance[i_119]) {
            if(1) {
                self->keys[i_119] = come_decrement_ref_count2(self->keys[i_119], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_141;
unsigned int it_142;
_Bool same_key_exist_159;
char* it2_162;
struct map$2charphsClassph* __result121__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_141=string_get_hash_key(key)%self->size;
    it_142=hash_141;
    while((_Bool)1) {
        if(self->item_existance[it_142]) {
            if(string_equals(self->keys[it_142],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_142]);
                    self->keys[it_142] = come_decrement_ref_count2(self->keys[it_142], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_142]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_142]);
                    self->keys[it_142]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_142],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_142]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_142]=item;
                }
                break;
            }
            it_142++;
            if(it_142>=self->size) {
                it_142=0;
            }
            else {
                if(it_142==hash_141) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_142]=(_Bool)1;
            if(1) {
                self->keys[it_142]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_142]=key;
            }
            if(1) {
                self->items[it_142]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_142]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_159=(_Bool)0;
    for(    it2_162=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_162=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_162,key)) {
            same_key_exist_159=(_Bool)1;
        }
    }
    if(!same_key_exist_159) {
        list$1charp_push_back(self->key_list,key);
    }
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_120;
void* __right_value172 = (void*)0;
char** keys_121;
void* __right_value173 = (void*)0;
struct sClass** items_122;
void* __right_value174 = (void*)0;
_Bool* item_existance_123;
int len_124;
char* it_127;
struct sClass* default_value_130;
struct sClass* it2_131;
unsigned int hash_138;
int n_139;
struct sClass* default_value_140;
default_value_130 = (void*)0;
default_value_140 = (void*)0;
    size_120=self->size*10;
    keys_121=(char**)come_increment_ref_count(((char**)(__right_value172=(char**)come_calloc(1, sizeof(char*)*(1*(size_120)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_122=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value173=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_120)), "/usr/local/include/comelang.h", 1622, "sClass*%"))));
    item_existance_123=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value174=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_120)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_124=0;
    for(    it_127=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_127=map$2charphsClassph_next(self)    ){
        memset(&default_value_130,0,sizeof(struct sClass*));
        it2_131=map$2charphsClassph_at(self,it_127,default_value_130);
        hash_138=string_get_hash_key(it_127)%size_120;
        n_139=hash_138;
        while((_Bool)1) {
            if(item_existance_123[n_139]) {
                n_139++;
                if(n_139>=size_120) {
                    n_139=0;
                }
                else {
                    if(n_139==hash_138) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_123[n_139]=(_Bool)1;
                keys_121[n_139]=it_127;
                items_122[n_139]=map$2charphsClassph_at(self,it_127,default_value_140);
                len_124++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_121;
    self->items=items_122;
    self->item_existance=item_existance_123;
    self->size=size_120;
    self->len=len_124;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_125;
char* __result101__;
char* __result102__;
char* result_126;
char* __result103__;
result_125 = (void*)0;
result_126 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_125,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_125;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_126,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_126;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_128;
char* __result104__;
char* __result105__;
char* result_129;
char* __result106__;
result_128 = (void*)0;
result_129 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_128,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_128;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_129,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_129;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_132;
unsigned int it_133;
struct sClass* __result107__;
struct sClass* __result108__;
struct sClass* __result109__;
struct sClass* __result110__;
    hash_132=string_get_hash_key(((char*)key))%self->size;
    it_133=hash_132;
    while((_Bool)1) {
        if(self->item_existance[it_133]) {
            if(string_equals(self->keys[it_133],key)) {
                __result107__ = gComeFunResultObject = __result_obj__ = self->items[it_133];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result107__;
            }
            it_133++;
            if(it_133>=self->size) {
                it_133=0;
            }
            else {
                if(it_133==hash_132) {
                    __result108__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result108__;
                }
            }
        }
        else {
            __result109__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
    }
    __result110__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj79;
struct list$1tuple2$2charphsTypephph* __dec_obj80;
char* __dec_obj82;
char* __dec_obj83;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj79=self->mName;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj80=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj80,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj83=self->mParentClassName;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_134;
struct list_item$1tuple2$2charphsTypephph* prev_it_135;
    it_134=self->head;
    while(it_134!=((void*)0)) {
        prev_it_135=it_134;
        it_134=it_134->next;
        /*i*/come_call_finalizer3(prev_it_135,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj81;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj81=self->item;
            /* a*/come_call_finalizer3(__dec_obj81,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_136;
struct list_item$1tuple2$2charphsTypephph* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*i*/come_call_finalizer3(prev_it_137,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_143;
struct list_item$1charp* it_144;
struct list$1charp* __result114__;
    it2_143=0;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        if(charp_equals(it_144->item,item)) {
            list$1charp_delete(self,it2_143,it2_143+1);
            break;
        }
        it2_143++;
        it_144=it_144->next;
    }
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_145;
struct list$1charp* __result111__;
struct list_item$1charp* it_148;
int i_149;
struct list_item$1charp* prev_it_150;
struct list_item$1charp* it_151;
int i_152;
struct list_item$1charp* prev_it_153;
struct list_item$1charp* it_154;
struct list_item$1charp* head_prev_it_155;
struct list_item$1charp* tail_it_156;
int i_157;
struct list_item$1charp* prev_it_158;
struct list$1charp* __result113__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_145=tail;
        tail=head;
        head=tmp_145;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result111__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_148=self->head;
            i_149=0;
            while(it_148!=((void*)0)) {
                if(i_149<tail) {
                    prev_it_150=it_148;
                    it_148=it_148->next;
                    i_149++;
                    /*i*/come_call_finalizer3(prev_it_150,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_149==tail) {
                        self->head=it_148;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_148=it_148->next;
                        i_149++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_151=self->head;
                i_152=0;
                while(it_151!=((void*)0)) {
                    if(i_152==head) {
                        self->tail=it_151->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_152>=head) {
                        prev_it_153=it_151;
                        it_151=it_151->next;
                        i_152++;
                        /*i*/come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_151=it_151->next;
                        i_152++;
                    }
                }
            }
            else {
                it_154=self->head;
                head_prev_it_155=((void*)0);
                tail_it_156=((void*)0);
                i_157=0;
                while(it_154!=((void*)0)) {
                    if(i_157==head) {
                        head_prev_it_155=it_154->prev;
                    }
                    if(i_157==tail) {
                        tail_it_156=it_154;
                    }
                    if(i_157>=head&&i_157<tail) {
                        prev_it_158=it_154;
                        it_154=it_154->next;
                        i_157++;
                        /*i*/come_call_finalizer3(prev_it_158,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_154=it_154->next;
                        i_157++;
                    }
                }
                if(head_prev_it_155!=((void*)0)) {
                    head_prev_it_155->next=tail_it_156;
                }
                if(tail_it_156!=((void*)0)) {
                    tail_it_156->prev=head_prev_it_155;
                }
            }
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_146;
struct list_item$1charp* prev_it_147;
struct list$1charp* __result112__;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        /*i*/come_call_finalizer3(prev_it_147,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_160;
char* __result115__;
char* __result116__;
char* result_161;
char* __result117__;
result_160 = (void*)0;
result_161 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_160,0,sizeof(char*));
        __result115__ = gComeFunResultObject = __result_obj__ = result_160;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    self->it=self->head;
    if(self->it) {
        __result116__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    memset(&result_161,0,sizeof(char*));
    __result117__ = gComeFunResultObject = __result_obj__ = result_161;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_163;
char* __result118__;
char* __result119__;
char* result_164;
char* __result120__;
result_163 = (void*)0;
result_164 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_163,0,sizeof(char*));
        __result118__ = gComeFunResultObject = __result_obj__ = result_163;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result119__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    memset(&result_164,0,sizeof(char*));
    __result120__ = gComeFunResultObject = __result_obj__ = result_164;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
struct list_item$1CVALUEph* litem_172;
struct CVALUE* __dec_obj86;
void* __right_value184 = (void*)0;
struct list_item$1CVALUEph* litem_173;
struct CVALUE* __dec_obj90;
void* __right_value185 = (void*)0;
struct list_item$1CVALUEph* litem_174;
struct CVALUE* __dec_obj91;
struct list$1CVALUEph* __result122__;
    if(self->len==0) {
        litem_172=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value183=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_172->prev=((void*)0);
        litem_172->next=((void*)0);
        __dec_obj86=litem_172->item;
        litem_172->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_172;
        self->head=litem_172;
    }
    else {
        if(self->len==1) {
            litem_173=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value184=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_173->prev=self->head;
            litem_173->next=((void*)0);
            __dec_obj90=litem_173->item;
            litem_173->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj90,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_173;
            self->head->next=litem_173;
        }
        else {
            litem_174=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value185=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_174->prev=self->tail;
            litem_174->next=((void*)0);
            __dec_obj91=litem_174->item;
            litem_174->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_174;
            self->tail=litem_174;
        }
    }
    self->len++;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj87;
struct sType* __dec_obj88;
char* __dec_obj89;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj87=self->c_value;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj88=self->type;
            /* a*/come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj89=self->c_value_without_right_value_objects;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
char* none_generics_name_175;
void* __right_value187 = (void*)0;
char* fun_name2_176;
void* __right_value188 = (void*)0;
char* fun_name3_177;
struct sGenericsFun* generics_fun_178;
void* __right_value189 = (void*)0;
_Bool _if_conditional1;
void* __right_value190 = (void*)0;
char* __result128__;
char* __result129__;
    none_generics_name_175=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_176=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_177=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_175,fun_name));
    generics_fun_178=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_177,((void*)0));
    if(generics_fun_178) {
        if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_176)),generics_fun_178,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_177);
            __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            none_generics_name_175 = come_decrement_ref_count2(none_generics_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_176 = come_decrement_ref_count2(fun_name2_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_177 = come_decrement_ref_count2(fun_name3_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result128__;
        }
    }
    __result129__ = gComeFunResultObject = __result_obj__ = fun_name2_176;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_175 = come_decrement_ref_count2(none_generics_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_176 = come_decrement_ref_count2(fun_name2_176, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_177 = come_decrement_ref_count2(fun_name3_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_179;
unsigned int it_180;
struct sGenericsFun* __result124__;
struct sGenericsFun* __result125__;
struct sGenericsFun* __result126__;
struct sGenericsFun* __result127__;
    hash_179=string_get_hash_key(((char*)key))%self->size;
    it_180=hash_179;
    while((_Bool)1) {
        if(self->item_existance[it_180]) {
            if(string_equals(self->keys[it_180],key)) {
                __result124__ = gComeFunResultObject = __result_obj__ = self->items[it_180];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result124__;
            }
            it_180++;
            if(it_180>=self->size) {
                it_180=0;
            }
            else {
                if(it_180==hash_179) {
                    __result125__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result125__;
                }
            }
        }
        else {
            __result126__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result126__;
        }
    }
    __result127__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj92;
struct list$1charph* __dec_obj93;
struct list$1charph* __dec_obj94;
char* __dec_obj95;
struct sType* __dec_obj96;
struct list$1sTypeph* __dec_obj97;
struct list$1charph* __dec_obj98;
struct list$1charph* __dec_obj99;
char* __dec_obj100;
char* __dec_obj101;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj92=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj93=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj94=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj95=self->mName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj96=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj97=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj97,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj98=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj99=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj100=self->mBlock;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj101=self->mGenericsSName;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value195 = (void*)0;
struct sNode* current_stack_frame_node_181;
_Bool __result132__;
void* __right_value196 = (void*)0;
struct CVALUE* come_value_185;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct buffer* method_block2_186;
void* __right_value199 = (void*)0;
struct sType* method_block_type_187;
void* __right_value200 = (void*)0;
char* class_name_191;
struct sClass* current_stack_frame_struct_195;
_Bool __result139__;
void* __right_value201 = (void*)0;
struct sType* result_type_196;
struct list$1sTypeph* param_types_197;
struct list$1charph* param_names_198;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct buffer* all_alhabet_sname_199;
char* p_200;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
int i_201;
struct list$1sTypeph* o2_saved_202;
struct sType* it_205;
struct sType* param_type_208;
void* __right_value207 = (void*)0;
char* param_name_209;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
char* param_name_210;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
char* param_name_211;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct buffer* source3_212;
char* p_213;
char* head_214;
int sline_215;
struct buffer* __dec_obj105;
void* __right_value217 = (void*)0;
struct sNode* node_216;
_Bool __result146__;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
char* method_block_name_217;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct CVALUE* come_value2_218;
struct sFun* fun2_219;
_Bool __result151__;
struct sType* method_block_type2_222;
void* __right_value222 = (void*)0;
char* __dec_obj121;
void* __right_value223 = (void*)0;
struct sType* __dec_obj122;
struct buffer* __dec_obj123;
void* __right_value224 = (void*)0;
struct sType* __dec_obj124;
_Bool contained_method_generics_method_block_223;
struct list$1sTypeph* o2_saved_224;
struct sType* it_225;
_Bool __result153__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 32, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(__right_value192=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 32, "sCurrentNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_181=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value192,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    if(!node_compile(current_stack_frame_node_181,info)) {
        __result132__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_181) { current_stack_frame_node_181 = come_decrement_ref_count2(current_stack_frame_node_181, ((struct sNode*)current_stack_frame_node_181)->finalize, ((struct sNode*)current_stack_frame_node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result132__;
    }
    come_value_185=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_185));
    dec_stack_ptr(1,info);
    method_block2_186=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 42, "buffer"))));
    method_block_type_187=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun->mParamTypes,-1), "20method.c", 43, 2))));
    class_name_191=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_187->mParamTypes,0), "20method.c", 47, 3))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_191);
    current_stack_frame_struct_195=info->current_stack_frame_struct;
    info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_191);
    info->num_method_block++;
    if(string_operator_not_equals(method_block_type_187->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result139__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_181) { current_stack_frame_node_181 = come_decrement_ref_count2(current_stack_frame_node_181, ((struct sNode*)current_stack_frame_node_181)->finalize, ((struct sNode*)current_stack_frame_node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block2_186,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_191 = come_decrement_ref_count2(class_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    result_type_196=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_187->mResultType->v1));
    result_type_196->mStatic=(_Bool)0;
    param_types_197=method_block_type_187->mParamTypes;
    param_names_198=method_block_type_187->mParamNames;
    all_alhabet_sname_199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 63, "buffer"))));
    {
        p_200=info->sname;
        while(*p_200) {
            if(xisalnum(*p_200)) {
                buffer_append_char(all_alhabet_sname_199,*p_200++);
            }
            else {
                p_200++;
            }
        }
    }
    buffer_append_str(method_block2_186,((char*)(__right_value206=xsprintf("%s method_block%d_%s(",((char*)(__right_value204=make_type_name_string(result_type_196,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value205=buffer_to_string(all_alhabet_sname_199)))))));
    __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_201=0;
    for(    o2_saved_202=(param_types_197),it_205=list$1sTypeph_begin((o2_saved_202));    !list$1sTypeph_end((o2_saved_202));    it_205=list$1sTypeph_next((o2_saved_202))    ){
        param_type_208=it_205;
        if(i_201==0) {
            param_name_209=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_str(method_block2_186,((char*)(__right_value209=xsprintf("%s",((char*)(__right_value208=make_define_var(param_type_208,param_name_209,(_Bool)0,info)))))));
            __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_209 = come_decrement_ref_count2(param_name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(i_201==1) {
                param_name_210=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_str(method_block2_186,((char*)(__right_value212=xsprintf("%s",((char*)(__right_value211=make_define_var_no_solved(param_type_208,param_name_210,(_Bool)0,(_Bool)0,info)))))));
                __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_210 = come_decrement_ref_count2(param_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_211=(char*)come_increment_ref_count(xsprintf("it%d",i_201));
                buffer_append_str(method_block2_186,((char*)(__right_value215=xsprintf("%s",((char*)(__right_value214=make_define_var_no_solved(param_type_208,param_name_211,(_Bool)0,(_Bool)0,info)))))));
                __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_211 = come_decrement_ref_count2(param_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(i_201!=list$1sTypeph_length(param_types_197)-1) {
            buffer_append_str(method_block2_186,",");
        }
        i_201++;
    }
    buffer_append_str(method_block2_186,")\n");
    buffer_append_str(method_block2_186,((char*)(__right_value216=buffer_to_string(method_block))));
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_212=(struct buffer*)come_increment_ref_count(info->source);
    p_213=info->p;
    head_214=info->head;
    sline_215=info->sline;
    __dec_obj105=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_186);
    /* a*/come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_216=(struct sNode*)come_increment_ref_count(parse_function(info));
    if(!node_compile(node_216,info)) {
        __result146__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_181) { current_stack_frame_node_181 = come_decrement_ref_count2(current_stack_frame_node_181, ((struct sNode*)current_stack_frame_node_181)->finalize, ((struct sNode*)current_stack_frame_node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block2_186,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_191 = come_decrement_ref_count2(class_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(all_alhabet_sname_199,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result146__;
    }
    method_block_name_217=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value218=buffer_to_string(all_alhabet_sname_199)))));
    __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_218=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 128, "CVALUE"))));
    fun2_219=map$2charphsFunph_at(info->funcs,method_block_name_217,((void*)0));
    if(fun2_219==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_217);
        __result151__ = (_Bool)1;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_181) { current_stack_frame_node_181 = come_decrement_ref_count2(current_stack_frame_node_181, ((struct sNode*)current_stack_frame_node_181)->finalize, ((struct sNode*)current_stack_frame_node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block2_186,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_191 = come_decrement_ref_count2(class_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(all_alhabet_sname_199,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_217 = come_decrement_ref_count2(method_block_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    method_block_type2_222=fun2_219->mLambdaType;
    __dec_obj121=come_value2_218->c_value;
    come_value2_218->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_217));
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=come_value2_218->type;
    come_value2_218->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_222));
    /* a*/come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_218->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_218));
    __dec_obj123=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_212);
    /* a*/come_call_finalizer3(__dec_obj123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_213;
    info->head=head_214;
    info->sline=sline_215;
    info->current_stack_frame_struct=current_stack_frame_struct_195;
    __dec_obj124=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    /* a*/come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_223=(_Bool)0;
    for(    o2_saved_224=(param_types_197),it_225=list$1sTypeph_begin((o2_saved_224));    !list$1sTypeph_end((o2_saved_224));    it_225=list$1sTypeph_next((o2_saved_224))    ){
        if(is_contained_method_generics_types(it_225,info)) {
            contained_method_generics_method_block_223=(_Bool)1;
        }
    }
    if(is_contained_method_generics_types(result_type_196,info)) {
        contained_method_generics_method_block_223=(_Bool)1;
    }
    if(contained_method_generics_method_block_223) {
        map$2charphsFunph_remove(info->funcs,method_block_name_217);
    }
    __result153__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_181) { current_stack_frame_node_181 = come_decrement_ref_count2(current_stack_frame_node_181, ((struct sNode*)current_stack_frame_node_181)->finalize, ((struct sNode*)current_stack_frame_node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block2_186,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_191 = come_decrement_ref_count2(class_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(all_alhabet_sname_199,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source3_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_217 = come_decrement_ref_count2(method_block_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_183;
struct list_item$1CVALUEph* prev_it_184;
    it_183=self->head;
    while(it_183!=((void*)0)) {
        prev_it_184=it_183;
        it_183=it_183->next;
        /*i*/come_call_finalizer3(prev_it_184,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj104;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj104=self->item;
            /* a*/come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_188;
int i_189;
struct sType* __result133__;
struct sType* default_value_190;
struct sType* __result134__;
default_value_190 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_188=self->head;
    i_189=0;
    while(it_188!=((void*)0)) {
        if(position==i_189) {
            __result133__ = gComeFunResultObject = __result_obj__ = it_188->item;
            gComeFunResultObject = (void*)0;
            return __result133__;
        }
        it_188=it_188->next;
        i_189++;
    }
    memset(&default_value_190,0,sizeof(struct sType*));
    __result134__ = gComeFunResultObject = __result_obj__ = default_value_190;
    /*i*/come_call_finalizer3(default_value_190,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_192;
unsigned int hash_193;
unsigned int it_194;
struct sClass* __result135__;
struct sClass* __result136__;
struct sClass* __result137__;
struct sClass* __result138__;
default_value_192 = (void*)0;
    memset(&default_value_192,0,sizeof(struct sClass*));
    hash_193=string_get_hash_key(((char*)key))%self->size;
    it_194=hash_193;
    while((_Bool)1) {
        if(self->item_existance[it_194]) {
            if(string_equals(self->keys[it_194],key)) {
                __result135__ = gComeFunResultObject = __result_obj__ = self->items[it_194];
                /*i*/come_call_finalizer3(default_value_192,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result135__;
            }
            it_194++;
            if(it_194>=self->size) {
                it_194=0;
            }
            else {
                if(it_194==hash_193) {
                    __result136__ = gComeFunResultObject = __result_obj__ = default_value_192;
                    /*i*/come_call_finalizer3(default_value_192,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result136__;
                }
            }
        }
        else {
            __result137__ = gComeFunResultObject = __result_obj__ = default_value_192;
            /*i*/come_call_finalizer3(default_value_192,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result137__;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = default_value_192;
    /*i*/come_call_finalizer3(default_value_192,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_203;
struct sType* __result140__;
struct sType* __result141__;
struct sType* result_204;
struct sType* __result142__;
result_203 = (void*)0;
result_204 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_203,0,sizeof(struct sType*));
        __result140__ = gComeFunResultObject = __result_obj__ = result_203;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    self->it=self->head;
    if(self->it) {
        __result141__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    memset(&result_204,0,sizeof(struct sType*));
    __result142__ = gComeFunResultObject = __result_obj__ = result_204;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_206;
struct sType* __result143__;
struct sType* __result144__;
struct sType* result_207;
struct sType* __result145__;
result_206 = (void*)0;
result_207 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_206,0,sizeof(struct sType*));
        __result143__ = gComeFunResultObject = __result_obj__ = result_206;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result144__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    memset(&result_207,0,sizeof(struct sType*));
    __result145__ = gComeFunResultObject = __result_obj__ = result_207;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_220;
unsigned int it_221;
struct sFun* __result147__;
struct sFun* __result148__;
struct sFun* __result149__;
struct sFun* __result150__;
    hash_220=string_get_hash_key(((char*)key))%self->size;
    it_221=hash_220;
    while((_Bool)1) {
        if(self->item_existance[it_221]) {
            if(string_equals(self->keys[it_221],key)) {
                __result147__ = gComeFunResultObject = __result_obj__ = self->items[it_221];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result147__;
            }
            it_221++;
            if(it_221>=self->size) {
                it_221=0;
            }
            else {
                if(it_221==hash_220) {
                    __result148__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result148__;
                }
            }
        }
        else {
            __result149__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result149__;
        }
    }
    __result150__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj106;
struct sType* __dec_obj107;
struct list$1sTypeph* __dec_obj108;
struct list$1charph* __dec_obj109;
struct list$1charph* __dec_obj110;
struct sType* __dec_obj111;
struct sBlock* __dec_obj112;
struct buffer* __dec_obj115;
struct buffer* __dec_obj116;
struct buffer* __dec_obj117;
struct buffer* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj106=self->mName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj107=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj108=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj108,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj109=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj110=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj111=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj112=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj112,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj115=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj115,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj116=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj116,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj117=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj117,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj118=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj118,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj119=self->mComeHeader;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj120=self->mDeclareSName;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj113;
struct sVarTable* __dec_obj114;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj113=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj113,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj114=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj114,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_226;
unsigned int it_227;
struct map$2charphsFunph* __result152__;
    hash_226=string_get_hash_key(((char*)key))%self->size;
    it_227=hash_226;
    while((_Bool)1) {
        if(self->item_existance[it_227]) {
            if(string_equals(self->keys[it_227],key)) {
                list$1charp_remove(self->key_list,self->keys[it_227]);
                self->item_existance[it_227]=(_Bool)0;
                if(1) {
                    self->keys[it_227] = come_decrement_ref_count2(self->keys[it_227], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_227]=((void*)0);
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_227],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_227]=((void*)0);
                self->len--;
                break;
            }
            it_227++;
            if(it_227>=self->size) {
                it_227=0;
            }
            else {
                if(it_227==hash_226) {
                    break;
                }
            }
        }
        else {
            break;
        }
    }
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value227 = (void*)0;
char* __dec_obj126;
void* __right_value237 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj143;
void* __right_value238 = (void*)0;
struct buffer* __dec_obj144;
void* __right_value239 = (void*)0;
struct list$1sTypeph* __dec_obj145;
struct sMethodCallNode* __result160__;
    ((struct sNodeBase*)(__right_value225=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value225,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj126=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    /* a*/come_call_finalizer3(__dec_obj143,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj144=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    /* a*/come_call_finalizer3(__dec_obj144,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj145=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_generics_types));
    /* a*/come_call_finalizer3(__dec_obj145,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
char* __result161__;
    __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value240=__builtin_string("sMethodCallNode")));
    __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_238;
struct list$1tuple2$2charphsNodephph* params_239;
struct sNode* obj_240;
struct buffer* method_block_241;
int method_block_sline_242;
struct list$1sTypeph* method_generics_types_243;
void* __right_value241 = (void*)0;
struct list$1sTypeph* __dec_obj152;
_Bool __result162__;
void* __right_value242 = (void*)0;
struct CVALUE* obj_value_244;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
char* __dec_obj153;
void* __right_value245 = (void*)0;
struct sType* obj_type_245;
_Bool no_output_come_code_246;
struct sType* type_247;
void* __right_value246 = (void*)0;
char* none_generics_name_248;
void* __right_value247 = (void*)0;
char* fun_name2_249;
void* __right_value248 = (void*)0;
char* fun_name3_250;
struct sGenericsFun* generics_fun_251;
_Bool method_generics_252;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* generics_fun_name_253;
struct sFun* fun_254;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1CVALUEph* come_params_255;
_Bool no_output_come_code_256;
_Bool __result164__;
struct CVALUE* method_block_node_257;
void* __right_value254 = (void*)0;
struct sType* method_block_lambda_type_261;
void* __right_value255 = (void*)0;
struct sType* method_block_result_type_262;
struct sType* generics_fun_method_block_lambda_type_263;
struct sType* generics_fun_method_block_result_type_264;
int method_generics_num_265;
void* __right_value256 = (void*)0;
int n_274;
struct list$1sTypeph* o2_saved_275;
struct sType* it_276;
int method_generics_num_277;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1CVALUEph* come_params_278;
int i_279;
struct list$1tuple2$2charphsNodephph* o2_saved_280;
struct tuple2$2charphsNodeph* it_283;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_286;
struct sNode* node_287;
_Bool __result177__;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_288;
int method_generics_num_289;
void* __right_value264 = (void*)0;
struct list$1sTypeph* o2_saved_290;
struct sType* it_291;
int method_generics_num_292;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1CVALUEph* come_params_293;
int i_294;
struct list$1tuple2$2charphsNodephph* o2_saved_295;
struct tuple2$2charphsNodeph* it_296;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_297;
struct sNode* node_298;
_Bool __result178__;
void* __right_value268 = (void*)0;
struct CVALUE* come_value_299;
int method_generics_num_300;
void* __right_value269 = (void*)0;
int n_301;
struct list$1sTypeph* o2_saved_302;
struct sType* it_303;
int method_generics_num_304;
void* __right_value270 = (void*)0;
struct sClass* klass_305;
_Bool calling_dynamic_method_306;
struct sType* lambda_type_307;
struct list$1tuple2$2charphsTypephph* o2_saved_308;
struct tuple2$2charphsTypeph* it_311;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name_314;
struct sType* field_type_315;
void* __right_value271 = (void*)0;
struct sType* result_type_316;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1CVALUEph* come_params_317;
int i_318;
struct list$1tuple2$2charphsNodephph* o2_saved_319;
struct tuple2$2charphsNodeph* it_320;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_321;
struct sNode* node_322;
_Bool __result185__;
void* __right_value274 = (void*)0;
struct CVALUE* come_value_323;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct buffer* buf_324;
void* __right_value280 = (void*)0;
int j_325;
struct list$1CVALUEph* o2_saved_326;
struct CVALUE* it_329;
void* __right_value281 = (void*)0;
char* __dec_obj158;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct CVALUE* come_value2_332;
void* __right_value284 = (void*)0;
char* __dec_obj159;
void* __right_value285 = (void*)0;
struct sType* result_type2_333;
void* __right_value286 = (void*)0;
struct sType* __dec_obj160;
char* generics_fun_name_334;
struct sFun* fun_335;
void* __right_value287 = (void*)0;
struct sClass* klass_336;
void* __right_value288 = (void*)0;
char* __dec_obj161;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* __dec_obj162;
void* __right_value292 = (void*)0;
char* none_generics_name_337;
void* __right_value293 = (void*)0;
char* fun_name3_338;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj163;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* __dec_obj164;
int i_339;
void* __right_value300 = (void*)0;
char* new_fun_name_340;
void* __right_value301 = (void*)0;
char* __dec_obj165;
struct sType* obj_array_type_344;
void* __right_value302 = (void*)0;
char* array_method_name_345;
void* __right_value303 = (void*)0;
char* __dec_obj166;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj167;
_Bool __result196__;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __dec_obj168;
struct sClass* klass_346;
void* __right_value308 = (void*)0;
char* __dec_obj169;
_Bool __result197__;
_Bool __result198__;
_Bool __result199__;
void* __right_value309 = (void*)0;
struct sType* result_type_347;
void* __right_value310 = (void*)0;
struct sType* result_type2_348;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1sTypeph* param_types_349;
struct list$1sTypeph* o2_saved_350;
struct sType* it_351;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* it2_352;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1CVALUEph* come_params_353;
int i_354;
_Bool first_param_358;
struct list$1tuple2$2charphsNodephph* o2_saved_359;
struct tuple2$2charphsNodeph* it_360;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_361;
struct sNode* node_362;
_Bool __result201__;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_363;
int n_364;
struct list$1charph* o2_saved_365;
char* it_368;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
int i_376;
struct list$1tuple2$2charphsNodephph* o2_saved_377;
struct tuple2$2charphsNodeph* it_378;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_379;
struct sNode* node_380;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
_Bool __result212__;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* obj_array_type_385;
void* __right_value332 = (void*)0;
char* array_method_name_386;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct buffer* buf_387;
int i_388;
struct list$1sNodeph* o2_saved_389;
struct sNode* it_392;
void* __right_value335 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value339 = (void*)0;
char* __dec_obj174;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sType* __dec_obj175;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct buffer* buf_400;
int i_401;
struct list$1sNodeph* o2_saved_402;
struct sNode* it_403;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value354 = (void*)0;
char* __dec_obj181;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __dec_obj182;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct buffer* buf_406;
int i_407;
struct list$1sNodeph* o2_saved_408;
struct sNode* it_409;
void* __right_value362 = (void*)0;
struct CVALUE* come_value_410;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value366 = (void*)0;
char* __dec_obj183;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* __dec_obj184;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct buffer* buf_412;
int i_413;
struct list$1sNodeph* o2_saved_414;
struct sNode* it_415;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value378 = (void*)0;
char* __dec_obj185;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* __dec_obj186;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct buffer* buf_418;
int i_419;
struct list$1sNodeph* o2_saved_420;
struct sNode* it_421;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value390 = (void*)0;
char* __dec_obj187;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* __dec_obj188;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* default_param_424;
char* param_name_425;
struct buffer* source_426;
char* p_427;
char* head_428;
int sline_429;
void* __right_value397 = (void*)0;
struct buffer* __dec_obj189;
void* __right_value398 = (void*)0;
struct sNode* node_430;
_Bool __result221__;
struct buffer* __dec_obj190;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
_Bool __result222__;
_Bool __result223__;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct buffer* buf_432;
int j_433;
struct list$1CVALUEph* o2_saved_434;
struct CVALUE* it_435;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value2_436;
void* __right_value407 = (void*)0;
char* __dec_obj191;
void* __right_value408 = (void*)0;
struct sType* __dec_obj192;
void* __right_value409 = (void*)0;
char* __dec_obj193;
void* __right_value410 = (void*)0;
char* var_name_437;
void* __right_value411 = (void*)0;
struct sType* result_type_438;
void* __right_value412 = (void*)0;
struct sType* result_type2_439;
struct sType* result_type3_440;
struct list$1sTypeph* __dec_obj194;
_Bool __result224__;
    fun_name_238=self->fun_name;
    params_239=self->params;
    obj_240=self->obj;
    method_block_241=self->method_block;
    method_block_sline_242=self->method_block_sline;
    method_generics_types_243=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj152=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
    /* a*/come_call_finalizer3(__dec_obj152,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    if(!node_compile(obj_240,info)) {
        __result162__ = (_Bool)0;
        /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result162__;
    }
    obj_value_244=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(gComeDebug&&obj_value_244->type->mPointerNum>0) {
        __dec_obj153=obj_value_244->c_value;
        obj_value_244->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value243=make_type_name_string(obj_value_244->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),obj_value_244->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_245=(struct sType*)come_increment_ref_count(sType_clone(obj_value_244->type));
    {
        no_output_come_code_246=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_247=(struct sType*)come_increment_ref_count(obj_type_245);
        none_generics_name_248=(char*)come_increment_ref_count(get_none_generics_name(type_247->mClass->mName));
        fun_name2_249=(char*)come_increment_ref_count(create_method_name(type_247,(_Bool)0,fun_name_238,info,(_Bool)1));
        fun_name3_250=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_248,fun_name_238));
        generics_fun_251=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_250,((void*)0));
        if(generics_fun_251) {
            method_generics_252=list$1charph_length(generics_fun_251->mMethodGenericsTypeNames)>0;
            if(method_generics_252&&list$1sTypeph_length(info->method_generics_types)==0) {
                generics_fun_name_253=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value250=make_generics_function(obj_type_245,(char*)come_increment_ref_count(__builtin_string(fun_name_238)),info,(_Bool)1)))));
                __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                fun_254=map$2charphsFunph_at(info->funcs,generics_fun_name_253,((void*)0));
                come_params_255=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 249, "list$1CVALUEph"))));
                if(method_block_241) {
                    no_output_come_code_256=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(!compile_method_block(method_block_241,(struct list$1CVALUEph*)come_increment_ref_count(come_params_255),fun_254,fun_name3_250,method_block_sline_242,info,(_Bool)1)) {
                        __result164__ = (_Bool)0;
                        generics_fun_name_253 = come_decrement_ref_count2(generics_fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_248 = come_decrement_ref_count2(none_generics_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_249 = come_decrement_ref_count2(fun_name2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_250 = come_decrement_ref_count2(fun_name3_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result164__;
                    }
                    info->no_output_come_code=no_output_come_code_256;
                    method_block_node_257=list$1CVALUEphp_operator_load_element(come_params_255,-1);
                    method_block_lambda_type_261=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_257->type));
                    method_block_result_type_262=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_263=list$1sTypephp_operator_load_element(generics_fun_251->mParamTypes,-1);
                    generics_fun_method_block_result_type_264=generics_fun_method_block_lambda_type_263->mResultType->v1;
                    if(generics_fun_method_block_result_type_264->mClass->mMethodGenerics) {
                        method_generics_num_265=generics_fun_method_block_result_type_264->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_265,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_262)));
                    }
                    n_274=0;
                    for(                    o2_saved_275=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_263->mParamTypes)),it_276=list$1sTypeph_begin((o2_saved_275));                    !list$1sTypeph_end((o2_saved_275));                    it_276=list$1sTypeph_next((o2_saved_275))                    ){
                        if(it_276->mClass->mMethodGenerics) {
                            method_generics_num_277=it_276->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_277,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_261->mParamTypes,n_274), "20method.c", 273, 4)))));
                        }
                        n_274++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_275,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_278=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 278, "list$1CVALUEph"))));
                    i_279=0;
                    for(                    o2_saved_280=(params_239),it_283=list$1tuple2$2charphsNodephph_begin((o2_saved_280));                    !list$1tuple2$2charphsNodephph_end((o2_saved_280));                    it_283=list$1tuple2$2charphsNodephph_next((o2_saved_280))                    ){
                        multiple_assign_var1=it_283;
                        label_286=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                        node_287=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
                        if(i_279==0) {
                            list$1CVALUEph_push_back(come_params_278,(struct CVALUE*)come_increment_ref_count(obj_value_244));
                            i_279++;
                        }
                        else {
                            if(!node_compile(node_287,info)) {
                                __result177__ = (_Bool)0;
                                label_286 = come_decrement_ref_count2(label_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_287) { node_287 = come_decrement_ref_count2(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(method_block_lambda_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_block_result_type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_253 = come_decrement_ref_count2(generics_fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_248 = come_decrement_ref_count2(none_generics_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_249 = come_decrement_ref_count2(fun_name2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_250 = come_decrement_ref_count2(fun_name3_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result177__;
                            }
                            come_value_288=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_278,(struct CVALUE*)come_increment_ref_count(come_value_288));
                            /*i*/come_call_finalizer3(come_value_288,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_286 = come_decrement_ref_count2(label_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_287) { node_287 = come_decrement_ref_count2(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(generics_fun_251->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_289=generics_fun_251->mResultType->mClass->mMethodGenericsNum;
                        if(info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_289,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_274=0;
                    for(                    o2_saved_290=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_251->mParamTypes)),it_291=list$1sTypeph_begin((o2_saved_290));                    !list$1sTypeph_end((o2_saved_290));                    it_291=list$1sTypeph_next((o2_saved_290))                    ){
                        if(it_291->mClass->mMethodGenerics) {
                            method_generics_num_292=it_291->mClass->mMethodGenericsNum;
                            if(n_274<list$1CVALUEph_length(come_params_278)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_292,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_278,n_274)->type)));
                            }
                        }
                        n_274++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_290,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_293=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 317, "list$1CVALUEph"))));
                    i_294=0;
                    for(                    o2_saved_295=(params_239),it_296=list$1tuple2$2charphsNodephph_begin((o2_saved_295));                    !list$1tuple2$2charphsNodephph_end((o2_saved_295));                    it_296=list$1tuple2$2charphsNodephph_next((o2_saved_295))                    ){
                        multiple_assign_var2=it_296;
                        label_297=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_298=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(i_294==0) {
                            list$1CVALUEph_push_back(come_params_293,(struct CVALUE*)come_increment_ref_count(obj_value_244));
                            i_294++;
                        }
                        else {
                            if(!node_compile(node_298,info)) {
                                __result178__ = (_Bool)0;
                                label_297 = come_decrement_ref_count2(label_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(come_params_293,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_253 = come_decrement_ref_count2(generics_fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_248 = come_decrement_ref_count2(none_generics_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_249 = come_decrement_ref_count2(fun_name2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_250 = come_decrement_ref_count2(fun_name3_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result178__;
                            }
                            come_value_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_293,(struct CVALUE*)come_increment_ref_count(come_value_299));
                            /*i*/come_call_finalizer3(come_value_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_297 = come_decrement_ref_count2(label_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(generics_fun_251->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_300=generics_fun_251->mResultType->mClass->mMethodGenericsNum;
                        if(info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_300,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_301=0;
                    for(                    o2_saved_302=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_251->mParamTypes)),it_303=list$1sTypeph_begin((o2_saved_302));                    !list$1sTypeph_end((o2_saved_302));                    it_303=list$1sTypeph_next((o2_saved_302))                    ){
                        if(it_303->mClass->mMethodGenerics) {
                            method_generics_num_304=it_303->mClass->mMethodGenericsNum;
                            if(n_301<list$1CVALUEph_length(come_params_293)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_304,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_293,n_301)->type)));
                            }
                        }
                        n_301++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_302,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_293,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_253);
                generics_fun_name_253 = come_decrement_ref_count2(generics_fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_246;
        /*i*/come_call_finalizer3(type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_248 = come_decrement_ref_count2(none_generics_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_249 = come_decrement_ref_count2(fun_name2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_250 = come_decrement_ref_count2(fun_name3_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_305=obj_type_245->mClass;
    calling_dynamic_method_306=(_Bool)0;
    lambda_type_307=((void*)0);
    for(    o2_saved_308=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_305->mFields)),it_311=list$1tuple2$2charphsTypephph_begin((o2_saved_308));    !list$1tuple2$2charphsTypephph_end((o2_saved_308));    it_311=list$1tuple2$2charphsTypephph_next((o2_saved_308))    ){
        multiple_assign_var3=it_311;
        field_name_314=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_315=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(string_operator_equals(field_name_314,fun_name_238)&&string_operator_equals(field_type_315->mClass->mName,"lambda")) {
            calling_dynamic_method_306=(_Bool)1;
            lambda_type_307=field_type_315;
            field_name_314 = come_decrement_ref_count2(field_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_314 = come_decrement_ref_count2(field_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_308,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_306) {
        result_type_316=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_307->mResultType->v1));
        result_type_316->mStatic=(_Bool)0;
        come_params_317=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 380, "list$1CVALUEph"))));
        i_318=0;
        for(        o2_saved_319=(params_239),it_320=list$1tuple2$2charphsNodephph_begin((o2_saved_319));        !list$1tuple2$2charphsNodephph_end((o2_saved_319));        it_320=list$1tuple2$2charphsNodephph_next((o2_saved_319))        ){
            multiple_assign_var4=it_320;
            label_321=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_322=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(i_318==0) {
                list$1CVALUEph_push_back(come_params_317,(struct CVALUE*)come_increment_ref_count(obj_value_244));
                i_318++;
            }
            else {
                if(!node_compile(node_322,info)) {
                    __result185__ = (_Bool)0;
                    label_321 = come_decrement_ref_count2(label_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_322) { node_322 = come_decrement_ref_count2(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_316,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_317,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result185__;
                }
                come_value_323=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value277=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value275=charp_to_string(fun_name_238))),((char*)(__right_value276=int_to_string(i_318)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_307->mParamTypes,i_318-1), "20method.c", 397, 5)),come_value_323->type,come_value_323,(_Bool)0,(_Bool)1,info);
                __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_307->mParamTypes,i_318-1), "20method.c", 398, 6))->mHeap&&come_value_323->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_307->mParamTypes,i_318-1), "20method.c", 400, 7)),come_value_323->type,come_value_323,info,(_Bool)1);
                }
                list$1CVALUEph_push_back(come_params_317,(struct CVALUE*)come_increment_ref_count(come_value_323));
                i_318++;
                dec_stack_ptr(1,info);
                /*i*/come_call_finalizer3(come_value_323,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_321 = come_decrement_ref_count2(label_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_322) { node_322 = come_decrement_ref_count2(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_324=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 410, "buffer"))));
        buffer_append_str(buf_324,((char*)(__right_value280=xsprintf("%s->%s",obj_value_244->c_value,fun_name_238))));
        __right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_324,"(");
        j_325=0;
        for(        o2_saved_326=(struct list$1CVALUEph*)come_increment_ref_count((come_params_317)),it_329=list$1CVALUEph_begin((o2_saved_326));        !list$1CVALUEph_end((o2_saved_326));        it_329=list$1CVALUEph_next((o2_saved_326))        ){
            if(j_325==0) {
                __dec_obj158=it_329->c_value;
                it_329->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_329->c_value));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_324,it_329->c_value);
            if(j_325!=list$1CVALUEph_length(come_params_317)-1) {
                buffer_append_str(buf_324,",");
            }
            j_325++;
        }
        /*i*/come_call_finalizer3(o2_saved_326,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_324,")");
        come_value2_332=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 430, "CVALUE"))));
        __dec_obj159=come_value2_332->c_value;
        come_value2_332->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_324));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_333=(struct sType*)come_increment_ref_count(solve_generics(result_type_316,info->generics_type,info));
        __dec_obj160=come_value2_332->type;
        come_value2_332->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_333));
        /* a*/come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_332->type->mStatic=(_Bool)0;
        come_value2_332->var=((void*)0);
        if(result_type2_333->mHeap) {
            append_object_to_right_values2(come_value2_332,(struct sType*)come_increment_ref_count(result_type2_333),info,(_Bool)0);
        }
        add_come_last_code(info,"%s;\n",come_value2_332->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_332));
        /*i*/come_call_finalizer3(result_type_316,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_317,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_333,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_334=((void*)0);
        fun_335=((void*)0);
        if(charp_operator_equals(fun_name_238,"super")) {
            fun_name_238=((char*)(__right_value287=create_non_method_name(obj_type_245,(_Bool)0,info->come_fun->mName,info,(_Bool)1)));
            __right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            klass_336=obj_type_245->mClass;
            while(map$2charphsClassphp_operator_load_element(info->classes,klass_336->mParentClassName)) {
                klass_336=map$2charphsClassphp_operator_load_element(info->classes,klass_336->mParentClassName);
                __dec_obj161=generics_fun_name_334;
                generics_fun_name_334=(char*)come_increment_ref_count(create_method_name_using_class(klass_336,(_Bool)0,fun_name_238,info,(_Bool)1));
                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_335=map$2charphsFunph_at(info->funcs,generics_fun_name_334,((void*)0));
                if(fun_335) {
                    break;
                }
            }
        }
        else {
            if(obj_type_245&&obj_type_245->mNoSolvedGenericsType&&obj_type_245->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_245->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                __dec_obj162=generics_fun_name_334;
                generics_fun_name_334=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value290=make_generics_function(obj_type_245,(char*)come_increment_ref_count(__builtin_string(fun_name_238)),info,(_Bool)1)))));
                __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(list$1sTypeph_length(info->method_generics_types)>0) {
                    none_generics_name_337=(char*)come_increment_ref_count(get_none_generics_name(obj_type_245->mClass->mName));
                    fun_name3_338=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_337,fun_name_238));
                    __dec_obj163=generics_fun_name_334;
                    generics_fun_name_334=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value295=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_338)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)))));
                    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    none_generics_name_337 = come_decrement_ref_count2(none_generics_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name3_338 = come_decrement_ref_count2(fun_name3_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj164=generics_fun_name_334;
                    generics_fun_name_334=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value298=make_generics_function(obj_type_245,(char*)come_increment_ref_count(__builtin_string(fun_name_238)),info,(_Bool)1)))));
                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            for(            i_339=128;            i_339>=1;            i_339--            ){
                new_fun_name_340=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_334,i_339));
                fun_335=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_340);
                if(fun_335!=((void*)0)) {
                    __dec_obj165=generics_fun_name_334;
                    generics_fun_name_334=(char*)come_increment_ref_count(__builtin_string(new_fun_name_340));
                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_340 = come_decrement_ref_count2(new_fun_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_340 = come_decrement_ref_count2(new_fun_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(fun_335==((void*)0)) {
                obj_array_type_344=obj_type_245->mOriginalLoadVarType->v1;
                if(obj_array_type_344&&list$1sNodeph_length(obj_array_type_344->mArrayNum)>0) {
                    array_method_name_345=(char*)come_increment_ref_count(create_method_name(obj_array_type_344,(_Bool)0,fun_name_238,info,(_Bool)0));
                    fun_335=map$2charphsFunph_at(info->funcs,array_method_name_345,((void*)0));
                    if(fun_335) {
                        __dec_obj166=generics_fun_name_334;
                        generics_fun_name_334=(char*)come_increment_ref_count(__builtin_string(array_method_name_345));
                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_335=map$2charphsFunph_at(info->funcs,generics_fun_name_334,((void*)0));
                        if(fun_335==((void*)0)) {
                            __dec_obj167=generics_fun_name_334;
                            generics_fun_name_334=(char*)come_increment_ref_count(create_method_name(obj_type_245,(_Bool)0,((char*)(__right_value304=__builtin_string(fun_name_238))),info,(_Bool)1));
                            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_335=map$2charphsFunph_at(info->funcs,generics_fun_name_334,((void*)0));
                            if(fun_335==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_334,info->come_fun->mName);
                                __result196__ = (_Bool)1;
                                array_method_name_345 = come_decrement_ref_count2(array_method_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result196__;
                            }
                        }
                    }
                    array_method_name_345 = come_decrement_ref_count2(array_method_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_335=map$2charphsFunph_at(info->funcs,generics_fun_name_334,((void*)0));
                    if(fun_335==((void*)0)) {
                        __dec_obj168=generics_fun_name_334;
                        generics_fun_name_334=(char*)come_increment_ref_count(create_method_name(obj_type_245,(_Bool)0,((char*)(__right_value306=__builtin_string(fun_name_238))),info,(_Bool)1));
                        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_335=map$2charphsFunph_at(info->funcs,generics_fun_name_334,((void*)0));
                        if(fun_335==((void*)0)) {
                            klass_346=obj_type_245->mClass;
                            while(map$2charphsClassphp_operator_load_element(info->classes,klass_346->mParentClassName)) {
                                klass_346=map$2charphsClassphp_operator_load_element(info->classes,klass_346->mParentClassName);
                                __dec_obj169=generics_fun_name_334;
                                generics_fun_name_334=(char*)come_increment_ref_count(create_method_name_using_class(klass_346,(_Bool)0,fun_name_238,info,(_Bool)1));
                                __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_335=map$2charphsFunph_at(info->funcs,generics_fun_name_334,((void*)0));
                                if(fun_335) {
                                    break;
                                }
                            }
                        }
                        if(fun_335==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_334,info->come_fun->mName);
                            __result197__ = (_Bool)1;
                            generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result197__;
                        }
                    }
                }
            }
        }
        if(fun_335==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_334,info->come_fun->mName);
            __result198__ = (_Bool)1;
            generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result198__;
        }
        if(list$1sTypeph_length(fun_335->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result199__ = (_Bool)1;
            generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result199__;
        }
        result_type_347=(struct sType*)come_increment_ref_count(sType_clone(fun_335->mResultType));
        result_type_347->mStatic=(_Bool)0;
        result_type2_348=(struct sType*)come_increment_ref_count(solve_generics(result_type_347,info->generics_type,info));
        param_types_349=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 560, "list$1sTypeph"))));
        for(        o2_saved_350=(struct list$1sTypeph*)come_increment_ref_count((fun_335->mParamTypes)),it_351=list$1sTypeph_begin((o2_saved_350));        !list$1sTypeph_end((o2_saved_350));        it_351=list$1sTypeph_next((o2_saved_350))        ){
            if(it_351==((void*)0)) {
                list$1sTypeph_push_back(param_types_349,(struct sType*)come_increment_ref_count(sType_clone(it_351)));
            }
            else {
                it2_352=(struct sType*)come_increment_ref_count(solve_generics(it_351,info->generics_type,info));
                list$1sTypeph_push_back(param_types_349,(struct sType*)come_increment_ref_count(sType_clone(it2_352)));
                /*i*/come_call_finalizer3(it2_352,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        /*i*/come_call_finalizer3(o2_saved_350,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_353=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 572, "list$1CVALUEph"))));
        for(        i_354=0;        i_354<list$1sTypeph_length(fun_335->mParamTypes)-(method_block_241?2:0);        i_354++        ){
            list$1CVALUEph_add(come_params_353,((void*)0));
        }
        first_param_358=(_Bool)1;
        for(        o2_saved_359=(params_239),it_360=list$1tuple2$2charphsNodephph_begin((o2_saved_359));        !list$1tuple2$2charphsNodephph_end((o2_saved_359));        it_360=list$1tuple2$2charphsNodephph_next((o2_saved_359))        ){
            multiple_assign_var5=it_360;
            label_361=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_362=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(first_param_358) {
                first_param_358=(_Bool)0;
            }
            else {
                if(label_361) {
                    if(!node_compile(node_362,info)) {
                        __result201__ = (_Bool)0;
                        label_361 = come_decrement_ref_count2(label_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_353,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result201__;
                    }
                    come_value_363=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    n_364=0;
                    for(                    o2_saved_365=(struct list$1charph*)come_increment_ref_count((fun_335->mParamNames)),it_368=list$1charph_begin((o2_saved_365));                    !list$1charph_end((o2_saved_365));                    it_368=list$1charph_next((o2_saved_365))                    ){
                        if(string_operator_equals(label_361,it_368)) {
                            break;
                        }
                        n_364++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_365,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(list$1sTypephp_operator_load_element(param_types_349,n_364)) {
                        check_assign_type(((char*)(__right_value324=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value322=charp_to_string(fun_name_238))),((char*)(__right_value323=int_to_string(n_364)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,n_364), "20method.c", 603, 8)),come_value_363->type,come_value_363,(_Bool)0,(_Bool)1,info);
                        __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(list$1sTypephp_operator_load_element(param_types_349,n_364)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,n_364), "20method.c", 605, 9))->mHeap&&come_value_363->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,n_364), "20method.c", 606, 10)),come_value_363->type,come_value_363,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_353,n_364,(struct CVALUE*)come_increment_ref_count(come_value_363));
                    /*i*/come_call_finalizer3(come_value_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_361 = come_decrement_ref_count2(label_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        i_376=0;
        for(        o2_saved_377=(params_239),it_378=list$1tuple2$2charphsNodephph_begin((o2_saved_377));        !list$1tuple2$2charphsNodephph_end((o2_saved_377));        it_378=list$1tuple2$2charphsNodephph_next((o2_saved_377))        ){
            multiple_assign_var6=it_378;
            label_379=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_380=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            if(i_376==0) {
                check_assign_type(((char*)(__right_value327=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value325=charp_to_string(fun_name_238))),((char*)(__right_value326=int_to_string(i_376)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 618, 11)),obj_value_244->type,obj_value_244,(_Bool)0,(_Bool)1,info);
                __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 619, 12))->mHeap&&obj_value_244->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 620, 13)),obj_value_244->type,obj_value_244,info,(_Bool)1);
                }
                else {
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 622, 14))->mHeap&&!obj_value_244->type->mHeap&&!gComeGC) {
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_335->mParamNames,i_376), "20method.c", 623, 15)));
                        exit(2);
                    }
                }
                list$1CVALUEph_replace(come_params_353,i_376,(struct CVALUE*)come_increment_ref_count(obj_value_244));
                i_376++;
            }
            else {
                if(label_379) {
                }
                else {
                    if(!node_compile(node_380,info)) {
                        __result212__ = (_Bool)0;
                        label_379 = come_decrement_ref_count2(label_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_353,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result212__;
                    }
                    come_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(list$1CVALUEphp_operator_load_element(come_params_353,i_376)==((void*)0)) {
                            break;
                        }
                        else {
                            i_376++;
                        }
                    }
                    if(list$1sTypephp_operator_load_element(param_types_349,i_376)) {
                        check_assign_type(((char*)(__right_value331=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value329=charp_to_string(fun_name_238))),((char*)(__right_value330=int_to_string(i_376)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 650, 16)),come_value_384->type,come_value_384,(_Bool)0,(_Bool)1,info);
                        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(list$1sTypephp_operator_load_element(param_types_349,i_376)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 652, 17))->mHeap&&come_value_384->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 653, 18)),come_value_384->type,come_value_384,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_353,i_376,(struct CVALUE*)come_increment_ref_count(come_value_384));
                    i_376++;
                    /*i*/come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_379 = come_decrement_ref_count2(label_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        while((_Bool)1) {
            if(list$1CVALUEphp_operator_load_element(come_params_353,i_376)==((void*)0)) {
                break;
            }
            else {
                i_376++;
            }
        }
        obj_array_type_385=obj_type_245->mOriginalLoadVarType->v1;
        if(obj_array_type_385&&list$1sNodeph_length(obj_array_type_385->mArrayNum)>0) {
            array_method_name_386=(char*)come_increment_ref_count(create_method_name(obj_array_type_385,(_Bool)0,fun_name_238,info,(_Bool)0));
            if(string_operator_equals(generics_fun_name_334,array_method_name_386)) {
                if(charp_operator_equals(fun_name_238,"to_pointer")) {
                    buf_387=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 675, "buffer"))));
                    i_388=0;
                    for(                    o2_saved_389=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_385->mArrayNum)),it_392=list$1sNodeph_begin((o2_saved_389));                    !list$1sNodeph_end((o2_saved_389));                    it_392=list$1sNodeph_next((o2_saved_389))                    ){
                        if(!node_compile(it_392,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_395=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_387,((char*)(__right_value336=xsprintf("%s",come_value_395->c_value))));
                        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(i_388!=list$1sNodeph_length(obj_array_type_385->mArrayNum)-1) {
                            buffer_append_str(buf_387,"*");
                        }
                        i_388++;
                        /*i*/come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_389,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 695, "CVALUE"))));
                    __dec_obj174=come_value_396->c_value;
                    come_value_396->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_387));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_396->var=((void*)0);
                    __dec_obj175=come_value_396->type;
                    come_value_396->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 699, "sType")),"long",(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_353,1,(struct CVALUE*)come_increment_ref_count(come_value_396));
                    list$1tuple2$2charphsNodephph_push_back(params_239,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 702, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*i*/come_call_finalizer3(buf_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(charp_operator_equals(fun_name_238,"length")) {
                        buf_400=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 705, "buffer"))));
                        i_401=0;
                        for(                        o2_saved_402=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_385->mArrayNum)),it_403=list$1sNodeph_begin((o2_saved_402));                        !list$1sNodeph_end((o2_saved_402));                        it_403=list$1sNodeph_next((o2_saved_402))                        ){
                            if(!node_compile(it_403,info)) {
                                err_msg(info,"invalid array num");
                                exit(1);
                            }
                            come_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_400,((char*)(__right_value351=xsprintf("%s",come_value_404->c_value))));
                            __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(i_401!=list$1sNodeph_length(obj_array_type_385->mArrayNum)-1) {
                                buffer_append_str(buf_400,"*");
                            }
                            i_401++;
                            /*i*/come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(o2_saved_402,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 724, "CVALUE"))));
                        __dec_obj181=come_value_405->c_value;
                        come_value_405->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_400));
                        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_value_405->var=((void*)0);
                        __dec_obj182=come_value_405->type;
                        come_value_405->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 728, "sType")),"long",(_Bool)0,info));
                        /* a*/come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
                        list$1CVALUEph_replace(come_params_353,1,(struct CVALUE*)come_increment_ref_count(come_value_405));
                        list$1tuple2$2charphsNodephph_push_back(params_239,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 731, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                        /*i*/come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(charp_operator_equals(fun_name_238,"to_buffer")) {
                            buf_406=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 734, "buffer"))));
                            i_407=0;
                            for(                            o2_saved_408=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_385->mArrayNum)),it_409=list$1sNodeph_begin((o2_saved_408));                            !list$1sNodeph_end((o2_saved_408));                            it_409=list$1sNodeph_next((o2_saved_408))                            ){
                                if(!node_compile(it_409,info)) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                                dec_stack_ptr(1,info);
                                buffer_append_str(buf_406,((char*)(__right_value363=xsprintf("%s",come_value_410->c_value))));
                                __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                if(i_407!=list$1sNodeph_length(obj_array_type_385->mArrayNum)-1) {
                                    buffer_append_str(buf_406,"*");
                                }
                                i_407++;
                                /*i*/come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(o2_saved_408,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 753, "CVALUE"))));
                            __dec_obj183=come_value_411->c_value;
                            come_value_411->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_406));
                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                            come_value_411->var=((void*)0);
                            __dec_obj184=come_value_411->type;
                            come_value_411->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 757, "sType")),"long",(_Bool)0,info));
                            /* a*/come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
                            list$1CVALUEph_replace(come_params_353,1,(struct CVALUE*)come_increment_ref_count(come_value_411));
                            list$1tuple2$2charphsNodephph_push_back(params_239,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 760, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                            /*i*/come_call_finalizer3(buf_406,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(charp_operator_equals(fun_name_238,"to_list")) {
                                buf_412=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 763, "buffer"))));
                                i_413=0;
                                for(                                o2_saved_414=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_385->mArrayNum)),it_415=list$1sNodeph_begin((o2_saved_414));                                !list$1sNodeph_end((o2_saved_414));                                it_415=list$1sNodeph_next((o2_saved_414))                                ){
                                    if(!node_compile(it_415,info)) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_416=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                                    dec_stack_ptr(1,info);
                                    buffer_append_str(buf_412,((char*)(__right_value375=xsprintf("%s",come_value_416->c_value))));
                                    __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    if(i_413!=list$1sNodeph_length(obj_array_type_385->mArrayNum)-1) {
                                        buffer_append_str(buf_412,"*");
                                    }
                                    i_413++;
                                    /*i*/come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                /*i*/come_call_finalizer3(o2_saved_414,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 782, "CVALUE"))));
                                __dec_obj185=come_value_417->c_value;
                                come_value_417->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_412));
                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                come_value_417->var=((void*)0);
                                __dec_obj186=come_value_417->type;
                                come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 786, "sType")),"long",(_Bool)0,info));
                                /* a*/come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
                                list$1CVALUEph_replace(come_params_353,1,(struct CVALUE*)come_increment_ref_count(come_value_417));
                                list$1tuple2$2charphsNodephph_push_back(params_239,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 789, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                                /*i*/come_call_finalizer3(buf_412,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(charp_operator_equals(fun_name_238,"to_vector")) {
                                    buf_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 792, "buffer"))));
                                    i_419=0;
                                    for(                                    o2_saved_420=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_385->mArrayNum)),it_421=list$1sNodeph_begin((o2_saved_420));                                    !list$1sNodeph_end((o2_saved_420));                                    it_421=list$1sNodeph_next((o2_saved_420))                                    ){
                                        if(!node_compile(it_421,info)) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_422=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                                        dec_stack_ptr(1,info);
                                        buffer_append_str(buf_418,((char*)(__right_value387=xsprintf("%s",come_value_422->c_value))));
                                        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        if(i_419!=list$1sNodeph_length(obj_array_type_385->mArrayNum)-1) {
                                            buffer_append_str(buf_418,"*");
                                        }
                                        i_419++;
                                        /*i*/come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    /*i*/come_call_finalizer3(o2_saved_420,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 811, "CVALUE"))));
                                    __dec_obj187=come_value_423->c_value;
                                    come_value_423->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_418));
                                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    come_value_423->var=((void*)0);
                                    __dec_obj188=come_value_423->type;
                                    come_value_423->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 815, "sType")),"long",(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    list$1CVALUEph_replace(come_params_353,1,(struct CVALUE*)come_increment_ref_count(come_value_423));
                                    list$1tuple2$2charphsNodephph_push_back(params_239,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 818, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                                    /*i*/come_call_finalizer3(buf_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
            array_method_name_386 = come_decrement_ref_count2(array_method_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(list$1tuple2$2charphsNodephph_length(params_239)<list$1sTypeph_length(fun_335->mParamTypes)+(method_block_241?-2:0)) {
            for(            ;            i_376<list$1sTypeph_length(fun_335->mParamTypes)+(method_block_241?-2:0);            i_376++            ){
                default_param_424=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_335->mParamDefaultParametors,i_376)));
                param_name_425=((char*)come_null_check(list$1charphp_operator_load_element(fun_335->mParamNames,i_376), "20method.c", 827, 19));
                if(default_param_424&&string_operator_not_equals(default_param_424,"")&&list$1CVALUEphp_operator_load_element(come_params_353,i_376)==((void*)0)) {
                    source_426=(struct buffer*)come_increment_ref_count(info->source);
                    p_427=info->p;
                    head_428=info->head;
                    sline_429=info->sline;
                    __dec_obj189=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_424));
                    /* a*/come_call_finalizer3(__dec_obj189,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_430=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(!node_compile(node_430,info)) {
                        __result221__ = (_Bool)0;
                        /*i*/come_call_finalizer3(source_426,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_424 = come_decrement_ref_count2(default_param_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_353,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result221__;
                    }
                    __dec_obj190=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_426);
                    /* a*/come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_427;
                    info->head=head_428;
                    info->sline=sline_429;
                    come_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 851, 20))) {
                        check_assign_type(((char*)(__right_value402=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value400=charp_to_string(fun_name_238))),((char*)(__right_value401=int_to_string(i_376)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 852, 21)),come_value_431->type,come_value_431,(_Bool)0,(_Bool)1,info);
                        __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 854, 22))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 854, 23))->mHeap&&come_value_431->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_349,i_376), "20method.c", 855, 24)),come_value_431->type,come_value_431,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_353,i_376,(struct CVALUE*)come_increment_ref_count(come_value_431));
                    dec_stack_ptr(1,info);
                    /*i*/come_call_finalizer3(source_426,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(list$1CVALUEphp_operator_load_element(come_params_353,i_376)==((void*)0)) {
                        err_msg(info,"require parametor(%s) %d",fun_335->mName,i_376);
                        __result222__ = (_Bool)0;
                        default_param_424 = come_decrement_ref_count2(default_param_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_353,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result222__;
                    }
                }
                default_param_424 = come_decrement_ref_count2(default_param_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(method_block_241) {
            if(!compile_method_block(method_block_241,(struct list$1CVALUEph*)come_increment_ref_count(come_params_353),fun_335,fun_name_238,method_block_sline_242,info,(_Bool)0)) {
                __result223__ = (_Bool)0;
                generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_353,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result223__;
            }
        }
        buf_432=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 875, "buffer"))));
        buffer_append_str(buf_432,generics_fun_name_334);
        buffer_append_str(buf_432,"(");
        j_433=0;
        for(        o2_saved_434=(struct list$1CVALUEph*)come_increment_ref_count((come_params_353)),it_435=list$1CVALUEph_begin((o2_saved_434));        !list$1CVALUEph_end((o2_saved_434));        it_435=list$1CVALUEph_next((o2_saved_434))        ){
            buffer_append_str(buf_432,it_435->c_value);
            if(j_433!=list$1CVALUEph_length(come_params_353)-1) {
                buffer_append_str(buf_432,",");
            }
            j_433++;
        }
        /*i*/come_call_finalizer3(o2_saved_434,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_432,")");
        come_value2_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 894, "CVALUE"))));
        __dec_obj191=come_value2_436->c_value;
        come_value2_436->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_432));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj192=come_value2_436->type;
        come_value2_436->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_348));
        /* a*/come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_436->type->mStatic=(_Bool)0;
        come_value2_436->var=((void*)0);
        if(result_type2_348->mHeap) {
            append_object_to_right_values2(come_value2_436,(struct sType*)come_increment_ref_count(result_type2_348),info,(_Bool)0);
        }
        __dec_obj193=come_value2_436->c_value;
        come_value2_436->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_436->c_value,come_value2_436->type,info));
        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value2_436->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_436));
        if(method_block_241) {
            var_name_437=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->num_current_stack));
            result_type_438=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
            result_type2_439=(struct sType*)come_increment_ref_count(solve_generics(result_type_438,info->generics_type,info));
            result_type3_440=result_type2_439->mNoSolvedGenericsType->v1;
            if(result_type2_439->mNoSolvedGenericsType->v1) {
                result_type3_440=result_type2_439->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_440=result_type2_439;
            }
            var_name_437 = come_decrement_ref_count2(var_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_439,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(is_contained_method_generics_types(obj_type_245,info)&&generics_fun_name_334) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_334);
        }
        generics_fun_name_334 = come_decrement_ref_count2(generics_fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_353,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_432,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj194=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_243);
    /* a*/come_call_finalizer3(__dec_obj194,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result224__ = (_Bool)1;
    /*i*/come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result224__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result154__;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_230;
struct list_item$1tuple2$2charphsNodephph* it_231;
void* __right_value236 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result159__;
    if(self==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    result_230=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 137, "list$1tuple2$2charphsNodephph"))));
    it_231=self->head;
    while(it_231!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_230,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_231->item)));
        it_231=it_231->next;
    }
    __result159__ = gComeFunResultObject = __result_obj__ = result_230;
    /*i*/come_call_finalizer3(result_230,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result155__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_228;
struct list_item$1tuple2$2charphsNodephph* prev_it_229;
    it_228=self->head;
    while(it_228!=((void*)0)) {
        prev_it_229=it_228;
        it_228=it_228->next;
        /*i*/come_call_finalizer3(prev_it_229,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj127;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj127=self->item;
            /* a*/come_call_finalizer3(__dec_obj127,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_232;
struct tuple2$2charphsNodeph* __dec_obj130;
void* __right_value231 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_233;
struct tuple2$2charphsNodeph* __dec_obj133;
void* __right_value232 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_234;
struct tuple2$2charphsNodeph* __dec_obj136;
struct list$1tuple2$2charphsNodephph* __result156__;
    if(self->len==0) {
        litem_232=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value230=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1tuple2$2charphsNodephph"))));
        litem_232->prev=((void*)0);
        litem_232->next=((void*)0);
        __dec_obj130=litem_232->item;
        litem_232->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj130,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_232;
        self->head=litem_232;
    }
    else {
        if(self->len==1) {
            litem_233=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value231=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1tuple2$2charphsNodephph"))));
            litem_233->prev=self->head;
            litem_233->next=((void*)0);
            __dec_obj133=litem_233->item;
            litem_233->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj133,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_233;
            self->head->next=litem_233;
        }
        else {
            litem_234=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value232=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1tuple2$2charphsNodephph"))));
            litem_234->prev=self->tail;
            litem_234->next=((void*)0);
            __dec_obj136=litem_234->item;
            litem_234->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj136,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_234;
            self->tail=litem_234;
        }
    }
    self->len++;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj137;
struct sNode* __dec_obj138;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj137=self->v1;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj138=self->v2;
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result157__;
void* __right_value233 = (void*)0;
struct tuple2$2charphsNodeph* result_235;
void* __right_value234 = (void*)0;
char* __dec_obj139;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj140;
struct tuple2$2charphsNodeph* __result158__;
    if(self==(void*)0) {
        __result157__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_235=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj139=result_235->v1;
        result_235->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj140=result_235->v2;
        result_235->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result158__ = gComeFunResultObject = __result_obj__ = result_235;
    /*i*/come_call_finalizer3(result_235,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj141;
struct sNode* __dec_obj142;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj141=self->v1;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj142=self->v2;
            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_236;
struct list_item$1tuple2$2charphsNodephph* prev_it_237;
    it_236=self->head;
    while(it_236!=((void*)0)) {
        prev_it_237=it_236;
        it_236=it_236->next;
        /*i*/come_call_finalizer3(prev_it_237,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result163__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_258;
int i_259;
struct CVALUE* __result165__;
struct CVALUE* default_value_260;
struct CVALUE* __result166__;
default_value_260 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_258=self->head;
    i_259=0;
    while(it_258!=((void*)0)) {
        if(position==i_259) {
            __result165__ = gComeFunResultObject = __result_obj__ = it_258->item;
            gComeFunResultObject = (void*)0;
            return __result165__;
        }
        it_258=it_258->next;
        i_259++;
    }
    memset(&default_value_260,0,sizeof(struct CVALUE*));
    __result166__ = gComeFunResultObject = __result_obj__ = default_value_260;
    /*i*/come_call_finalizer3(default_value_260,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result170__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result170__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_266;
int i_267;
struct sType* default_value_268;
struct list$1sTypeph* __result168__;
struct list_item$1sTypeph* it_272;
int i_273;
struct sType* __dec_obj157;
struct list$1sTypeph* __result169__;
default_value_268 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_266=self->len;
        for(        i_267=0;        i_267<position-len_266;        i_267++        ){
            memset(&default_value_268,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_268));
            /*i*/come_call_finalizer3(default_value_268,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result168__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    it_272=self->head;
    i_273=0;
    while(it_272!=((void*)0)) {
        if(position==i_273) {
            __dec_obj157=it_272->item;
            it_272->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_272=it_272->next;
        i_273++;
    }
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
struct list_item$1sTypeph* litem_269;
struct sType* __dec_obj154;
void* __right_value258 = (void*)0;
struct list_item$1sTypeph* litem_270;
struct sType* __dec_obj155;
void* __right_value259 = (void*)0;
struct list_item$1sTypeph* litem_271;
struct sType* __dec_obj156;
struct list$1sTypeph* __result167__;
    if(self->len==0) {
        litem_269=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value257=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_269->prev=((void*)0);
        litem_269->next=((void*)0);
        __dec_obj154=litem_269->item;
        litem_269->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_269;
        self->head=litem_269;
    }
    else {
        if(self->len==1) {
            litem_270=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value258=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_270->prev=self->head;
            litem_270->next=((void*)0);
            __dec_obj155=litem_270->item;
            litem_270->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_270;
            self->head->next=litem_270;
        }
        else {
            litem_271=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value259=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_271->prev=self->tail;
            litem_271->next=((void*)0);
            __dec_obj156=litem_271->item;
            litem_271->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_271;
            self->tail=litem_271;
        }
    }
    self->len++;
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_281;
struct tuple2$2charphsNodeph* __result171__;
struct tuple2$2charphsNodeph* __result172__;
struct tuple2$2charphsNodeph* result_282;
struct tuple2$2charphsNodeph* __result173__;
result_281 = (void*)0;
result_282 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_281,0,sizeof(struct tuple2$2charphsNodeph*));
        __result171__ = gComeFunResultObject = __result_obj__ = result_281;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    self->it=self->head;
    if(self->it) {
        __result172__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    memset(&result_282,0,sizeof(struct tuple2$2charphsNodeph*));
    __result173__ = gComeFunResultObject = __result_obj__ = result_282;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_284;
struct tuple2$2charphsNodeph* __result174__;
struct tuple2$2charphsNodeph* __result175__;
struct tuple2$2charphsNodeph* result_285;
struct tuple2$2charphsNodeph* __result176__;
result_284 = (void*)0;
result_285 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_284,0,sizeof(struct tuple2$2charphsNodeph*));
        __result174__ = gComeFunResultObject = __result_obj__ = result_284;
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result175__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    memset(&result_285,0,sizeof(struct tuple2$2charphsNodeph*));
    __result176__ = gComeFunResultObject = __result_obj__ = result_285;
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_309;
struct tuple2$2charphsTypeph* __result179__;
struct tuple2$2charphsTypeph* __result180__;
struct tuple2$2charphsTypeph* result_310;
struct tuple2$2charphsTypeph* __result181__;
result_309 = (void*)0;
result_310 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_309,0,sizeof(struct tuple2$2charphsTypeph*));
        __result179__ = gComeFunResultObject = __result_obj__ = result_309;
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    self->it=self->head;
    if(self->it) {
        __result180__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    memset(&result_310,0,sizeof(struct tuple2$2charphsTypeph*));
    __result181__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_312;
struct tuple2$2charphsTypeph* __result182__;
struct tuple2$2charphsTypeph* __result183__;
struct tuple2$2charphsTypeph* result_313;
struct tuple2$2charphsTypeph* __result184__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_312,0,sizeof(struct tuple2$2charphsTypeph*));
        __result182__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result183__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    memset(&result_313,0,sizeof(struct tuple2$2charphsTypeph*));
    __result184__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_327;
struct CVALUE* __result186__;
struct CVALUE* __result187__;
struct CVALUE* result_328;
struct CVALUE* __result188__;
result_327 = (void*)0;
result_328 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_327,0,sizeof(struct CVALUE*));
        __result186__ = gComeFunResultObject = __result_obj__ = result_327;
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    self->it=self->head;
    if(self->it) {
        __result187__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    memset(&result_328,0,sizeof(struct CVALUE*));
    __result188__ = gComeFunResultObject = __result_obj__ = result_328;
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_330;
struct CVALUE* __result189__;
struct CVALUE* __result190__;
struct CVALUE* result_331;
struct CVALUE* __result191__;
result_330 = (void*)0;
result_331 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_330,0,sizeof(struct CVALUE*));
        __result189__ = gComeFunResultObject = __result_obj__ = result_330;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result190__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    memset(&result_331,0,sizeof(struct CVALUE*));
    __result191__ = gComeFunResultObject = __result_obj__ = result_331;
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_341;
unsigned int hash_342;
unsigned int it_343;
struct sFun* __result192__;
struct sFun* __result193__;
struct sFun* __result194__;
struct sFun* __result195__;
default_value_341 = (void*)0;
    memset(&default_value_341,0,sizeof(struct sFun*));
    hash_342=string_get_hash_key(((char*)key))%self->size;
    it_343=hash_342;
    while((_Bool)1) {
        if(self->item_existance[it_343]) {
            if(string_equals(self->keys[it_343],key)) {
                __result192__ = gComeFunResultObject = __result_obj__ = self->items[it_343];
                /*i*/come_call_finalizer3(default_value_341,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result192__;
            }
            it_343++;
            if(it_343>=self->size) {
                it_343=0;
            }
            else {
                if(it_343==hash_342) {
                    __result193__ = gComeFunResultObject = __result_obj__ = default_value_341;
                    /*i*/come_call_finalizer3(default_value_341,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result193__;
                }
            }
        }
        else {
            __result194__ = gComeFunResultObject = __result_obj__ = default_value_341;
            /*i*/come_call_finalizer3(default_value_341,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result194__;
        }
    }
    __result195__ = gComeFunResultObject = __result_obj__ = default_value_341;
    /*i*/come_call_finalizer3(default_value_341,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj170;
void* __right_value319 = (void*)0;
struct list_item$1CVALUEph* litem_356;
struct CVALUE* __dec_obj171;
void* __right_value320 = (void*)0;
struct list_item$1CVALUEph* litem_357;
struct CVALUE* __dec_obj172;
struct list$1CVALUEph* __result200__;
    if(self->len==0) {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1CVALUEph"))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj170=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head=litem_355;
    }
    else {
        if(self->len==1) {
            litem_356=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value319=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1CVALUEph"))));
            litem_356->prev=self->head;
            litem_356->next=((void*)0);
            __dec_obj171=litem_356->item;
            litem_356->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_356;
            self->head->next=litem_356;
        }
        else {
            litem_357=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value320=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1CVALUEph"))));
            litem_357->prev=self->tail;
            litem_357->next=((void*)0);
            __dec_obj172=litem_357->item;
            litem_357->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_357;
            self->tail=litem_357;
        }
    }
    self->len++;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_366;
char* __result202__;
char* __result203__;
char* result_367;
char* __result204__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result202__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    self->it=self->head;
    if(self->it) {
        __result203__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    memset(&result_367,0,sizeof(char*));
    __result204__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_369;
char* __result205__;
char* __result206__;
char* result_370;
char* __result207__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result205__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result206__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    memset(&result_370,0,sizeof(char*));
    __result207__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_371;
int i_372;
struct CVALUE* default_value_373;
struct list$1CVALUEph* __result208__;
struct list_item$1CVALUEph* it_374;
int i_375;
struct CVALUE* __dec_obj173;
struct list$1CVALUEph* __result209__;
default_value_373 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_371=self->len;
        for(        i_372=0;        i_372<position-len_371;        i_372++        ){
            memset(&default_value_373,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_373));
            /*i*/come_call_finalizer3(default_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result208__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    it_374=self->head;
    i_375=0;
    while(it_374!=((void*)0)) {
        if(position==i_375) {
            __dec_obj173=it_374->item;
            it_374->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_374=it_374->next;
        i_375++;
    }
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_381;
int i_382;
char* __result210__;
char* default_value_383;
char* __result211__;
default_value_383 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_381=self->head;
    i_382=0;
    while(it_381!=((void*)0)) {
        if(position==i_382) {
            __result210__ = gComeFunResultObject = __result_obj__ = it_381->item;
            gComeFunResultObject = (void*)0;
            return __result210__;
        }
        it_381=it_381->next;
        i_382++;
    }
    memset(&default_value_383,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = default_value_383;
    default_value_383 = come_decrement_ref_count2(default_value_383, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_390;
struct sNode* __result213__;
struct sNode* __result214__;
struct sNode* result_391;
struct sNode* __result215__;
result_390 = (void*)0;
result_391 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_390,0,sizeof(struct sNode*));
        __result213__ = gComeFunResultObject = __result_obj__ = result_390;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    self->it=self->head;
    if(self->it) {
        __result214__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    memset(&result_391,0,sizeof(struct sNode*));
    __result215__ = gComeFunResultObject = __result_obj__ = result_391;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_393;
struct sNode* __result216__;
struct sNode* __result217__;
struct sNode* result_394;
struct sNode* __result218__;
result_393 = (void*)0;
result_394 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_393,0,sizeof(struct sNode*));
        __result216__ = gComeFunResultObject = __result_obj__ = result_393;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result217__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    memset(&result_394,0,sizeof(struct sNode*));
    __result218__ = gComeFunResultObject = __result_obj__ = result_394;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_397;
struct tuple2$2charphsNodeph* __dec_obj176;
void* __right_value343 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_398;
struct tuple2$2charphsNodeph* __dec_obj177;
void* __right_value344 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_399;
struct tuple2$2charphsNodeph* __dec_obj178;
struct list$1tuple2$2charphsNodephph* __result219__;
    if(self->len==0) {
        litem_397=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value342=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple2$2charphsNodephph"))));
        litem_397->prev=((void*)0);
        litem_397->next=((void*)0);
        __dec_obj176=litem_397->item;
        litem_397->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj176,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_397;
        self->head=litem_397;
    }
    else {
        if(self->len==1) {
            litem_398=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value343=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple2$2charphsNodephph"))));
            litem_398->prev=self->head;
            litem_398->next=((void*)0);
            __dec_obj177=litem_398->item;
            litem_398->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj177,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_398;
            self->head->next=litem_398;
        }
        else {
            litem_399=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value344=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple2$2charphsNodephph"))));
            litem_399->prev=self->tail;
            litem_399->next=((void*)0);
            __dec_obj178=litem_399->item;
            litem_399->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj178,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_399;
            self->tail=litem_399;
        }
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj179;
struct tuple2$2charphvoidp* __result220__;
    __dec_obj179=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj180;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj180=self->v1;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_441;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
_Bool parse_method_generics_type_442;
char* p_443;
int sline_444;
void* __right_value418 = (void*)0;
char* word_445;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct list$1sTypeph* method_generics_types_446;
void* __right_value421 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_447;
char* name_448;
_Bool err_449;
void* __right_value422 = (void*)0;
char* p_450;
int sline_451;
_Bool err_flag_452;
void* __right_value423 = (void*)0;
char* label_453;
void* __right_value424 = (void*)0;
char* __dec_obj199;
char* __dec_obj200;
_Bool no_comma_454;
_Bool in_fun_param_455;
void* __right_value425 = (void*)0;
struct sNode* node_456;
void* __right_value426 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct buffer* method_block_457;
int method_block_sline_458;
char* head_459;
void* __right_value429 = (void*)0;
char* tail_460;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct buffer* __dec_obj202;
int len_461;
void* __right_value432 = (void*)0;
char* mem_462;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value443 = (void*)0;
struct sNode* node_463;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj215;
struct sNode* __result228__;
    params_441=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 941, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 942, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(*info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_442=(_Bool)0;
    {
        p_443=info->p;
        sline_444=info->sline;
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_445=(char*)come_increment_ref_count(parse_word(info));
                if(is_type_name(word_445,info)) {
                    parse_method_generics_type_442=(_Bool)1;
                }
                word_445 = come_decrement_ref_count2(word_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_443;
        info->sline=sline_444;
    }
    method_generics_types_446=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 972, "list$1sTypeph"))));
    if(parse_method_generics_type_442&&*info->p==60) {
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
                        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value421=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_447=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                        name_448=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                        err_449=multiple_assign_var7->v3;
                        /*g*/come_call_finalizer3(__right_value421,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_449) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_446,(struct sType*)come_increment_ref_count(sType_clone(type_447)));
                        /*i*/come_call_finalizer3(type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_448 = come_decrement_ref_count2(name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(*info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_450=info->p;
            sline_451=info->sline;
            err_flag_452=(_Bool)0;
            label_453=(char*)come_increment_ref_count(__builtin_string(""));
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj199=label_453;
                label_453=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_452=(_Bool)1;
            }
            if(err_flag_452==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj200=label_453;
                label_453=((void*)0);
                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_450;
                info->sline=sline_451;
            }
            no_comma_454=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_455=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_456=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj201=node_456;
            node_456=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_456),info));
            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
            info->in_fun_param=in_fun_param_455;
            info->no_comma=no_comma_454;
            list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1048, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_453),(struct sNode*)come_increment_ref_count(node_456))));
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_453 = come_decrement_ref_count2(label_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_456) { node_456 = come_decrement_ref_count2(node_456, ((struct sNode*)node_456)->finalize, ((struct sNode*)node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_453 = come_decrement_ref_count2(label_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_456) { node_456 = come_decrement_ref_count2(node_456, ((struct sNode*)node_456)->finalize, ((struct sNode*)node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_457=((void*)0);
    method_block_sline_458=0;
    if(*info->p==123) {
        head_459=info->p;
        method_block_sline_458=info->sline;
        ((char*)(__right_value429=skip_block(info)));
        __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_460=info->p;
        __dec_obj202=method_block_457;
        method_block_457=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1072, "buffer"))));
        /* a*/come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_461=tail_460-head_459;
        mem_462=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_461+1)), "20method.c", 1075, "char"));
        memcpy(mem_462,head_459,len_461);
        mem_462[len_461]=0;
        buffer_append_str(method_block_457,mem_462);
        buffer_append_str(method_block_457,"\n");
        mem_462 = come_decrement_ref_count2(mem_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1085, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(__right_value435=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1085, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_441),method_block_457,method_block_sline_458,method_generics_types_446,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_463=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value435,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj215=node_463;
    node_463=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_463),info));
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); }
    __result228__ = gComeFunResultObject = __result_obj__ = node_463;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj195;
struct sNode* __dec_obj196;
struct tuple2$2charphsNodeph* __result225__;
    __dec_obj195=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj197;
char* __dec_obj198;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj197=self->v1;
            /* a*/come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj198=self->v2;
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj203;
struct sNode* __dec_obj204;
char* __dec_obj205;
struct list$1tuple2$2charphsNodephph* __dec_obj206;
struct buffer* __dec_obj207;
struct list$1sTypeph* __dec_obj208;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj203=self->sname;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        if(self->obj==gComeFunResultObject) {
            __dec_obj204=self->obj;
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(self->fun_name==gComeFunResultObject) {
            __dec_obj205=self->fun_name;
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        if(self->params==gComeFunResultObject) {
            __dec_obj206=self->params;
            /* a*/come_call_finalizer3(__dec_obj206,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(self->method_block==gComeFunResultObject) {
            __dec_obj207=self->method_block;
            /* a*/come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(self->method_generics_types==gComeFunResultObject) {
            __dec_obj208=self->method_generics_types;
            /* a*/come_call_finalizer3(__dec_obj208,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result226__;
void* __right_value436 = (void*)0;
struct sMethodCallNode* result_464;
void* __right_value437 = (void*)0;
char* __dec_obj209;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj210;
void* __right_value439 = (void*)0;
char* __dec_obj211;
void* __right_value440 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj212;
void* __right_value441 = (void*)0;
struct buffer* __dec_obj213;
void* __right_value442 = (void*)0;
struct list$1sTypeph* __dec_obj214;
struct sMethodCallNode* __result227__;
    if(self==(void*)0) {
        __result226__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_464=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"));
    if(self!=((void*)0)) {
        result_464->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj209=result_464->sname;
        result_464->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj210=result_464->obj;
        result_464->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj211=result_464->fun_name;
        result_464->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj212=result_464->params;
        result_464->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        /* a*/come_call_finalizer3(__dec_obj212,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj213=result_464->method_block;
        result_464->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /* a*/come_call_finalizer3(__dec_obj213,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_464->method_block_sline=self->method_block_sline;
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj214=result_464->method_generics_types;
        result_464->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        /* a*/come_call_finalizer3(__dec_obj214,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_464;
    /*i*/come_call_finalizer3(result_464,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* __right_value449 = (void*)0;
struct sNode* __result231__;
void* __right_value450 = (void*)0;
struct sNode* __result232__;
    if(charp_operator_equals(buf,"__current__")) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1095, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(__right_value446=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1095, "sCurrentNode")),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result231__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value449=_inf_value3));
        /*g*/come_call_finalizer3(__right_value446,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value449) { __right_value449 = come_decrement_ref_count2(__right_value449, ((struct sNode*)__right_value449)->finalize, ((struct sNode*)__right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value450=string_node_v17(buf,head,head_sline,info)));
    if(__right_value450) { __right_value450 = come_decrement_ref_count2(__right_value450, ((struct sNode*)__right_value450)->finalize, ((struct sNode*)__right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __dec_obj216;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj216=self->sname;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result229__;
void* __right_value447 = (void*)0;
struct sCurrentNode* result_465;
void* __right_value448 = (void*)0;
char* __dec_obj217;
struct sCurrentNode* __result230__;
    if(self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_465=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"));
    if(self!=((void*)0)) {
        result_465->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_465->sname;
        result_465->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_465;
    /*i*/come_call_finalizer3(result_465,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

