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
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre;
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre16;
struct real_pcre32;
typedef struct real_pcre32 pcre32;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;
struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
struct pcre_extra
{
    unsigned long unsigned  int flags;
    void* study_data;
    unsigned long unsigned  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long unsigned  int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    unsigned long unsigned  int flags;
    void* study_data;
    unsigned long unsigned  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long unsigned  int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    unsigned long unsigned  int flags;
    void* study_data;
    unsigned long unsigned  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long unsigned  int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
extern void* (*pcre_malloc)(unsigned long unsigned  int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long unsigned  int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long unsigned  int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long unsigned  int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long unsigned  int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long unsigned  int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef union anonymous_typeZ1 mbstate_t;
typedef unsigned long unsigned  int clock_t;
typedef long time_t;
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char* tm_zone;
};
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
enum anonymous_typeY8 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};
typedef enum anonymous_typeY8 clockid_t;
typedef int wint_t;
typedef unsigned int wctype_t;
struct anonymous_typeX9
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};
typedef struct anonymous_typeX9 _RuneEntry;
struct anonymous_typeX10
{
    int __nranges;
    struct anonymous_typeX9* __ranges;
};
typedef struct anonymous_typeX10 _RuneRange;
struct anonymous_typeX11
{
    char __name[14];
    unsigned int __mask;
};
typedef struct anonymous_typeX11 _RuneCharClass;
struct anonymous_typeX12
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long unsigned  int,char**);
    int (*__sputrune)(int,char*,unsigned long unsigned  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX10 __runetype_ext;
    struct anonymous_typeX10 __maplower_ext;
    struct anonymous_typeX10 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX11* __charclasses;
};
typedef struct anonymous_typeX12 _RuneLocale;
extern struct anonymous_typeX12 _DefaultRuneLocale;
extern struct anonymous_typeX12* _CurrentRuneLocale;
typedef int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};
struct tuple2$2come_regexphcharph
{
    struct come_regex* v1;
    char* v2;
};
typedef long  int ptrdiff_t;
typedef long  double max_align_t;
typedef void* GC_PTR;
typedef unsigned long unsigned  int GC_word;
typedef long GC_signed_word;
extern unsigned long unsigned  int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long unsigned  int);
extern void* (*GC_oom_fn)(unsigned long unsigned  int);
typedef void (*GC_on_heap_resize_proc)(unsigned long unsigned  int);
extern void (*GC_on_heap_resize)(unsigned long unsigned  int);
enum anonymous_typeY13 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY13 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY13);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long unsigned  int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long unsigned  int GC_free_space_divisor;
extern unsigned long unsigned  int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long unsigned  int GC_time_limit;
struct GC_timeval_s
{
    unsigned long unsigned  int tv_ms;
    unsigned long unsigned  int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long unsigned  int heapsize_full;
    unsigned long unsigned  int free_bytes_full;
    unsigned long unsigned  int unmapped_bytes;
    unsigned long unsigned  int bytes_allocd_since_gc;
    unsigned long unsigned  int allocd_bytes_before_gc;
    unsigned long unsigned  int non_gc_bytes;
    unsigned long unsigned  int gc_no;
    unsigned long unsigned  int markers_m1;
    unsigned long unsigned  int bytes_reclaimed_since_gc;
    unsigned long unsigned  int reclaimed_bytes_before_gc;
    unsigned long unsigned  int expl_freed_bytes_since_gc;
    unsigned long unsigned  int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY14 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY14 GC_ToggleRefStatus;
typedef enum anonymous_typeY14 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long unsigned  int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long unsigned  int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long unsigned  int);
struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
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
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX490, int anonymous_var_nameX491, const char** anonymous_var_nameX492, int* anonymous_var_nameX493, const unsigned char* anonymous_var_nameX494);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX495, int anonymous_var_nameX496, const char** anonymous_var_nameX497, int* anonymous_var_nameX498, const unsigned char* anonymous_var_nameX499);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX500, int anonymous_var_nameX501, const char** anonymous_var_nameX502, int* anonymous_var_nameX503, const unsigned char* anonymous_var_nameX504);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX505, int anonymous_var_nameX506, int* anonymous_var_nameX507, const char** anonymous_var_nameX508, int* anonymous_var_nameX509, const unsigned char* anonymous_var_nameX510);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX511, int anonymous_var_nameX512, int* anonymous_var_nameX513, const char** anonymous_var_nameX514, int* anonymous_var_nameX515, const unsigned char* anonymous_var_nameX516);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX517, int anonymous_var_nameX518, int* anonymous_var_nameX519, const char** anonymous_var_nameX520, int* anonymous_var_nameX521, const unsigned char* anonymous_var_nameX522);
int pcre_config(int anonymous_var_nameX523, void* anonymous_var_nameX524);
int pcre16_config(int anonymous_var_nameX525, void* anonymous_var_nameX526);
int pcre32_config(int anonymous_var_nameX527, void* anonymous_var_nameX528);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX529, const char* anonymous_var_nameX530, int* anonymous_var_nameX531, int anonymous_var_nameX532, const char* anonymous_var_nameX533, char* anonymous_var_nameX534, int anonymous_var_nameX535);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX536, const unsigned short int* anonymous_var_nameX537, int* anonymous_var_nameX538, int anonymous_var_nameX539, const unsigned short int* anonymous_var_nameX540, unsigned short int* anonymous_var_nameX541, int anonymous_var_nameX542);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX543, const unsigned int* anonymous_var_nameX544, int* anonymous_var_nameX545, int anonymous_var_nameX546, const unsigned int* anonymous_var_nameX547, unsigned int* anonymous_var_nameX548, int anonymous_var_nameX549);
int pcre_copy_substring(const char* anonymous_var_nameX550, int* anonymous_var_nameX551, int anonymous_var_nameX552, int anonymous_var_nameX553, char* anonymous_var_nameX554, int anonymous_var_nameX555);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX556, int* anonymous_var_nameX557, int anonymous_var_nameX558, int anonymous_var_nameX559, unsigned short int* anonymous_var_nameX560, int anonymous_var_nameX561);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX562, int* anonymous_var_nameX563, int anonymous_var_nameX564, int anonymous_var_nameX565, unsigned int* anonymous_var_nameX566, int anonymous_var_nameX567);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX568, const struct pcre_extra* anonymous_var_nameX569, const char* anonymous_var_nameX570, int anonymous_var_nameX571, int anonymous_var_nameX572, int anonymous_var_nameX573, int* anonymous_var_nameX574, int anonymous_var_nameX575, int* anonymous_var_nameX576, int anonymous_var_nameX577);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX578, const struct pcre16_extra* anonymous_var_nameX579, const unsigned short int* anonymous_var_nameX580, int anonymous_var_nameX581, int anonymous_var_nameX582, int anonymous_var_nameX583, int* anonymous_var_nameX584, int anonymous_var_nameX585, int* anonymous_var_nameX586, int anonymous_var_nameX587);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX588, const struct pcre32_extra* anonymous_var_nameX589, const unsigned int* anonymous_var_nameX590, int anonymous_var_nameX591, int anonymous_var_nameX592, int anonymous_var_nameX593, int* anonymous_var_nameX594, int anonymous_var_nameX595, int* anonymous_var_nameX596, int anonymous_var_nameX597);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX598, const struct pcre_extra* anonymous_var_nameX599, const char* anonymous_var_nameX600, int anonymous_var_nameX601, int anonymous_var_nameX602, int anonymous_var_nameX603, int* anonymous_var_nameX604, int anonymous_var_nameX605);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX606, const struct pcre16_extra* anonymous_var_nameX607, const unsigned short int* anonymous_var_nameX608, int anonymous_var_nameX609, int anonymous_var_nameX610, int anonymous_var_nameX611, int* anonymous_var_nameX612, int anonymous_var_nameX613);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX614, const struct pcre32_extra* anonymous_var_nameX615, const unsigned int* anonymous_var_nameX616, int anonymous_var_nameX617, int anonymous_var_nameX618, int anonymous_var_nameX619, int* anonymous_var_nameX620, int anonymous_var_nameX621);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX622, const struct pcre_extra* anonymous_var_nameX623, const char* anonymous_var_nameX624, int anonymous_var_nameX625, int anonymous_var_nameX626, int anonymous_var_nameX627, int* anonymous_var_nameX628, int anonymous_var_nameX629, struct real_pcre_jit_stack* anonymous_var_nameX630);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX631, const struct pcre16_extra* anonymous_var_nameX632, const unsigned short int* anonymous_var_nameX633, int anonymous_var_nameX634, int anonymous_var_nameX635, int anonymous_var_nameX636, int* anonymous_var_nameX637, int anonymous_var_nameX638, struct real_pcre16_jit_stack* anonymous_var_nameX639);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX640, const struct pcre32_extra* anonymous_var_nameX641, const unsigned int* anonymous_var_nameX642, int anonymous_var_nameX643, int anonymous_var_nameX644, int anonymous_var_nameX645, int* anonymous_var_nameX646, int anonymous_var_nameX647, struct real_pcre32_jit_stack* anonymous_var_nameX648);
void pcre_free_substring(const char* anonymous_var_nameX649);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX650);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX651);
void pcre_free_substring_list(const char** anonymous_var_nameX652);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX653);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX654);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX655, const struct pcre_extra* anonymous_var_nameX656, int anonymous_var_nameX657, void* anonymous_var_nameX658);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX659, const struct pcre16_extra* anonymous_var_nameX660, int anonymous_var_nameX661, void* anonymous_var_nameX662);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX663, const struct pcre32_extra* anonymous_var_nameX664, int anonymous_var_nameX665, void* anonymous_var_nameX666);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX667, const char* anonymous_var_nameX668, int* anonymous_var_nameX669, int anonymous_var_nameX670, const char* anonymous_var_nameX671, const char** anonymous_var_nameX672);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX673, const unsigned short int* anonymous_var_nameX674, int* anonymous_var_nameX675, int anonymous_var_nameX676, const unsigned short int* anonymous_var_nameX677, const unsigned short int** anonymous_var_nameX678);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX679, const unsigned int* anonymous_var_nameX680, int* anonymous_var_nameX681, int anonymous_var_nameX682, const unsigned int* anonymous_var_nameX683, const unsigned int** anonymous_var_nameX684);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX685, const char* anonymous_var_nameX686);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX687, const unsigned short int* anonymous_var_nameX688);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX689, const unsigned int* anonymous_var_nameX690);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX691, const char* anonymous_var_nameX692, char** anonymous_var_nameX693, char** anonymous_var_nameX694);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX695, const unsigned short int* anonymous_var_nameX696, unsigned short int** anonymous_var_nameX697, unsigned short int** anonymous_var_nameX698);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX699, const unsigned int* anonymous_var_nameX700, unsigned int** anonymous_var_nameX701, unsigned int** anonymous_var_nameX702);
int pcre_get_substring(const char* anonymous_var_nameX703, int* anonymous_var_nameX704, int anonymous_var_nameX705, int anonymous_var_nameX706, const char** anonymous_var_nameX707);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX708, int* anonymous_var_nameX709, int anonymous_var_nameX710, int anonymous_var_nameX711, const unsigned short int** anonymous_var_nameX712);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX713, int* anonymous_var_nameX714, int anonymous_var_nameX715, int anonymous_var_nameX716, const unsigned int** anonymous_var_nameX717);
int pcre_get_substring_list(const char* anonymous_var_nameX718, int* anonymous_var_nameX719, int anonymous_var_nameX720, const char*** anonymous_var_nameX721);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX722, int* anonymous_var_nameX723, int anonymous_var_nameX724, const unsigned short int*** anonymous_var_nameX725);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX726, int* anonymous_var_nameX727, int anonymous_var_nameX728, const unsigned int*** anonymous_var_nameX729);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX730, int anonymous_var_nameX731);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX732, int anonymous_var_nameX733);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX734, int anonymous_var_nameX735);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX736, int anonymous_var_nameX737, const char** anonymous_var_nameX738);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX739, int anonymous_var_nameX740, const char** anonymous_var_nameX741);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX742, int anonymous_var_nameX743, const char** anonymous_var_nameX744);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX745);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX746);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX747);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX748, struct pcre_extra* anonymous_var_nameX749, const unsigned char* anonymous_var_nameX750);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX751, struct pcre16_extra* anonymous_var_nameX752, const unsigned char* anonymous_var_nameX753);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX754, struct pcre32_extra* anonymous_var_nameX755, const unsigned char* anonymous_var_nameX756);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX757, const unsigned short int* anonymous_var_nameX758, int anonymous_var_nameX759, int* anonymous_var_nameX760, int anonymous_var_nameX761);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX762, const unsigned int* anonymous_var_nameX763, int anonymous_var_nameX764, int* anonymous_var_nameX765, int anonymous_var_nameX766);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX767, int anonymous_var_nameX768);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX769, int anonymous_var_nameX770);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX771, int anonymous_var_nameX772);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX773);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX774);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX775);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX776, struct real_pcre_jit_stack* (*anonymous_var_nameX777)(void*), void* anonymous_var_nameX778);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX779, struct real_pcre16_jit_stack* (*anonymous_var_nameX780)(void*), void* anonymous_var_nameX781);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX782, struct real_pcre32_jit_stack* (*anonymous_var_nameX783)(void*), void* anonymous_var_nameX784);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
char* asctime(const struct tm* anonymous_var_nameX785);
unsigned long unsigned  int clock();
char* ctime(const long* anonymous_var_nameX786);
double difftime(long anonymous_var_nameX787, long anonymous_var_nameX788);
struct tm* getdate(const char* anonymous_var_nameX789);
struct tm* gmtime(const long* anonymous_var_nameX790);
struct tm* localtime(const long* anonymous_var_nameX791);
long mktime(struct tm* anonymous_var_nameX792);
unsigned long unsigned  int strftime(char* anonymous_var_nameX793, unsigned long unsigned  int anonymous_var_nameX794, const char* anonymous_var_nameX795, const struct tm* anonymous_var_nameX796);
char* strptime(const char* anonymous_var_nameX797, const char* anonymous_var_nameX798, struct tm* anonymous_var_nameX799);
long time(long* anonymous_var_nameX800);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX801, char* anonymous_var_nameX802);
char* ctime_r(const long* anonymous_var_nameX803, char* anonymous_var_nameX804);
struct tm* gmtime_r(const long* anonymous_var_nameX805, struct tm* anonymous_var_nameX806);
struct tm* localtime_r(const long* anonymous_var_nameX807, struct tm* anonymous_var_nameX808);
long posix2time(long anonymous_var_nameX809);
void tzsetwall();
long time2posix(long anonymous_var_nameX810);
long timelocal(struct tm* anonymous_var_nameX811);
long timegm(struct tm* anonymous_var_nameX812);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);
unsigned long unsigned  long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);
int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int isalnum(int anonymous_var_nameX827);
int isalpha(int anonymous_var_nameX828);
int isblank(int anonymous_var_nameX829);
int iscntrl(int anonymous_var_nameX830);
int isdigit(int anonymous_var_nameX831);
int isgraph(int anonymous_var_nameX832);
int islower(int anonymous_var_nameX833);
int isprint(int anonymous_var_nameX834);
int ispunct(int anonymous_var_nameX835);
int isspace(int anonymous_var_nameX836);
int isupper(int anonymous_var_nameX837);
int isxdigit(int anonymous_var_nameX838);
int tolower(int anonymous_var_nameX839);
int toupper(int anonymous_var_nameX840);
int isascii(int anonymous_var_nameX841);
int toascii(int anonymous_var_nameX842);
int _tolower(int anonymous_var_nameX843);
int _toupper(int anonymous_var_nameX844);
int digittoint(int anonymous_var_nameX845);
int ishexnumber(int anonymous_var_nameX846);
int isideogram(int anonymous_var_nameX847);
int isnumber(int anonymous_var_nameX848);
int isphonogram(int anonymous_var_nameX849);
int isrune(int anonymous_var_nameX850);
int isspecial(int anonymous_var_nameX851);
int iswalnum(int anonymous_var_nameX852);
int iswalpha(int anonymous_var_nameX853);
int iswcntrl(int anonymous_var_nameX854);
int iswctype(int anonymous_var_nameX855, unsigned int anonymous_var_nameX856);
int iswdigit(int anonymous_var_nameX857);
int iswgraph(int anonymous_var_nameX858);
int iswlower(int anonymous_var_nameX859);
int iswprint(int anonymous_var_nameX860);
int iswpunct(int anonymous_var_nameX861);
int iswspace(int anonymous_var_nameX862);
int iswupper(int anonymous_var_nameX863);
int iswxdigit(int anonymous_var_nameX864);
int towlower(int anonymous_var_nameX865);
int towupper(int anonymous_var_nameX866);
unsigned int wctype(const char* anonymous_var_nameX867);
int btowc(int anonymous_var_nameX868);
int fgetwc(struct __sFILE* anonymous_var_nameX869);
int* fgetws(int* anonymous_var_nameX870, int anonymous_var_nameX871, struct __sFILE* anonymous_var_nameX872);
int fputwc(int anonymous_var_nameX873, struct __sFILE* anonymous_var_nameX874);
int fputws(const int* anonymous_var_nameX875, struct __sFILE* anonymous_var_nameX876);
int fwide(struct __sFILE* anonymous_var_nameX877, int anonymous_var_nameX878);
int fwprintf(struct __sFILE* anonymous_var_nameX879, const int* anonymous_var_nameX880, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX881, const int* anonymous_var_nameX882, ...);
int getwc(struct __sFILE* anonymous_var_nameX883);
int getwchar();
unsigned long unsigned  int mbrlen(const char* anonymous_var_nameX884, unsigned long unsigned  int anonymous_var_nameX885, union anonymous_typeZ1* anonymous_var_nameX886);
unsigned long unsigned  int mbrtowc(int* anonymous_var_nameX887, const char* anonymous_var_nameX888, unsigned long unsigned  int anonymous_var_nameX889, union anonymous_typeZ1* anonymous_var_nameX890);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX891);
unsigned long unsigned  int mbsrtowcs(int* anonymous_var_nameX892, const char** anonymous_var_nameX893, unsigned long unsigned  int anonymous_var_nameX894, union anonymous_typeZ1* anonymous_var_nameX895);
int putwc(int anonymous_var_nameX896, struct __sFILE* anonymous_var_nameX897);
int putwchar(int anonymous_var_nameX898);
int swprintf(int* anonymous_var_nameX899, unsigned long unsigned  int anonymous_var_nameX900, const int* anonymous_var_nameX901, ...);
int swscanf(const int* anonymous_var_nameX902, const int* anonymous_var_nameX903, ...);
int ungetwc(int anonymous_var_nameX904, struct __sFILE* anonymous_var_nameX905);
int vfwprintf(struct __sFILE* anonymous_var_nameX906, const int* anonymous_var_nameX907, __darwin_va_list anonymous_var_nameX908);
int vswprintf(int* anonymous_var_nameX909, unsigned long unsigned  int anonymous_var_nameX910, const int* anonymous_var_nameX911, __darwin_va_list anonymous_var_nameX912);
int vwprintf(const int* anonymous_var_nameX913, __darwin_va_list anonymous_var_nameX914);
unsigned long unsigned  int wcrtomb(char* anonymous_var_nameX915, int anonymous_var_nameX916, union anonymous_typeZ1* anonymous_var_nameX917);
int* wcscat(int* anonymous_var_nameX918, const int* anonymous_var_nameX919);
int* wcschr(const int* anonymous_var_nameX920, int anonymous_var_nameX921);
int wcscmp(const int* anonymous_var_nameX922, const int* anonymous_var_nameX923);
int wcscoll(const int* anonymous_var_nameX924, const int* anonymous_var_nameX925);
int* wcscpy(int* anonymous_var_nameX926, const int* anonymous_var_nameX927);
unsigned long unsigned  int wcscspn(const int* anonymous_var_nameX928, const int* anonymous_var_nameX929);
unsigned long unsigned  int wcsftime(int* anonymous_var_nameX930, unsigned long unsigned  int anonymous_var_nameX931, const int* anonymous_var_nameX932, const struct tm* anonymous_var_nameX933);
unsigned long unsigned  int wcslen(const int* anonymous_var_nameX934);
int* wcsncat(int* anonymous_var_nameX935, const int* anonymous_var_nameX936, unsigned long unsigned  int anonymous_var_nameX937);
int wcsncmp(const int* anonymous_var_nameX938, const int* anonymous_var_nameX939, unsigned long unsigned  int anonymous_var_nameX940);
int* wcsncpy(int* anonymous_var_nameX941, const int* anonymous_var_nameX942, unsigned long unsigned  int anonymous_var_nameX943);
int* wcspbrk(const int* anonymous_var_nameX944, const int* anonymous_var_nameX945);
int* wcsrchr(const int* anonymous_var_nameX946, int anonymous_var_nameX947);
unsigned long unsigned  int wcsrtombs(char* anonymous_var_nameX948, const int** anonymous_var_nameX949, unsigned long unsigned  int anonymous_var_nameX950, union anonymous_typeZ1* anonymous_var_nameX951);
unsigned long unsigned  int wcsspn(const int* anonymous_var_nameX952, const int* anonymous_var_nameX953);
int* wcsstr(const int* anonymous_var_nameX954, const int* anonymous_var_nameX955);
unsigned long unsigned  int wcsxfrm(int* anonymous_var_nameX956, const int* anonymous_var_nameX957, unsigned long unsigned  int anonymous_var_nameX958);
int wctob(int anonymous_var_nameX959);
double wcstod(const int* anonymous_var_nameX960, int** anonymous_var_nameX961);
int* wcstok(int* anonymous_var_nameX962, const int* anonymous_var_nameX963, int** anonymous_var_nameX964);
long wcstol(const int* anonymous_var_nameX965, int** anonymous_var_nameX966, int anonymous_var_nameX967);
unsigned long unsigned  int wcstoul(const int* anonymous_var_nameX968, int** anonymous_var_nameX969, int anonymous_var_nameX970);
int* wmemchr(const int* anonymous_var_nameX971, int anonymous_var_nameX972, unsigned long unsigned  int anonymous_var_nameX973);
int wmemcmp(const int* anonymous_var_nameX974, const int* anonymous_var_nameX975, unsigned long unsigned  int anonymous_var_nameX976);
int* wmemcpy(int* anonymous_var_nameX977, const int* anonymous_var_nameX978, unsigned long unsigned  int anonymous_var_nameX979);
int* wmemmove(int* anonymous_var_nameX980, const int* anonymous_var_nameX981, unsigned long unsigned  int anonymous_var_nameX982);
int* wmemset(int* anonymous_var_nameX983, int anonymous_var_nameX984, unsigned long unsigned  int anonymous_var_nameX985);
int wprintf(const int* anonymous_var_nameX986, ...);
int wscanf(const int* anonymous_var_nameX987, ...);
int wcswidth(const int* anonymous_var_nameX988, unsigned long unsigned  int anonymous_var_nameX989);
int wcwidth(int anonymous_var_nameX990);
int vfwscanf(struct __sFILE* anonymous_var_nameX991, const int* anonymous_var_nameX992, __darwin_va_list anonymous_var_nameX993);
int vswscanf(const int* anonymous_var_nameX994, const int* anonymous_var_nameX995, __darwin_va_list anonymous_var_nameX996);
int vwscanf(const int* anonymous_var_nameX997, __darwin_va_list anonymous_var_nameX998);
float wcstof(const int* anonymous_var_nameX999, int** anonymous_var_nameX1000);
long  double wcstold(const int* anonymous_var_nameX1001, int** anonymous_var_nameX1002);
long long wcstoll(const int* anonymous_var_nameX1003, int** anonymous_var_nameX1004, int anonymous_var_nameX1005);
unsigned long unsigned  long wcstoull(const int* anonymous_var_nameX1006, int** anonymous_var_nameX1007, int anonymous_var_nameX1008);
unsigned long unsigned  int mbsnrtowcs(int* anonymous_var_nameX1009, const char** anonymous_var_nameX1010, unsigned long unsigned  int anonymous_var_nameX1011, unsigned long unsigned  int anonymous_var_nameX1012, union anonymous_typeZ1* anonymous_var_nameX1013);
int* wcpcpy(int* anonymous_var_nameX1014, const int* anonymous_var_nameX1015);
int* wcpncpy(int* anonymous_var_nameX1016, const int* anonymous_var_nameX1017, unsigned long unsigned  int anonymous_var_nameX1018);
int* wcsdup(const int* anonymous_var_nameX1019);
int wcscasecmp(const int* anonymous_var_nameX1020, const int* anonymous_var_nameX1021);
int wcsncasecmp(const int* anonymous_var_nameX1022, const int* anonymous_var_nameX1023, unsigned long unsigned  int n);
unsigned long unsigned  int wcsnlen(const int* anonymous_var_nameX1024, unsigned long unsigned  int anonymous_var_nameX1025);
unsigned long unsigned  int wcsnrtombs(char* anonymous_var_nameX1026, const int** anonymous_var_nameX1027, unsigned long unsigned  int anonymous_var_nameX1028, unsigned long unsigned  int anonymous_var_nameX1029, union anonymous_typeZ1* anonymous_var_nameX1030);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long unsigned  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX1031, unsigned long unsigned  int* anonymous_var_nameX1032);
unsigned long unsigned  int wcslcat(int* anonymous_var_nameX1033, const int* anonymous_var_nameX1034, unsigned long unsigned  int anonymous_var_nameX1035);
unsigned long unsigned  int wcslcpy(int* anonymous_var_nameX1036, const int* anonymous_var_nameX1037, unsigned long unsigned  int anonymous_var_nameX1038);
char* basename(char* anonymous_var_nameX1039);
char* dirname(char* anonymous_var_nameX1040);
char* basename_r(const char* anonymous_var_nameX1041, char* anonymous_var_nameX1042);
char* dirname_r(const char* anonymous_var_nameX1043, char* anonymous_var_nameX1044);
unsigned int GC_get_version();
unsigned long unsigned  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX1046)(unsigned long unsigned  int));
void* (*GC_get_oom_fn())(unsigned long unsigned  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX1048)(unsigned long unsigned  int));
void (*GC_get_on_heap_resize())(unsigned long unsigned  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX1050)(enum anonymous_typeY13));
void (*GC_get_on_collection_event())(enum anonymous_typeY13);
void GC_set_find_leak(int anonymous_var_nameX1051);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX1052);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX1053);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX1054);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX1055)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX1056);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX1057);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long unsigned  int anonymous_var_nameX1058);
unsigned long unsigned  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX1059);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long unsigned  int anonymous_var_nameX1060);
unsigned long unsigned  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long unsigned  int anonymous_var_nameX1061);
unsigned long unsigned  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX1062);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long unsigned  int anonymous_var_nameX1063);
unsigned long unsigned  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1064);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long unsigned  int anonymous_var_nameX1065);
unsigned long unsigned  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long unsigned  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX1066);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long unsigned  int anonymous_var_nameX1067);
unsigned long unsigned  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX1068);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX1069);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX1070);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX1071);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long unsigned  int anonymous_var_nameX1072);
void* GC_malloc_atomic(unsigned long unsigned  int anonymous_var_nameX1073);
char* GC_strdup(const char* anonymous_var_nameX1074);
char* GC_strndup(const char* anonymous_var_nameX1075, unsigned long unsigned  int anonymous_var_nameX1076);
void* GC_malloc_uncollectable(unsigned long unsigned  int anonymous_var_nameX1077);
void* GC_malloc_stubborn(unsigned long unsigned  int anonymous_var_nameX1078);
void* GC_memalign(unsigned long unsigned  int anonymous_var_nameX1079, unsigned long unsigned  int anonymous_var_nameX1080);
int GC_posix_memalign(void** anonymous_var_nameX1081, unsigned long unsigned  int anonymous_var_nameX1082, unsigned long unsigned  int anonymous_var_nameX1083);
void GC_free(void* anonymous_var_nameX1084);
void GC_change_stubborn(const void* anonymous_var_nameX1085);
void GC_end_stubborn_change(const void* anonymous_var_nameX1086);
void* GC_base(void* anonymous_var_nameX1087);
int GC_is_heap_ptr(const void* anonymous_var_nameX1088);
unsigned long unsigned  int GC_size(const void* anonymous_var_nameX1089);
void* GC_realloc(void* anonymous_var_nameX1090, unsigned long unsigned  int anonymous_var_nameX1091);
int GC_expand_hp(unsigned long unsigned  int anonymous_var_nameX1092);
void GC_set_max_heap_size(unsigned long unsigned  int anonymous_var_nameX1093);
void GC_exclude_static_roots(void* anonymous_var_nameX1094, void* anonymous_var_nameX1095);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX1096, void* anonymous_var_nameX1097);
void GC_remove_roots(void* anonymous_var_nameX1098, void* anonymous_var_nameX1099);
void GC_register_displacement(unsigned long unsigned  int anonymous_var_nameX1100);
void GC_debug_register_displacement(unsigned long unsigned  int anonymous_var_nameX1101);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX1102)());
void GC_set_stop_func(int (*anonymous_var_nameX1103)());
int (*GC_get_stop_func())();
unsigned long unsigned  int GC_get_heap_size();
unsigned long unsigned  int GC_get_free_bytes();
unsigned long unsigned  int GC_get_unmapped_bytes();
unsigned long unsigned  int GC_get_bytes_since_gc();
unsigned long unsigned  int GC_get_expl_freed_bytes_since_gc();
unsigned long unsigned  int GC_get_total_bytes();
unsigned long unsigned  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long unsigned  int* anonymous_var_nameX1104, unsigned long unsigned  int* anonymous_var_nameX1105, unsigned long unsigned  int* anonymous_var_nameX1106, unsigned long unsigned  int* anonymous_var_nameX1107, unsigned long unsigned  int* anonymous_var_nameX1108);
unsigned long unsigned  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1109, unsigned long unsigned  int anonymous_var_nameX1110);
unsigned long unsigned  int GC_get_size_map_at(int i);
unsigned long unsigned  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX1111);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1112);
void* GC_malloc_atomic_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1113);
void* GC_malloc_atomic_uncollectable(unsigned long unsigned  int anonymous_var_nameX1114);
void* GC_debug_malloc_atomic_uncollectable(unsigned long unsigned  int anonymous_var_nameX1115, const char* s, int i);
void* GC_debug_malloc(unsigned long unsigned  int anonymous_var_nameX1116, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long unsigned  int anonymous_var_nameX1117, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX1118, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX1119, unsigned long unsigned  int anonymous_var_nameX1120, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long unsigned  int anonymous_var_nameX1121, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long unsigned  int anonymous_var_nameX1122, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1123, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1124, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX1125);
void* GC_debug_realloc(void* anonymous_var_nameX1126, unsigned long unsigned  int anonymous_var_nameX1127, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX1128);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1129);
void* GC_debug_malloc_replacement(unsigned long unsigned  int anonymous_var_nameX1130);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX1131, unsigned long unsigned  int anonymous_var_nameX1132);
void GC_register_finalizer(void* anonymous_var_nameX1135, void (*anonymous_var_nameX1136)(void*,void*), void* anonymous_var_nameX1137, void (*anonymous_var_nameX1138)(void*,void*), void** anonymous_var_nameX1139);
void GC_debug_register_finalizer(void* anonymous_var_nameX1140, void (*anonymous_var_nameX1141)(void*,void*), void* anonymous_var_nameX1142, void (*anonymous_var_nameX1143)(void*,void*), void** anonymous_var_nameX1144);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1145, void (*anonymous_var_nameX1146)(void*,void*), void* anonymous_var_nameX1147, void (*anonymous_var_nameX1148)(void*,void*), void** anonymous_var_nameX1149);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1150, void (*anonymous_var_nameX1151)(void*,void*), void* anonymous_var_nameX1152, void (*anonymous_var_nameX1153)(void*,void*), void** anonymous_var_nameX1154);
void GC_register_finalizer_no_order(void* anonymous_var_nameX1155, void (*anonymous_var_nameX1156)(void*,void*), void* anonymous_var_nameX1157, void (*anonymous_var_nameX1158)(void*,void*), void** anonymous_var_nameX1159);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1160, void (*anonymous_var_nameX1161)(void*,void*), void* anonymous_var_nameX1162, void (*anonymous_var_nameX1163)(void*,void*), void** anonymous_var_nameX1164);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX1165, void (*anonymous_var_nameX1166)(void*,void*), void* anonymous_var_nameX1167, void (*anonymous_var_nameX1168)(void*,void*), void** anonymous_var_nameX1169);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1170, void (*anonymous_var_nameX1171)(void*,void*), void* anonymous_var_nameX1172, void (*anonymous_var_nameX1173)(void*,void*), void** anonymous_var_nameX1174);
int GC_register_disappearing_link(void** anonymous_var_nameX1175);
int GC_general_register_disappearing_link(void** anonymous_var_nameX1176, const void* anonymous_var_nameX1177);
int GC_move_disappearing_link(void** anonymous_var_nameX1178, void** anonymous_var_nameX1179);
int GC_unregister_disappearing_link(void** anonymous_var_nameX1180);
int GC_register_long_link(void** anonymous_var_nameX1181, const void* anonymous_var_nameX1182);
int GC_move_long_link(void** anonymous_var_nameX1183, void** anonymous_var_nameX1184);
int GC_unregister_long_link(void** anonymous_var_nameX1185);
void GC_set_toggleref_func(enum anonymous_typeY14 (*anonymous_var_nameX1187)(void*));
enum anonymous_typeY14 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX1188, int anonymous_var_nameX1189);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX1191)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long unsigned  int anonymous_var_nameX1192);
void GC_set_warn_proc(void (*anonymous_var_nameX1195)(char*,unsigned long unsigned  int));
void (*GC_get_warn_proc())(char*,unsigned long unsigned  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX1196, unsigned long unsigned  int anonymous_var_nameX1197);
void GC_set_log_fd(int anonymous_var_nameX1198);
void GC_set_abort_func(void (*anonymous_var_nameX1200)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1202)(void*), void* anonymous_var_nameX1203);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX1206)(struct GC_stack_base*,void*), void* anonymous_var_nameX1207);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX1208)(void*), void* anonymous_var_nameX1209);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX1210)(void*), void* anonymous_var_nameX1211);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1212);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1213);
void GC_set_stackbottom(void* anonymous_var_nameX1214, const struct GC_stack_base* anonymous_var_nameX1215);
void* GC_same_obj(void* anonymous_var_nameX1216, void* anonymous_var_nameX1217);
void* GC_pre_incr(void** anonymous_var_nameX1218, long  int anonymous_var_nameX1219);
void* GC_post_incr(void** anonymous_var_nameX1220, long  int anonymous_var_nameX1221);
void* GC_is_visible(void* anonymous_var_nameX1222);
void* GC_is_valid_displacement(void* anonymous_var_nameX1223);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX1224);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX1225, const void* anonymous_var_nameX1226);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1227, const void* anonymous_var_nameX1228);
void* GC_malloc_many(unsigned long unsigned  int anonymous_var_nameX1249);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1253)(const char*,void*,unsigned long unsigned  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1254);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
void come_regex_finalizer(void* obj, void* client_data);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
void come_regex_finalize(struct come_regex* reg);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* regex);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int* __builtin_wstring(char* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* charp_printable(char* str);
char* wchar_tp_to_string(int* wstr);
int* charp_to_wstring(char* str);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(int left, int right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct come_regex* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct come_regex* reg, char* replace);
char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);
struct list$1charph* charp_split_str(char* self, char* str);
struct list$1charph* charp_scan(char* self, struct come_regex* reg);
struct list$1charph* charp_split(char* self, struct come_regex* reg);
_Bool charp_match(char* self, struct come_regex* reg);
struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);
int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct come_regex* reg, int count);
char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wstring_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
char* wchar_t_to_string(int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long unsigned  int xwcslen(int* wstr);
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
struct buffer* result_0;
struct buffer* __result1__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2205, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2212, "buffer"));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2221, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2228, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2235, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2242, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2249, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2549, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2554, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2559, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2564, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2569, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result17__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2602, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2604, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result19__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2609, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2611, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result20__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2616, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2618, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result21__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2623, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2625, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result22__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2630, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2632, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result24__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2637, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2639, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result26__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2644, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2646, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2651, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2656, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2661, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2666, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2671, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2676, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2681, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2686, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2691, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2696, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2701, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2706, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2711, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2716, "vector$1double"),len,self);
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
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = wchar_tp_substring(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static inline int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = charp_scan_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = charp_split_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = charp_strip(self);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = string_printable(str);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = charp_to_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = wchar_tp_to_string(wstr);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
int* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(int* str){
    return wchar_tp_length(str);
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = wchar_tp_delete(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline int wstring_index(int* str, int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static inline int wstring_rindex(int* str, int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static inline int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = wchar_tp_reverse(str);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = wchar_tp_printable(str);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline unsigned int wstring_get_hash_key(int* value){
    return wchar_tp_get_hash_key(value);
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static inline int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = charp_replace(self,index,c);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = charp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = charp_sub(self,reg,replace);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = charp_sub_count(self,reg,replace,count);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = charp_split_str(self,str);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = charp_scan(self,reg);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = charp_split(self,reg);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = charp_sub_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = string_chomp(str);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result8__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result8__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result11__;
    self->memory=value;
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result11__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result13__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result13__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result15__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result15__;
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result18__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result18__;
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result23__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result23__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result25__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result25__;
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
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_16;
struct list_item$1char* litem_17;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 221, "list_item$1char");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 231, "list_item$1char");
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 241, "list_item$1char");
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


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1charp_push_back(self,values[i_19]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_20;
struct list_item$1charp* litem_21;
struct list_item$1charp* litem_22;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 221, "list_item$1charp");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 231, "list_item$1charp");
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 241, "list_item$1charp");
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1short_push_back(self,values[i_23]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_24;
struct list_item$1short* litem_25;
struct list_item$1short* litem_26;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_24=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 221, "list_item$1short");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 231, "list_item$1short");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 241, "list_item$1short");
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1int_push_back(self,values[i_27]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_28;
struct list_item$1int* litem_29;
struct list_item$1int* litem_30;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_28=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 221, "list_item$1int");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 231, "list_item$1int");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 241, "list_item$1int");
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1long_push_back(self,values[i_31]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_32;
struct list_item$1long* litem_33;
struct list_item$1long* litem_34;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_32=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 221, "list_item$1long");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 231, "list_item$1long");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 241, "list_item$1long");
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_36;
struct list_item$1float* litem_37;
struct list_item$1float* litem_38;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_36=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 221, "list_item$1float");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 231, "list_item$1float");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 241, "list_item$1float");
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1double_push_back(self,values[i_39]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_40;
struct list_item$1double* litem_41;
struct list_item$1double* litem_42;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_40=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 221, "list_item$1double");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 231, "list_item$1double");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 241, "list_item$1double");
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 999, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result48__;
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 999, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 999, "short");
    memcpy(self->items,values,sizeof(short short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 999, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result54__;
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 999, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result56__;
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 999, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result58__;
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 999, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}



















































void come_regex_finalizer(void* obj, void* client_data){
struct come_regex* reg_43;
    reg_43=obj;
    if(    reg_43&&reg_43->re) {
        free(reg_43->re);
    }
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_44;
int erro_ofs_45;
int options_46;
struct come_regex* __null_value1;
struct tuple2$2come_regexphcharph* __result93__;
struct tuple2$2come_regexphcharph* __result95__;
err_44 = (void*)0;
memset(&erro_ofs_45, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_46=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_46;
    self->re=pcre_compile(str,options_46,&err_44,&erro_ofs_45,((void*)0));
    if(    self->re==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 46, "struct tuple2$2come_regexphcharph"),__null_value1,xsprintf("regex error \%s",charp_to_string(str)));
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    GC_register_finalizer(self,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result95__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 53, "struct tuple2$2come_regexphvoidp"),self,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* __result92__;
    self->v1=v1;
    self->v2=v2;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphvoidp* __result94__;
    self->v1=v1;
    self->v2=v2;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1;
struct come_regex* come_exception_var_b1_47;
char* Err_48;
struct come_regex* __null_value2;
struct tuple2$2come_regexphcharph* __result96__;
struct tuple2$2come_regexphcharph* __result97__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b1_47=multiple_assign_var1->v1;
    Err_48=multiple_assign_var1->v2;
    if(    Err_48) {
        __result96__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphcharph"),__null_value2,Err_48);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    __result97__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphvoidp"),come_exception_var_b1_47,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result97__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2;
struct come_regex* come_exception_var_b2_49;
char* Err_50;
struct come_regex* __null_value3;
struct tuple2$2come_regexphcharph* __result98__;
struct tuple2$2come_regexphcharph* __result99__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b2_49=multiple_assign_var2->v1;
    Err_50=multiple_assign_var2->v2;
    if(    Err_50) {
        __result98__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphcharph"),__null_value3,Err_50);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    __result99__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphvoidp"),come_exception_var_b2_49,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result99__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result100__;
struct come_regex* result_51;
const char* err_52;
int erro_ofs_53;
struct come_regex* __result101__;
err_52 = (void*)0;
memset(&erro_ofs_53, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_51=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_51->str=string_clone(reg->str);
    result_51->ignore_case=reg->ignore_case;
    result_51->multiline=reg->multiline;
    result_51->global=reg->global;
    result_51->extended=reg->extended;
    result_51->dotall=reg->dotall;
    result_51->anchored=reg->anchored;
    result_51->dollar_endonly=reg->dollar_endonly;
    result_51->ungreedy=reg->ungreedy;
    result_51->options=reg->options;
    result_51->re=pcre_compile(result_51->str,result_51->options,&err_52,&erro_ofs_53,((void*)0));
    if(    result_51->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_51->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_51,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result101__ = gComeFunResultObject = __result_obj__ = result_51;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = __builtin_string(regex->str);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_54;
int i_55;
char* __result103__;
    result_54=__builtin_string(str);
    for(    i_55=0;    i_55<strlen(str);    i_55++    ){
        if(        str[i_55]>=65&&str[i_55]<=90) {
            result_54[i_55]=str[i_55]-65+97;
        }
    }
    __result103__ = gComeFunResultObject = __result_obj__ = result_54;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_56;
int i_57;
char* __result104__;
    result_56=__builtin_string(str);
    for(    i_57=0;    i_57<strlen(str);    i_57++    ){
        if(        str[i_57]>=97&&str[i_57]<=122) {
            result_56[i_57]=str[i_57]-97+65;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = result_56;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result105__;
int len_58;
int* __result106__;
int* __result107__;
int* __result108__;
int* result_59;
int* __result109__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_58=wcslen(str);
    if(    head<0) {
        head+=len_58;
    }
    if(    tail<0) {
        tail+=len_58+1;
    }
    if(    head>tail) {
        __result106__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_58) {
        tail=len_58;
    }
    if(    head==tail) {
        __result107__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    if(    tail-head+1<1) {
        __result108__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_59=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 181, "int");
    memcpy(result_59,str+head,sizeof(int)*(tail-head));
    result_59[tail-head]=0;
    __result109__ = gComeFunResultObject = __result_obj__ = result_59;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result110__;
int len_60;
int* wstr_61;
int ret_62;
int* __result111__;
    if(    str==((void*)0)) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    len_60=strlen(str);
    wstr_61=(int*)come_calloc(1, sizeof(int)*(1*(len_60+1)), "libcomelang-str-gc.c", 196, "int");
    ret_62=mbstowcs(wstr_61,str,len_60+1);
    wstr_61[ret_62]=0;
    if(    ret_62<0) {
        wstr_61[0]=0;
    }
    __result111__ = gComeFunResultObject = __result_obj__ = wstr_61;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_63;
int len_64;
int i_65;
int len2_66;
int j_67;
memset(&j_67, 0, sizeof(int));
    n_63=0;
    len_64=strlen(str);
    for(    i_65=0;    i_65<len_64;    i_65++    ){
        len2_66=strlen(search_str);
        for(        j_67=0;        j_67<len2_66;        j_67++        ){
            if(            str[i_65+j_67]!=search_str[j_67]) {
                break;
            }
        }
        if(        j_67==len2_66) {
            n_63++;
            if(            n_63==count) {
                return i_65;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_68;
int result_72;
int offset_73;
const char* err_74;
int erro_ofs_75;
int options_76;
char* str_77;
struct real_pcre8_or_16* re_78;
int n_79;
int options_80;
int len_81;
int regex_result_82;
int i_83;
int i_84;
err_74 = (void*)0;
memset(&erro_ofs_75, 0, sizeof(int));
    ovec_max_68=16;
    int start_69[ovec_max_68];
    memset(&start_69, 0, sizeof(int)    *(ovec_max_68)    );
    int end_70[ovec_max_68];
    memset(&end_70, 0, sizeof(int)    *(ovec_max_68)    );
    int ovec_value_71[ovec_max_68*3];
    memset(&ovec_value_71, 0, sizeof(int)    *(ovec_max_68*3)    );
    result_72=default_value;
    offset_73=0;
    options_76=reg->options;
    str_77=reg->str;
    re_78=reg->re;
    n_79=0;
    while((_Bool)1) {
        options_80=2097152;
        len_81=strlen(self);
        regex_result_82=pcre_exec(re_78,(struct pcre_extra*)0,self,len_81,offset_73,options_80,ovec_value_71,ovec_max_68*3);
        for(        i_83=0;        i_83<ovec_max_68;        i_83++        ){
            start_69[i_83]=ovec_value_71[i_83*2];
        }
        for(        i_84=0;        i_84<ovec_max_68;        i_84++        ){
            end_70[i_84]=ovec_value_71[i_84*2+1];
        }
        if(        regex_result_82>0) {
            n_79++;
            if(            offset_73==end_70[0]) {
                offset_73++;
            }
            else {
                offset_73=end_70[0];
            }
            if(            n_79==count) {
                result_72=start_69[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_72;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_85;
char* p_86;
    len_85=strlen(search_str);
    p_86=str+strlen(str)-len_85;
    while(p_86>=str) {
        if(        strncmp(p_86,search_str,len_85)==0) {
            return p_86-str;
        }
        p_86--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_87;
int erro_ofs_88;
int options_89;
char* str_90;
struct real_pcre8_or_16* re_91;
char* self2_92;
int ovec_max_93;
int result_97;
int offset_98;
int options_99;
int len_100;
int regex_result_101;
int i_102;
int i_103;
err_87 = (void*)0;
memset(&erro_ofs_88, 0, sizeof(int));
    options_89=reg->options;
    str_90=reg->str;
    re_91=reg->re;
    self2_92=charp_reverse(self);
    ovec_max_93=16;
    int start_94[ovec_max_93];
    memset(&start_94, 0, sizeof(int)    *(ovec_max_93)    );
    int end_95[ovec_max_93];
    memset(&end_95, 0, sizeof(int)    *(ovec_max_93)    );
    int ovec_value_96[ovec_max_93*3];
    memset(&ovec_value_96, 0, sizeof(int)    *(ovec_max_93*3)    );
    result_97=default_value;
    offset_98=0;
    while((_Bool)1) {
        options_99=2097152;
        len_100=strlen(self2_92);
        regex_result_101=pcre_exec(re_91,(struct pcre_extra*)0,self2_92,len_100,offset_98,options_99,ovec_value_96,ovec_max_93*3);
        for(        i_102=0;        i_102<ovec_max_93;        i_102++        ){
            start_94[i_102]=ovec_value_96[i_102*2];
        }
        for(        i_103=0;        i_103<ovec_max_93;        i_103++        ){
            end_95[i_103]=ovec_value_96[i_103*2+1];
        }
        if(        regex_result_101==1||regex_result_101>0) {
            result_97=strlen(self)-1-start_94[0];
            break;
        }
        {
            break;
        }
    }
    return result_97;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_104;
char* p_105;
int n_106;
    len_104=strlen(search_str);
    p_105=str+strlen(str)-len_104;
    n_106=0;
    while(p_105>=str) {
        if(        strncmp(p_105,search_str,len_104)==0) {
            n_106++;
            if(            n_106==count) {
                return p_105-str;
            }
        }
        p_105--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_107;
int offset_108;
int ovec_max_109;
const char* err_113;
int erro_ofs_114;
int options_115;
char* str_116;
struct real_pcre8_or_16* re_117;
int options_118;
int len_119;
int regex_result_120;
int i_121;
int i_122;
char* str_123;
struct list$1charph* group_strings_124;
char* str2_125;
char* str_129;
struct list$1charph* group_strings_130;
int i_131;
char* match_string_132;
char* str2_133;
struct list$1charph* __result114__;
err_113 = (void*)0;
memset(&erro_ofs_114, 0, sizeof(int));
    result_107=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 382, "list$1charph"));
    offset_108=0;
    ovec_max_109=16;
    int start_110[ovec_max_109];
    memset(&start_110, 0, sizeof(int)    *(ovec_max_109)    );
    int end_111[ovec_max_109];
    memset(&end_111, 0, sizeof(int)    *(ovec_max_109)    );
    int ovec_value_112[ovec_max_109*3];
    memset(&ovec_value_112, 0, sizeof(int)    *(ovec_max_109*3)    );
    options_115=reg->options;
    str_116=reg->str;
    re_117=reg->re;
    while((_Bool)1) {
        options_118=2097152;
        len_119=strlen(self);
        regex_result_120=pcre_exec(re_117,(struct pcre_extra*)0,self,len_119,offset_108,options_118,ovec_value_112,ovec_max_109*3);
        for(        i_121=0;        i_121<ovec_max_109;        i_121++        ){
            start_110[i_121]=ovec_value_112[i_121*2];
        }
        for(        i_122=0;        i_122<ovec_max_109;        i_122++        ){
            end_111[i_122]=ovec_value_112[i_122*2+1];
        }
        if(        regex_result_120==1) {
            str_123=charp_substring(self,start_110[0],end_111[0]);
            group_strings_124=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 416, "list$1charph"));
            str2_125=block(parent,str_123,group_strings_124);
            list$1charph_push_back(result_107,str2_125);
            if(            offset_108==end_111[0]) {
                offset_108++;
            }
            else {
                offset_108=end_111[0];
            }
        }
        else if(        regex_result_120>1) {
            str_129=charp_substring(self,start_110[0],end_111[0]);
            group_strings_130=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 433, "list$1charph"));
            for(            i_131=1;            i_131<regex_result_120;            i_131++            ){
                match_string_132=charp_substring(self,start_110[i_131],end_111[i_131]);
                list$1charph_push_back(group_strings_130,match_string_132);
            }
            str2_133=block(parent,str_129,group_strings_130);
            list$1charph_push_back(result_107,str2_133);
            if(            offset_108==end_111[0]) {
                offset_108++;
            }
            else {
                offset_108=end_111[0];
            }
        }
        else {
            break;
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_107;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_126;
struct list_item$1charph* litem_127;
struct list_item$1charph* litem_128;
struct list$1charph* __result113__;
    if(    self->len==0) {
        litem_126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph");
        litem_126->prev=((void*)0);
        litem_126->next=((void*)0);
        litem_126->item=item;
        self->tail=litem_126;
        self->head=litem_126;
    }
    else if(    self->len==1) {
        litem_127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph");
        litem_127->prev=self->head;
        litem_127->next=((void*)0);
        litem_127->item=item;
        self->tail=litem_127;
        self->head->next=litem_127;
    }
    else {
        litem_128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph");
        litem_128->prev=self->tail;
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail->next=litem_128;
        self->tail=litem_128;
    }
    self->len++;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_134;
int offset_135;
int ovec_max_136;
const char* err_140;
int erro_ofs_141;
int options_142;
char* str_143;
struct real_pcre8_or_16* re_144;
int n_145;
int options_146;
int len_147;
int regex_result_148;
int i_149;
int i_150;
char* str_151;
struct list$1charph* group_strings_152;
char* str2_153;
char* str_154;
struct list$1charph* group_strings_155;
int i_156;
char* match_string_157;
char* str2_158;
struct list$1charph* __result115__;
err_140 = (void*)0;
memset(&erro_ofs_141, 0, sizeof(int));
    result_134=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 463, "list$1charph"));
    offset_135=0;
    ovec_max_136=16;
    int start_137[ovec_max_136];
    memset(&start_137, 0, sizeof(int)    *(ovec_max_136)    );
    int end_138[ovec_max_136];
    memset(&end_138, 0, sizeof(int)    *(ovec_max_136)    );
    int ovec_value_139[ovec_max_136*3];
    memset(&ovec_value_139, 0, sizeof(int)    *(ovec_max_136*3)    );
    options_142=reg->options;
    str_143=reg->str;
    re_144=reg->re;
    n_145=0;
    while((_Bool)1) {
        options_146=2097152;
        len_147=strlen(self);
        regex_result_148=pcre_exec(re_144,(struct pcre_extra*)0,self,len_147,offset_135,options_146,ovec_value_139,ovec_max_136*3);
        for(        i_149=0;        i_149<ovec_max_136;        i_149++        ){
            start_137[i_149]=ovec_value_139[i_149*2];
        }
        for(        i_150=0;        i_150<ovec_max_136;        i_150++        ){
            end_138[i_150]=ovec_value_139[i_150*2+1];
        }
        if(        regex_result_148==1) {
            str_151=charp_substring(self,start_137[0],end_138[0]);
            group_strings_152=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 499, "list$1charph"));
            str2_153=block(parent,str_151,group_strings_152);
            list$1charph_push_back(result_134,str2_153);
            if(            offset_135==end_138[0]) {
                offset_135++;
            }
            else {
                offset_135=end_138[0];
            }
            n_145++;
            if(            n_145==count) {
                break;
            }
        }
        else if(        regex_result_148>1) {
            str_154=charp_substring(self,start_137[0],end_138[0]);
            group_strings_155=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 521, "list$1charph"));
            for(            i_156=1;            i_156<regex_result_148;            i_156++            ){
                match_string_157=charp_substring(self,start_137[i_156],end_138[i_156]);
                list$1charph_push_back(group_strings_155,match_string_157);
            }
            str2_158=block(parent,str_154,group_strings_155);
            list$1charph_push_back(result_134,str2_158);
            if(            offset_135==end_138[0]) {
                offset_135++;
            }
            else {
                offset_135=end_138[0];
            }
            n_145++;
            if(            n_145==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result115__ = gComeFunResultObject = __result_obj__ = result_134;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_159;
int erro_ofs_160;
int options_161;
char* str_162;
struct real_pcre8_or_16* re_163;
struct list$1charph* result_164;
int offset_165;
int ovec_max_166;
int options_170;
int len_171;
int regex_result_172;
int i_173;
int i_174;
char* str_175;
struct list$1charph* match_strings_176;
char* str2_177;
char* str_178;
struct list$1charph* match_strings_179;
int i_180;
char* match_str_181;
char* str2_182;
char* str_183;
struct list$1charph* match_strings_184;
char* str2_185;
struct list$1charph* __result116__;
err_159 = (void*)0;
memset(&erro_ofs_160, 0, sizeof(int));
    options_161=reg->options;
    str_162=reg->str;
    re_163=reg->re;
    result_164=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 563, "list$1charph"));
    offset_165=0;
    ovec_max_166=16;
    int start_167[ovec_max_166];
    memset(&start_167, 0, sizeof(int)    *(ovec_max_166)    );
    int end_168[ovec_max_166];
    memset(&end_168, 0, sizeof(int)    *(ovec_max_166)    );
    int ovec_value_169[ovec_max_166*3];
    memset(&ovec_value_169, 0, sizeof(int)    *(ovec_max_166*3)    );
    while((_Bool)1) {
        options_170=2097152;
        len_171=strlen(self);
        regex_result_172=pcre_exec(re_163,(struct pcre_extra*)0,self,len_171,offset_165,options_170,ovec_value_169,ovec_max_166*3);
        for(        i_173=0;        i_173<ovec_max_166;        i_173++        ){
            start_167[i_173]=ovec_value_169[i_173*2];
        }
        for(        i_174=0;        i_174<ovec_max_166;        i_174++        ){
            end_168[i_174]=ovec_value_169[i_174*2+1];
        }
        if(        regex_result_172==1) {
            str_175=charp_substring(self,offset_165,start_167[0]);
            match_strings_176=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 590, "list$1charph"));
            str2_177=block(parent,str_175,match_strings_176);
            list$1charph_push_back(result_164,str2_177);
            if(            offset_165==end_168[0]) {
                offset_165++;
            }
            else {
                offset_165=end_168[0];
            }
        }
        else if(        regex_result_172>1) {
            str_178=charp_substring(self,offset_165,start_167[0]);
            if(            offset_165==end_168[0]) {
                offset_165++;
            }
            else {
                offset_165=end_168[0];
            }
            match_strings_179=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            for(            i_180=1;            i_180<regex_result_172;            i_180++            ){
                match_str_181=charp_substring(self,start_167[i_180],end_168[i_180]);
                list$1charph_push_back(match_strings_179,match_str_181);
            }
            str2_182=block(parent,str_178,match_strings_179);
            list$1charph_push_back(result_164,str2_182);
        }
        else {
            break;
        }
    }
    if(    offset_165<charp_length(self)) {
        str_183=charp_substring(self,offset_165,-1);
        match_strings_184=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 632, "list$1charph"));
        str2_185=block(parent,str_183,match_strings_184);
        list$1charph_push_back(result_164,str2_185);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = result_164;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_186;
int erro_ofs_187;
int options_188;
char* str_189;
struct real_pcre8_or_16* re_190;
struct list$1charph* result_191;
int offset_192;
int ovec_max_193;
int n_197;
int options_198;
int len_199;
int regex_result_200;
int i_201;
int i_202;
char* str_203;
struct list$1charph* match_strings_204;
char* str2_205;
char* str_206;
struct list$1charph* match_strings_207;
int i_208;
char* match_str_209;
char* str2_210;
struct list$1charph* __result117__;
err_186 = (void*)0;
memset(&erro_ofs_187, 0, sizeof(int));
    options_188=reg->options;
    str_189=reg->str;
    re_190=reg->re;
    result_191=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 650, "list$1charph"));
    offset_192=0;
    ovec_max_193=16;
    int start_194[ovec_max_193];
    memset(&start_194, 0, sizeof(int)    *(ovec_max_193)    );
    int end_195[ovec_max_193];
    memset(&end_195, 0, sizeof(int)    *(ovec_max_193)    );
    int ovec_value_196[ovec_max_193*3];
    memset(&ovec_value_196, 0, sizeof(int)    *(ovec_max_193*3)    );
    n_197=0;
    while((_Bool)1) {
        options_198=2097152;
        len_199=strlen(self);
        regex_result_200=pcre_exec(re_190,(struct pcre_extra*)0,self,len_199,offset_192,options_198,ovec_value_196,ovec_max_193*3);
        for(        i_201=0;        i_201<ovec_max_193;        i_201++        ){
            start_194[i_201]=ovec_value_196[i_201*2];
        }
        for(        i_202=0;        i_202<ovec_max_193;        i_202++        ){
            end_195[i_202]=ovec_value_196[i_202*2+1];
        }
        if(        regex_result_200==1) {
            str_203=charp_substring(self,offset_192,start_194[0]);
            match_strings_204=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 679, "list$1charph"));
            str2_205=block(parent,str_203,match_strings_204);
            list$1charph_push_back(result_191,str2_205);
            if(            offset_192==end_195[0]) {
                offset_192++;
            }
            else {
                offset_192=end_195[0];
            }
        }
        else if(        regex_result_200>1) {
            str_206=charp_substring(self,offset_192,start_194[0]);
            if(            offset_192==end_195[0]) {
                offset_192++;
            }
            else {
                offset_192=end_195[0];
            }
            match_strings_207=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 702, "list$1charph"));
            for(            i_208=1;            i_208<regex_result_200;            i_208++            ){
                match_str_209=charp_substring(self,start_194[i_208],end_195[i_208]);
                list$1charph_push_back(match_strings_207,match_str_209);
            }
            str2_210=block(parent,str_206,match_strings_207);
            list$1charph_push_back(result_191,str2_210);
        }
        else {
            break;
        }
        n_197++;
        if(        n_197==count) {
            break;
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_191;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(    strcmp(left->str,right->str)!=0) {
        return (_Bool)0;
    }
    if(    left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(    left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(    left->global!=right->global) {
        return (_Bool)0;
    }
    if(    left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(    left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(    left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(    left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(    left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(    left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* result_211;
int offset_212;
int ovec_max_213;
const char* err_217;
int erro_ofs_218;
int options_219;
char* str_220;
struct real_pcre8_or_16* re_221;
int options_222;
int len_223;
int regex_result_224;
int i_225;
int i_226;
char* str_227;
char* str_228;
int i_229;
char* match_string_230;
struct list$1charph* __result118__;
err_217 = (void*)0;
memset(&erro_ofs_218, 0, sizeof(int));
    result_211=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 766, "list$1charph"));
    offset_212=0;
    ovec_max_213=16;
    int start_214[ovec_max_213];
    memset(&start_214, 0, sizeof(int)    *(ovec_max_213)    );
    int end_215[ovec_max_213];
    memset(&end_215, 0, sizeof(int)    *(ovec_max_213)    );
    int ovec_value_216[ovec_max_213*3];
    memset(&ovec_value_216, 0, sizeof(int)    *(ovec_max_213*3)    );
    options_219=reg->options;
    str_220=reg->str;
    re_221=reg->re;
    while((_Bool)1) {
        options_222=2097152;
        len_223=strlen(self);
        regex_result_224=pcre_exec(re_221,(struct pcre_extra*)0,self,len_223,offset_212,options_222,ovec_value_216,ovec_max_213*3);
        for(        i_225=0;        i_225<ovec_max_213;        i_225++        ){
            start_214[i_225]=ovec_value_216[i_225*2];
        }
        for(        i_226=0;        i_226<ovec_max_213;        i_226++        ){
            end_215[i_226]=ovec_value_216[i_226*2+1];
        }
        if(        regex_result_224==1) {
            str_227=charp_substring(self,start_214[0],end_215[0]);
            list$1charph_push_back(result_211,str_227);
            if(            offset_212==end_215[0]) {
                offset_212++;
            }
            else {
                offset_212=end_215[0];
            }
        }
        else if(        regex_result_224>1) {
            str_228=charp_substring(self,start_214[0],end_215[0]);
            list$1charph_push_back(result_211,str_228);
            if(            offset_212==end_215[0]) {
                offset_212++;
            }
            else {
                offset_212=end_215[0];
            }
            *num_group_string_in_regex=regex_result_224-1;
            for(            i_229=1;            i_229<regex_result_224;            i_229++            ){
                match_string_230=charp_substring(self,start_214[i_229],end_215[i_229]);
                list$1charph_push_back(group_strings,match_string_230);
            }
        }
        else {
            break;
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = result_211;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_231;
int len_232;
char* __result119__;
    result_231=__builtin_string(self);
    len_232=strlen(self);
    if(    self[len_232-1]==10) {
        result_231[len_232-1]=0;
    }
    else if(    self[len_232-1]==13) {
        result_231[len_232-1]=0;
    }
    else if(    len_232>2&&self[len_232-2]==13&&self[len_232-1]==10) {
        result_231[len_232-2]=0;
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_231;
    gComeFunResultObject = (void*)0;
    return __result119__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_233;
char* result_234;
int n_235;
int i_236;
char c_237;
char* __result120__;
    len_233=charp_length(str);
    result_234=(char*)come_calloc(1, sizeof(char)*(1*(len_233*2+1)), "libcomelang-str-gc.c", 860, "char");
    n_235=0;
    for(    i_236=0;    i_236<len_233;    i_236++    ){
        c_237=str[i_236];
        if(        (c_237>=0&&c_237<32)||c_237==127) {
            result_234[n_235++]=94;
            result_234[n_235++]=c_237+65-1;
        }
        else {
            result_234[n_235++]=c_237;
        }
    }
    result_234[n_235]=0;
    __result120__ = gComeFunResultObject = __result_obj__ = result_234;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_238;
char* result_239;
char* __result121__;
    len_238=6*(wcslen(wstr)+1);
    result_239=(char*)come_calloc(1, sizeof(char)*(1*(len_238)), "libcomelang-str-gc.c", 886, "char");
    if(    wcstombs(result_239,wstr,len_238)<0) {
        strncpy(result_239,"",len_238);
    }
    __result121__ = gComeFunResultObject = __result_obj__ = result_239;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = __builtin_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

int wchar_tp_length(int* str){
    return wcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_240;
int* __result123__;
int* __result124__;
int* sub_str_241;
int* __result125__;
    len_240=wcslen(str);
    if(    len_240==0) {
        __result123__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    if(    head<0) {
        head+=len_240;
    }
    if(    tail<0) {
        tail+=len_240+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result124__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    if(    tail>=len_240) {
        tail=len_240;
    }
    sub_str_241=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_241,sizeof(int)*(wstring_length(sub_str_241)+1));
    __result125__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result125__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_242;
    head_242=wcsstr(str,search_str);
    if(    head_242==((void*)0)) {
        return default_value;
    }
    return head_242-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_243;
int* p_244;
int len2_245;
_Bool result_246;
int i_247;
memset(&i_247, 0, sizeof(int));
    len_243=wcslen(search_str);
    p_244=str+wcslen(str)-len_243;
    while(p_244>=str) {
        len2_245=wcslen(p_244);
        result_246=(_Bool)1;
        for(        i_247=0;        i_247<len_243&&i_247<len2_245;        i_247++        ){
            if(            p_244[i_247]!=search_str[i_247]) {
                result_246=(_Bool)0;
            }
        }
        if(        result_246) {
            return (p_244-str);
        }
        p_244--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_248;
int* result_249;
int i_250;
int* __result126__;
    len_248=wcslen(str);
    result_249=(int*)come_calloc(1, sizeof(int)*(1*(len_248+1)), "libcomelang-str-gc.c", 986, "int");
    for(    i_250=0;    i_250<len_248;    i_250++    ){
        result_249[i_250]=str[len_248-i_250-1];
    }
    result_249[len_248]=0;
    __result126__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_251;
int* result_252;
int i_253;
int* __result127__;
    len_251=wcslen(str)*n+1;
    result_252=(int*)come_calloc(1, sizeof(int)*(1*(len_251)), "libcomelang-str-gc.c", 1001, "int");
    result_252[0]=0;
    for(    i_253=0;    i_253<n;    i_253++    ){
        wcscat(result_252,str);
    }
    __result127__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_254;
int* result_255;
int n_256;
int i_257;
int c_258;
int* __result128__;
    len_254=wchar_tp_length(str);
    result_255=(int*)come_calloc(1, sizeof(int)*(1*(len_254*2+1)), "libcomelang-str-gc.c", 1015, "int");
    n_256=0;
    for(    i_257=0;    i_257<len_254;    i_257++    ){
        c_258=str[i_257];
        if(        (c_258>=0&&c_258<32)||c_258==127) {
            result_255[n_256++]=94;
            result_255[n_256++]=c_258+65-1;
        }
        else {
            result_255[n_256++]=c_258;
        }
    }
    result_255[n_256]=0;
    __result128__ = gComeFunResultObject = __result_obj__ = result_255;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_259;
int ovec_max_260;
const char* err_264;
int erro_ofs_265;
int options_266;
char* str_267;
struct real_pcre8_or_16* re_268;
int n_269;
int options_270;
int len_271;
int regex_result_272;
int i_273;
int i_274;
int i_277;
char* match_string_278;
err_264 = (void*)0;
memset(&erro_ofs_265, 0, sizeof(int));
    offset_259=0;
    ovec_max_260=16;
    int start_261[ovec_max_260];
    memset(&start_261, 0, sizeof(int)    *(ovec_max_260)    );
    int end_262[ovec_max_260];
    memset(&end_262, 0, sizeof(int)    *(ovec_max_260)    );
    int ovec_value_263[ovec_max_260*3];
    memset(&ovec_value_263, 0, sizeof(int)    *(ovec_max_260*3)    );
    options_266=reg->options;
    str_267=reg->str;
    re_268=reg->re;
    n_269=0;
    while((_Bool)1) {
        options_270=2097152;
        len_271=strlen(self);
        regex_result_272=pcre_exec(re_268,(struct pcre_extra*)0,self,len_271,offset_259,options_270,ovec_value_263,ovec_max_260*3);
        for(        i_273=0;        i_273<ovec_max_260;        i_273++        ){
            start_261[i_273]=ovec_value_263[i_273*2];
        }
        for(        i_274=0;        i_274<ovec_max_260;        i_274++        ){
            end_262[i_274]=ovec_value_263[i_274*2+1];
        }
        if(        regex_result_272==1||(group_strings==((void*)0)&&regex_result_272>0)) {
            n_269++;
            if(            n_269==count) {
                return (_Bool)1;
            }
            if(            offset_259==end_262[0]) {
                offset_259++;
            }
            else {
                offset_259=end_262[0];
            }
        }
        else if(        regex_result_272>1) {
            n_269++;
            list$1charph_reset(group_strings);
            for(            i_277=1;            i_277<regex_result_272;            i_277++            ){
                match_string_278=charp_substring(self,start_261[i_277],end_262[i_277]);
                list$1charph_push_back(group_strings,match_string_278);
            }
            if(            n_269==count) {
                return (_Bool)1;
            }
            if(            offset_259==end_262[0]) {
                offset_259++;
            }
            else {
                offset_259=end_262[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_275;
struct list_item$1charph* prev_it_276;
struct list$1charph* __result129__;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result129__;
}

int wchar_tp_compare(int* left, int* right){
    return wcscmp(left,right);
}

int wstring_compare(int* left, int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(int left, int right){
    return left==right;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
int* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
int* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

int* wchar_tp_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
int* result_279;
int* __result132__;
    result_279=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1179, "int");
    wcscpy(result_279,left);
    wcscat(result_279,right);
    __result132__ = gComeFunResultObject = __result_obj__ = result_279;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
int* result_280;
int* __result133__;
    result_280=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1189, "int");
    wcscpy(result_280,left);
    wcscat(result_280,right);
    __result133__ = gComeFunResultObject = __result_obj__ = result_280;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_281;
    head_281=strstr(str,search_str);
    if(    head_281==((void*)0)) {
        return default_value;
    }
    return head_281-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_282;
int result_286;
int offset_287;
const char* err_288;
int erro_ofs_289;
int options_290;
char* str_291;
struct real_pcre8_or_16* re_292;
int options_293;
int len_294;
int regex_result_295;
int i_296;
int i_297;
err_288 = (void*)0;
memset(&erro_ofs_289, 0, sizeof(int));
    ovec_max_282=16;
    int start_283[ovec_max_282];
    memset(&start_283, 0, sizeof(int)    *(ovec_max_282)    );
    int end_284[ovec_max_282];
    memset(&end_284, 0, sizeof(int)    *(ovec_max_282)    );
    int ovec_value_285[ovec_max_282*3];
    memset(&ovec_value_285, 0, sizeof(int)    *(ovec_max_282*3)    );
    result_286=default_value;
    offset_287=0;
    options_290=reg->options;
    str_291=reg->str;
    re_292=reg->re;
    while((_Bool)1) {
        options_293=2097152;
        len_294=strlen(self);
        regex_result_295=pcre_exec(re_292,(struct pcre_extra*)0,self,len_294,offset_287,options_293,ovec_value_285,ovec_max_282*3);
        for(        i_296=0;        i_296<ovec_max_282;        i_296++        ){
            start_283[i_296]=ovec_value_285[i_296*2];
        }
        for(        i_297=0;        i_297<ovec_max_282;        i_297++        ){
            end_284[i_297]=ovec_value_285[i_297*2+1];
        }
        if(        regex_result_295==1||regex_result_295>0) {
            result_286=start_283[0];
            break;
        }
        {
            break;
        }
    }
    return result_286;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_298;
char* __result134__;
char* __result135__;
    len_298=strlen(self);
    if(    strcmp(self,"")==0) {
        __result134__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    if(    index<0) {
        index+=len_298;
    }
    if(    index>=len_298) {
        index=len_298-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result135__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_299;
char* result_300;
int i_301;
char* __result136__;
    len_299=strlen(str)*n+1;
    result_300=(char*)come_calloc(1, sizeof(char)*(1*(len_299)), "libcomelang-str-gc.c", 1287, "char");
    result_300[0]=0;
    for(    i_301=0;    i_301<n;    i_301++    ){
        strcat(result_300,str);
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_300;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_302;
int ovec_max_303;
const char* err_307;
int erro_ofs_308;
int options_309;
char* str_310;
struct real_pcre8_or_16* re_311;
struct buffer* result_312;
int options_313;
int len_314;
int regex_result_315;
int i_316;
int i_317;
char* str_318;
char* str_319;
char* str_320;
char* __result137__;
err_307 = (void*)0;
memset(&erro_ofs_308, 0, sizeof(int));
    offset_302=0;
    ovec_max_303=16;
    int start_304[ovec_max_303];
    memset(&start_304, 0, sizeof(int)    *(ovec_max_303)    );
    int end_305[ovec_max_303];
    memset(&end_305, 0, sizeof(int)    *(ovec_max_303)    );
    int ovec_value_306[ovec_max_303*3];
    memset(&ovec_value_306, 0, sizeof(int)    *(ovec_max_303*3)    );
    options_309=reg->options;
    str_310=reg->str;
    re_311=reg->re;
    result_312=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1315, "buffer"));
    while((_Bool)1) {
        options_313=2097152;
        len_314=strlen(self);
        regex_result_315=pcre_exec(re_311,(struct pcre_extra*)0,self,len_314,offset_302,options_313,ovec_value_306,ovec_max_303*3);
        for(        i_316=0;        i_316<ovec_max_303;        i_316++        ){
            start_304[i_316]=ovec_value_306[i_316*2];
        }
        for(        i_317=0;        i_317<ovec_max_303;        i_317++        ){
            end_305[i_317]=ovec_value_306[i_317*2+1];
        }
        if(        regex_result_315==1) {
            str_318=charp_substring(self,offset_302,start_304[0]);
            buffer_append_str(result_312,str_318);
            buffer_append_str(result_312,replace);
            if(            offset_302==end_305[0]) {
                offset_302++;
            }
            else {
                offset_302=end_305[0];
            }
            if(            !reg->global) {
                str_319=charp_substring(self,offset_302,-1);
                buffer_append_str(result_312,str_319);
                break;
            }
        }
        else {
            str_320=charp_substring(self,offset_302,-1);
            buffer_append_str(result_312,str_320);
            break;
        }
    }
    __result137__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_312);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_321;
int ovec_max_322;
const char* err_326;
int erro_ofs_327;
int options_328;
char* str_329;
struct real_pcre8_or_16* re_330;
struct buffer* result_331;
int n_332;
int options_333;
int len_334;
int regex_result_335;
int i_336;
int i_337;
char* str_338;
char* str_339;
char* str_340;
char* str_341;
char* __result138__;
err_326 = (void*)0;
memset(&erro_ofs_327, 0, sizeof(int));
    offset_321=0;
    ovec_max_322=16;
    int start_323[ovec_max_322];
    memset(&start_323, 0, sizeof(int)    *(ovec_max_322)    );
    int end_324[ovec_max_322];
    memset(&end_324, 0, sizeof(int)    *(ovec_max_322)    );
    int ovec_value_325[ovec_max_322*3];
    memset(&ovec_value_325, 0, sizeof(int)    *(ovec_max_322*3)    );
    options_328=reg->options;
    str_329=reg->str;
    re_330=reg->re;
    result_331=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1378, "buffer"));
    n_332=0;
    while((_Bool)1) {
        options_333=2097152;
        len_334=strlen(self);
        regex_result_335=pcre_exec(re_330,(struct pcre_extra*)0,self,len_334,offset_321,options_333,ovec_value_325,ovec_max_322*3);
        for(        i_336=0;        i_336<ovec_max_322;        i_336++        ){
            start_323[i_336]=ovec_value_325[i_336*2];
        }
        for(        i_337=0;        i_337<ovec_max_322;        i_337++        ){
            end_324[i_337]=ovec_value_325[i_337*2+1];
        }
        if(        regex_result_335==1) {
            n_332++;
            str_338=charp_substring(self,offset_321,start_323[0]);
            buffer_append_str(result_331,str_338);
            buffer_append_str(result_331,replace);
            if(            offset_321==end_324[0]) {
                offset_321++;
            }
            else {
                offset_321=end_324[0];
            }
            if(            !reg->global) {
                str_339=charp_substring(self,offset_321,-1);
                buffer_append_str(result_331,str_339);
                break;
            }
            if(            n_332==count) {
                str_340=charp_substring(self,offset_321,-1);
                buffer_append_str(result_331,str_340);
                break;
            }
        }
        else {
            str_341=charp_substring(self,offset_321,-1);
            buffer_append_str(result_331,str_341);
            break;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_331);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_342;
struct buffer* buf_343;
int i_344;
struct list$1charph* __result139__;
    result_342=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1437, "list$1charph"));
    buf_343=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1439, "buffer"));
    for(    i_344=0;    i_344<charp_length(self);    i_344++    ){
        if(        strstr(self+i_344,str)==self+i_344) {
            list$1charph_push_back(result_342,__builtin_string(buf_343->buf));
            buffer_reset(buf_343);
            i_344+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_343,self[i_344]);
        }
    }
    if(    buffer_length(buf_343)!=0) {
        list$1charph_push_back(result_342,__builtin_string(buf_343->buf));
    }
    __result139__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* result_345;
int offset_346;
int ovec_max_347;
const char* err_351;
int erro_ofs_352;
int options_353;
char* str_354;
struct real_pcre8_or_16* re_355;
int options_356;
int len_357;
int regex_result_358;
int i_359;
int i_360;
char* str_361;
char* str_362;
int i_363;
char* match_string_364;
struct list$1charph* __result140__;
err_351 = (void*)0;
memset(&erro_ofs_352, 0, sizeof(int));
    result_345=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1460, "list$1charph"));
    offset_346=0;
    ovec_max_347=16;
    int start_348[ovec_max_347];
    memset(&start_348, 0, sizeof(int)    *(ovec_max_347)    );
    int end_349[ovec_max_347];
    memset(&end_349, 0, sizeof(int)    *(ovec_max_347)    );
    int ovec_value_350[ovec_max_347*3];
    memset(&ovec_value_350, 0, sizeof(int)    *(ovec_max_347*3)    );
    options_353=reg->options;
    str_354=reg->str;
    re_355=reg->re;
    while((_Bool)1) {
        options_356=2097152;
        len_357=strlen(self);
        regex_result_358=pcre_exec(re_355,(struct pcre_extra*)0,self,len_357,offset_346,options_356,ovec_value_350,ovec_max_347*3);
        for(        i_359=0;        i_359<ovec_max_347;        i_359++        ){
            start_348[i_359]=ovec_value_350[i_359*2];
        }
        for(        i_360=0;        i_360<ovec_max_347;        i_360++        ){
            end_349[i_360]=ovec_value_350[i_360*2+1];
        }
        if(        regex_result_358==1) {
            str_361=charp_substring(self,start_348[0],end_349[0]);
            list$1charph_push_back(result_345,str_361);
            if(            offset_346==end_349[0]) {
                offset_346++;
            }
            else {
                offset_346=end_349[0];
            }
        }
        else if(        regex_result_358>1) {
            str_362=charp_substring(self,start_348[0],end_349[0]);
            list$1charph_push_back(result_345,str_362);
            if(            offset_346==end_349[0]) {
                offset_346++;
            }
            else {
                offset_346=end_349[0];
            }
            for(            i_363=1;            i_363<regex_result_358;            i_363++            ){
                match_string_364=charp_substring(self,start_348[i_363],end_349[i_363]);
                list$1charph_push_back(result_345,match_string_364);
            }
        }
        else {
            break;
        }
    }
    __result140__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result140__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_365;
int erro_ofs_366;
int options_367;
char* str_368;
struct real_pcre8_or_16* re_369;
struct list$1charph* result_370;
int offset_371;
int ovec_max_372;
int options_376;
int len_377;
int regex_result_378;
int i_379;
int i_380;
char* str_381;
char* str_382;
int i_383;
char* match_str_384;
char* str_385;
struct list$1charph* __result141__;
err_365 = (void*)0;
memset(&erro_ofs_366, 0, sizeof(int));
    options_367=reg->options;
    str_368=reg->str;
    re_369=reg->re;
    result_370=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1541, "list$1charph"));
    offset_371=0;
    ovec_max_372=16;
    int start_373[ovec_max_372];
    memset(&start_373, 0, sizeof(int)    *(ovec_max_372)    );
    int end_374[ovec_max_372];
    memset(&end_374, 0, sizeof(int)    *(ovec_max_372)    );
    int ovec_value_375[ovec_max_372*3];
    memset(&ovec_value_375, 0, sizeof(int)    *(ovec_max_372*3)    );
    while((_Bool)1) {
        options_376=2097152;
        len_377=strlen(self);
        regex_result_378=pcre_exec(re_369,(struct pcre_extra*)0,self,len_377,offset_371,options_376,ovec_value_375,ovec_max_372*3);
        for(        i_379=0;        i_379<ovec_max_372;        i_379++        ){
            start_373[i_379]=ovec_value_375[i_379*2];
        }
        for(        i_380=0;        i_380<ovec_max_372;        i_380++        ){
            end_374[i_380]=ovec_value_375[i_380*2+1];
        }
        if(        regex_result_378==1) {
            str_381=charp_substring(self,offset_371,start_373[0]);
            list$1charph_push_back(result_370,str_381);
            if(            offset_371==end_374[0]) {
                offset_371++;
            }
            else {
                offset_371=end_374[0];
            }
        }
        else if(        regex_result_378>1) {
            str_382=charp_substring(self,offset_371,start_373[0]);
            list$1charph_push_back(result_370,str_382);
            if(            offset_371==end_374[0]) {
                offset_371++;
            }
            else {
                offset_371=end_374[0];
            }
            for(            i_383=1;            i_383<regex_result_378;            i_383++            ){
                match_str_384=charp_substring(self,start_373[i_383],end_374[i_383]);
                list$1charph_push_back(result_370,match_str_384);
            }
        }
        else {
            break;
        }
    }
    if(    offset_371<charp_length(self)) {
        str_385=charp_substring(self,offset_371,-1);
        list$1charph_push_back(result_370,str_385);
    }
    __result141__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_386;
int ovec_max_387;
const char* err_391;
int erro_ofs_392;
int options_393;
char* str_394;
struct real_pcre8_or_16* re_395;
int options_396;
int len_397;
int regex_result_398;
int i_399;
int i_400;
err_391 = (void*)0;
memset(&erro_ofs_392, 0, sizeof(int));
    offset_386=0;
    ovec_max_387=16;
    int start_388[ovec_max_387];
    memset(&start_388, 0, sizeof(int)    *(ovec_max_387)    );
    int end_389[ovec_max_387];
    memset(&end_389, 0, sizeof(int)    *(ovec_max_387)    );
    int ovec_value_390[ovec_max_387*3];
    memset(&ovec_value_390, 0, sizeof(int)    *(ovec_max_387*3)    );
    options_393=reg->options;
    str_394=reg->str;
    re_395=reg->re;
    while((_Bool)1) {
        options_396=2097152;
        len_397=strlen(self);
        regex_result_398=pcre_exec(re_395,(struct pcre_extra*)0,self,len_397,offset_386,options_396,ovec_value_390,ovec_max_387*3);
        for(        i_399=0;        i_399<ovec_max_387;        i_399++        ){
            start_388[i_399]=ovec_value_390[i_399*2];
        }
        for(        i_400=0;        i_400<ovec_max_387;        i_400++        ){
            end_389[i_400]=ovec_value_390[i_400*2+1];
        }
        if(        regex_result_398>0) {
            return (_Bool)1;
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
const char* err_401;
int erro_ofs_402;
int options_403;
char* str_404;
struct real_pcre8_or_16* re_405;
struct list$1charph* result_406;
int offset_407;
int ovec_max_408;
int n_412;
int options_413;
int len_414;
int regex_result_415;
int i_416;
int i_417;
char* str_418;
char* str_419;
int i_420;
char* match_str_421;
char* str_422;
struct list$1charph* __result142__;
err_401 = (void*)0;
memset(&erro_ofs_402, 0, sizeof(int));
    options_403=reg->options;
    str_404=reg->str;
    re_405=reg->re;
    result_406=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1663, "list$1charph"));
    offset_407=0;
    ovec_max_408=16;
    int start_409[ovec_max_408];
    memset(&start_409, 0, sizeof(int)    *(ovec_max_408)    );
    int end_410[ovec_max_408];
    memset(&end_410, 0, sizeof(int)    *(ovec_max_408)    );
    int ovec_value_411[ovec_max_408*3];
    memset(&ovec_value_411, 0, sizeof(int)    *(ovec_max_408*3)    );
    n_412=0;
    while((_Bool)1) {
        options_413=2097152;
        len_414=strlen(self);
        regex_result_415=pcre_exec(re_405,(struct pcre_extra*)0,self,len_414,offset_407,options_413,ovec_value_411,ovec_max_408*3);
        for(        i_416=0;        i_416<ovec_max_408;        i_416++        ){
            start_409[i_416]=ovec_value_411[i_416*2];
        }
        for(        i_417=0;        i_417<ovec_max_408;        i_417++        ){
            end_410[i_417]=ovec_value_411[i_417*2+1];
        }
        if(        regex_result_415==1) {
            str_418=charp_substring(self,offset_407,start_409[0]);
            list$1charph_push_back(result_406,str_418);
            if(            offset_407==end_410[0]) {
                offset_407++;
            }
            else {
                offset_407=end_410[0];
            }
        }
        else if(        regex_result_415>1) {
            str_419=charp_substring(self,offset_407,start_409[0]);
            list$1charph_push_back(result_406,str_419);
            if(            offset_407==end_410[0]) {
                offset_407++;
            }
            else {
                offset_407=end_410[0];
            }
            for(            i_420=1;            i_420<regex_result_415;            i_420++            ){
                match_str_421=charp_substring(self,start_409[i_420],end_410[i_420]);
                list$1charph_push_back(result_406,match_str_421);
            }
        }
        else {
            break;
        }
        n_412++;
        if(        maxsplit==n_412) {
            break;
        }
    }
    if(    offset_407<charp_length(self)) {
        str_422=charp_substring(self,offset_407,-1);
        list$1charph_push_back(result_406,str_422);
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_423;
int erro_ofs_424;
int options_425;
char* str_426;
struct real_pcre8_or_16* re_427;
char* self2_428;
int ovec_max_429;
int result_433;
int offset_434;
int n_435;
int options_436;
int len_437;
int regex_result_438;
int i_439;
int i_440;
err_423 = (void*)0;
memset(&erro_ofs_424, 0, sizeof(int));
    options_425=reg->options;
    str_426=reg->str;
    re_427=reg->re;
    self2_428=charp_reverse(self);
    ovec_max_429=16;
    int start_430[ovec_max_429];
    memset(&start_430, 0, sizeof(int)    *(ovec_max_429)    );
    int end_431[ovec_max_429];
    memset(&end_431, 0, sizeof(int)    *(ovec_max_429)    );
    int ovec_value_432[ovec_max_429*3];
    memset(&ovec_value_432, 0, sizeof(int)    *(ovec_max_429*3)    );
    result_433=default_value;
    offset_434=0;
    n_435=0;
    while((_Bool)1) {
        options_436=2097152;
        len_437=strlen(self2_428);
        regex_result_438=pcre_exec(re_427,(struct pcre_extra*)0,self2_428,len_437,offset_434,options_436,ovec_value_432,ovec_max_429*3);
        for(        i_439=0;        i_439<ovec_max_429;        i_439++        ){
            start_430[i_439]=ovec_value_432[i_439*2];
        }
        for(        i_440=0;        i_440<ovec_max_429;        i_440++        ){
            end_431[i_440]=ovec_value_432[i_440*2+1];
        }
        if(        regex_result_438>0) {
            n_435++;
            if(            offset_434==end_431[0]) {
                offset_434++;
            }
            else {
                offset_434=end_431[0];
            }
            if(            n_435==count) {
                result_433=strlen(self)-end_431[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_433;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_441;
int ovec_max_442;
const char* err_446;
int erro_ofs_447;
int options_448;
char* str_449;
struct real_pcre8_or_16* re_450;
int n_451;
int options_452;
int len_453;
int regex_result_454;
int i_455;
int i_456;
err_446 = (void*)0;
memset(&erro_ofs_447, 0, sizeof(int));
    offset_441=0;
    ovec_max_442=16;
    int start_443[ovec_max_442];
    memset(&start_443, 0, sizeof(int)    *(ovec_max_442)    );
    int end_444[ovec_max_442];
    memset(&end_444, 0, sizeof(int)    *(ovec_max_442)    );
    int ovec_value_445[ovec_max_442*3];
    memset(&ovec_value_445, 0, sizeof(int)    *(ovec_max_442*3)    );
    options_448=reg->options;
    str_449=reg->str;
    re_450=reg->re;
    n_451=0;
    while((_Bool)1) {
        options_452=2097152;
        len_453=strlen(self);
        regex_result_454=pcre_exec(re_450,(struct pcre_extra*)0,self,len_453,offset_441,options_452,ovec_value_445,ovec_max_442*3);
        for(        i_455=0;        i_455<ovec_max_442;        i_455++        ){
            start_443[i_455]=ovec_value_445[i_455*2];
        }
        for(        i_456=0;        i_456<ovec_max_442;        i_456++        ){
            end_444[i_456]=ovec_value_445[i_456*2+1];
        }
        if(        regex_result_454>0) {
            n_451++;
            if(            count==n_451) {
                return (_Bool)1;
            }
            if(            offset_441==end_444[0]) {
                offset_441++;
            }
            else {
                offset_441=end_444[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_457;
int ovec_max_458;
const char* err_462;
int erro_ofs_463;
int options_464;
char* str_465;
struct real_pcre8_or_16* re_466;
struct buffer* result_467;
int options_468;
int len_469;
int regex_result_470;
int i_471;
int i_472;
char* str_473;
struct list$1charph* group_strings_474;
char* match_string_475;
char* block_result_476;
char* str_477;
char* str_478;
struct list$1charph* group_strings_479;
int i_480;
char* match_string_481;
char* match_string_482;
char* block_result_483;
char* str_484;
char* str_485;
char* __result143__;
err_462 = (void*)0;
memset(&erro_ofs_463, 0, sizeof(int));
    offset_457=0;
    ovec_max_458=16;
    int start_459[ovec_max_458];
    memset(&start_459, 0, sizeof(int)    *(ovec_max_458)    );
    int end_460[ovec_max_458];
    memset(&end_460, 0, sizeof(int)    *(ovec_max_458)    );
    int ovec_value_461[ovec_max_458*3];
    memset(&ovec_value_461, 0, sizeof(int)    *(ovec_max_458*3)    );
    options_464=reg->options;
    str_465=reg->str;
    re_466=reg->re;
    result_467=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1875, "buffer"));
    while((_Bool)1) {
        options_468=2097152;
        len_469=strlen(self);
        regex_result_470=pcre_exec(re_466,(struct pcre_extra*)0,self,len_469,offset_457,options_468,ovec_value_461,ovec_max_458*3);
        for(        i_471=0;        i_471<ovec_max_458;        i_471++        ){
            start_459[i_471]=ovec_value_461[i_471*2];
        }
        for(        i_472=0;        i_472<ovec_max_458;        i_472++        ){
            end_460[i_472]=ovec_value_461[i_472*2+1];
        }
        if(        regex_result_470==1) {
            str_473=charp_substring(self,offset_457,start_459[0]);
            buffer_append_str(result_467,str_473);
            group_strings_474=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1895, "list$1charph"));
            match_string_475=charp_substring(self,start_459[0],end_460[0]);
            list$1charph_push_back(group_strings_474,charp_substring(self,start_459[0],end_460[0]));
            block_result_476=block(parent,match_string_475,group_strings_474);
            buffer_append_str(result_467,block_result_476);
            if(            offset_457==end_460[0]) {
                offset_457++;
            }
            else {
                offset_457=end_460[0];
            }
            if(            !reg->global) {
                str_477=charp_substring(self,offset_457,-1);
                buffer_append_str(result_467,str_477);
                break;
            }
        }
        else if(        regex_result_470>1) {
            str_478=charp_substring(self,offset_457,start_459[0]);
            buffer_append_str(result_467,str_478);
            if(            offset_457==end_460[0]) {
                offset_457++;
            }
            else {
                offset_457=end_460[0];
            }
            group_strings_479=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1930, "list$1charph"));
            for(            i_480=1;            i_480<regex_result_470;            i_480++            ){
                match_string_481=charp_substring(self,start_459[i_480],end_460[i_480]);
                list$1charph_push_back(group_strings_479,match_string_481);
            }
            match_string_482=charp_substring(self,start_459[0],end_460[0]);
            block_result_483=block(parent,match_string_482,group_strings_479);
            buffer_append_str(result_467,block_result_483);
            if(            !reg->global) {
                str_484=charp_substring(self,offset_457,-1);
                buffer_append_str(result_467,str_484);
                break;
            }
        }
        else {
            str_485=charp_substring(self,offset_457,-1);
            buffer_append_str(result_467,str_485);
            break;
        }
    }
    __result143__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_467);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_486;
int ovec_max_487;
const char* err_491;
int erro_ofs_492;
int options_493;
char* str_494;
struct real_pcre8_or_16* re_495;
struct buffer* result_496;
int n_497;
int options_498;
int len_499;
int regex_result_500;
int i_501;
int i_502;
char* str_503;
struct list$1charph* group_strings_504;
char* match_string_505;
char* block_result_506;
char* str_507;
char* str_508;
char* str_509;
struct list$1charph* group_strings_510;
int i_511;
char* match_string_512;
char* match_string_513;
char* block_result_514;
char* str_515;
char* str_516;
char* str_517;
char* __result144__;
err_491 = (void*)0;
memset(&erro_ofs_492, 0, sizeof(int));
    offset_486=0;
    ovec_max_487=16;
    int start_488[ovec_max_487];
    memset(&start_488, 0, sizeof(int)    *(ovec_max_487)    );
    int end_489[ovec_max_487];
    memset(&end_489, 0, sizeof(int)    *(ovec_max_487)    );
    int ovec_value_490[ovec_max_487*3];
    memset(&ovec_value_490, 0, sizeof(int)    *(ovec_max_487*3)    );
    options_493=reg->options;
    str_494=reg->str;
    re_495=reg->re;
    result_496=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1976, "buffer"));
    n_497=0;
    while((_Bool)1) {
        options_498=2097152;
        len_499=strlen(self);
        regex_result_500=pcre_exec(re_495,(struct pcre_extra*)0,self,len_499,offset_486,options_498,ovec_value_490,ovec_max_487*3);
        for(        i_501=0;        i_501<ovec_max_487;        i_501++        ){
            start_488[i_501]=ovec_value_490[i_501*2];
        }
        for(        i_502=0;        i_502<ovec_max_487;        i_502++        ){
            end_489[i_502]=ovec_value_490[i_502*2+1];
        }
        if(        regex_result_500==1) {
            n_497++;
            str_503=charp_substring(self,offset_486,start_488[0]);
            buffer_append_str(result_496,str_503);
            group_strings_504=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1999, "list$1charph"));
            list$1charph_push_back(group_strings_504,charp_substring(self,start_488[0],end_489[0]));
            match_string_505=charp_substring(self,start_488[0],end_489[0]);
            block_result_506=block(parent,match_string_505,group_strings_504);
            buffer_append_str(result_496,block_result_506);
            if(            offset_486==end_489[0]) {
                offset_486++;
            }
            else {
                offset_486=end_489[0];
            }
            if(            !reg->global) {
                str_507=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_507);
                break;
            }
            if(            n_497==count) {
                str_508=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_508);
                break;
            }
        }
        else if(        regex_result_500>1) {
            n_497++;
            str_509=charp_substring(self,offset_486,start_488[0]);
            buffer_append_str(result_496,str_509);
            if(            offset_486==end_489[0]) {
                offset_486++;
            }
            else {
                offset_486=end_489[0];
            }
            group_strings_510=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2042, "list$1charph"));
            for(            i_511=1;            i_511<regex_result_500;            i_511++            ){
                match_string_512=charp_substring(self,start_488[i_511],end_489[i_511]);
                list$1charph_push_back(group_strings_510,match_string_512);
            }
            match_string_513=charp_substring(self,start_488[0],end_489[0]);
            block_result_514=block(parent,match_string_513,group_strings_510);
            buffer_append_str(result_496,block_result_514);
            if(            !reg->global) {
                str_515=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_515);
                break;
            }
            if(            n_497==count) {
                str_516=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_516);
                break;
            }
        }
        else {
            str_517=charp_substring(self,offset_486,-1);
            buffer_append_str(result_496,str_517);
            break;
        }
    }
    __result144__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_496);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_518;
