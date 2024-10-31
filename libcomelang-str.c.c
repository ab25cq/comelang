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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX525, int anonymous_var_nameX526, const char** anonymous_var_nameX527, int* anonymous_var_nameX528, const unsigned char* anonymous_var_nameX529);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX530, int anonymous_var_nameX531, const char** anonymous_var_nameX532, int* anonymous_var_nameX533, const unsigned char* anonymous_var_nameX534);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX535, int anonymous_var_nameX536, const char** anonymous_var_nameX537, int* anonymous_var_nameX538, const unsigned char* anonymous_var_nameX539);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX540, int anonymous_var_nameX541, int* anonymous_var_nameX542, const char** anonymous_var_nameX543, int* anonymous_var_nameX544, const unsigned char* anonymous_var_nameX545);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX546, int anonymous_var_nameX547, int* anonymous_var_nameX548, const char** anonymous_var_nameX549, int* anonymous_var_nameX550, const unsigned char* anonymous_var_nameX551);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX552, int anonymous_var_nameX553, int* anonymous_var_nameX554, const char** anonymous_var_nameX555, int* anonymous_var_nameX556, const unsigned char* anonymous_var_nameX557);
int pcre_config(int anonymous_var_nameX558, void* anonymous_var_nameX559);
int pcre16_config(int anonymous_var_nameX560, void* anonymous_var_nameX561);
int pcre32_config(int anonymous_var_nameX562, void* anonymous_var_nameX563);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX564, const char* anonymous_var_nameX565, int* anonymous_var_nameX566, int anonymous_var_nameX567, const char* anonymous_var_nameX568, char* anonymous_var_nameX569, int anonymous_var_nameX570);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX571, const unsigned short int* anonymous_var_nameX572, int* anonymous_var_nameX573, int anonymous_var_nameX574, const unsigned short int* anonymous_var_nameX575, unsigned short int* anonymous_var_nameX576, int anonymous_var_nameX577);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX578, const unsigned int* anonymous_var_nameX579, int* anonymous_var_nameX580, int anonymous_var_nameX581, const unsigned int* anonymous_var_nameX582, unsigned int* anonymous_var_nameX583, int anonymous_var_nameX584);
int pcre_copy_substring(const char* anonymous_var_nameX585, int* anonymous_var_nameX586, int anonymous_var_nameX587, int anonymous_var_nameX588, char* anonymous_var_nameX589, int anonymous_var_nameX590);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX591, int* anonymous_var_nameX592, int anonymous_var_nameX593, int anonymous_var_nameX594, unsigned short int* anonymous_var_nameX595, int anonymous_var_nameX596);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX597, int* anonymous_var_nameX598, int anonymous_var_nameX599, int anonymous_var_nameX600, unsigned int* anonymous_var_nameX601, int anonymous_var_nameX602);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX603, const struct pcre_extra* anonymous_var_nameX604, const char* anonymous_var_nameX605, int anonymous_var_nameX606, int anonymous_var_nameX607, int anonymous_var_nameX608, int* anonymous_var_nameX609, int anonymous_var_nameX610, int* anonymous_var_nameX611, int anonymous_var_nameX612);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX613, const struct pcre16_extra* anonymous_var_nameX614, const unsigned short int* anonymous_var_nameX615, int anonymous_var_nameX616, int anonymous_var_nameX617, int anonymous_var_nameX618, int* anonymous_var_nameX619, int anonymous_var_nameX620, int* anonymous_var_nameX621, int anonymous_var_nameX622);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX623, const struct pcre32_extra* anonymous_var_nameX624, const unsigned int* anonymous_var_nameX625, int anonymous_var_nameX626, int anonymous_var_nameX627, int anonymous_var_nameX628, int* anonymous_var_nameX629, int anonymous_var_nameX630, int* anonymous_var_nameX631, int anonymous_var_nameX632);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX633, const struct pcre_extra* anonymous_var_nameX634, const char* anonymous_var_nameX635, int anonymous_var_nameX636, int anonymous_var_nameX637, int anonymous_var_nameX638, int* anonymous_var_nameX639, int anonymous_var_nameX640);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX641, const struct pcre16_extra* anonymous_var_nameX642, const unsigned short int* anonymous_var_nameX643, int anonymous_var_nameX644, int anonymous_var_nameX645, int anonymous_var_nameX646, int* anonymous_var_nameX647, int anonymous_var_nameX648);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX649, const struct pcre32_extra* anonymous_var_nameX650, const unsigned int* anonymous_var_nameX651, int anonymous_var_nameX652, int anonymous_var_nameX653, int anonymous_var_nameX654, int* anonymous_var_nameX655, int anonymous_var_nameX656);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX657, const struct pcre_extra* anonymous_var_nameX658, const char* anonymous_var_nameX659, int anonymous_var_nameX660, int anonymous_var_nameX661, int anonymous_var_nameX662, int* anonymous_var_nameX663, int anonymous_var_nameX664, struct real_pcre_jit_stack* anonymous_var_nameX665);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX666, const struct pcre16_extra* anonymous_var_nameX667, const unsigned short int* anonymous_var_nameX668, int anonymous_var_nameX669, int anonymous_var_nameX670, int anonymous_var_nameX671, int* anonymous_var_nameX672, int anonymous_var_nameX673, struct real_pcre16_jit_stack* anonymous_var_nameX674);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX675, const struct pcre32_extra* anonymous_var_nameX676, const unsigned int* anonymous_var_nameX677, int anonymous_var_nameX678, int anonymous_var_nameX679, int anonymous_var_nameX680, int* anonymous_var_nameX681, int anonymous_var_nameX682, struct real_pcre32_jit_stack* anonymous_var_nameX683);
void pcre_free_substring(const char* anonymous_var_nameX684);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX685);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX686);
void pcre_free_substring_list(const char** anonymous_var_nameX687);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX688);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX689);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX690, const struct pcre_extra* anonymous_var_nameX691, int anonymous_var_nameX692, void* anonymous_var_nameX693);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX694, const struct pcre16_extra* anonymous_var_nameX695, int anonymous_var_nameX696, void* anonymous_var_nameX697);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX698, const struct pcre32_extra* anonymous_var_nameX699, int anonymous_var_nameX700, void* anonymous_var_nameX701);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX702, const char* anonymous_var_nameX703, int* anonymous_var_nameX704, int anonymous_var_nameX705, const char* anonymous_var_nameX706, const char** anonymous_var_nameX707);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX708, const unsigned short int* anonymous_var_nameX709, int* anonymous_var_nameX710, int anonymous_var_nameX711, const unsigned short int* anonymous_var_nameX712, const unsigned short int** anonymous_var_nameX713);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX714, const unsigned int* anonymous_var_nameX715, int* anonymous_var_nameX716, int anonymous_var_nameX717, const unsigned int* anonymous_var_nameX718, const unsigned int** anonymous_var_nameX719);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX720, const char* anonymous_var_nameX721);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX722, const unsigned short int* anonymous_var_nameX723);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX724, const unsigned int* anonymous_var_nameX725);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX726, const char* anonymous_var_nameX727, char** anonymous_var_nameX728, char** anonymous_var_nameX729);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX730, const unsigned short int* anonymous_var_nameX731, unsigned short int** anonymous_var_nameX732, unsigned short int** anonymous_var_nameX733);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX734, const unsigned int* anonymous_var_nameX735, unsigned int** anonymous_var_nameX736, unsigned int** anonymous_var_nameX737);
int pcre_get_substring(const char* anonymous_var_nameX738, int* anonymous_var_nameX739, int anonymous_var_nameX740, int anonymous_var_nameX741, const char** anonymous_var_nameX742);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX743, int* anonymous_var_nameX744, int anonymous_var_nameX745, int anonymous_var_nameX746, const unsigned short int** anonymous_var_nameX747);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX748, int* anonymous_var_nameX749, int anonymous_var_nameX750, int anonymous_var_nameX751, const unsigned int** anonymous_var_nameX752);
int pcre_get_substring_list(const char* anonymous_var_nameX753, int* anonymous_var_nameX754, int anonymous_var_nameX755, const char*** anonymous_var_nameX756);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX757, int* anonymous_var_nameX758, int anonymous_var_nameX759, const unsigned short int*** anonymous_var_nameX760);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX761, int* anonymous_var_nameX762, int anonymous_var_nameX763, const unsigned int*** anonymous_var_nameX764);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX765, int anonymous_var_nameX766);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX767, int anonymous_var_nameX768);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX769, int anonymous_var_nameX770);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX771, int anonymous_var_nameX772, const char** anonymous_var_nameX773);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX774, int anonymous_var_nameX775, const char** anonymous_var_nameX776);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX777, int anonymous_var_nameX778, const char** anonymous_var_nameX779);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX780);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX781);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX782);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX783, struct pcre_extra* anonymous_var_nameX784, const unsigned char* anonymous_var_nameX785);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX786, struct pcre16_extra* anonymous_var_nameX787, const unsigned char* anonymous_var_nameX788);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX789, struct pcre32_extra* anonymous_var_nameX790, const unsigned char* anonymous_var_nameX791);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX792, const unsigned short int* anonymous_var_nameX793, int anonymous_var_nameX794, int* anonymous_var_nameX795, int anonymous_var_nameX796);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX797, const unsigned int* anonymous_var_nameX798, int anonymous_var_nameX799, int* anonymous_var_nameX800, int anonymous_var_nameX801);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX802, int anonymous_var_nameX803);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX804, int anonymous_var_nameX805);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX806, int anonymous_var_nameX807);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX808);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX809);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX810);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX811, struct real_pcre_jit_stack* (*anonymous_var_nameX812)(void*), void* anonymous_var_nameX813);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX814, struct real_pcre16_jit_stack* (*anonymous_var_nameX815)(void*), void* anonymous_var_nameX816);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX817, struct real_pcre32_jit_stack* (*anonymous_var_nameX818)(void*), void* anonymous_var_nameX819);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
char* asctime(const struct tm* anonymous_var_nameX820);
unsigned long unsigned  int clock();
char* ctime(const long* anonymous_var_nameX821);
double difftime(long anonymous_var_nameX822, long anonymous_var_nameX823);
struct tm* getdate(const char* anonymous_var_nameX824);
struct tm* gmtime(const long* anonymous_var_nameX825);
struct tm* localtime(const long* anonymous_var_nameX826);
long mktime(struct tm* anonymous_var_nameX827);
unsigned long unsigned  int strftime(char* anonymous_var_nameX828, unsigned long unsigned  int anonymous_var_nameX829, const char* anonymous_var_nameX830, const struct tm* anonymous_var_nameX831);
char* strptime(const char* anonymous_var_nameX832, const char* anonymous_var_nameX833, struct tm* anonymous_var_nameX834);
long time(long* anonymous_var_nameX835);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX836, char* anonymous_var_nameX837);
char* ctime_r(const long* anonymous_var_nameX838, char* anonymous_var_nameX839);
struct tm* gmtime_r(const long* anonymous_var_nameX840, struct tm* anonymous_var_nameX841);
struct tm* localtime_r(const long* anonymous_var_nameX842, struct tm* anonymous_var_nameX843);
long posix2time(long anonymous_var_nameX844);
void tzsetwall();
long time2posix(long anonymous_var_nameX845);
long timelocal(struct tm* anonymous_var_nameX846);
long timegm(struct tm* anonymous_var_nameX847);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);
unsigned long unsigned  long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);
int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int isalnum(int anonymous_var_nameX862);
int isalpha(int anonymous_var_nameX863);
int isblank(int anonymous_var_nameX864);
int iscntrl(int anonymous_var_nameX865);
int isdigit(int anonymous_var_nameX866);
int isgraph(int anonymous_var_nameX867);
int islower(int anonymous_var_nameX868);
int isprint(int anonymous_var_nameX869);
int ispunct(int anonymous_var_nameX870);
int isspace(int anonymous_var_nameX871);
int isupper(int anonymous_var_nameX872);
int isxdigit(int anonymous_var_nameX873);
int tolower(int anonymous_var_nameX874);
int toupper(int anonymous_var_nameX875);
int isascii(int anonymous_var_nameX876);
int toascii(int anonymous_var_nameX877);
int _tolower(int anonymous_var_nameX878);
int _toupper(int anonymous_var_nameX879);
int digittoint(int anonymous_var_nameX880);
int ishexnumber(int anonymous_var_nameX881);
int isideogram(int anonymous_var_nameX882);
int isnumber(int anonymous_var_nameX883);
int isphonogram(int anonymous_var_nameX884);
int isrune(int anonymous_var_nameX885);
int isspecial(int anonymous_var_nameX886);
int iswalnum(int anonymous_var_nameX887);
int iswalpha(int anonymous_var_nameX888);
int iswcntrl(int anonymous_var_nameX889);
int iswctype(int anonymous_var_nameX890, unsigned int anonymous_var_nameX891);
int iswdigit(int anonymous_var_nameX892);
int iswgraph(int anonymous_var_nameX893);
int iswlower(int anonymous_var_nameX894);
int iswprint(int anonymous_var_nameX895);
int iswpunct(int anonymous_var_nameX896);
int iswspace(int anonymous_var_nameX897);
int iswupper(int anonymous_var_nameX898);
int iswxdigit(int anonymous_var_nameX899);
int towlower(int anonymous_var_nameX900);
int towupper(int anonymous_var_nameX901);
unsigned int wctype(const char* anonymous_var_nameX902);
int btowc(int anonymous_var_nameX903);
int fgetwc(struct __sFILE* anonymous_var_nameX904);
int* fgetws(int* anonymous_var_nameX905, int anonymous_var_nameX906, struct __sFILE* anonymous_var_nameX907);
int fputwc(int anonymous_var_nameX908, struct __sFILE* anonymous_var_nameX909);
int fputws(const int* anonymous_var_nameX910, struct __sFILE* anonymous_var_nameX911);
int fwide(struct __sFILE* anonymous_var_nameX912, int anonymous_var_nameX913);
int fwprintf(struct __sFILE* anonymous_var_nameX914, const int* anonymous_var_nameX915, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX916, const int* anonymous_var_nameX917, ...);
int getwc(struct __sFILE* anonymous_var_nameX918);
int getwchar();
unsigned long unsigned  int mbrlen(const char* anonymous_var_nameX919, unsigned long unsigned  int anonymous_var_nameX920, union anonymous_typeZ1* anonymous_var_nameX921);
unsigned long unsigned  int mbrtowc(int* anonymous_var_nameX922, const char* anonymous_var_nameX923, unsigned long unsigned  int anonymous_var_nameX924, union anonymous_typeZ1* anonymous_var_nameX925);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX926);
unsigned long unsigned  int mbsrtowcs(int* anonymous_var_nameX927, const char** anonymous_var_nameX928, unsigned long unsigned  int anonymous_var_nameX929, union anonymous_typeZ1* anonymous_var_nameX930);
int putwc(int anonymous_var_nameX931, struct __sFILE* anonymous_var_nameX932);
int putwchar(int anonymous_var_nameX933);
int swprintf(int* anonymous_var_nameX934, unsigned long unsigned  int anonymous_var_nameX935, const int* anonymous_var_nameX936, ...);
int swscanf(const int* anonymous_var_nameX937, const int* anonymous_var_nameX938, ...);
int ungetwc(int anonymous_var_nameX939, struct __sFILE* anonymous_var_nameX940);
int vfwprintf(struct __sFILE* anonymous_var_nameX941, const int* anonymous_var_nameX942, __darwin_va_list anonymous_var_nameX943);
int vswprintf(int* anonymous_var_nameX944, unsigned long unsigned  int anonymous_var_nameX945, const int* anonymous_var_nameX946, __darwin_va_list anonymous_var_nameX947);
int vwprintf(const int* anonymous_var_nameX948, __darwin_va_list anonymous_var_nameX949);
unsigned long unsigned  int wcrtomb(char* anonymous_var_nameX950, int anonymous_var_nameX951, union anonymous_typeZ1* anonymous_var_nameX952);
int* wcscat(int* anonymous_var_nameX953, const int* anonymous_var_nameX954);
int* wcschr(const int* anonymous_var_nameX955, int anonymous_var_nameX956);
int wcscmp(const int* anonymous_var_nameX957, const int* anonymous_var_nameX958);
int wcscoll(const int* anonymous_var_nameX959, const int* anonymous_var_nameX960);
int* wcscpy(int* anonymous_var_nameX961, const int* anonymous_var_nameX962);
unsigned long unsigned  int wcscspn(const int* anonymous_var_nameX963, const int* anonymous_var_nameX964);
unsigned long unsigned  int wcsftime(int* anonymous_var_nameX965, unsigned long unsigned  int anonymous_var_nameX966, const int* anonymous_var_nameX967, const struct tm* anonymous_var_nameX968);
unsigned long unsigned  int wcslen(const int* anonymous_var_nameX969);
int* wcsncat(int* anonymous_var_nameX970, const int* anonymous_var_nameX971, unsigned long unsigned  int anonymous_var_nameX972);
int wcsncmp(const int* anonymous_var_nameX973, const int* anonymous_var_nameX974, unsigned long unsigned  int anonymous_var_nameX975);
int* wcsncpy(int* anonymous_var_nameX976, const int* anonymous_var_nameX977, unsigned long unsigned  int anonymous_var_nameX978);
int* wcspbrk(const int* anonymous_var_nameX979, const int* anonymous_var_nameX980);
int* wcsrchr(const int* anonymous_var_nameX981, int anonymous_var_nameX982);
unsigned long unsigned  int wcsrtombs(char* anonymous_var_nameX983, const int** anonymous_var_nameX984, unsigned long unsigned  int anonymous_var_nameX985, union anonymous_typeZ1* anonymous_var_nameX986);
unsigned long unsigned  int wcsspn(const int* anonymous_var_nameX987, const int* anonymous_var_nameX988);
int* wcsstr(const int* anonymous_var_nameX989, const int* anonymous_var_nameX990);
unsigned long unsigned  int wcsxfrm(int* anonymous_var_nameX991, const int* anonymous_var_nameX992, unsigned long unsigned  int anonymous_var_nameX993);
int wctob(int anonymous_var_nameX994);
double wcstod(const int* anonymous_var_nameX995, int** anonymous_var_nameX996);
int* wcstok(int* anonymous_var_nameX997, const int* anonymous_var_nameX998, int** anonymous_var_nameX999);
long wcstol(const int* anonymous_var_nameX1000, int** anonymous_var_nameX1001, int anonymous_var_nameX1002);
unsigned long unsigned  int wcstoul(const int* anonymous_var_nameX1003, int** anonymous_var_nameX1004, int anonymous_var_nameX1005);
int* wmemchr(const int* anonymous_var_nameX1006, int anonymous_var_nameX1007, unsigned long unsigned  int anonymous_var_nameX1008);
int wmemcmp(const int* anonymous_var_nameX1009, const int* anonymous_var_nameX1010, unsigned long unsigned  int anonymous_var_nameX1011);
int* wmemcpy(int* anonymous_var_nameX1012, const int* anonymous_var_nameX1013, unsigned long unsigned  int anonymous_var_nameX1014);
int* wmemmove(int* anonymous_var_nameX1015, const int* anonymous_var_nameX1016, unsigned long unsigned  int anonymous_var_nameX1017);
int* wmemset(int* anonymous_var_nameX1018, int anonymous_var_nameX1019, unsigned long unsigned  int anonymous_var_nameX1020);
int wprintf(const int* anonymous_var_nameX1021, ...);
int wscanf(const int* anonymous_var_nameX1022, ...);
int wcswidth(const int* anonymous_var_nameX1023, unsigned long unsigned  int anonymous_var_nameX1024);
int wcwidth(int anonymous_var_nameX1025);
int vfwscanf(struct __sFILE* anonymous_var_nameX1026, const int* anonymous_var_nameX1027, __darwin_va_list anonymous_var_nameX1028);
int vswscanf(const int* anonymous_var_nameX1029, const int* anonymous_var_nameX1030, __darwin_va_list anonymous_var_nameX1031);
int vwscanf(const int* anonymous_var_nameX1032, __darwin_va_list anonymous_var_nameX1033);
float wcstof(const int* anonymous_var_nameX1034, int** anonymous_var_nameX1035);
long  double wcstold(const int* anonymous_var_nameX1036, int** anonymous_var_nameX1037);
long long wcstoll(const int* anonymous_var_nameX1038, int** anonymous_var_nameX1039, int anonymous_var_nameX1040);
unsigned long unsigned  long wcstoull(const int* anonymous_var_nameX1041, int** anonymous_var_nameX1042, int anonymous_var_nameX1043);
unsigned long unsigned  int mbsnrtowcs(int* anonymous_var_nameX1044, const char** anonymous_var_nameX1045, unsigned long unsigned  int anonymous_var_nameX1046, unsigned long unsigned  int anonymous_var_nameX1047, union anonymous_typeZ1* anonymous_var_nameX1048);
int* wcpcpy(int* anonymous_var_nameX1049, const int* anonymous_var_nameX1050);
int* wcpncpy(int* anonymous_var_nameX1051, const int* anonymous_var_nameX1052, unsigned long unsigned  int anonymous_var_nameX1053);
int* wcsdup(const int* anonymous_var_nameX1054);
int wcscasecmp(const int* anonymous_var_nameX1055, const int* anonymous_var_nameX1056);
int wcsncasecmp(const int* anonymous_var_nameX1057, const int* anonymous_var_nameX1058, unsigned long unsigned  int n);
unsigned long unsigned  int wcsnlen(const int* anonymous_var_nameX1059, unsigned long unsigned  int anonymous_var_nameX1060);
unsigned long unsigned  int wcsnrtombs(char* anonymous_var_nameX1061, const int** anonymous_var_nameX1062, unsigned long unsigned  int anonymous_var_nameX1063, unsigned long unsigned  int anonymous_var_nameX1064, union anonymous_typeZ1* anonymous_var_nameX1065);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long unsigned  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX1066, unsigned long unsigned  int* anonymous_var_nameX1067);
unsigned long unsigned  int wcslcat(int* anonymous_var_nameX1068, const int* anonymous_var_nameX1069, unsigned long unsigned  int anonymous_var_nameX1070);
unsigned long unsigned  int wcslcpy(int* anonymous_var_nameX1071, const int* anonymous_var_nameX1072, unsigned long unsigned  int anonymous_var_nameX1073);
char* basename(char* anonymous_var_nameX1074);
char* dirname(char* anonymous_var_nameX1075);
char* basename_r(const char* anonymous_var_nameX1076, char* anonymous_var_nameX1077);
char* dirname_r(const char* anonymous_var_nameX1078, char* anonymous_var_nameX1079);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
void come_regex_finalize(struct come_regex* reg);
struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2205, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2212, "buffer"))));
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
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2221, "buffer"))));
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2228, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2235, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2242, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2249, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2549, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2554, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2559, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2564, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2569, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2602, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2604, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2609, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2611, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
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
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2616, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2618, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2623, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2625, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2630, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2632, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2637, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2639, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2644, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2646, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2651, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2656, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2661, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2666, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2671, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2676, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2681, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2686, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2691, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2696, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2701, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2706, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2711, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2716, "vector$1double")),len,self)));
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
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value116=wchar_tp_substring(str,head,tail)));
    __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value117 = (void*)0;
struct list$1charph* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value117=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct list$1charph* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value118=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value119=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value120=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value121=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=charp_strip(self)));
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=string_printable(str)));
    __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
int* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value124=charp_to_wstring(str)));
    __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=wchar_tp_to_string(wstr)));
    __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
int* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value127=string_to_wstring(((char*)(__right_value126=xsprintf("%d",self))))));
    __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(int* str){
    return wchar_tp_length(str);
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value128=wchar_tp_delete(str,head,tail)));
    __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value129 = (void*)0;
int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value129=wchar_tp_reverse(str)));
    __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value130=wchar_tp_multiply(str,n)));
    __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value131=wchar_tp_printable(str)));
    __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value132 = (void*)0;
char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=charp_replace(self,index,c)));
    __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=charp_multiply(str,n)));
    __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=charp_sub(self,reg,replace)));
    __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value135=charp_sub_count(self,reg,replace,count)));
    __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value136=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value137=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value137,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value138=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value140 = (void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value140=charp_sub_block(self,reg,parent,block)));
    __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value141=charp_sub_block_count(self,reg,count,parent,block)));
    __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value143=string_chomp(str)));
    __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 221, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 231, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 241, "list_item$1char"))));
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 221, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 231, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 241, "list_item$1charp"))));
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
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 221, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 231, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 241, "list_item$1short"))));
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 221, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 231, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 241, "list_item$1int"))));
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 221, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 231, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 241, "list_item$1long"))));
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 221, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 231, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 241, "list_item$1float"))));
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 221, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 231, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 241, "list_item$1double"))));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 999, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 999, "char*")));
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
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 999, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 999, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 999, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 999, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 999, "double")));
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

