int* p_519;
    result_518=0;
    p_519=value;
    while(*p_519) {
        result_518+=(*p_519);
        p_519++;
    }
    return result_518;
}

_Bool wstring_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left, int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(int value){
    return value;
}

_Bool wchar_t_equals(int left, int right){
    return left==right;
}

char* wchar_t_to_string(int wc){
void* __result_obj__=(void*)0;
char* __result145__;
    __result145__ = gComeFunResultObject = __result_obj__ = xsprintf("%ls",wc);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_520;
char* __result146__;
char* __result147__;
    result_520=__builtin_string(str);
    if(    result_520[string_length(result_520)-1]==10) {
        __result146__ = gComeFunResultObject = __result_obj__ = string_substring(result_520,0,-2);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    __result147__ = gComeFunResultObject = __result_obj__ = result_520;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result148__;
char* result_521;
char* result2_522;
char* __result149__;
    if(    path==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    result_521=realpath(path,((void*)0));
    result2_522=__builtin_string(result_521);
    free(result_521);
    __result149__ = gComeFunResultObject = __result_obj__ = result2_522;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result150__;
char* __result151__;
    if(    path==((void*)0)) {
        __result150__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    __result151__ = gComeFunResultObject = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    gComeFunResultObject = (void*)0;
    return __result151__;
}

unsigned long unsigned  int xwcslen(int* wstr){
int* p_523;
unsigned long unsigned  int len_524;
    p_523=wstr;
    len_524=0;
    while(*p_523) {
        p_523++;
        len_524++;
    }
    return len_524;
}