static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_64;
struct list_item$1charph* prev_it_65;
    it_64=self->head;
    while(it_64!=((void*)0)) {
        prev_it_65=it_64;
        it_64=it_64->next;
        /*i*/come_call_finalizer3(prev_it_65,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj15=self->item;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_66;
int erro_ofs_67;
int options_68;
void* __right_value144 = (void*)0;
char* __dec_obj16;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
_Bool __exception_result_var_b1;
struct come_regex* __result92__;
err_66 = (void*)0;
memset(&erro_ofs_67, 0, sizeof(int));
    options_68=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    __dec_obj16=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_68;
    self->re=pcre_compile(str,options_68,&err_66,&erro_ofs_67,((void*)0));
    if(    self->re==((void*)0)) {
        (come_push_stackframe("libcomelang-str.c", 46, 0),__exception_result_var_b1=die(((char*)(__right_value146=xsprintf("regex error \%s",((char*)(__right_value145=charp_to_string(str))))))), come_pop_stackframe(), __exception_result_var_b1);
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct come_regex* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct come_regex*)(__right_value148=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    /*g*/come_call_finalizer3(__right_value148,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct come_regex* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct come_regex*)(__right_value150=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    /*g*/come_call_finalizer3(__right_value150,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result95__;
void* __right_value151 = (void*)0;
struct come_regex* result_69;
void* __right_value152 = (void*)0;
char* __dec_obj17;
const char* err_70;
int erro_ofs_71;
struct come_regex* __result96__;
err_70 = (void*)0;
memset(&erro_ofs_71, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    result_69=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj17=result_69->str;
    result_69->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_69->ignore_case=reg->ignore_case;
    result_69->multiline=reg->multiline;
    result_69->global=reg->global;
    result_69->extended=reg->extended;
    result_69->dotall=reg->dotall;
    result_69->anchored=reg->anchored;
    result_69->dollar_endonly=reg->dollar_endonly;
    result_69->ungreedy=reg->ungreedy;
    result_69->options=reg->options;
    result_69->re=pcre_compile(result_69->str,result_69->options,&err_70,&erro_ofs_71,((void*)0));
    if(    result_69->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_69->str);
        stackframe();
        exit(1);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(result_69,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
void* __right_value153 = (void*)0;
char* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value153=__builtin_string(regex->str)));
    __right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value154 = (void*)0;
char* result_72;
int i_73;
char* __result98__;
    result_72=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_73=0;    i_73<strlen(str);    i_73++    ){
        if(        str[i_73]>=65&&str[i_73]<=90) {
            result_72[i_73]=str[i_73]-65+97;
        }
    }
    __result98__ = gComeFunResultObject = __result_obj__ = result_72;
    result_72 = come_decrement_ref_count2(result_72, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* result_74;
int i_75;
char* __result99__;
    result_74=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_75=0;    i_75<strlen(str);    i_75++    ){
        if(        str[i_75]>=97&&str[i_75]<=122) {
            result_74[i_75]=str[i_75]-97+65;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_74;
    result_74 = come_decrement_ref_count2(result_74, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value156 = (void*)0;
int* __result100__;
int len_76;
void* __right_value157 = (void*)0;
int* __result101__;
void* __right_value158 = (void*)0;
int* __result102__;
void* __right_value159 = (void*)0;
int* __result103__;
void* __right_value160 = (void*)0;
int* result_77;
int* __result104__;
    if(    str==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value156=__builtin_wstring("")));
        __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    len_76=wcslen(str);
    if(    head<0) {
        head+=len_76;
    }
    if(    tail<0) {
        tail+=len_76+1;
    }
    if(    head>tail) {
        __result101__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value157=__builtin_wstring("")));
        __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_76) {
        tail=len_76;
    }
    if(    head==tail) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value158=__builtin_wstring("")));
        __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    if(    tail-head+1<1) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value159=__builtin_wstring("")));
        __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    result_77=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str.c", 181, "int"));
    memcpy(result_77,str+head,sizeof(int)*(tail-head));
    result_77[tail-head]=0;
    __result104__ = gComeFunResultObject = __result_obj__ = result_77;
    result_77 = come_decrement_ref_count2(result_77, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result105__;
int len_78;
void* __right_value161 = (void*)0;
int* wstr_79;
int ret_80;
int* __result106__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_78=strlen(str);
    wstr_79=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_78+1)), "libcomelang-str.c", 196, "int"));
    ret_80=mbstowcs(wstr_79,str,len_78+1);
    wstr_79[ret_80]=0;
    if(    ret_80<0) {
        wstr_79[0]=0;
    }
    __result106__ = gComeFunResultObject = __result_obj__ = wstr_79;
    wstr_79 = come_decrement_ref_count2(wstr_79, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_81;
int len_82;
int i_83;
int len2_84;
int j_85;
memset(&j_85, 0, sizeof(int));
    n_81=0;
    len_82=strlen(str);
    for(    i_83=0;    i_83<len_82;    i_83++    ){
        len2_84=strlen(search_str);
        for(        j_85=0;        j_85<len2_84;        j_85++        ){
            if(            str[i_83+j_85]!=search_str[j_85]) {
                break;
            }
        }
        if(        j_85==len2_84) {
            n_81++;
            if(            n_81==count) {
                return i_83;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_86;
int result_90;
int offset_91;
const char* err_92;
int erro_ofs_93;
int options_94;
char* str_95;
struct real_pcre8_or_16* re_96;
int n_97;
int options_98;
int len_99;
int regex_result_100;
int i_101;
int i_102;
err_92 = (void*)0;
memset(&erro_ofs_93, 0, sizeof(int));
    ovec_max_86=16;
    int start_87[ovec_max_86];
    memset(&start_87, 0, sizeof(int)    *(ovec_max_86)    );
    int end_88[ovec_max_86];
    memset(&end_88, 0, sizeof(int)    *(ovec_max_86)    );
    int ovec_value_89[ovec_max_86*3];
    memset(&ovec_value_89, 0, sizeof(int)    *(ovec_max_86*3)    );
    result_90=default_value;
    offset_91=0;
    options_94=reg->options;
    str_95=reg->str;
    re_96=reg->re;
    n_97=0;
    while((_Bool)1) {
        options_98=2097152;
        len_99=strlen(self);
        regex_result_100=pcre_exec(re_96,(struct pcre_extra*)0,self,len_99,offset_91,options_98,ovec_value_89,ovec_max_86*3);
        for(        i_101=0;        i_101<ovec_max_86;        i_101++        ){
            start_87[i_101]=ovec_value_89[i_101*2];
        }
        for(        i_102=0;        i_102<ovec_max_86;        i_102++        ){
            end_88[i_102]=ovec_value_89[i_102*2+1];
        }
        if(        regex_result_100>0) {
            n_97++;
            if(            offset_91==end_88[0]) {
                offset_91++;
            }
            else {
                offset_91=end_88[0];
            }
            if(            n_97==count) {
                result_90=start_87[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_90;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_103;
char* p_104;
    len_103=strlen(search_str);
    p_104=str+strlen(str)-len_103;
    while(p_104>=str) {
        if(        strncmp(p_104,search_str,len_103)==0) {
            return p_104-str;
        }
        p_104--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_105;
int erro_ofs_106;
int options_107;
char* str_108;
struct real_pcre8_or_16* re_109;
void* __right_value162 = (void*)0;
char* self2_110;
int ovec_max_111;
int result_115;
int offset_116;
int options_117;
int len_118;
int regex_result_119;
int i_120;
int i_121;
int __result107__;
err_105 = (void*)0;
memset(&erro_ofs_106, 0, sizeof(int));
    options_107=reg->options;
    str_108=reg->str;
    re_109=reg->re;
    self2_110=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_111=16;
    int start_112[ovec_max_111];
    memset(&start_112, 0, sizeof(int)    *(ovec_max_111)    );
    int end_113[ovec_max_111];
    memset(&end_113, 0, sizeof(int)    *(ovec_max_111)    );
    int ovec_value_114[ovec_max_111*3];
    memset(&ovec_value_114, 0, sizeof(int)    *(ovec_max_111*3)    );
    result_115=default_value;
    offset_116=0;
    while((_Bool)1) {
        options_117=2097152;
        len_118=strlen(self2_110);
        regex_result_119=pcre_exec(re_109,(struct pcre_extra*)0,self2_110,len_118,offset_116,options_117,ovec_value_114,ovec_max_111*3);
        for(        i_120=0;        i_120<ovec_max_111;        i_120++        ){
            start_112[i_120]=ovec_value_114[i_120*2];
        }
        for(        i_121=0;        i_121<ovec_max_111;        i_121++        ){
            end_113[i_121]=ovec_value_114[i_121*2+1];
        }
        if(        regex_result_119==1||regex_result_119>0) {
            result_115=strlen(self)-1-start_112[0];
            break;
        }
        {
            break;
        }
    }
    __result107__ = result_115;
    self2_110 = come_decrement_ref_count2(self2_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result107__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_122;
char* p_123;
int n_124;
    len_122=strlen(search_str);
    p_123=str+strlen(str)-len_122;
    n_124=0;
    while(p_123>=str) {
        if(        strncmp(p_123,search_str,len_122)==0) {
            n_124++;
            if(            n_124==count) {
                return p_123-str;
            }
        }
        p_123--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct list$1charph* result_125;
int offset_126;
int ovec_max_127;
const char* err_131;
int erro_ofs_132;
int options_133;
char* str_134;
struct real_pcre8_or_16* re_135;
int options_136;
int len_137;
int regex_result_138;
int i_139;
int i_140;
void* __right_value165 = (void*)0;
char* str_141;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct list$1charph* group_strings_142;
void* __right_value168 = (void*)0;
char* str2_143;
void* __right_value172 = (void*)0;
char* str_147;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct list$1charph* group_strings_148;
int i_149;
void* __right_value175 = (void*)0;
char* match_string_150;
void* __right_value176 = (void*)0;
char* str2_151;
struct list$1charph* __result110__;
err_131 = (void*)0;
memset(&erro_ofs_132, 0, sizeof(int));
    result_125=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 382, "list$1charph"))));
    offset_126=0;
    ovec_max_127=16;
    int start_128[ovec_max_127];
    memset(&start_128, 0, sizeof(int)    *(ovec_max_127)    );
    int end_129[ovec_max_127];
    memset(&end_129, 0, sizeof(int)    *(ovec_max_127)    );
    int ovec_value_130[ovec_max_127*3];
    memset(&ovec_value_130, 0, sizeof(int)    *(ovec_max_127*3)    );
    options_133=reg->options;
    str_134=reg->str;
    re_135=reg->re;
    while((_Bool)1) {
        options_136=2097152;
        len_137=strlen(self);
        regex_result_138=pcre_exec(re_135,(struct pcre_extra*)0,self,len_137,offset_126,options_136,ovec_value_130,ovec_max_127*3);
        for(        i_139=0;        i_139<ovec_max_127;        i_139++        ){
            start_128[i_139]=ovec_value_130[i_139*2];
        }
        for(        i_140=0;        i_140<ovec_max_127;        i_140++        ){
            end_129[i_140]=ovec_value_130[i_140*2+1];
        }
        if(        regex_result_138==1) {
            str_141=(char*)come_increment_ref_count(charp_substring(self,start_128[0],end_129[0]));
            group_strings_142=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 416, "list$1charph"))));
            str2_143=(char*)come_increment_ref_count(block(parent,str_141,group_strings_142));
            list$1charph_push_back(result_125,(char*)come_increment_ref_count(str2_143));
            if(            offset_126==end_129[0]) {
                offset_126++;
            }
            else {
                offset_126=end_129[0];
            }
            str_141 = come_decrement_ref_count2(str_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_142,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_143 = come_decrement_ref_count2(str2_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_138>1) {
            str_147=(char*)come_increment_ref_count(charp_substring(self,start_128[0],end_129[0]));
            group_strings_148=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 433, "list$1charph"))));
            for(            i_149=1;            i_149<regex_result_138;            i_149++            ){
                match_string_150=(char*)come_increment_ref_count(charp_substring(self,start_128[i_149],end_129[i_149]));
                list$1charph_push_back(group_strings_148,(char*)come_increment_ref_count(match_string_150));
                match_string_150 = come_decrement_ref_count2(match_string_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_151=(char*)come_increment_ref_count(block(parent,str_147,group_strings_148));
            list$1charph_push_back(result_125,(char*)come_increment_ref_count(str2_151));
            if(            offset_126==end_129[0]) {
                offset_126++;
            }
            else {
                offset_126=end_129[0];
            }
            str_147 = come_decrement_ref_count2(str_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_148,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_151 = come_decrement_ref_count2(str2_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_125;
    /*i*/come_call_finalizer3(result_125,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result108__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
struct list_item$1charph* litem_144;
char* __dec_obj18;
void* __right_value170 = (void*)0;
struct list_item$1charph* litem_145;
char* __dec_obj19;
void* __right_value171 = (void*)0;
struct list_item$1charph* litem_146;
char* __dec_obj20;
struct list$1charph* __result109__;
    if(    self->len==0) {
        litem_144=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value169=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_144->prev=((void*)0);
        litem_144->next=((void*)0);
        __dec_obj18=litem_144->item;
        litem_144->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_144;
        self->head=litem_144;
    }
    else if(    self->len==1) {
        litem_145=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value170=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
        litem_145->prev=self->head;
        litem_145->next=((void*)0);
        __dec_obj19=litem_145->item;
        litem_145->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_145;
        self->head->next=litem_145;
    }
    else {
        litem_146=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
        litem_146->prev=self->tail;
        litem_146->next=((void*)0);
        __dec_obj20=litem_146->item;
        litem_146->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_146;
        self->tail=litem_146;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct list$1charph* result_152;
int offset_153;
int ovec_max_154;
const char* err_158;
int erro_ofs_159;
int options_160;
char* str_161;
struct real_pcre8_or_16* re_162;
int n_163;
int options_164;
int len_165;
int regex_result_166;
int i_167;
int i_168;
void* __right_value179 = (void*)0;
char* str_169;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1charph* group_strings_170;
void* __right_value182 = (void*)0;
char* str2_171;
void* __right_value183 = (void*)0;
char* str_172;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct list$1charph* group_strings_173;
int i_174;
void* __right_value186 = (void*)0;
char* match_string_175;
void* __right_value187 = (void*)0;
char* str2_176;
struct list$1charph* __result111__;
err_158 = (void*)0;
memset(&erro_ofs_159, 0, sizeof(int));
    result_152=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 463, "list$1charph"))));
    offset_153=0;
    ovec_max_154=16;
    int start_155[ovec_max_154];
    memset(&start_155, 0, sizeof(int)    *(ovec_max_154)    );
    int end_156[ovec_max_154];
    memset(&end_156, 0, sizeof(int)    *(ovec_max_154)    );
    int ovec_value_157[ovec_max_154*3];
    memset(&ovec_value_157, 0, sizeof(int)    *(ovec_max_154*3)    );
    options_160=reg->options;
    str_161=reg->str;
    re_162=reg->re;
    n_163=0;
    while((_Bool)1) {
        options_164=2097152;
        len_165=strlen(self);
        regex_result_166=pcre_exec(re_162,(struct pcre_extra*)0,self,len_165,offset_153,options_164,ovec_value_157,ovec_max_154*3);
        for(        i_167=0;        i_167<ovec_max_154;        i_167++        ){
            start_155[i_167]=ovec_value_157[i_167*2];
        }
        for(        i_168=0;        i_168<ovec_max_154;        i_168++        ){
            end_156[i_168]=ovec_value_157[i_168*2+1];
        }
        if(        regex_result_166==1) {
            str_169=(char*)come_increment_ref_count(charp_substring(self,start_155[0],end_156[0]));
            group_strings_170=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 499, "list$1charph"))));
            str2_171=(char*)come_increment_ref_count(block(parent,str_169,group_strings_170));
            list$1charph_push_back(result_152,(char*)come_increment_ref_count(str2_171));
            if(            offset_153==end_156[0]) {
                offset_153++;
            }
            else {
                offset_153=end_156[0];
            }
            n_163++;
            if(            n_163==count) {
                str_169 = come_decrement_ref_count2(str_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_170,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_171 = come_decrement_ref_count2(str2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_169 = come_decrement_ref_count2(str_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_170,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_171 = come_decrement_ref_count2(str2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_166>1) {
            str_172=(char*)come_increment_ref_count(charp_substring(self,start_155[0],end_156[0]));
            group_strings_173=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 521, "list$1charph"))));
            for(            i_174=1;            i_174<regex_result_166;            i_174++            ){
                match_string_175=(char*)come_increment_ref_count(charp_substring(self,start_155[i_174],end_156[i_174]));
                list$1charph_push_back(group_strings_173,(char*)come_increment_ref_count(match_string_175));
                match_string_175 = come_decrement_ref_count2(match_string_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_176=(char*)come_increment_ref_count(block(parent,str_172,group_strings_173));
            list$1charph_push_back(result_152,(char*)come_increment_ref_count(str2_176));
            if(            offset_153==end_156[0]) {
                offset_153++;
            }
            else {
                offset_153=end_156[0];
            }
            n_163++;
            if(            n_163==count) {
                str_172 = come_decrement_ref_count2(str_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_173,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_176 = come_decrement_ref_count2(str2_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_172 = come_decrement_ref_count2(str_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_173,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_176 = come_decrement_ref_count2(str2_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result111__ = gComeFunResultObject = __result_obj__ = result_152;
    /*i*/come_call_finalizer3(result_152,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_177;
int erro_ofs_178;
int options_179;
char* str_180;
struct real_pcre8_or_16* re_181;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* result_182;
int offset_183;
int ovec_max_184;
int options_188;
int len_189;
int regex_result_190;
int i_191;
int i_192;
void* __right_value190 = (void*)0;
char* str_193;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1charph* match_strings_194;
void* __right_value193 = (void*)0;
char* str2_195;
void* __right_value194 = (void*)0;
char* str_196;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1charph* match_strings_197;
int i_198;
void* __right_value197 = (void*)0;
char* match_str_199;
void* __right_value198 = (void*)0;
char* str2_200;
void* __right_value199 = (void*)0;
char* str_201;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1charph* match_strings_202;
void* __right_value202 = (void*)0;
char* str2_203;
struct list$1charph* __result112__;
err_177 = (void*)0;
memset(&erro_ofs_178, 0, sizeof(int));
    options_179=reg->options;
    str_180=reg->str;
    re_181=reg->re;
    result_182=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 563, "list$1charph"))));
    offset_183=0;
    ovec_max_184=16;
    int start_185[ovec_max_184];
    memset(&start_185, 0, sizeof(int)    *(ovec_max_184)    );
    int end_186[ovec_max_184];
    memset(&end_186, 0, sizeof(int)    *(ovec_max_184)    );
    int ovec_value_187[ovec_max_184*3];
    memset(&ovec_value_187, 0, sizeof(int)    *(ovec_max_184*3)    );
    while((_Bool)1) {
        options_188=2097152;
        len_189=strlen(self);
        regex_result_190=pcre_exec(re_181,(struct pcre_extra*)0,self,len_189,offset_183,options_188,ovec_value_187,ovec_max_184*3);
        for(        i_191=0;        i_191<ovec_max_184;        i_191++        ){
            start_185[i_191]=ovec_value_187[i_191*2];
        }
        for(        i_192=0;        i_192<ovec_max_184;        i_192++        ){
            end_186[i_192]=ovec_value_187[i_192*2+1];
        }
        if(        regex_result_190==1) {
            str_193=(char*)come_increment_ref_count(charp_substring(self,offset_183,start_185[0]));
            match_strings_194=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 590, "list$1charph"))));
            str2_195=(char*)come_increment_ref_count(block(parent,str_193,match_strings_194));
            list$1charph_push_back(result_182,(char*)come_increment_ref_count(str2_195));
            if(            offset_183==end_186[0]) {
                offset_183++;
            }
            else {
                offset_183=end_186[0];
            }
            str_193 = come_decrement_ref_count2(str_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_194,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_195 = come_decrement_ref_count2(str2_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_190>1) {
            str_196=(char*)come_increment_ref_count(charp_substring(self,offset_183,start_185[0]));
            if(            offset_183==end_186[0]) {
                offset_183++;
            }
            else {
                offset_183=end_186[0];
            }
            match_strings_197=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            for(            i_198=1;            i_198<regex_result_190;            i_198++            ){
                match_str_199=(char*)come_increment_ref_count(charp_substring(self,start_185[i_198],end_186[i_198]));
                list$1charph_push_back(match_strings_197,(char*)come_increment_ref_count(match_str_199));
                match_str_199 = come_decrement_ref_count2(match_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_200=(char*)come_increment_ref_count(block(parent,str_196,match_strings_197));
            list$1charph_push_back(result_182,(char*)come_increment_ref_count(str2_200));
            str_196 = come_decrement_ref_count2(str_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_197,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_200 = come_decrement_ref_count2(str2_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_183<charp_length(self)) {
        str_201=(char*)come_increment_ref_count(charp_substring(self,offset_183,-1));
        match_strings_202=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 632, "list$1charph"))));
        str2_203=(char*)come_increment_ref_count(block(parent,str_201,match_strings_202));
        list$1charph_push_back(result_182,(char*)come_increment_ref_count(str2_203));
        str_201 = come_decrement_ref_count2(str_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_202,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        str2_203 = come_decrement_ref_count2(str2_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result112__ = gComeFunResultObject = __result_obj__ = result_182;
    /*i*/come_call_finalizer3(result_182,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_204;
int erro_ofs_205;
int options_206;
char* str_207;
struct real_pcre8_or_16* re_208;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1charph* result_209;
int offset_210;
int ovec_max_211;
int n_215;
int options_216;
int len_217;
int regex_result_218;
int i_219;
int i_220;
void* __right_value205 = (void*)0;
char* str_221;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1charph* match_strings_222;
void* __right_value208 = (void*)0;
char* str2_223;
void* __right_value209 = (void*)0;
char* str_224;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1charph* match_strings_225;
int i_226;
void* __right_value212 = (void*)0;
char* match_str_227;
void* __right_value213 = (void*)0;
char* str2_228;
struct list$1charph* __result113__;
err_204 = (void*)0;
memset(&erro_ofs_205, 0, sizeof(int));
    options_206=reg->options;
    str_207=reg->str;
    re_208=reg->re;
    result_209=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 650, "list$1charph"))));
    offset_210=0;
    ovec_max_211=16;
    int start_212[ovec_max_211];
    memset(&start_212, 0, sizeof(int)    *(ovec_max_211)    );
    int end_213[ovec_max_211];
    memset(&end_213, 0, sizeof(int)    *(ovec_max_211)    );
    int ovec_value_214[ovec_max_211*3];
    memset(&ovec_value_214, 0, sizeof(int)    *(ovec_max_211*3)    );
    n_215=0;
    while((_Bool)1) {
        options_216=2097152;
        len_217=strlen(self);
        regex_result_218=pcre_exec(re_208,(struct pcre_extra*)0,self,len_217,offset_210,options_216,ovec_value_214,ovec_max_211*3);
        for(        i_219=0;        i_219<ovec_max_211;        i_219++        ){
            start_212[i_219]=ovec_value_214[i_219*2];
        }
        for(        i_220=0;        i_220<ovec_max_211;        i_220++        ){
            end_213[i_220]=ovec_value_214[i_220*2+1];
        }
        if(        regex_result_218==1) {
            str_221=(char*)come_increment_ref_count(charp_substring(self,offset_210,start_212[0]));
            match_strings_222=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 679, "list$1charph"))));
            str2_223=(char*)come_increment_ref_count(block(parent,str_221,match_strings_222));
            list$1charph_push_back(result_209,(char*)come_increment_ref_count(str2_223));
            if(            offset_210==end_213[0]) {
                offset_210++;
            }
            else {
                offset_210=end_213[0];
            }
            str_221 = come_decrement_ref_count2(str_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_222,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_223 = come_decrement_ref_count2(str2_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_218>1) {
            str_224=(char*)come_increment_ref_count(charp_substring(self,offset_210,start_212[0]));
            if(            offset_210==end_213[0]) {
                offset_210++;
            }
            else {
                offset_210=end_213[0];
            }
            match_strings_225=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 702, "list$1charph"))));
            for(            i_226=1;            i_226<regex_result_218;            i_226++            ){
                match_str_227=(char*)come_increment_ref_count(charp_substring(self,start_212[i_226],end_213[i_226]));
                list$1charph_push_back(match_strings_225,(char*)come_increment_ref_count(match_str_227));
                match_str_227 = come_decrement_ref_count2(match_str_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_228=(char*)come_increment_ref_count(block(parent,str_224,match_strings_225));
            list$1charph_push_back(result_209,(char*)come_increment_ref_count(str2_228));
            str_224 = come_decrement_ref_count2(str_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_225,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_228 = come_decrement_ref_count2(str2_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_215++;
        if(        n_215==count) {
            break;
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = result_209;
    /*i*/come_call_finalizer3(result_209,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
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
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1charph* result_229;
int offset_230;
int ovec_max_231;
const char* err_235;
int erro_ofs_236;
int options_237;
char* str_238;
struct real_pcre8_or_16* re_239;
int options_240;
int len_241;
int regex_result_242;
int i_243;
int i_244;
void* __right_value216 = (void*)0;
char* str_245;
void* __right_value217 = (void*)0;
char* str_246;
int i_247;
void* __right_value218 = (void*)0;
char* match_string_248;
struct list$1charph* __result114__;
err_235 = (void*)0;
memset(&erro_ofs_236, 0, sizeof(int));
    result_229=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 766, "list$1charph"))));
    offset_230=0;
    ovec_max_231=16;
    int start_232[ovec_max_231];
    memset(&start_232, 0, sizeof(int)    *(ovec_max_231)    );
    int end_233[ovec_max_231];
    memset(&end_233, 0, sizeof(int)    *(ovec_max_231)    );
    int ovec_value_234[ovec_max_231*3];
    memset(&ovec_value_234, 0, sizeof(int)    *(ovec_max_231*3)    );
    options_237=reg->options;
    str_238=reg->str;
    re_239=reg->re;
    while((_Bool)1) {
        options_240=2097152;
        len_241=strlen(self);
        regex_result_242=pcre_exec(re_239,(struct pcre_extra*)0,self,len_241,offset_230,options_240,ovec_value_234,ovec_max_231*3);
        for(        i_243=0;        i_243<ovec_max_231;        i_243++        ){
            start_232[i_243]=ovec_value_234[i_243*2];
        }
        for(        i_244=0;        i_244<ovec_max_231;        i_244++        ){
            end_233[i_244]=ovec_value_234[i_244*2+1];
        }
        if(        regex_result_242==1) {
            str_245=(char*)come_increment_ref_count(charp_substring(self,start_232[0],end_233[0]));
            list$1charph_push_back(result_229,(char*)come_increment_ref_count(str_245));
            if(            offset_230==end_233[0]) {
                offset_230++;
            }
            else {
                offset_230=end_233[0];
            }
            str_245 = come_decrement_ref_count2(str_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_242>1) {
            str_246=(char*)come_increment_ref_count(charp_substring(self,start_232[0],end_233[0]));
            list$1charph_push_back(result_229,(char*)come_increment_ref_count(str_246));
            if(            offset_230==end_233[0]) {
                offset_230++;
            }
            else {
                offset_230=end_233[0];
            }
            *num_group_string_in_regex=regex_result_242-1;
            for(            i_247=1;            i_247<regex_result_242;            i_247++            ){
                match_string_248=(char*)come_increment_ref_count(charp_substring(self,start_232[i_247],end_233[i_247]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_248));
                match_string_248 = come_decrement_ref_count2(match_string_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_246 = come_decrement_ref_count2(str_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_229;
    /*i*/come_call_finalizer3(result_229,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
char* result_249;
int len_250;
char* __result115__;
    result_249=(char*)come_increment_ref_count(__builtin_string(self));
    len_250=strlen(self);
    if(    self[len_250-1]==10) {
        result_249[len_250-1]=0;
    }
    else if(    self[len_250-1]==13) {
        result_249[len_250-1]=0;
    }
    else if(    len_250>2&&self[len_250-2]==13&&self[len_250-1]==10) {
        result_249[len_250-2]=0;
    }
    __result115__ = gComeFunResultObject = __result_obj__ = result_249;
    result_249 = come_decrement_ref_count2(result_249, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_251;
void* __right_value220 = (void*)0;
char* result_252;
int n_253;
int i_254;
char c_255;
char* __result116__;
    len_251=charp_length(str);
    result_252=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_251*2+1)), "libcomelang-str.c", 860, "char"));
    n_253=0;
    for(    i_254=0;    i_254<len_251;    i_254++    ){
        c_255=str[i_254];
        if(        (c_255>=0&&c_255<32)||c_255==127) {
            result_252[n_253++]=94;
            result_252[n_253++]=c_255+65-1;
        }
        else {
            result_252[n_253++]=c_255;
        }
    }
    result_252[n_253]=0;
    __result116__ = gComeFunResultObject = __result_obj__ = result_252;
    result_252 = come_decrement_ref_count2(result_252, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_256;
void* __right_value221 = (void*)0;
char* result_257;
char* __result117__;
    len_256=6*(wcslen(wstr)+1);
    result_257=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_256)), "libcomelang-str.c", 886, "char"));
    if(    wcstombs(result_257,wstr,len_256)<0) {
        strncpy(result_257,"",len_256);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_257;
    result_257 = come_decrement_ref_count2(result_257, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value222=__builtin_wstring(str)));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

int wchar_tp_length(int* str){
    return wcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_258;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
int* __result119__;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
int* __result120__;
void* __right_value227 = (void*)0;
int* sub_str_259;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
int* __result121__;
    len_258=wcslen(str);
    if(    len_258==0) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value224=string_to_wstring(((char*)(__right_value223=wchar_tp_to_string(str))))));
        __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    if(    head<0) {
        head+=len_258;
    }
    if(    tail<0) {
        tail+=len_258+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result120__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value226=string_to_wstring(((char*)(__right_value225=wchar_tp_to_string(str))))));
        __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    if(    tail>=len_258) {
        tail=len_258;
    }
    sub_str_259=(int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_259,sizeof(int)*(wstring_length(sub_str_259)+1));
    __result121__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value229=string_to_wstring(((char*)(__right_value228=wchar_tp_to_string(str))))));
    sub_str_259 = come_decrement_ref_count2(sub_str_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_260;
    head_260=wcsstr(str,search_str);
    if(    head_260==((void*)0)) {
        return default_value;
    }
    return head_260-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_261;
int* p_262;
int len2_263;
_Bool result_264;
int i_265;
memset(&i_265, 0, sizeof(int));
    len_261=wcslen(search_str);
    p_262=str+wcslen(str)-len_261;
    while(p_262>=str) {
        len2_263=wcslen(p_262);
        result_264=(_Bool)1;
        for(        i_265=0;        i_265<len_261&&i_265<len2_263;        i_265++        ){
            if(            p_262[i_265]!=search_str[i_265]) {
                result_264=(_Bool)0;
            }
        }
        if(        result_264) {
            return (p_262-str);
        }
        p_262--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_266;
void* __right_value230 = (void*)0;
int* result_267;
int i_268;
int* __result122__;
    len_266=wcslen(str);
    result_267=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_266+1)), "libcomelang-str.c", 986, "int"));
    for(    i_268=0;    i_268<len_266;    i_268++    ){
        result_267[i_268]=str[len_266-i_268-1];
    }
    result_267[len_266]=0;
    __result122__ = gComeFunResultObject = __result_obj__ = result_267;
    result_267 = come_decrement_ref_count2(result_267, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_269;
void* __right_value231 = (void*)0;
int* result_270;
int i_271;
int* __result123__;
    len_269=wcslen(str)*n+1;
    result_270=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_269)), "libcomelang-str.c", 1001, "int"));
    result_270[0]=0;
    for(    i_271=0;    i_271<n;    i_271++    ){
        wcscat(result_270,str);
    }
    __result123__ = gComeFunResultObject = __result_obj__ = result_270;
    result_270 = come_decrement_ref_count2(result_270, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_272;
void* __right_value232 = (void*)0;
int* result_273;
int n_274;
int i_275;
int c_276;
int* __result124__;
    len_272=wchar_tp_length(str);
    result_273=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_272*2+1)), "libcomelang-str.c", 1015, "int"));
    n_274=0;
    for(    i_275=0;    i_275<len_272;    i_275++    ){
        c_276=str[i_275];
        if(        (c_276>=0&&c_276<32)||c_276==127) {
            result_273[n_274++]=94;
            result_273[n_274++]=c_276+65-1;
        }
        else {
            result_273[n_274++]=c_276;
        }
    }
    result_273[n_274]=0;
    __result124__ = gComeFunResultObject = __result_obj__ = result_273;
    result_273 = come_decrement_ref_count2(result_273, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_277;
int ovec_max_278;
const char* err_282;
int erro_ofs_283;
int options_284;
char* str_285;
struct real_pcre8_or_16* re_286;
int n_287;
int options_288;
int len_289;
int regex_result_290;
int i_291;
int i_292;
int i_295;
void* __right_value233 = (void*)0;
char* match_string_296;
err_282 = (void*)0;
memset(&erro_ofs_283, 0, sizeof(int));
    offset_277=0;
    ovec_max_278=16;
    int start_279[ovec_max_278];
    memset(&start_279, 0, sizeof(int)    *(ovec_max_278)    );
    int end_280[ovec_max_278];
    memset(&end_280, 0, sizeof(int)    *(ovec_max_278)    );
    int ovec_value_281[ovec_max_278*3];
    memset(&ovec_value_281, 0, sizeof(int)    *(ovec_max_278*3)    );
    options_284=reg->options;
    str_285=reg->str;
    re_286=reg->re;
    n_287=0;
    while((_Bool)1) {
        options_288=2097152;
        len_289=strlen(self);
        regex_result_290=pcre_exec(re_286,(struct pcre_extra*)0,self,len_289,offset_277,options_288,ovec_value_281,ovec_max_278*3);
        for(        i_291=0;        i_291<ovec_max_278;        i_291++        ){
            start_279[i_291]=ovec_value_281[i_291*2];
        }
        for(        i_292=0;        i_292<ovec_max_278;        i_292++        ){
            end_280[i_292]=ovec_value_281[i_292*2+1];
        }
        if(        regex_result_290==1||(group_strings==((void*)0)&&regex_result_290>0)) {
            n_287++;
            if(            n_287==count) {
                return (_Bool)1;
            }
            if(            offset_277==end_280[0]) {
                offset_277++;
            }
            else {
                offset_277=end_280[0];
            }
        }
        else if(        regex_result_290>1) {
            n_287++;
            list$1charph_reset(group_strings);
            for(            i_295=1;            i_295<regex_result_290;            i_295++            ){
                match_string_296=(char*)come_increment_ref_count(charp_substring(self,start_279[i_295],end_280[i_295]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_296));
                match_string_296 = come_decrement_ref_count2(match_string_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_287==count) {
                return (_Bool)1;
            }
            if(            offset_277==end_280[0]) {
                offset_277++;
            }
            else {
                offset_277=end_280[0];
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
struct list_item$1charph* it_293;
struct list_item$1charph* prev_it_294;
struct list$1charph* __result125__;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        /*i*/come_call_finalizer3(prev_it_294,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result125__;
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
void* __right_value234 = (void*)0;
int* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value234=wchar_tp_multiply(str,n)));
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
int* __result127__;
    __result127__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value235=wchar_tp_multiply(str,n)));
    __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
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
void* __right_value236 = (void*)0;
int* result_297;
int* __result128__;
    result_297=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1179, "int"));
    wcscpy(result_297,left);
    wcscat(result_297,right);
    __result128__ = gComeFunResultObject = __result_obj__ = result_297;
    result_297 = come_decrement_ref_count2(result_297, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
int* result_298;
int* __result129__;
    result_298=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1189, "int"));
    wcscpy(result_298,left);
    wcscat(result_298,right);
    __result129__ = gComeFunResultObject = __result_obj__ = result_298;
    result_298 = come_decrement_ref_count2(result_298, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_299;
    head_299=strstr(str,search_str);
    if(    head_299==((void*)0)) {
        return default_value;
    }
    return head_299-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_300;
int result_304;
int offset_305;
const char* err_306;
int erro_ofs_307;
int options_308;
char* str_309;
struct real_pcre8_or_16* re_310;
int options_311;
int len_312;
int regex_result_313;
int i_314;
int i_315;
err_306 = (void*)0;
memset(&erro_ofs_307, 0, sizeof(int));
    ovec_max_300=16;
    int start_301[ovec_max_300];
    memset(&start_301, 0, sizeof(int)    *(ovec_max_300)    );
    int end_302[ovec_max_300];
    memset(&end_302, 0, sizeof(int)    *(ovec_max_300)    );
    int ovec_value_303[ovec_max_300*3];
    memset(&ovec_value_303, 0, sizeof(int)    *(ovec_max_300*3)    );
    result_304=default_value;
    offset_305=0;
    options_308=reg->options;
    str_309=reg->str;
    re_310=reg->re;
    while((_Bool)1) {
        options_311=2097152;
        len_312=strlen(self);
        regex_result_313=pcre_exec(re_310,(struct pcre_extra*)0,self,len_312,offset_305,options_311,ovec_value_303,ovec_max_300*3);
        for(        i_314=0;        i_314<ovec_max_300;        i_314++        ){
            start_301[i_314]=ovec_value_303[i_314*2];
        }
        for(        i_315=0;        i_315<ovec_max_300;        i_315++        ){
            end_302[i_315]=ovec_value_303[i_315*2+1];
        }
        if(        regex_result_313==1||regex_result_313>0) {
            result_304=start_301[0];
            break;
        }
        {
            break;
        }
    }
    return result_304;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_316;
void* __right_value238 = (void*)0;
char* __result130__;
void* __right_value239 = (void*)0;
char* __result131__;
    len_316=strlen(self);
    if(    strcmp(self,"")==0) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string(self)));
        __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    index<0) {
        index+=len_316;
    }
    if(    index>=len_316) {
        index=len_316-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string(self)));
    __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_317;
void* __right_value240 = (void*)0;
char* result_318;
int i_319;
char* __result132__;
    len_317=strlen(str)*n+1;
    result_318=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_317)), "libcomelang-str.c", 1287, "char"));
    result_318[0]=0;
    for(    i_319=0;    i_319<n;    i_319++    ){
        strcat(result_318,str);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_318;
    result_318 = come_decrement_ref_count2(result_318, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_320;
int ovec_max_321;
const char* err_325;
int erro_ofs_326;
int options_327;
char* str_328;
struct real_pcre8_or_16* re_329;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct buffer* result_330;
int options_331;
int len_332;
int regex_result_333;
int i_334;
int i_335;
void* __right_value243 = (void*)0;
char* str_336;
void* __right_value244 = (void*)0;
char* str_337;
void* __right_value245 = (void*)0;
char* str_338;
void* __right_value246 = (void*)0;
char* __result133__;
err_325 = (void*)0;
memset(&erro_ofs_326, 0, sizeof(int));
    offset_320=0;
    ovec_max_321=16;
    int start_322[ovec_max_321];
    memset(&start_322, 0, sizeof(int)    *(ovec_max_321)    );
    int end_323[ovec_max_321];
    memset(&end_323, 0, sizeof(int)    *(ovec_max_321)    );
    int ovec_value_324[ovec_max_321*3];
    memset(&ovec_value_324, 0, sizeof(int)    *(ovec_max_321*3)    );
    options_327=reg->options;
    str_328=reg->str;
    re_329=reg->re;
    result_330=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1315, "buffer"))));
    while((_Bool)1) {
        options_331=2097152;
        len_332=strlen(self);
        regex_result_333=pcre_exec(re_329,(struct pcre_extra*)0,self,len_332,offset_320,options_331,ovec_value_324,ovec_max_321*3);
        for(        i_334=0;        i_334<ovec_max_321;        i_334++        ){
            start_322[i_334]=ovec_value_324[i_334*2];
        }
        for(        i_335=0;        i_335<ovec_max_321;        i_335++        ){
            end_323[i_335]=ovec_value_324[i_335*2+1];
        }
        if(        regex_result_333==1) {
            str_336=(char*)come_increment_ref_count(charp_substring(self,offset_320,start_322[0]));
            buffer_append_str(result_330,str_336);
            buffer_append_str(result_330,replace);
            if(            offset_320==end_323[0]) {
                offset_320++;
            }
            else {
                offset_320=end_323[0];
            }
            if(            !reg->global) {
                str_337=(char*)come_increment_ref_count(charp_substring(self,offset_320,-1));
                buffer_append_str(result_330,str_337);
                str_337 = come_decrement_ref_count2(str_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_336 = come_decrement_ref_count2(str_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_337 = come_decrement_ref_count2(str_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_336 = come_decrement_ref_count2(str_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_338=(char*)come_increment_ref_count(charp_substring(self,offset_320,-1));
            buffer_append_str(result_330,str_338);
            str_338 = come_decrement_ref_count2(str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_338 = come_decrement_ref_count2(str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result133__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=buffer_to_string(result_330)));
    /*i*/come_call_finalizer3(result_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_339;
int ovec_max_340;
const char* err_344;
int erro_ofs_345;
int options_346;
char* str_347;
struct real_pcre8_or_16* re_348;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct buffer* result_349;
int n_350;
int options_351;
int len_352;
int regex_result_353;
int i_354;
int i_355;
void* __right_value249 = (void*)0;
char* str_356;
void* __right_value250 = (void*)0;
char* str_357;
void* __right_value251 = (void*)0;
char* str_358;
void* __right_value252 = (void*)0;
char* str_359;
void* __right_value253 = (void*)0;
char* __result134__;
err_344 = (void*)0;
memset(&erro_ofs_345, 0, sizeof(int));
    offset_339=0;
    ovec_max_340=16;
    int start_341[ovec_max_340];
    memset(&start_341, 0, sizeof(int)    *(ovec_max_340)    );
    int end_342[ovec_max_340];
    memset(&end_342, 0, sizeof(int)    *(ovec_max_340)    );
    int ovec_value_343[ovec_max_340*3];
    memset(&ovec_value_343, 0, sizeof(int)    *(ovec_max_340*3)    );
    options_346=reg->options;
    str_347=reg->str;
    re_348=reg->re;
    result_349=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1378, "buffer"))));
    n_350=0;
    while((_Bool)1) {
        options_351=2097152;
        len_352=strlen(self);
        regex_result_353=pcre_exec(re_348,(struct pcre_extra*)0,self,len_352,offset_339,options_351,ovec_value_343,ovec_max_340*3);
        for(        i_354=0;        i_354<ovec_max_340;        i_354++        ){
            start_341[i_354]=ovec_value_343[i_354*2];
        }
        for(        i_355=0;        i_355<ovec_max_340;        i_355++        ){
            end_342[i_355]=ovec_value_343[i_355*2+1];
        }
        if(        regex_result_353==1) {
            n_350++;
            str_356=(char*)come_increment_ref_count(charp_substring(self,offset_339,start_341[0]));
            buffer_append_str(result_349,str_356);
            buffer_append_str(result_349,replace);
            if(            offset_339==end_342[0]) {
                offset_339++;
            }
            else {
                offset_339=end_342[0];
            }
            if(            !reg->global) {
                str_357=(char*)come_increment_ref_count(charp_substring(self,offset_339,-1));
                buffer_append_str(result_349,str_357);
                str_357 = come_decrement_ref_count2(str_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_356 = come_decrement_ref_count2(str_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_357 = come_decrement_ref_count2(str_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_350==count) {
                str_358=(char*)come_increment_ref_count(charp_substring(self,offset_339,-1));
                buffer_append_str(result_349,str_358);
                str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_356 = come_decrement_ref_count2(str_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_356 = come_decrement_ref_count2(str_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_359=(char*)come_increment_ref_count(charp_substring(self,offset_339,-1));
            buffer_append_str(result_349,str_359);
            str_359 = come_decrement_ref_count2(str_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_359 = come_decrement_ref_count2(str_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=buffer_to_string(result_349)));
    /*i*/come_call_finalizer3(result_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1charph* result_360;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct buffer* buf_361;
int i_362;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1charph* __result135__;
    result_360=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1437, "list$1charph"))));
    buf_361=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1439, "buffer"))));
    for(    i_362=0;    i_362<charp_length(self);    i_362++    ){
        if(        strstr(self+i_362,str)==self+i_362) {
            list$1charph_push_back(result_360,(char*)come_increment_ref_count(__builtin_string(buf_361->buf)));
            buffer_reset(buf_361);
            i_362+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_361,self[i_362]);
        }
    }
    if(    buffer_length(buf_361)!=0) {
        list$1charph_push_back(result_360,(char*)come_increment_ref_count(__builtin_string(buf_361->buf)));
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_360;
    /*i*/come_call_finalizer3(result_360,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_361,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1charph* result_363;
int offset_364;
int ovec_max_365;
const char* err_369;
int erro_ofs_370;
int options_371;
char* str_372;
struct real_pcre8_or_16* re_373;
int options_374;
int len_375;
int regex_result_376;
int i_377;
int i_378;
void* __right_value262 = (void*)0;
char* str_379;
void* __right_value263 = (void*)0;
char* str_380;
int i_381;
void* __right_value264 = (void*)0;
char* match_string_382;
struct list$1charph* __result136__;
err_369 = (void*)0;
memset(&erro_ofs_370, 0, sizeof(int));
    result_363=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1460, "list$1charph"))));
    offset_364=0;
    ovec_max_365=16;
    int start_366[ovec_max_365];
    memset(&start_366, 0, sizeof(int)    *(ovec_max_365)    );
    int end_367[ovec_max_365];
    memset(&end_367, 0, sizeof(int)    *(ovec_max_365)    );
    int ovec_value_368[ovec_max_365*3];
    memset(&ovec_value_368, 0, sizeof(int)    *(ovec_max_365*3)    );
    options_371=reg->options;
    str_372=reg->str;
    re_373=reg->re;
    while((_Bool)1) {
        options_374=2097152;
        len_375=strlen(self);
        regex_result_376=pcre_exec(re_373,(struct pcre_extra*)0,self,len_375,offset_364,options_374,ovec_value_368,ovec_max_365*3);
        for(        i_377=0;        i_377<ovec_max_365;        i_377++        ){
            start_366[i_377]=ovec_value_368[i_377*2];
        }
        for(        i_378=0;        i_378<ovec_max_365;        i_378++        ){
            end_367[i_378]=ovec_value_368[i_378*2+1];
        }
        if(        regex_result_376==1) {
            str_379=(char*)come_increment_ref_count(charp_substring(self,start_366[0],end_367[0]));
            list$1charph_push_back(result_363,(char*)come_increment_ref_count(str_379));
            if(            offset_364==end_367[0]) {
                offset_364++;
            }
            else {
                offset_364=end_367[0];
            }
            str_379 = come_decrement_ref_count2(str_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_376>1) {
            str_380=(char*)come_increment_ref_count(charp_substring(self,start_366[0],end_367[0]));
            list$1charph_push_back(result_363,(char*)come_increment_ref_count(str_380));
            if(            offset_364==end_367[0]) {
                offset_364++;
            }
            else {
                offset_364=end_367[0];
            }
            for(            i_381=1;            i_381<regex_result_376;            i_381++            ){
                match_string_382=(char*)come_increment_ref_count(charp_substring(self,start_366[i_381],end_367[i_381]));
                list$1charph_push_back(result_363,(char*)come_increment_ref_count(match_string_382));
                match_string_382 = come_decrement_ref_count2(match_string_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_380 = come_decrement_ref_count2(str_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_363;
    /*i*/come_call_finalizer3(result_363,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_383;
int erro_ofs_384;
int options_385;
char* str_386;
struct real_pcre8_or_16* re_387;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1charph* result_388;
int offset_389;
int ovec_max_390;
int options_394;
int len_395;
int regex_result_396;
int i_397;
int i_398;
void* __right_value267 = (void*)0;
char* str_399;
void* __right_value268 = (void*)0;
char* str_400;
int i_401;
void* __right_value269 = (void*)0;
char* match_str_402;
void* __right_value270 = (void*)0;
char* str_403;
struct list$1charph* __result137__;
err_383 = (void*)0;
memset(&erro_ofs_384, 0, sizeof(int));
    options_385=reg->options;
    str_386=reg->str;
    re_387=reg->re;
    result_388=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1541, "list$1charph"))));
    offset_389=0;
    ovec_max_390=16;
    int start_391[ovec_max_390];
    memset(&start_391, 0, sizeof(int)    *(ovec_max_390)    );
    int end_392[ovec_max_390];
    memset(&end_392, 0, sizeof(int)    *(ovec_max_390)    );
    int ovec_value_393[ovec_max_390*3];
    memset(&ovec_value_393, 0, sizeof(int)    *(ovec_max_390*3)    );
    while((_Bool)1) {
        options_394=2097152;
        len_395=strlen(self);
        regex_result_396=pcre_exec(re_387,(struct pcre_extra*)0,self,len_395,offset_389,options_394,ovec_value_393,ovec_max_390*3);
        for(        i_397=0;        i_397<ovec_max_390;        i_397++        ){
            start_391[i_397]=ovec_value_393[i_397*2];
        }
        for(        i_398=0;        i_398<ovec_max_390;        i_398++        ){
            end_392[i_398]=ovec_value_393[i_398*2+1];
        }
        if(        regex_result_396==1) {
            str_399=(char*)come_increment_ref_count(charp_substring(self,offset_389,start_391[0]));
            list$1charph_push_back(result_388,(char*)come_increment_ref_count(str_399));
            if(            offset_389==end_392[0]) {
                offset_389++;
            }
            else {
                offset_389=end_392[0];
            }
            str_399 = come_decrement_ref_count2(str_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_396>1) {
            str_400=(char*)come_increment_ref_count(charp_substring(self,offset_389,start_391[0]));
            list$1charph_push_back(result_388,(char*)come_increment_ref_count(str_400));
            if(            offset_389==end_392[0]) {
                offset_389++;
            }
            else {
                offset_389=end_392[0];
            }
            for(            i_401=1;            i_401<regex_result_396;            i_401++            ){
                match_str_402=(char*)come_increment_ref_count(charp_substring(self,start_391[i_401],end_392[i_401]));
                list$1charph_push_back(result_388,(char*)come_increment_ref_count(match_str_402));
                match_str_402 = come_decrement_ref_count2(match_str_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_400 = come_decrement_ref_count2(str_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_389<charp_length(self)) {
        str_403=(char*)come_increment_ref_count(charp_substring(self,offset_389,-1));
        list$1charph_push_back(result_388,(char*)come_increment_ref_count(str_403));
        str_403 = come_decrement_ref_count2(str_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = result_388;
    /*i*/come_call_finalizer3(result_388,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_404;
int ovec_max_405;
const char* err_409;
int erro_ofs_410;
int options_411;
char* str_412;
struct real_pcre8_or_16* re_413;
int options_414;
int len_415;
int regex_result_416;
int i_417;
int i_418;
err_409 = (void*)0;
memset(&erro_ofs_410, 0, sizeof(int));
    offset_404=0;
    ovec_max_405=16;
    int start_406[ovec_max_405];
    memset(&start_406, 0, sizeof(int)    *(ovec_max_405)    );
    int end_407[ovec_max_405];
    memset(&end_407, 0, sizeof(int)    *(ovec_max_405)    );
    int ovec_value_408[ovec_max_405*3];
    memset(&ovec_value_408, 0, sizeof(int)    *(ovec_max_405*3)    );
    options_411=reg->options;
    str_412=reg->str;
    re_413=reg->re;
    while((_Bool)1) {
        options_414=2097152;
        len_415=strlen(self);
        regex_result_416=pcre_exec(re_413,(struct pcre_extra*)0,self,len_415,offset_404,options_414,ovec_value_408,ovec_max_405*3);
        for(        i_417=0;        i_417<ovec_max_405;        i_417++        ){
            start_406[i_417]=ovec_value_408[i_417*2];
        }
        for(        i_418=0;        i_418<ovec_max_405;        i_418++        ){
            end_407[i_418]=ovec_value_408[i_418*2+1];
        }
        if(        regex_result_416>0) {
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
const char* err_419;
int erro_ofs_420;
int options_421;
char* str_422;
struct real_pcre8_or_16* re_423;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* result_424;
int offset_425;
int ovec_max_426;
int n_430;
int options_431;
int len_432;
int regex_result_433;
int i_434;
int i_435;
void* __right_value273 = (void*)0;
char* str_436;
void* __right_value274 = (void*)0;
char* str_437;
int i_438;
void* __right_value275 = (void*)0;
char* match_str_439;
void* __right_value276 = (void*)0;
char* str_440;
struct list$1charph* __result138__;
err_419 = (void*)0;
memset(&erro_ofs_420, 0, sizeof(int));
    options_421=reg->options;
    str_422=reg->str;
    re_423=reg->re;
    result_424=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1663, "list$1charph"))));
    offset_425=0;
    ovec_max_426=16;
    int start_427[ovec_max_426];
    memset(&start_427, 0, sizeof(int)    *(ovec_max_426)    );
    int end_428[ovec_max_426];
    memset(&end_428, 0, sizeof(int)    *(ovec_max_426)    );
    int ovec_value_429[ovec_max_426*3];
    memset(&ovec_value_429, 0, sizeof(int)    *(ovec_max_426*3)    );
    n_430=0;
    while((_Bool)1) {
        options_431=2097152;
        len_432=strlen(self);
        regex_result_433=pcre_exec(re_423,(struct pcre_extra*)0,self,len_432,offset_425,options_431,ovec_value_429,ovec_max_426*3);
        for(        i_434=0;        i_434<ovec_max_426;        i_434++        ){
            start_427[i_434]=ovec_value_429[i_434*2];
        }
        for(        i_435=0;        i_435<ovec_max_426;        i_435++        ){
            end_428[i_435]=ovec_value_429[i_435*2+1];
        }
        if(        regex_result_433==1) {
            str_436=(char*)come_increment_ref_count(charp_substring(self,offset_425,start_427[0]));
            list$1charph_push_back(result_424,(char*)come_increment_ref_count(str_436));
            if(            offset_425==end_428[0]) {
                offset_425++;
            }
            else {
                offset_425=end_428[0];
            }
            str_436 = come_decrement_ref_count2(str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_433>1) {
            str_437=(char*)come_increment_ref_count(charp_substring(self,offset_425,start_427[0]));
            list$1charph_push_back(result_424,(char*)come_increment_ref_count(str_437));
            if(            offset_425==end_428[0]) {
                offset_425++;
            }
            else {
                offset_425=end_428[0];
            }
            for(            i_438=1;            i_438<regex_result_433;            i_438++            ){
                match_str_439=(char*)come_increment_ref_count(charp_substring(self,start_427[i_438],end_428[i_438]));
                list$1charph_push_back(result_424,(char*)come_increment_ref_count(match_str_439));
                match_str_439 = come_decrement_ref_count2(match_str_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_430++;
        if(        maxsplit==n_430) {
            break;
        }
    }
    if(    offset_425<charp_length(self)) {
        str_440=(char*)come_increment_ref_count(charp_substring(self,offset_425,-1));
        list$1charph_push_back(result_424,(char*)come_increment_ref_count(str_440));
        str_440 = come_decrement_ref_count2(str_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result138__ = gComeFunResultObject = __result_obj__ = result_424;
    /*i*/come_call_finalizer3(result_424,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_441;
int erro_ofs_442;
int options_443;
char* str_444;
struct real_pcre8_or_16* re_445;
void* __right_value277 = (void*)0;
char* self2_446;
int ovec_max_447;
int result_451;
int offset_452;
int n_453;
int options_454;
int len_455;
int regex_result_456;
int i_457;
int i_458;
int __result139__;
err_441 = (void*)0;
memset(&erro_ofs_442, 0, sizeof(int));
    options_443=reg->options;
    str_444=reg->str;
    re_445=reg->re;
    self2_446=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_447=16;
    int start_448[ovec_max_447];
    memset(&start_448, 0, sizeof(int)    *(ovec_max_447)    );
    int end_449[ovec_max_447];
    memset(&end_449, 0, sizeof(int)    *(ovec_max_447)    );
    int ovec_value_450[ovec_max_447*3];
    memset(&ovec_value_450, 0, sizeof(int)    *(ovec_max_447*3)    );
    result_451=default_value;
    offset_452=0;
    n_453=0;
    while((_Bool)1) {
        options_454=2097152;
        len_455=strlen(self2_446);
        regex_result_456=pcre_exec(re_445,(struct pcre_extra*)0,self2_446,len_455,offset_452,options_454,ovec_value_450,ovec_max_447*3);
        for(        i_457=0;        i_457<ovec_max_447;        i_457++        ){
            start_448[i_457]=ovec_value_450[i_457*2];
        }
        for(        i_458=0;        i_458<ovec_max_447;        i_458++        ){
            end_449[i_458]=ovec_value_450[i_458*2+1];
        }
        if(        regex_result_456>0) {
            n_453++;
            if(            offset_452==end_449[0]) {
                offset_452++;
            }
            else {
                offset_452=end_449[0];
            }
            if(            n_453==count) {
                result_451=strlen(self)-end_449[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result139__ = result_451;
    self2_446 = come_decrement_ref_count2(self2_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result139__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_459;
int ovec_max_460;
const char* err_464;
int erro_ofs_465;
int options_466;
char* str_467;
struct real_pcre8_or_16* re_468;
int n_469;
int options_470;
int len_471;
int regex_result_472;
int i_473;
int i_474;
err_464 = (void*)0;
memset(&erro_ofs_465, 0, sizeof(int));
    offset_459=0;
    ovec_max_460=16;
    int start_461[ovec_max_460];
    memset(&start_461, 0, sizeof(int)    *(ovec_max_460)    );
    int end_462[ovec_max_460];
    memset(&end_462, 0, sizeof(int)    *(ovec_max_460)    );
    int ovec_value_463[ovec_max_460*3];
    memset(&ovec_value_463, 0, sizeof(int)    *(ovec_max_460*3)    );
    options_466=reg->options;
    str_467=reg->str;
    re_468=reg->re;
    n_469=0;
    while((_Bool)1) {
        options_470=2097152;
        len_471=strlen(self);
        regex_result_472=pcre_exec(re_468,(struct pcre_extra*)0,self,len_471,offset_459,options_470,ovec_value_463,ovec_max_460*3);
        for(        i_473=0;        i_473<ovec_max_460;        i_473++        ){
            start_461[i_473]=ovec_value_463[i_473*2];
        }
        for(        i_474=0;        i_474<ovec_max_460;        i_474++        ){
            end_462[i_474]=ovec_value_463[i_474*2+1];
        }
        if(        regex_result_472>0) {
            n_469++;
            if(            count==n_469) {
                return (_Bool)1;
            }
            if(            offset_459==end_462[0]) {
                offset_459++;
            }
            else {
                offset_459=end_462[0];
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
int offset_475;
int ovec_max_476;
const char* err_480;
int erro_ofs_481;
int options_482;
char* str_483;
struct real_pcre8_or_16* re_484;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct buffer* result_485;
int options_486;
int len_487;
int regex_result_488;
int i_489;
int i_490;
void* __right_value280 = (void*)0;
char* str_491;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* group_strings_492;
void* __right_value283 = (void*)0;
char* match_string_493;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* block_result_494;
void* __right_value286 = (void*)0;
char* str_495;
void* __right_value287 = (void*)0;
char* str_496;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1charph* group_strings_497;
int i_498;
void* __right_value290 = (void*)0;
char* match_string_499;
void* __right_value291 = (void*)0;
char* match_string_500;
void* __right_value292 = (void*)0;
char* block_result_501;
void* __right_value293 = (void*)0;
char* str_502;
void* __right_value294 = (void*)0;
char* str_503;
void* __right_value295 = (void*)0;
char* __result140__;
err_480 = (void*)0;
memset(&erro_ofs_481, 0, sizeof(int));
    offset_475=0;
    ovec_max_476=16;
    int start_477[ovec_max_476];
    memset(&start_477, 0, sizeof(int)    *(ovec_max_476)    );
    int end_478[ovec_max_476];
    memset(&end_478, 0, sizeof(int)    *(ovec_max_476)    );
    int ovec_value_479[ovec_max_476*3];
    memset(&ovec_value_479, 0, sizeof(int)    *(ovec_max_476*3)    );
    options_482=reg->options;
    str_483=reg->str;
    re_484=reg->re;
    result_485=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1875, "buffer"))));
    while((_Bool)1) {
        options_486=2097152;
        len_487=strlen(self);
        regex_result_488=pcre_exec(re_484,(struct pcre_extra*)0,self,len_487,offset_475,options_486,ovec_value_479,ovec_max_476*3);
        for(        i_489=0;        i_489<ovec_max_476;        i_489++        ){
            start_477[i_489]=ovec_value_479[i_489*2];
        }
        for(        i_490=0;        i_490<ovec_max_476;        i_490++        ){
            end_478[i_490]=ovec_value_479[i_490*2+1];
        }
        if(        regex_result_488==1) {
            str_491=(char*)come_increment_ref_count(charp_substring(self,offset_475,start_477[0]));
            buffer_append_str(result_485,str_491);
            group_strings_492=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1895, "list$1charph"))));
            match_string_493=(char*)come_increment_ref_count(charp_substring(self,start_477[0],end_478[0]));
            list$1charph_push_back(group_strings_492,(char*)come_increment_ref_count(charp_substring(self,start_477[0],end_478[0])));
            block_result_494=(char*)come_increment_ref_count(block(parent,match_string_493,group_strings_492));
            buffer_append_str(result_485,block_result_494);
            if(            offset_475==end_478[0]) {
                offset_475++;
            }
            else {
                offset_475=end_478[0];
            }
            if(            !reg->global) {
                str_495=(char*)come_increment_ref_count(charp_substring(self,offset_475,-1));
                buffer_append_str(result_485,str_495);
                str_495 = come_decrement_ref_count2(str_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_491 = come_decrement_ref_count2(str_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_492,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_493 = come_decrement_ref_count2(match_string_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_494 = come_decrement_ref_count2(block_result_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_495 = come_decrement_ref_count2(str_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_491 = come_decrement_ref_count2(str_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_492,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_493 = come_decrement_ref_count2(match_string_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_494 = come_decrement_ref_count2(block_result_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_488>1) {
            str_496=(char*)come_increment_ref_count(charp_substring(self,offset_475,start_477[0]));
            buffer_append_str(result_485,str_496);
            if(            offset_475==end_478[0]) {
                offset_475++;
            }
            else {
                offset_475=end_478[0];
            }
            group_strings_497=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1930, "list$1charph"))));
            for(            i_498=1;            i_498<regex_result_488;            i_498++            ){
                match_string_499=(char*)come_increment_ref_count(charp_substring(self,start_477[i_498],end_478[i_498]));
                list$1charph_push_back(group_strings_497,(char*)come_increment_ref_count(match_string_499));
                match_string_499 = come_decrement_ref_count2(match_string_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_500=(char*)come_increment_ref_count(charp_substring(self,start_477[0],end_478[0]));
            block_result_501=(char*)come_increment_ref_count(block(parent,match_string_500,group_strings_497));
            buffer_append_str(result_485,block_result_501);
            if(            !reg->global) {
                str_502=(char*)come_increment_ref_count(charp_substring(self,offset_475,-1));
                buffer_append_str(result_485,str_502);
                str_502 = come_decrement_ref_count2(str_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_496 = come_decrement_ref_count2(str_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_500 = come_decrement_ref_count2(match_string_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_501 = come_decrement_ref_count2(block_result_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_502 = come_decrement_ref_count2(str_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_496 = come_decrement_ref_count2(str_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_500 = come_decrement_ref_count2(match_string_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_501 = come_decrement_ref_count2(block_result_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_503=(char*)come_increment_ref_count(charp_substring(self,offset_475,-1));
            buffer_append_str(result_485,str_503);
            str_503 = come_decrement_ref_count2(str_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_503 = come_decrement_ref_count2(str_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value295=buffer_to_string(result_485)));
    /*i*/come_call_finalizer3(result_485,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_504;
int ovec_max_505;
const char* err_509;
int erro_ofs_510;
int options_511;
char* str_512;
struct real_pcre8_or_16* re_513;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct buffer* result_514;
int n_515;
int options_516;
int len_517;
int regex_result_518;
int i_519;
int i_520;
void* __right_value298 = (void*)0;
char* str_521;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* group_strings_522;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
char* match_string_523;
void* __right_value303 = (void*)0;
char* block_result_524;
void* __right_value304 = (void*)0;
char* str_525;
void* __right_value305 = (void*)0;
char* str_526;
void* __right_value306 = (void*)0;
char* str_527;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1charph* group_strings_528;
int i_529;
void* __right_value309 = (void*)0;
char* match_string_530;
void* __right_value310 = (void*)0;
char* match_string_531;
void* __right_value311 = (void*)0;
char* block_result_532;
void* __right_value312 = (void*)0;
char* str_533;
void* __right_value313 = (void*)0;
char* str_534;
void* __right_value314 = (void*)0;
char* str_535;
void* __right_value315 = (void*)0;
char* __result141__;
err_509 = (void*)0;
memset(&erro_ofs_510, 0, sizeof(int));
    offset_504=0;
    ovec_max_505=16;
    int start_506[ovec_max_505];
    memset(&start_506, 0, sizeof(int)    *(ovec_max_505)    );
    int end_507[ovec_max_505];
    memset(&end_507, 0, sizeof(int)    *(ovec_max_505)    );
    int ovec_value_508[ovec_max_505*3];
    memset(&ovec_value_508, 0, sizeof(int)    *(ovec_max_505*3)    );
    options_511=reg->options;
    str_512=reg->str;
    re_513=reg->re;
    result_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1976, "buffer"))));
    n_515=0;
    while((_Bool)1) {
        options_516=2097152;
        len_517=strlen(self);
        regex_result_518=pcre_exec(re_513,(struct pcre_extra*)0,self,len_517,offset_504,options_516,ovec_value_508,ovec_max_505*3);
        for(        i_519=0;        i_519<ovec_max_505;        i_519++        ){
            start_506[i_519]=ovec_value_508[i_519*2];
        }
        for(        i_520=0;        i_520<ovec_max_505;        i_520++        ){
            end_507[i_520]=ovec_value_508[i_520*2+1];
        }
        if(        regex_result_518==1) {
            n_515++;
            str_521=(char*)come_increment_ref_count(charp_substring(self,offset_504,start_506[0]));
            buffer_append_str(result_514,str_521);
            group_strings_522=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1999, "list$1charph"))));
            list$1charph_push_back(group_strings_522,(char*)come_increment_ref_count(charp_substring(self,start_506[0],end_507[0])));
            match_string_523=(char*)come_increment_ref_count(charp_substring(self,start_506[0],end_507[0]));
            block_result_524=(char*)come_increment_ref_count(block(parent,match_string_523,group_strings_522));
            buffer_append_str(result_514,block_result_524);
            if(            offset_504==end_507[0]) {
                offset_504++;
            }
            else {
                offset_504=end_507[0];
            }
            if(            !reg->global) {
                str_525=(char*)come_increment_ref_count(charp_substring(self,offset_504,-1));
                buffer_append_str(result_514,str_525);
                str_525 = come_decrement_ref_count2(str_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_521 = come_decrement_ref_count2(str_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_523 = come_decrement_ref_count2(match_string_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_524 = come_decrement_ref_count2(block_result_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_525 = come_decrement_ref_count2(str_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_515==count) {
                str_526=(char*)come_increment_ref_count(charp_substring(self,offset_504,-1));
                buffer_append_str(result_514,str_526);
                str_526 = come_decrement_ref_count2(str_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_521 = come_decrement_ref_count2(str_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_523 = come_decrement_ref_count2(match_string_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_524 = come_decrement_ref_count2(block_result_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_526 = come_decrement_ref_count2(str_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_521 = come_decrement_ref_count2(str_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_522,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_523 = come_decrement_ref_count2(match_string_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_524 = come_decrement_ref_count2(block_result_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_518>1) {
            n_515++;
            str_527=(char*)come_increment_ref_count(charp_substring(self,offset_504,start_506[0]));
            buffer_append_str(result_514,str_527);
            if(            offset_504==end_507[0]) {
                offset_504++;
            }
            else {
                offset_504=end_507[0];
            }
            group_strings_528=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2042, "list$1charph"))));
            for(            i_529=1;            i_529<regex_result_518;            i_529++            ){
                match_string_530=(char*)come_increment_ref_count(charp_substring(self,start_506[i_529],end_507[i_529]));
                list$1charph_push_back(group_strings_528,(char*)come_increment_ref_count(match_string_530));
                match_string_530 = come_decrement_ref_count2(match_string_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_531=(char*)come_increment_ref_count(charp_substring(self,start_506[0],end_507[0]));
            block_result_532=(char*)come_increment_ref_count(block(parent,match_string_531,group_strings_528));
            buffer_append_str(result_514,block_result_532);
            if(            !reg->global) {
                str_533=(char*)come_increment_ref_count(charp_substring(self,offset_504,-1));
                buffer_append_str(result_514,str_533);
                str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_528,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_531 = come_decrement_ref_count2(match_string_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_532 = come_decrement_ref_count2(block_result_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_515==count) {
                str_534=(char*)come_increment_ref_count(charp_substring(self,offset_504,-1));
                buffer_append_str(result_514,str_534);
                str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_528,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_531 = come_decrement_ref_count2(match_string_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_532 = come_decrement_ref_count2(block_result_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_528,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_531 = come_decrement_ref_count2(match_string_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_532 = come_decrement_ref_count2(block_result_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_535=(char*)come_increment_ref_count(charp_substring(self,offset_504,-1));
            buffer_append_str(result_514,str_535);
            str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value315=buffer_to_string(result_514)));
    /*i*/come_call_finalizer3(result_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_536;
int* p_537;
    result_536=0;
    p_537=value;
    while(*p_537) {
        result_536+=(*p_537);
        p_537++;
    }
    return result_536;
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
void* __right_value316 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value316=xsprintf("%ls",wc)));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
char* result_538;
void* __right_value318 = (void*)0;
char* __result143__;
char* __result144__;
    result_538=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_538[string_length(result_538)-1]==10) {
        __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value318=string_substring(result_538,0,-2)));
        result_538 = come_decrement_ref_count2(result_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    __result144__ = gComeFunResultObject = __result_obj__ = result_538;
    result_538 = come_decrement_ref_count2(result_538, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
char* __result145__;
char* result_539;
void* __right_value320 = (void*)0;
char* result2_540;
char* __result146__;
    if(    path==((void*)0)) {
        __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value319=__builtin_string("")));
        __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    result_539=realpath(path,((void*)0));
    result2_540=(char*)come_increment_ref_count(__builtin_string(result_539));
    free(result_539);
    __result146__ = gComeFunResultObject = __result_obj__ = result2_540;
    result2_540 = come_decrement_ref_count2(result2_540, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result147__;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* __result148__;
    if(    path==((void*)0)) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string("")));
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string(dirname(((char*)(__right_value322=__builtin_string(path)))))));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

unsigned long unsigned  int xwcslen(int* wstr){
int* p_541;
unsigned long unsigned  int len_542;
    p_541=wstr;
    len_542=0;
    while(*p_541) {
        p_541++;
        len_542++;
    }
    return len_542;
}

