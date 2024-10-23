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
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self);
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 221, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else {
        if(self->len==1) {
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 221, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else {
        if(self->len==1) {
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
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 221, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else {
        if(self->len==1) {
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 221, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else {
        if(self->len==1) {
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 221, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else {
        if(self->len==1) {
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 221, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else {
        if(self->len==1) {
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 221, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else {
        if(self->len==1) {
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 999, "char*")));
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
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 999, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 999, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 999, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 999, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 999, "double")));
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj15=self->item;
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}



































struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_66;
int erro_ofs_67;
int options_68;
void* __right_value144 = (void*)0;
char* __dec_obj16;
struct come_regex* __null_value1;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct tuple2$2come_regexphcharph* __result93__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct tuple2$2come_regexphcharph* __result95__;
err_66 = (void*)0;
memset(&erro_ofs_67, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_68=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj16=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_68;
    self->re=pcre_compile(str,options_68,&err_66,&erro_ofs_67,((void*)0));
    if(self->re==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value148=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value145=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value148,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value150=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value150,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj17;
char* __dec_obj18;
struct tuple2$2come_regexphcharph* __result92__;
    __dec_obj17=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj17,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj18=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self){
struct come_regex* __dec_obj19;
char* __dec_obj20;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj19=self->v1;
            /* a*/come_call_finalizer3(__dec_obj19,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj20=self->v2;
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj21;
struct tuple2$2come_regexphvoidp* __result94__;
    __dec_obj21=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj21,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self){
struct come_regex* __dec_obj22;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj22=self->v1;
            /* a*/come_call_finalizer3(__dec_obj22,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void come_regex_finalize(struct come_regex* reg){
    if(reg&&reg->str) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1;
struct come_regex* come_exception_var_b1_69;
char* Err_70;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct tuple2$2come_regexphcharph* __result96__;
char* __dec_obj23;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct tuple2$2come_regexphcharph* __result97__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value153=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_69=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_70=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if((_if_conditional1=(Err_70)),    /*f*/come_call_finalizer3(__right_value153,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result96__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value155=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_70))));
        /*i*/come_call_finalizer3(come_exception_var_b1_69,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        Err_70 = come_decrement_ref_count2(Err_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value155,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    __dec_obj23=Err_70;
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value157=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_69),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_69,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    Err_70 = come_decrement_ref_count2(Err_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value151,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value157,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2;
struct come_regex* come_exception_var_b2_71;
char* Err_72;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple2$2come_regexphcharph* __result98__;
char* __dec_obj24;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct tuple2$2come_regexphcharph* __result99__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value160=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_71=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_72=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if((_if_conditional2=(Err_72)),    /*f*/come_call_finalizer3(__right_value160,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result98__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value162=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_72))));
        /*i*/come_call_finalizer3(come_exception_var_b2_71,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        Err_72 = come_decrement_ref_count2(Err_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value162,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    __dec_obj24=Err_72;
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value164=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_71),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_71,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    Err_72 = come_decrement_ref_count2(Err_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value158,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value164,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result100__;
void* __right_value165 = (void*)0;
struct come_regex* result_73;
void* __right_value166 = (void*)0;
char* __dec_obj25;
const char* err_74;
int erro_ofs_75;
struct come_regex* __result101__;
err_74 = (void*)0;
memset(&erro_ofs_75, 0, sizeof(int));
    if(reg==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_73=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj25=result_73->str;
    result_73->str=(char*)come_increment_ref_count(string_clone(reg->str));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_73->ignore_case=reg->ignore_case;
    result_73->multiline=reg->multiline;
    result_73->global=reg->global;
    result_73->extended=reg->extended;
    result_73->dotall=reg->dotall;
    result_73->anchored=reg->anchored;
    result_73->dollar_endonly=reg->dollar_endonly;
    result_73->ungreedy=reg->ungreedy;
    result_73->options=reg->options;
    result_73->re=pcre_compile(result_73->str,result_73->options,&err_74,&erro_ofs_75,((void*)0));
    if(result_73->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_73->str);
        stackframe();
        exit(1);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = result_73;
    /*i*/come_call_finalizer3(result_73,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string(regex->str)));
    __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* result_76;
int i_77;
char* __result103__;
    result_76=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_77=0;    i_77<strlen(str);    i_77++    ){
        if(str[i_77]>=65&&str[i_77]<=90) {
            result_76[i_77]=str[i_77]-65+97;
        }
    }
    __result103__ = gComeFunResultObject = __result_obj__ = result_76;
    result_76 = come_decrement_ref_count2(result_76, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
char* result_78;
int i_79;
char* __result104__;
    result_78=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_79=0;    i_79<strlen(str);    i_79++    ){
        if(str[i_79]>=97&&str[i_79]<=122) {
            result_78[i_79]=str[i_79]-97+65;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = result_78;
    result_78 = come_decrement_ref_count2(result_78, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value170 = (void*)0;
int* __result105__;
int len_80;
void* __right_value171 = (void*)0;
int* __result106__;
void* __right_value172 = (void*)0;
int* __result107__;
void* __right_value173 = (void*)0;
int* __result108__;
void* __right_value174 = (void*)0;
int* result_81;
int* __result109__;
    if(str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value170=__builtin_wstring("")));
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_80=wcslen(str);
    if(head<0) {
        head+=len_80;
    }
    if(tail<0) {
        tail+=len_80+1;
    }
    if(head>tail) {
        __result106__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value171=__builtin_wstring("")));
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_80) {
        tail=len_80;
    }
    if(head==tail) {
        __result107__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value172=__builtin_wstring("")));
        __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    if(tail-head+1<1) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value173=__builtin_wstring("")));
        __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_81=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str.c", 181, "int"));
    memcpy(result_81,str+head,sizeof(int)*(tail-head));
    result_81[tail-head]=0;
    __result109__ = gComeFunResultObject = __result_obj__ = result_81;
    result_81 = come_decrement_ref_count2(result_81, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result110__;
int len_82;
void* __right_value175 = (void*)0;
int* wstr_83;
int ret_84;
int* __result111__;
    if(str==((void*)0)) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    len_82=strlen(str);
    wstr_83=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_82+1)), "libcomelang-str.c", 196, "int"));
    ret_84=mbstowcs(wstr_83,str,len_82+1);
    wstr_83[ret_84]=0;
    if(ret_84<0) {
        wstr_83[0]=0;
    }
    __result111__ = gComeFunResultObject = __result_obj__ = wstr_83;
    wstr_83 = come_decrement_ref_count2(wstr_83, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_85;
int len_86;
int i_87;
int len2_88;
int j_89;
memset(&j_89, 0, sizeof(int));
    n_85=0;
    len_86=strlen(str);
    for(    i_87=0;    i_87<len_86;    i_87++    ){
        len2_88=strlen(search_str);
        for(        j_89=0;        j_89<len2_88;        j_89++        ){
            if(str[i_87+j_89]!=search_str[j_89]) {
                break;
            }
        }
        if(j_89==len2_88) {
            n_85++;
            if(n_85==count) {
                return i_87;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_90;
int result_94;
int offset_95;
const char* err_96;
int erro_ofs_97;
int options_98;
char* str_99;
struct real_pcre8_or_16* re_100;
int n_101;
int options_102;
int len_103;
int regex_result_104;
int i_105;
int i_106;
err_96 = (void*)0;
memset(&erro_ofs_97, 0, sizeof(int));
    ovec_max_90=16;
    int start_91[ovec_max_90];
    memset(&start_91, 0, sizeof(int)    *(ovec_max_90)    );
    int end_92[ovec_max_90];
    memset(&end_92, 0, sizeof(int)    *(ovec_max_90)    );
    int ovec_value_93[ovec_max_90*3];
    memset(&ovec_value_93, 0, sizeof(int)    *(ovec_max_90*3)    );
    result_94=default_value;
    offset_95=0;
    options_98=reg->options;
    str_99=reg->str;
    re_100=reg->re;
    n_101=0;
    while((_Bool)1) {
        options_102=2097152;
        len_103=strlen(self);
        regex_result_104=pcre_exec(re_100,(struct pcre_extra*)0,self,len_103,offset_95,options_102,ovec_value_93,ovec_max_90*3);
        for(        i_105=0;        i_105<ovec_max_90;        i_105++        ){
            start_91[i_105]=ovec_value_93[i_105*2];
        }
        for(        i_106=0;        i_106<ovec_max_90;        i_106++        ){
            end_92[i_106]=ovec_value_93[i_106*2+1];
        }
        if(regex_result_104>0) {
            n_101++;
            if(offset_95==end_92[0]) {
                offset_95++;
            }
            else {
                offset_95=end_92[0];
            }
            if(n_101==count) {
                result_94=start_91[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_94;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_107;
char* p_108;
    len_107=strlen(search_str);
    p_108=str+strlen(str)-len_107;
    while(p_108>=str) {
        if(strncmp(p_108,search_str,len_107)==0) {
            return p_108-str;
        }
        p_108--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_109;
int erro_ofs_110;
int options_111;
char* str_112;
struct real_pcre8_or_16* re_113;
void* __right_value176 = (void*)0;
char* self2_114;
int ovec_max_115;
int result_119;
int offset_120;
int options_121;
int len_122;
int regex_result_123;
int i_124;
int i_125;
int __result112__;
err_109 = (void*)0;
memset(&erro_ofs_110, 0, sizeof(int));
    options_111=reg->options;
    str_112=reg->str;
    re_113=reg->re;
    self2_114=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_115=16;
    int start_116[ovec_max_115];
    memset(&start_116, 0, sizeof(int)    *(ovec_max_115)    );
    int end_117[ovec_max_115];
    memset(&end_117, 0, sizeof(int)    *(ovec_max_115)    );
    int ovec_value_118[ovec_max_115*3];
    memset(&ovec_value_118, 0, sizeof(int)    *(ovec_max_115*3)    );
    result_119=default_value;
    offset_120=0;
    while((_Bool)1) {
        options_121=2097152;
        len_122=strlen(self2_114);
        regex_result_123=pcre_exec(re_113,(struct pcre_extra*)0,self2_114,len_122,offset_120,options_121,ovec_value_118,ovec_max_115*3);
        for(        i_124=0;        i_124<ovec_max_115;        i_124++        ){
            start_116[i_124]=ovec_value_118[i_124*2];
        }
        for(        i_125=0;        i_125<ovec_max_115;        i_125++        ){
            end_117[i_125]=ovec_value_118[i_125*2+1];
        }
        if(regex_result_123==1||regex_result_123>0) {
            result_119=strlen(self)-1-start_116[0];
            break;
        }
        {
            break;
        }
    }
    __result112__ = result_119;
    self2_114 = come_decrement_ref_count2(self2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result112__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_126;
char* p_127;
int n_128;
    len_126=strlen(search_str);
    p_127=str+strlen(str)-len_126;
    n_128=0;
    while(p_127>=str) {
        if(strncmp(p_127,search_str,len_126)==0) {
            n_128++;
            if(n_128==count) {
                return p_127-str;
            }
        }
        p_127--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct list$1charph* result_129;
int offset_130;
int ovec_max_131;
const char* err_135;
int erro_ofs_136;
int options_137;
char* str_138;
struct real_pcre8_or_16* re_139;
int options_140;
int len_141;
int regex_result_142;
int i_143;
int i_144;
void* __right_value179 = (void*)0;
char* str_145;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1charph* group_strings_146;
void* __right_value182 = (void*)0;
char* str2_147;
void* __right_value186 = (void*)0;
char* str_151;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct list$1charph* group_strings_152;
int i_153;
void* __right_value189 = (void*)0;
char* match_string_154;
void* __right_value190 = (void*)0;
char* str2_155;
struct list$1charph* __result115__;
err_135 = (void*)0;
memset(&erro_ofs_136, 0, sizeof(int));
    result_129=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 382, "list$1charph"))));
    offset_130=0;
    ovec_max_131=16;
    int start_132[ovec_max_131];
    memset(&start_132, 0, sizeof(int)    *(ovec_max_131)    );
    int end_133[ovec_max_131];
    memset(&end_133, 0, sizeof(int)    *(ovec_max_131)    );
    int ovec_value_134[ovec_max_131*3];
    memset(&ovec_value_134, 0, sizeof(int)    *(ovec_max_131*3)    );
    options_137=reg->options;
    str_138=reg->str;
    re_139=reg->re;
    while((_Bool)1) {
        options_140=2097152;
        len_141=strlen(self);
        regex_result_142=pcre_exec(re_139,(struct pcre_extra*)0,self,len_141,offset_130,options_140,ovec_value_134,ovec_max_131*3);
        for(        i_143=0;        i_143<ovec_max_131;        i_143++        ){
            start_132[i_143]=ovec_value_134[i_143*2];
        }
        for(        i_144=0;        i_144<ovec_max_131;        i_144++        ){
            end_133[i_144]=ovec_value_134[i_144*2+1];
        }
        if(regex_result_142==1) {
            str_145=(char*)come_increment_ref_count(charp_substring(self,start_132[0],end_133[0]));
            group_strings_146=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 416, "list$1charph"))));
            str2_147=(char*)come_increment_ref_count(block(parent,str_145,group_strings_146));
            list$1charph_push_back(result_129,(char*)come_increment_ref_count(str2_147));
            if(offset_130==end_133[0]) {
                offset_130++;
            }
            else {
                offset_130=end_133[0];
            }
            str_145 = come_decrement_ref_count2(str_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_146,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_147 = come_decrement_ref_count2(str2_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_142>1) {
                str_151=(char*)come_increment_ref_count(charp_substring(self,start_132[0],end_133[0]));
                group_strings_152=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 433, "list$1charph"))));
                for(                i_153=1;                i_153<regex_result_142;                i_153++                ){
                    match_string_154=(char*)come_increment_ref_count(charp_substring(self,start_132[i_153],end_133[i_153]));
                    list$1charph_push_back(group_strings_152,(char*)come_increment_ref_count(match_string_154));
                    match_string_154 = come_decrement_ref_count2(match_string_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_155=(char*)come_increment_ref_count(block(parent,str_151,group_strings_152));
                list$1charph_push_back(result_129,(char*)come_increment_ref_count(str2_155));
                if(offset_130==end_133[0]) {
                    offset_130++;
                }
                else {
                    offset_130=end_133[0];
                }
                str_151 = come_decrement_ref_count2(str_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_152,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_155 = come_decrement_ref_count2(str2_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result115__ = gComeFunResultObject = __result_obj__ = result_129;
    /*i*/come_call_finalizer3(result_129,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
struct list_item$1charph* litem_148;
char* __dec_obj26;
void* __right_value184 = (void*)0;
struct list_item$1charph* litem_149;
char* __dec_obj27;
void* __right_value185 = (void*)0;
struct list_item$1charph* litem_150;
char* __dec_obj28;
struct list$1charph* __result114__;
    if(self->len==0) {
        litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value183=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        __dec_obj26=litem_148->item;
        litem_148->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_148;
        self->head=litem_148;
    }
    else {
        if(self->len==1) {
            litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
            litem_149->prev=self->head;
            litem_149->next=((void*)0);
            __dec_obj27=litem_149->item;
            litem_149->item=(char*)come_increment_ref_count(item);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_149;
            self->head->next=litem_149;
        }
        else {
            litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value185=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
            litem_150->prev=self->tail;
            litem_150->next=((void*)0);
            __dec_obj28=litem_150->item;
            litem_150->item=(char*)come_increment_ref_count(item);
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_150;
            self->tail=litem_150;
        }
    }
    self->len++;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1charph* result_156;
int offset_157;
int ovec_max_158;
const char* err_162;
int erro_ofs_163;
int options_164;
char* str_165;
struct real_pcre8_or_16* re_166;
int n_167;
int options_168;
int len_169;
int regex_result_170;
int i_171;
int i_172;
void* __right_value193 = (void*)0;
char* str_173;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1charph* group_strings_174;
void* __right_value196 = (void*)0;
char* str2_175;
void* __right_value197 = (void*)0;
char* str_176;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct list$1charph* group_strings_177;
int i_178;
void* __right_value200 = (void*)0;
char* match_string_179;
void* __right_value201 = (void*)0;
char* str2_180;
struct list$1charph* __result116__;
err_162 = (void*)0;
memset(&erro_ofs_163, 0, sizeof(int));
    result_156=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 463, "list$1charph"))));
    offset_157=0;
    ovec_max_158=16;
    int start_159[ovec_max_158];
    memset(&start_159, 0, sizeof(int)    *(ovec_max_158)    );
    int end_160[ovec_max_158];
    memset(&end_160, 0, sizeof(int)    *(ovec_max_158)    );
    int ovec_value_161[ovec_max_158*3];
    memset(&ovec_value_161, 0, sizeof(int)    *(ovec_max_158*3)    );
    options_164=reg->options;
    str_165=reg->str;
    re_166=reg->re;
    n_167=0;
    while((_Bool)1) {
        options_168=2097152;
        len_169=strlen(self);
        regex_result_170=pcre_exec(re_166,(struct pcre_extra*)0,self,len_169,offset_157,options_168,ovec_value_161,ovec_max_158*3);
        for(        i_171=0;        i_171<ovec_max_158;        i_171++        ){
            start_159[i_171]=ovec_value_161[i_171*2];
        }
        for(        i_172=0;        i_172<ovec_max_158;        i_172++        ){
            end_160[i_172]=ovec_value_161[i_172*2+1];
        }
        if(regex_result_170==1) {
            str_173=(char*)come_increment_ref_count(charp_substring(self,start_159[0],end_160[0]));
            group_strings_174=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 499, "list$1charph"))));
            str2_175=(char*)come_increment_ref_count(block(parent,str_173,group_strings_174));
            list$1charph_push_back(result_156,(char*)come_increment_ref_count(str2_175));
            if(offset_157==end_160[0]) {
                offset_157++;
            }
            else {
                offset_157=end_160[0];
            }
            n_167++;
            if(n_167==count) {
                str_173 = come_decrement_ref_count2(str_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_174,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_175 = come_decrement_ref_count2(str2_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_173 = come_decrement_ref_count2(str_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_174,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_175 = come_decrement_ref_count2(str2_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_170>1) {
                str_176=(char*)come_increment_ref_count(charp_substring(self,start_159[0],end_160[0]));
                group_strings_177=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 521, "list$1charph"))));
                for(                i_178=1;                i_178<regex_result_170;                i_178++                ){
                    match_string_179=(char*)come_increment_ref_count(charp_substring(self,start_159[i_178],end_160[i_178]));
                    list$1charph_push_back(group_strings_177,(char*)come_increment_ref_count(match_string_179));
                    match_string_179 = come_decrement_ref_count2(match_string_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_180=(char*)come_increment_ref_count(block(parent,str_176,group_strings_177));
                list$1charph_push_back(result_156,(char*)come_increment_ref_count(str2_180));
                if(offset_157==end_160[0]) {
                    offset_157++;
                }
                else {
                    offset_157=end_160[0];
                }
                n_167++;
                if(n_167==count) {
                    str_176 = come_decrement_ref_count2(str_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(group_strings_177,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    str2_180 = come_decrement_ref_count2(str2_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                str_176 = come_decrement_ref_count2(str_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_177,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_180 = come_decrement_ref_count2(str2_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result116__ = gComeFunResultObject = __result_obj__ = result_156;
    /*i*/come_call_finalizer3(result_156,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_181;
int erro_ofs_182;
int options_183;
char* str_184;
struct real_pcre8_or_16* re_185;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1charph* result_186;
int offset_187;
int ovec_max_188;
int options_192;
int len_193;
int regex_result_194;
int i_195;
int i_196;
void* __right_value204 = (void*)0;
char* str_197;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1charph* match_strings_198;
void* __right_value207 = (void*)0;
char* str2_199;
void* __right_value208 = (void*)0;
char* str_200;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1charph* match_strings_201;
int i_202;
void* __right_value211 = (void*)0;
char* match_str_203;
void* __right_value212 = (void*)0;
char* str2_204;
void* __right_value213 = (void*)0;
char* str_205;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1charph* match_strings_206;
void* __right_value216 = (void*)0;
char* str2_207;
struct list$1charph* __result117__;
err_181 = (void*)0;
memset(&erro_ofs_182, 0, sizeof(int));
    options_183=reg->options;
    str_184=reg->str;
    re_185=reg->re;
    result_186=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 563, "list$1charph"))));
    offset_187=0;
    ovec_max_188=16;
    int start_189[ovec_max_188];
    memset(&start_189, 0, sizeof(int)    *(ovec_max_188)    );
    int end_190[ovec_max_188];
    memset(&end_190, 0, sizeof(int)    *(ovec_max_188)    );
    int ovec_value_191[ovec_max_188*3];
    memset(&ovec_value_191, 0, sizeof(int)    *(ovec_max_188*3)    );
    while((_Bool)1) {
        options_192=2097152;
        len_193=strlen(self);
        regex_result_194=pcre_exec(re_185,(struct pcre_extra*)0,self,len_193,offset_187,options_192,ovec_value_191,ovec_max_188*3);
        for(        i_195=0;        i_195<ovec_max_188;        i_195++        ){
            start_189[i_195]=ovec_value_191[i_195*2];
        }
        for(        i_196=0;        i_196<ovec_max_188;        i_196++        ){
            end_190[i_196]=ovec_value_191[i_196*2+1];
        }
        if(regex_result_194==1) {
            str_197=(char*)come_increment_ref_count(charp_substring(self,offset_187,start_189[0]));
            match_strings_198=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 590, "list$1charph"))));
            str2_199=(char*)come_increment_ref_count(block(parent,str_197,match_strings_198));
            list$1charph_push_back(result_186,(char*)come_increment_ref_count(str2_199));
            if(offset_187==end_190[0]) {
                offset_187++;
            }
            else {
                offset_187=end_190[0];
            }
            str_197 = come_decrement_ref_count2(str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_198,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_199 = come_decrement_ref_count2(str2_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_194>1) {
                str_200=(char*)come_increment_ref_count(charp_substring(self,offset_187,start_189[0]));
                if(offset_187==end_190[0]) {
                    offset_187++;
                }
                else {
                    offset_187=end_190[0];
                }
                match_strings_201=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
                for(                i_202=1;                i_202<regex_result_194;                i_202++                ){
                    match_str_203=(char*)come_increment_ref_count(charp_substring(self,start_189[i_202],end_190[i_202]));
                    list$1charph_push_back(match_strings_201,(char*)come_increment_ref_count(match_str_203));
                    match_str_203 = come_decrement_ref_count2(match_str_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_204=(char*)come_increment_ref_count(block(parent,str_200,match_strings_201));
                list$1charph_push_back(result_186,(char*)come_increment_ref_count(str2_204));
                str_200 = come_decrement_ref_count2(str_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(match_strings_201,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_204 = come_decrement_ref_count2(str2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(offset_187<charp_length(self)) {
        str_205=(char*)come_increment_ref_count(charp_substring(self,offset_187,-1));
        match_strings_206=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 632, "list$1charph"))));
        str2_207=(char*)come_increment_ref_count(block(parent,str_205,match_strings_206));
        list$1charph_push_back(result_186,(char*)come_increment_ref_count(str2_207));
        str_205 = come_decrement_ref_count2(str_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_206,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        str2_207 = come_decrement_ref_count2(str2_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_186;
    /*i*/come_call_finalizer3(result_186,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_208;
int erro_ofs_209;
int options_210;
char* str_211;
struct real_pcre8_or_16* re_212;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1charph* result_213;
int offset_214;
int ovec_max_215;
int n_219;
int options_220;
int len_221;
int regex_result_222;
int i_223;
int i_224;
void* __right_value219 = (void*)0;
char* str_225;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1charph* match_strings_226;
void* __right_value222 = (void*)0;
char* str2_227;
void* __right_value223 = (void*)0;
char* str_228;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1charph* match_strings_229;
int i_230;
void* __right_value226 = (void*)0;
char* match_str_231;
void* __right_value227 = (void*)0;
char* str2_232;
struct list$1charph* __result118__;
err_208 = (void*)0;
memset(&erro_ofs_209, 0, sizeof(int));
    options_210=reg->options;
    str_211=reg->str;
    re_212=reg->re;
    result_213=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 650, "list$1charph"))));
    offset_214=0;
    ovec_max_215=16;
    int start_216[ovec_max_215];
    memset(&start_216, 0, sizeof(int)    *(ovec_max_215)    );
    int end_217[ovec_max_215];
    memset(&end_217, 0, sizeof(int)    *(ovec_max_215)    );
    int ovec_value_218[ovec_max_215*3];
    memset(&ovec_value_218, 0, sizeof(int)    *(ovec_max_215*3)    );
    n_219=0;
    while((_Bool)1) {
        options_220=2097152;
        len_221=strlen(self);
        regex_result_222=pcre_exec(re_212,(struct pcre_extra*)0,self,len_221,offset_214,options_220,ovec_value_218,ovec_max_215*3);
        for(        i_223=0;        i_223<ovec_max_215;        i_223++        ){
            start_216[i_223]=ovec_value_218[i_223*2];
        }
        for(        i_224=0;        i_224<ovec_max_215;        i_224++        ){
            end_217[i_224]=ovec_value_218[i_224*2+1];
        }
        if(regex_result_222==1) {
            str_225=(char*)come_increment_ref_count(charp_substring(self,offset_214,start_216[0]));
            match_strings_226=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 679, "list$1charph"))));
            str2_227=(char*)come_increment_ref_count(block(parent,str_225,match_strings_226));
            list$1charph_push_back(result_213,(char*)come_increment_ref_count(str2_227));
            if(offset_214==end_217[0]) {
                offset_214++;
            }
            else {
                offset_214=end_217[0];
            }
            str_225 = come_decrement_ref_count2(str_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_227 = come_decrement_ref_count2(str2_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_222>1) {
                str_228=(char*)come_increment_ref_count(charp_substring(self,offset_214,start_216[0]));
                if(offset_214==end_217[0]) {
                    offset_214++;
                }
                else {
                    offset_214=end_217[0];
                }
                match_strings_229=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 702, "list$1charph"))));
                for(                i_230=1;                i_230<regex_result_222;                i_230++                ){
                    match_str_231=(char*)come_increment_ref_count(charp_substring(self,start_216[i_230],end_217[i_230]));
                    list$1charph_push_back(match_strings_229,(char*)come_increment_ref_count(match_str_231));
                    match_str_231 = come_decrement_ref_count2(match_str_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_232=(char*)come_increment_ref_count(block(parent,str_228,match_strings_229));
                list$1charph_push_back(result_213,(char*)come_increment_ref_count(str2_232));
                str_228 = come_decrement_ref_count2(str_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(match_strings_229,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_232 = come_decrement_ref_count2(str2_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_219++;
        if(n_219==count) {
            break;
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = result_213;
    /*i*/come_call_finalizer3(result_213,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(strcmp(left->str,right->str)!=0) {
        return (_Bool)0;
    }
    if(left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(left->global!=right->global) {
        return (_Bool)0;
    }
    if(left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1charph* result_233;
int offset_234;
int ovec_max_235;
const char* err_239;
int erro_ofs_240;
int options_241;
char* str_242;
struct real_pcre8_or_16* re_243;
int options_244;
int len_245;
int regex_result_246;
int i_247;
int i_248;
void* __right_value230 = (void*)0;
char* str_249;
void* __right_value231 = (void*)0;
char* str_250;
int i_251;
void* __right_value232 = (void*)0;
char* match_string_252;
struct list$1charph* __result119__;
err_239 = (void*)0;
memset(&erro_ofs_240, 0, sizeof(int));
    result_233=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 766, "list$1charph"))));
    offset_234=0;
    ovec_max_235=16;
    int start_236[ovec_max_235];
    memset(&start_236, 0, sizeof(int)    *(ovec_max_235)    );
    int end_237[ovec_max_235];
    memset(&end_237, 0, sizeof(int)    *(ovec_max_235)    );
    int ovec_value_238[ovec_max_235*3];
    memset(&ovec_value_238, 0, sizeof(int)    *(ovec_max_235*3)    );
    options_241=reg->options;
    str_242=reg->str;
    re_243=reg->re;
    while((_Bool)1) {
        options_244=2097152;
        len_245=strlen(self);
        regex_result_246=pcre_exec(re_243,(struct pcre_extra*)0,self,len_245,offset_234,options_244,ovec_value_238,ovec_max_235*3);
        for(        i_247=0;        i_247<ovec_max_235;        i_247++        ){
            start_236[i_247]=ovec_value_238[i_247*2];
        }
        for(        i_248=0;        i_248<ovec_max_235;        i_248++        ){
            end_237[i_248]=ovec_value_238[i_248*2+1];
        }
        if(regex_result_246==1) {
            str_249=(char*)come_increment_ref_count(charp_substring(self,start_236[0],end_237[0]));
            list$1charph_push_back(result_233,(char*)come_increment_ref_count(str_249));
            if(offset_234==end_237[0]) {
                offset_234++;
            }
            else {
                offset_234=end_237[0];
            }
            str_249 = come_decrement_ref_count2(str_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_246>1) {
                str_250=(char*)come_increment_ref_count(charp_substring(self,start_236[0],end_237[0]));
                list$1charph_push_back(result_233,(char*)come_increment_ref_count(str_250));
                if(offset_234==end_237[0]) {
                    offset_234++;
                }
                else {
                    offset_234=end_237[0];
                }
                *num_group_string_in_regex=regex_result_246-1;
                for(                i_251=1;                i_251<regex_result_246;                i_251++                ){
                    match_string_252=(char*)come_increment_ref_count(charp_substring(self,start_236[i_251],end_237[i_251]));
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_252));
                    match_string_252 = come_decrement_ref_count2(match_string_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_250 = come_decrement_ref_count2(str_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_233;
    /*i*/come_call_finalizer3(result_233,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
char* result_253;
int len_254;
char* __result120__;
    result_253=(char*)come_increment_ref_count(__builtin_string(self));
    len_254=strlen(self);
    if(self[len_254-1]==10) {
        result_253[len_254-1]=0;
    }
    else {
        if(self[len_254-1]==13) {
            result_253[len_254-1]=0;
        }
        else {
            if(len_254>2&&self[len_254-2]==13&&self[len_254-1]==10) {
                result_253[len_254-2]=0;
            }
        }
    }
    __result120__ = gComeFunResultObject = __result_obj__ = result_253;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_255;
void* __right_value234 = (void*)0;
char* result_256;
int n_257;
int i_258;
char c_259;
char* __result121__;
    len_255=charp_length(str);
    result_256=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_255*2+1)), "libcomelang-str.c", 860, "char"));
    n_257=0;
    for(    i_258=0;    i_258<len_255;    i_258++    ){
        c_259=str[i_258];
        if((c_259>=0&&c_259<32)||c_259==127) {
            result_256[n_257++]=94;
            result_256[n_257++]=c_259+65-1;
        }
        else {
            result_256[n_257++]=c_259;
        }
    }
    result_256[n_257]=0;
    __result121__ = gComeFunResultObject = __result_obj__ = result_256;
    result_256 = come_decrement_ref_count2(result_256, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_260;
void* __right_value235 = (void*)0;
char* result_261;
char* __result122__;
    len_260=6*(wcslen(wstr)+1);
    result_261=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_260)), "libcomelang-str.c", 886, "char"));
    if(wcstombs(result_261,wstr,len_260)<0) {
        strncpy(result_261,"",len_260);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = result_261;
    result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value236 = (void*)0;
int* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value236=__builtin_wstring(str)));
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

int wchar_tp_length(int* str){
    return wcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_262;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
int* __result124__;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
int* __result125__;
void* __right_value241 = (void*)0;
int* sub_str_263;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
int* __result126__;
    len_262=wcslen(str);
    if(len_262==0) {
        __result124__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value238=string_to_wstring(((char*)(__right_value237=wchar_tp_to_string(str))))));
        __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    if(head<0) {
        head+=len_262;
    }
    if(tail<0) {
        tail+=len_262+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value240=string_to_wstring(((char*)(__right_value239=wchar_tp_to_string(str))))));
        __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    if(tail>=len_262) {
        tail=len_262;
    }
    sub_str_263=(int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_263,sizeof(int)*(wstring_length(sub_str_263)+1));
    __result126__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value243=string_to_wstring(((char*)(__right_value242=wchar_tp_to_string(str))))));
    sub_str_263 = come_decrement_ref_count2(sub_str_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_264;
    head_264=wcsstr(str,search_str);
    if(head_264==((void*)0)) {
        return default_value;
    }
    return head_264-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_265;
int* p_266;
int len2_267;
_Bool result_268;
int i_269;
memset(&i_269, 0, sizeof(int));
    len_265=wcslen(search_str);
    p_266=str+wcslen(str)-len_265;
    while(p_266>=str) {
        len2_267=wcslen(p_266);
        result_268=(_Bool)1;
        for(        i_269=0;        i_269<len_265&&i_269<len2_267;        i_269++        ){
            if(p_266[i_269]!=search_str[i_269]) {
                result_268=(_Bool)0;
            }
        }
        if(result_268) {
            return (p_266-str);
        }
        p_266--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_270;
void* __right_value244 = (void*)0;
int* result_271;
int i_272;
int* __result127__;
    len_270=wcslen(str);
    result_271=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_270+1)), "libcomelang-str.c", 986, "int"));
    for(    i_272=0;    i_272<len_270;    i_272++    ){
        result_271[i_272]=str[len_270-i_272-1];
    }
    result_271[len_270]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = result_271;
    result_271 = come_decrement_ref_count2(result_271, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_273;
void* __right_value245 = (void*)0;
int* result_274;
int i_275;
int* __result128__;
    len_273=wcslen(str)*n+1;
    result_274=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_273)), "libcomelang-str.c", 1001, "int"));
    result_274[0]=0;
    for(    i_275=0;    i_275<n;    i_275++    ){
        wcscat(result_274,str);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = result_274;
    result_274 = come_decrement_ref_count2(result_274, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_276;
void* __right_value246 = (void*)0;
int* result_277;
int n_278;
int i_279;
int c_280;
int* __result129__;
    len_276=wchar_tp_length(str);
    result_277=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_276*2+1)), "libcomelang-str.c", 1015, "int"));
    n_278=0;
    for(    i_279=0;    i_279<len_276;    i_279++    ){
        c_280=str[i_279];
        if((c_280>=0&&c_280<32)||c_280==127) {
            result_277[n_278++]=94;
            result_277[n_278++]=c_280+65-1;
        }
        else {
            result_277[n_278++]=c_280;
        }
    }
    result_277[n_278]=0;
    __result129__ = gComeFunResultObject = __result_obj__ = result_277;
    result_277 = come_decrement_ref_count2(result_277, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_281;
int ovec_max_282;
const char* err_286;
int erro_ofs_287;
int options_288;
char* str_289;
struct real_pcre8_or_16* re_290;
int n_291;
int options_292;
int len_293;
int regex_result_294;
int i_295;
int i_296;
int i_299;
void* __right_value247 = (void*)0;
char* match_string_300;
err_286 = (void*)0;
memset(&erro_ofs_287, 0, sizeof(int));
    offset_281=0;
    ovec_max_282=16;
    int start_283[ovec_max_282];
    memset(&start_283, 0, sizeof(int)    *(ovec_max_282)    );
    int end_284[ovec_max_282];
    memset(&end_284, 0, sizeof(int)    *(ovec_max_282)    );
    int ovec_value_285[ovec_max_282*3];
    memset(&ovec_value_285, 0, sizeof(int)    *(ovec_max_282*3)    );
    options_288=reg->options;
    str_289=reg->str;
    re_290=reg->re;
    n_291=0;
    while((_Bool)1) {
        options_292=2097152;
        len_293=strlen(self);
        regex_result_294=pcre_exec(re_290,(struct pcre_extra*)0,self,len_293,offset_281,options_292,ovec_value_285,ovec_max_282*3);
        for(        i_295=0;        i_295<ovec_max_282;        i_295++        ){
            start_283[i_295]=ovec_value_285[i_295*2];
        }
        for(        i_296=0;        i_296<ovec_max_282;        i_296++        ){
            end_284[i_296]=ovec_value_285[i_296*2+1];
        }
        if(regex_result_294==1||(group_strings==((void*)0)&&regex_result_294>0)) {
            n_291++;
            if(n_291==count) {
                return (_Bool)1;
            }
            if(offset_281==end_284[0]) {
                offset_281++;
            }
            else {
                offset_281=end_284[0];
            }
        }
        else {
            if(regex_result_294>1) {
                n_291++;
                list$1charph_reset(group_strings);
                for(                i_299=1;                i_299<regex_result_294;                i_299++                ){
                    match_string_300=(char*)come_increment_ref_count(charp_substring(self,start_283[i_299],end_284[i_299]));
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_300));
                    match_string_300 = come_decrement_ref_count2(match_string_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(n_291==count) {
                    return (_Bool)1;
                }
                if(offset_281==end_284[0]) {
                    offset_281++;
                }
                else {
                    offset_281=end_284[0];
                }
            }
            else {
                return (_Bool)0;
            }
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_297;
struct list_item$1charph* prev_it_298;
struct list$1charph* __result130__;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        /*i*/come_call_finalizer3(prev_it_298,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result130__;
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
void* __right_value248 = (void*)0;
int* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value248=wchar_tp_multiply(str,n)));
    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
int* __result132__;
    __result132__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value249=wchar_tp_multiply(str,n)));
    __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
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
void* __right_value250 = (void*)0;
int* result_301;
int* __result133__;
    result_301=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1179, "int"));
    wcscpy(result_301,left);
    wcscat(result_301,right);
    __result133__ = gComeFunResultObject = __result_obj__ = result_301;
    result_301 = come_decrement_ref_count2(result_301, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
int* result_302;
int* __result134__;
    result_302=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1189, "int"));
    wcscpy(result_302,left);
    wcscat(result_302,right);
    __result134__ = gComeFunResultObject = __result_obj__ = result_302;
    result_302 = come_decrement_ref_count2(result_302, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_303;
    head_303=strstr(str,search_str);
    if(head_303==((void*)0)) {
        return default_value;
    }
    return head_303-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_304;
int result_308;
int offset_309;
const char* err_310;
int erro_ofs_311;
int options_312;
char* str_313;
struct real_pcre8_or_16* re_314;
int options_315;
int len_316;
int regex_result_317;
int i_318;
int i_319;
err_310 = (void*)0;
memset(&erro_ofs_311, 0, sizeof(int));
    ovec_max_304=16;
    int start_305[ovec_max_304];
    memset(&start_305, 0, sizeof(int)    *(ovec_max_304)    );
    int end_306[ovec_max_304];
    memset(&end_306, 0, sizeof(int)    *(ovec_max_304)    );
    int ovec_value_307[ovec_max_304*3];
    memset(&ovec_value_307, 0, sizeof(int)    *(ovec_max_304*3)    );
    result_308=default_value;
    offset_309=0;
    options_312=reg->options;
    str_313=reg->str;
    re_314=reg->re;
    while((_Bool)1) {
        options_315=2097152;
        len_316=strlen(self);
        regex_result_317=pcre_exec(re_314,(struct pcre_extra*)0,self,len_316,offset_309,options_315,ovec_value_307,ovec_max_304*3);
        for(        i_318=0;        i_318<ovec_max_304;        i_318++        ){
            start_305[i_318]=ovec_value_307[i_318*2];
        }
        for(        i_319=0;        i_319<ovec_max_304;        i_319++        ){
            end_306[i_319]=ovec_value_307[i_319*2+1];
        }
        if(regex_result_317==1||regex_result_317>0) {
            result_308=start_305[0];
            break;
        }
        {
            break;
        }
    }
    return result_308;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_320;
void* __right_value252 = (void*)0;
char* __result135__;
void* __right_value253 = (void*)0;
char* __result136__;
    len_320=strlen(self);
    if(strcmp(self,"")==0) {
        __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string(self)));
        __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    if(index<0) {
        index+=len_320;
    }
    if(index>=len_320) {
        index=len_320-1;
    }
    if(index<0) {
        index=0;
    }
    self[index]=c;
    __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string(self)));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_321;
void* __right_value254 = (void*)0;
char* result_322;
int i_323;
char* __result137__;
    len_321=strlen(str)*n+1;
    result_322=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_321)), "libcomelang-str.c", 1287, "char"));
    result_322[0]=0;
    for(    i_323=0;    i_323<n;    i_323++    ){
        strcat(result_322,str);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = result_322;
    result_322 = come_decrement_ref_count2(result_322, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_324;
int ovec_max_325;
const char* err_329;
int erro_ofs_330;
int options_331;
char* str_332;
struct real_pcre8_or_16* re_333;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct buffer* result_334;
int options_335;
int len_336;
int regex_result_337;
int i_338;
int i_339;
void* __right_value257 = (void*)0;
char* str_340;
void* __right_value258 = (void*)0;
char* str_341;
void* __right_value259 = (void*)0;
char* str_342;
void* __right_value260 = (void*)0;
char* __result138__;
err_329 = (void*)0;
memset(&erro_ofs_330, 0, sizeof(int));
    offset_324=0;
    ovec_max_325=16;
    int start_326[ovec_max_325];
    memset(&start_326, 0, sizeof(int)    *(ovec_max_325)    );
    int end_327[ovec_max_325];
    memset(&end_327, 0, sizeof(int)    *(ovec_max_325)    );
    int ovec_value_328[ovec_max_325*3];
    memset(&ovec_value_328, 0, sizeof(int)    *(ovec_max_325*3)    );
    options_331=reg->options;
    str_332=reg->str;
    re_333=reg->re;
    result_334=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1315, "buffer"))));
    while((_Bool)1) {
        options_335=2097152;
        len_336=strlen(self);
        regex_result_337=pcre_exec(re_333,(struct pcre_extra*)0,self,len_336,offset_324,options_335,ovec_value_328,ovec_max_325*3);
        for(        i_338=0;        i_338<ovec_max_325;        i_338++        ){
            start_326[i_338]=ovec_value_328[i_338*2];
        }
        for(        i_339=0;        i_339<ovec_max_325;        i_339++        ){
            end_327[i_339]=ovec_value_328[i_339*2+1];
        }
        if(regex_result_337==1) {
            str_340=(char*)come_increment_ref_count(charp_substring(self,offset_324,start_326[0]));
            buffer_append_str(result_334,str_340);
            buffer_append_str(result_334,replace);
            if(offset_324==end_327[0]) {
                offset_324++;
            }
            else {
                offset_324=end_327[0];
            }
            if(!reg->global) {
                str_341=(char*)come_increment_ref_count(charp_substring(self,offset_324,-1));
                buffer_append_str(result_334,str_341);
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_342=(char*)come_increment_ref_count(charp_substring(self,offset_324,-1));
            buffer_append_str(result_334,str_342);
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=buffer_to_string(result_334)));
    /*i*/come_call_finalizer3(result_334,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_343;
int ovec_max_344;
const char* err_348;
int erro_ofs_349;
int options_350;
char* str_351;
struct real_pcre8_or_16* re_352;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct buffer* result_353;
int n_354;
int options_355;
int len_356;
int regex_result_357;
int i_358;
int i_359;
void* __right_value263 = (void*)0;
char* str_360;
void* __right_value264 = (void*)0;
char* str_361;
void* __right_value265 = (void*)0;
char* str_362;
void* __right_value266 = (void*)0;
char* str_363;
void* __right_value267 = (void*)0;
char* __result139__;
err_348 = (void*)0;
memset(&erro_ofs_349, 0, sizeof(int));
    offset_343=0;
    ovec_max_344=16;
    int start_345[ovec_max_344];
    memset(&start_345, 0, sizeof(int)    *(ovec_max_344)    );
    int end_346[ovec_max_344];
    memset(&end_346, 0, sizeof(int)    *(ovec_max_344)    );
    int ovec_value_347[ovec_max_344*3];
    memset(&ovec_value_347, 0, sizeof(int)    *(ovec_max_344*3)    );
    options_350=reg->options;
    str_351=reg->str;
    re_352=reg->re;
    result_353=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1378, "buffer"))));
    n_354=0;
    while((_Bool)1) {
        options_355=2097152;
        len_356=strlen(self);
        regex_result_357=pcre_exec(re_352,(struct pcre_extra*)0,self,len_356,offset_343,options_355,ovec_value_347,ovec_max_344*3);
        for(        i_358=0;        i_358<ovec_max_344;        i_358++        ){
            start_345[i_358]=ovec_value_347[i_358*2];
        }
        for(        i_359=0;        i_359<ovec_max_344;        i_359++        ){
            end_346[i_359]=ovec_value_347[i_359*2+1];
        }
        if(regex_result_357==1) {
            n_354++;
            str_360=(char*)come_increment_ref_count(charp_substring(self,offset_343,start_345[0]));
            buffer_append_str(result_353,str_360);
            buffer_append_str(result_353,replace);
            if(offset_343==end_346[0]) {
                offset_343++;
            }
            else {
                offset_343=end_346[0];
            }
            if(!reg->global) {
                str_361=(char*)come_increment_ref_count(charp_substring(self,offset_343,-1));
                buffer_append_str(result_353,str_361);
                str_361 = come_decrement_ref_count2(str_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_361 = come_decrement_ref_count2(str_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(n_354==count) {
                str_362=(char*)come_increment_ref_count(charp_substring(self,offset_343,-1));
                buffer_append_str(result_353,str_362);
                str_362 = come_decrement_ref_count2(str_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_362 = come_decrement_ref_count2(str_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_363=(char*)come_increment_ref_count(charp_substring(self,offset_343,-1));
            buffer_append_str(result_353,str_363);
            str_363 = come_decrement_ref_count2(str_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_363 = come_decrement_ref_count2(str_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value267=buffer_to_string(result_353)));
    /*i*/come_call_finalizer3(result_353,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1charph* result_364;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct buffer* buf_365;
int i_366;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1charph* __result140__;
    result_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1437, "list$1charph"))));
    buf_365=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1439, "buffer"))));
    for(    i_366=0;    i_366<charp_length(self);    i_366++    ){
        if(strstr(self+i_366,str)==self+i_366) {
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(__builtin_string(buf_365->buf)));
            buffer_reset(buf_365);
            i_366+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_365,self[i_366]);
        }
    }
    if(buffer_length(buf_365)!=0) {
        list$1charph_push_back(result_364,(char*)come_increment_ref_count(__builtin_string(buf_365->buf)));
    }
    __result140__ = gComeFunResultObject = __result_obj__ = result_364;
    /*i*/come_call_finalizer3(result_364,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_365,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_367;
int offset_368;
int ovec_max_369;
const char* err_373;
int erro_ofs_374;
int options_375;
char* str_376;
struct real_pcre8_or_16* re_377;
int options_378;
int len_379;
int regex_result_380;
int i_381;
int i_382;
void* __right_value276 = (void*)0;
char* str_383;
void* __right_value277 = (void*)0;
char* str_384;
int i_385;
void* __right_value278 = (void*)0;
char* match_string_386;
struct list$1charph* __result141__;
err_373 = (void*)0;
memset(&erro_ofs_374, 0, sizeof(int));
    result_367=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1460, "list$1charph"))));
    offset_368=0;
    ovec_max_369=16;
    int start_370[ovec_max_369];
    memset(&start_370, 0, sizeof(int)    *(ovec_max_369)    );
    int end_371[ovec_max_369];
    memset(&end_371, 0, sizeof(int)    *(ovec_max_369)    );
    int ovec_value_372[ovec_max_369*3];
    memset(&ovec_value_372, 0, sizeof(int)    *(ovec_max_369*3)    );
    options_375=reg->options;
    str_376=reg->str;
    re_377=reg->re;
    while((_Bool)1) {
        options_378=2097152;
        len_379=strlen(self);
        regex_result_380=pcre_exec(re_377,(struct pcre_extra*)0,self,len_379,offset_368,options_378,ovec_value_372,ovec_max_369*3);
        for(        i_381=0;        i_381<ovec_max_369;        i_381++        ){
            start_370[i_381]=ovec_value_372[i_381*2];
        }
        for(        i_382=0;        i_382<ovec_max_369;        i_382++        ){
            end_371[i_382]=ovec_value_372[i_382*2+1];
        }
        if(regex_result_380==1) {
            str_383=(char*)come_increment_ref_count(charp_substring(self,start_370[0],end_371[0]));
            list$1charph_push_back(result_367,(char*)come_increment_ref_count(str_383));
            if(offset_368==end_371[0]) {
                offset_368++;
            }
            else {
                offset_368=end_371[0];
            }
            str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_380>1) {
                str_384=(char*)come_increment_ref_count(charp_substring(self,start_370[0],end_371[0]));
                list$1charph_push_back(result_367,(char*)come_increment_ref_count(str_384));
                if(offset_368==end_371[0]) {
                    offset_368++;
                }
                else {
                    offset_368=end_371[0];
                }
                for(                i_385=1;                i_385<regex_result_380;                i_385++                ){
                    match_string_386=(char*)come_increment_ref_count(charp_substring(self,start_370[i_385],end_371[i_385]));
                    list$1charph_push_back(result_367,(char*)come_increment_ref_count(match_string_386));
                    match_string_386 = come_decrement_ref_count2(match_string_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_384 = come_decrement_ref_count2(str_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result141__ = gComeFunResultObject = __result_obj__ = result_367;
    /*i*/come_call_finalizer3(result_367,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_387;
int erro_ofs_388;
int options_389;
char* str_390;
struct real_pcre8_or_16* re_391;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* result_392;
int offset_393;
int ovec_max_394;
int options_398;
int len_399;
int regex_result_400;
int i_401;
int i_402;
void* __right_value281 = (void*)0;
char* str_403;
void* __right_value282 = (void*)0;
char* str_404;
int i_405;
void* __right_value283 = (void*)0;
char* match_str_406;
void* __right_value284 = (void*)0;
char* str_407;
struct list$1charph* __result142__;
err_387 = (void*)0;
memset(&erro_ofs_388, 0, sizeof(int));
    options_389=reg->options;
    str_390=reg->str;
    re_391=reg->re;
    result_392=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1541, "list$1charph"))));
    offset_393=0;
    ovec_max_394=16;
    int start_395[ovec_max_394];
    memset(&start_395, 0, sizeof(int)    *(ovec_max_394)    );
    int end_396[ovec_max_394];
    memset(&end_396, 0, sizeof(int)    *(ovec_max_394)    );
    int ovec_value_397[ovec_max_394*3];
    memset(&ovec_value_397, 0, sizeof(int)    *(ovec_max_394*3)    );
    while((_Bool)1) {
        options_398=2097152;
        len_399=strlen(self);
        regex_result_400=pcre_exec(re_391,(struct pcre_extra*)0,self,len_399,offset_393,options_398,ovec_value_397,ovec_max_394*3);
        for(        i_401=0;        i_401<ovec_max_394;        i_401++        ){
            start_395[i_401]=ovec_value_397[i_401*2];
        }
        for(        i_402=0;        i_402<ovec_max_394;        i_402++        ){
            end_396[i_402]=ovec_value_397[i_402*2+1];
        }
        if(regex_result_400==1) {
            str_403=(char*)come_increment_ref_count(charp_substring(self,offset_393,start_395[0]));
            list$1charph_push_back(result_392,(char*)come_increment_ref_count(str_403));
            if(offset_393==end_396[0]) {
                offset_393++;
            }
            else {
                offset_393=end_396[0];
            }
            str_403 = come_decrement_ref_count2(str_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_400>1) {
                str_404=(char*)come_increment_ref_count(charp_substring(self,offset_393,start_395[0]));
                list$1charph_push_back(result_392,(char*)come_increment_ref_count(str_404));
                if(offset_393==end_396[0]) {
                    offset_393++;
                }
                else {
                    offset_393=end_396[0];
                }
                for(                i_405=1;                i_405<regex_result_400;                i_405++                ){
                    match_str_406=(char*)come_increment_ref_count(charp_substring(self,start_395[i_405],end_396[i_405]));
                    list$1charph_push_back(result_392,(char*)come_increment_ref_count(match_str_406));
                    match_str_406 = come_decrement_ref_count2(match_str_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_404 = come_decrement_ref_count2(str_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(offset_393<charp_length(self)) {
        str_407=(char*)come_increment_ref_count(charp_substring(self,offset_393,-1));
        list$1charph_push_back(result_392,(char*)come_increment_ref_count(str_407));
        str_407 = come_decrement_ref_count2(str_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_392;
    /*i*/come_call_finalizer3(result_392,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_408;
int ovec_max_409;
const char* err_413;
int erro_ofs_414;
int options_415;
char* str_416;
struct real_pcre8_or_16* re_417;
int options_418;
int len_419;
int regex_result_420;
int i_421;
int i_422;
err_413 = (void*)0;
memset(&erro_ofs_414, 0, sizeof(int));
    offset_408=0;
    ovec_max_409=16;
    int start_410[ovec_max_409];
    memset(&start_410, 0, sizeof(int)    *(ovec_max_409)    );
    int end_411[ovec_max_409];
    memset(&end_411, 0, sizeof(int)    *(ovec_max_409)    );
    int ovec_value_412[ovec_max_409*3];
    memset(&ovec_value_412, 0, sizeof(int)    *(ovec_max_409*3)    );
    options_415=reg->options;
    str_416=reg->str;
    re_417=reg->re;
    while((_Bool)1) {
        options_418=2097152;
        len_419=strlen(self);
        regex_result_420=pcre_exec(re_417,(struct pcre_extra*)0,self,len_419,offset_408,options_418,ovec_value_412,ovec_max_409*3);
        for(        i_421=0;        i_421<ovec_max_409;        i_421++        ){
            start_410[i_421]=ovec_value_412[i_421*2];
        }
        for(        i_422=0;        i_422<ovec_max_409;        i_422++        ){
            end_411[i_422]=ovec_value_412[i_422*2+1];
        }
        if(regex_result_420>0) {
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
const char* err_423;
int erro_ofs_424;
int options_425;
char* str_426;
struct real_pcre8_or_16* re_427;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1charph* result_428;
int offset_429;
int ovec_max_430;
int n_434;
int options_435;
int len_436;
int regex_result_437;
int i_438;
int i_439;
void* __right_value287 = (void*)0;
char* str_440;
void* __right_value288 = (void*)0;
char* str_441;
int i_442;
void* __right_value289 = (void*)0;
char* match_str_443;
void* __right_value290 = (void*)0;
char* str_444;
struct list$1charph* __result143__;
err_423 = (void*)0;
memset(&erro_ofs_424, 0, sizeof(int));
    options_425=reg->options;
    str_426=reg->str;
    re_427=reg->re;
    result_428=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1663, "list$1charph"))));
    offset_429=0;
    ovec_max_430=16;
    int start_431[ovec_max_430];
    memset(&start_431, 0, sizeof(int)    *(ovec_max_430)    );
    int end_432[ovec_max_430];
    memset(&end_432, 0, sizeof(int)    *(ovec_max_430)    );
    int ovec_value_433[ovec_max_430*3];
    memset(&ovec_value_433, 0, sizeof(int)    *(ovec_max_430*3)    );
    n_434=0;
    while((_Bool)1) {
        options_435=2097152;
        len_436=strlen(self);
        regex_result_437=pcre_exec(re_427,(struct pcre_extra*)0,self,len_436,offset_429,options_435,ovec_value_433,ovec_max_430*3);
        for(        i_438=0;        i_438<ovec_max_430;        i_438++        ){
            start_431[i_438]=ovec_value_433[i_438*2];
        }
        for(        i_439=0;        i_439<ovec_max_430;        i_439++        ){
            end_432[i_439]=ovec_value_433[i_439*2+1];
        }
        if(regex_result_437==1) {
            str_440=(char*)come_increment_ref_count(charp_substring(self,offset_429,start_431[0]));
            list$1charph_push_back(result_428,(char*)come_increment_ref_count(str_440));
            if(offset_429==end_432[0]) {
                offset_429++;
            }
            else {
                offset_429=end_432[0];
            }
            str_440 = come_decrement_ref_count2(str_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_437>1) {
                str_441=(char*)come_increment_ref_count(charp_substring(self,offset_429,start_431[0]));
                list$1charph_push_back(result_428,(char*)come_increment_ref_count(str_441));
                if(offset_429==end_432[0]) {
                    offset_429++;
                }
                else {
                    offset_429=end_432[0];
                }
                for(                i_442=1;                i_442<regex_result_437;                i_442++                ){
                    match_str_443=(char*)come_increment_ref_count(charp_substring(self,start_431[i_442],end_432[i_442]));
                    list$1charph_push_back(result_428,(char*)come_increment_ref_count(match_str_443));
                    match_str_443 = come_decrement_ref_count2(match_str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_441 = come_decrement_ref_count2(str_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_434++;
        if(maxsplit==n_434) {
            break;
        }
    }
    if(offset_429<charp_length(self)) {
        str_444=(char*)come_increment_ref_count(charp_substring(self,offset_429,-1));
        list$1charph_push_back(result_428,(char*)come_increment_ref_count(str_444));
        str_444 = come_decrement_ref_count2(str_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result143__ = gComeFunResultObject = __result_obj__ = result_428;
    /*i*/come_call_finalizer3(result_428,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_445;
int erro_ofs_446;
int options_447;
char* str_448;
struct real_pcre8_or_16* re_449;
void* __right_value291 = (void*)0;
char* self2_450;
int ovec_max_451;
int result_455;
int offset_456;
int n_457;
int options_458;
int len_459;
int regex_result_460;
int i_461;
int i_462;
int __result144__;
err_445 = (void*)0;
memset(&erro_ofs_446, 0, sizeof(int));
    options_447=reg->options;
    str_448=reg->str;
    re_449=reg->re;
    self2_450=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_451=16;
    int start_452[ovec_max_451];
    memset(&start_452, 0, sizeof(int)    *(ovec_max_451)    );
    int end_453[ovec_max_451];
    memset(&end_453, 0, sizeof(int)    *(ovec_max_451)    );
    int ovec_value_454[ovec_max_451*3];
    memset(&ovec_value_454, 0, sizeof(int)    *(ovec_max_451*3)    );
    result_455=default_value;
    offset_456=0;
    n_457=0;
    while((_Bool)1) {
        options_458=2097152;
        len_459=strlen(self2_450);
        regex_result_460=pcre_exec(re_449,(struct pcre_extra*)0,self2_450,len_459,offset_456,options_458,ovec_value_454,ovec_max_451*3);
        for(        i_461=0;        i_461<ovec_max_451;        i_461++        ){
            start_452[i_461]=ovec_value_454[i_461*2];
        }
        for(        i_462=0;        i_462<ovec_max_451;        i_462++        ){
            end_453[i_462]=ovec_value_454[i_462*2+1];
        }
        if(regex_result_460>0) {
            n_457++;
            if(offset_456==end_453[0]) {
                offset_456++;
            }
            else {
                offset_456=end_453[0];
            }
            if(n_457==count) {
                result_455=strlen(self)-end_453[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result144__ = result_455;
    self2_450 = come_decrement_ref_count2(self2_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result144__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_463;
int ovec_max_464;
const char* err_468;
int erro_ofs_469;
int options_470;
char* str_471;
struct real_pcre8_or_16* re_472;
int n_473;
int options_474;
int len_475;
int regex_result_476;
int i_477;
int i_478;
err_468 = (void*)0;
memset(&erro_ofs_469, 0, sizeof(int));
    offset_463=0;
    ovec_max_464=16;
    int start_465[ovec_max_464];
    memset(&start_465, 0, sizeof(int)    *(ovec_max_464)    );
    int end_466[ovec_max_464];
    memset(&end_466, 0, sizeof(int)    *(ovec_max_464)    );
    int ovec_value_467[ovec_max_464*3];
    memset(&ovec_value_467, 0, sizeof(int)    *(ovec_max_464*3)    );
    options_470=reg->options;
    str_471=reg->str;
    re_472=reg->re;
    n_473=0;
    while((_Bool)1) {
        options_474=2097152;
        len_475=strlen(self);
        regex_result_476=pcre_exec(re_472,(struct pcre_extra*)0,self,len_475,offset_463,options_474,ovec_value_467,ovec_max_464*3);
        for(        i_477=0;        i_477<ovec_max_464;        i_477++        ){
            start_465[i_477]=ovec_value_467[i_477*2];
        }
        for(        i_478=0;        i_478<ovec_max_464;        i_478++        ){
            end_466[i_478]=ovec_value_467[i_478*2+1];
        }
        if(regex_result_476>0) {
            n_473++;
            if(count==n_473) {
                return (_Bool)1;
            }
            if(offset_463==end_466[0]) {
                offset_463++;
            }
            else {
                offset_463=end_466[0];
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
int offset_479;
int ovec_max_480;
const char* err_484;
int erro_ofs_485;
int options_486;
char* str_487;
struct real_pcre8_or_16* re_488;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct buffer* result_489;
int options_490;
int len_491;
int regex_result_492;
int i_493;
int i_494;
void* __right_value294 = (void*)0;
char* str_495;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1charph* group_strings_496;
void* __right_value297 = (void*)0;
char* match_string_497;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* block_result_498;
void* __right_value300 = (void*)0;
char* str_499;
void* __right_value301 = (void*)0;
char* str_500;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1charph* group_strings_501;
int i_502;
void* __right_value304 = (void*)0;
char* match_string_503;
void* __right_value305 = (void*)0;
char* match_string_504;
void* __right_value306 = (void*)0;
char* block_result_505;
void* __right_value307 = (void*)0;
char* str_506;
void* __right_value308 = (void*)0;
char* str_507;
void* __right_value309 = (void*)0;
char* __result145__;
err_484 = (void*)0;
memset(&erro_ofs_485, 0, sizeof(int));
    offset_479=0;
    ovec_max_480=16;
    int start_481[ovec_max_480];
    memset(&start_481, 0, sizeof(int)    *(ovec_max_480)    );
    int end_482[ovec_max_480];
    memset(&end_482, 0, sizeof(int)    *(ovec_max_480)    );
    int ovec_value_483[ovec_max_480*3];
    memset(&ovec_value_483, 0, sizeof(int)    *(ovec_max_480*3)    );
    options_486=reg->options;
    str_487=reg->str;
    re_488=reg->re;
    result_489=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1875, "buffer"))));
    while((_Bool)1) {
        options_490=2097152;
        len_491=strlen(self);
        regex_result_492=pcre_exec(re_488,(struct pcre_extra*)0,self,len_491,offset_479,options_490,ovec_value_483,ovec_max_480*3);
        for(        i_493=0;        i_493<ovec_max_480;        i_493++        ){
            start_481[i_493]=ovec_value_483[i_493*2];
        }
        for(        i_494=0;        i_494<ovec_max_480;        i_494++        ){
            end_482[i_494]=ovec_value_483[i_494*2+1];
        }
        if(regex_result_492==1) {
            str_495=(char*)come_increment_ref_count(charp_substring(self,offset_479,start_481[0]));
            buffer_append_str(result_489,str_495);
            group_strings_496=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1895, "list$1charph"))));
            match_string_497=(char*)come_increment_ref_count(charp_substring(self,start_481[0],end_482[0]));
            list$1charph_push_back(group_strings_496,(char*)come_increment_ref_count(charp_substring(self,start_481[0],end_482[0])));
            block_result_498=(char*)come_increment_ref_count(block(parent,match_string_497,group_strings_496));
            buffer_append_str(result_489,block_result_498);
            if(offset_479==end_482[0]) {
                offset_479++;
            }
            else {
                offset_479=end_482[0];
            }
            if(!reg->global) {
                str_499=(char*)come_increment_ref_count(charp_substring(self,offset_479,-1));
                buffer_append_str(result_489,str_499);
                str_499 = come_decrement_ref_count2(str_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_495 = come_decrement_ref_count2(str_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_497 = come_decrement_ref_count2(match_string_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_498 = come_decrement_ref_count2(block_result_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_499 = come_decrement_ref_count2(str_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_495 = come_decrement_ref_count2(str_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_497 = come_decrement_ref_count2(match_string_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_498 = come_decrement_ref_count2(block_result_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_492>1) {
                str_500=(char*)come_increment_ref_count(charp_substring(self,offset_479,start_481[0]));
                buffer_append_str(result_489,str_500);
                if(offset_479==end_482[0]) {
                    offset_479++;
                }
                else {
                    offset_479=end_482[0];
                }
                group_strings_501=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1930, "list$1charph"))));
                for(                i_502=1;                i_502<regex_result_492;                i_502++                ){
                    match_string_503=(char*)come_increment_ref_count(charp_substring(self,start_481[i_502],end_482[i_502]));
                    list$1charph_push_back(group_strings_501,(char*)come_increment_ref_count(match_string_503));
                    match_string_503 = come_decrement_ref_count2(match_string_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_504=(char*)come_increment_ref_count(charp_substring(self,start_481[0],end_482[0]));
                block_result_505=(char*)come_increment_ref_count(block(parent,match_string_504,group_strings_501));
                buffer_append_str(result_489,block_result_505);
                if(!reg->global) {
                    str_506=(char*)come_increment_ref_count(charp_substring(self,offset_479,-1));
                    buffer_append_str(result_489,str_506);
                    str_506 = come_decrement_ref_count2(str_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_500 = come_decrement_ref_count2(str_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(group_strings_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_504 = come_decrement_ref_count2(match_string_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_505 = come_decrement_ref_count2(block_result_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_506 = come_decrement_ref_count2(str_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_500 = come_decrement_ref_count2(str_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_504 = come_decrement_ref_count2(match_string_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_505 = come_decrement_ref_count2(block_result_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_507=(char*)come_increment_ref_count(charp_substring(self,offset_479,-1));
                buffer_append_str(result_489,str_507);
                str_507 = come_decrement_ref_count2(str_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_507 = come_decrement_ref_count2(str_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value309=buffer_to_string(result_489)));
    /*i*/come_call_finalizer3(result_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_508;
int ovec_max_509;
const char* err_513;
int erro_ofs_514;
int options_515;
char* str_516;
struct real_pcre8_or_16* re_517;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct buffer* result_518;
int n_519;
int options_520;
int len_521;
int regex_result_522;
int i_523;
int i_524;
void* __right_value312 = (void*)0;
char* str_525;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* group_strings_526;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* match_string_527;
void* __right_value317 = (void*)0;
char* block_result_528;
void* __right_value318 = (void*)0;
char* str_529;
void* __right_value319 = (void*)0;
char* str_530;
void* __right_value320 = (void*)0;
char* str_531;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1charph* group_strings_532;
int i_533;
void* __right_value323 = (void*)0;
char* match_string_534;
void* __right_value324 = (void*)0;
char* match_string_535;
void* __right_value325 = (void*)0;
char* block_result_536;
void* __right_value326 = (void*)0;
char* str_537;
void* __right_value327 = (void*)0;
char* str_538;
void* __right_value328 = (void*)0;
char* str_539;
void* __right_value329 = (void*)0;
char* __result146__;
err_513 = (void*)0;
memset(&erro_ofs_514, 0, sizeof(int));
    offset_508=0;
    ovec_max_509=16;
    int start_510[ovec_max_509];
    memset(&start_510, 0, sizeof(int)    *(ovec_max_509)    );
    int end_511[ovec_max_509];
    memset(&end_511, 0, sizeof(int)    *(ovec_max_509)    );
    int ovec_value_512[ovec_max_509*3];
    memset(&ovec_value_512, 0, sizeof(int)    *(ovec_max_509*3)    );
    options_515=reg->options;
    str_516=reg->str;
    re_517=reg->re;
    result_518=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1976, "buffer"))));
    n_519=0;
    while((_Bool)1) {
        options_520=2097152;
        len_521=strlen(self);
        regex_result_522=pcre_exec(re_517,(struct pcre_extra*)0,self,len_521,offset_508,options_520,ovec_value_512,ovec_max_509*3);
        for(        i_523=0;        i_523<ovec_max_509;        i_523++        ){
            start_510[i_523]=ovec_value_512[i_523*2];
        }
        for(        i_524=0;        i_524<ovec_max_509;        i_524++        ){
            end_511[i_524]=ovec_value_512[i_524*2+1];
        }
        if(regex_result_522==1) {
            n_519++;
            str_525=(char*)come_increment_ref_count(charp_substring(self,offset_508,start_510[0]));
            buffer_append_str(result_518,str_525);
            group_strings_526=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1999, "list$1charph"))));
            list$1charph_push_back(group_strings_526,(char*)come_increment_ref_count(charp_substring(self,start_510[0],end_511[0])));
            match_string_527=(char*)come_increment_ref_count(charp_substring(self,start_510[0],end_511[0]));
            block_result_528=(char*)come_increment_ref_count(block(parent,match_string_527,group_strings_526));
            buffer_append_str(result_518,block_result_528);
            if(offset_508==end_511[0]) {
                offset_508++;
            }
            else {
                offset_508=end_511[0];
            }
            if(!reg->global) {
                str_529=(char*)come_increment_ref_count(charp_substring(self,offset_508,-1));
                buffer_append_str(result_518,str_529);
                str_529 = come_decrement_ref_count2(str_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_525 = come_decrement_ref_count2(str_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_526,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_527 = come_decrement_ref_count2(match_string_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_528 = come_decrement_ref_count2(block_result_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_529 = come_decrement_ref_count2(str_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(n_519==count) {
                str_530=(char*)come_increment_ref_count(charp_substring(self,offset_508,-1));
                buffer_append_str(result_518,str_530);
                str_530 = come_decrement_ref_count2(str_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_525 = come_decrement_ref_count2(str_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_526,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_527 = come_decrement_ref_count2(match_string_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_528 = come_decrement_ref_count2(block_result_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_530 = come_decrement_ref_count2(str_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_525 = come_decrement_ref_count2(str_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_526,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_527 = come_decrement_ref_count2(match_string_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_528 = come_decrement_ref_count2(block_result_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_522>1) {
                n_519++;
                str_531=(char*)come_increment_ref_count(charp_substring(self,offset_508,start_510[0]));
                buffer_append_str(result_518,str_531);
                if(offset_508==end_511[0]) {
                    offset_508++;
                }
                else {
                    offset_508=end_511[0];
                }
                group_strings_532=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2042, "list$1charph"))));
                for(                i_533=1;                i_533<regex_result_522;                i_533++                ){
                    match_string_534=(char*)come_increment_ref_count(charp_substring(self,start_510[i_533],end_511[i_533]));
                    list$1charph_push_back(group_strings_532,(char*)come_increment_ref_count(match_string_534));
                    match_string_534 = come_decrement_ref_count2(match_string_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_535=(char*)come_increment_ref_count(charp_substring(self,start_510[0],end_511[0]));
                block_result_536=(char*)come_increment_ref_count(block(parent,match_string_535,group_strings_532));
                buffer_append_str(result_518,block_result_536);
                if(!reg->global) {
                    str_537=(char*)come_increment_ref_count(charp_substring(self,offset_508,-1));
                    buffer_append_str(result_518,str_537);
                    str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_531 = come_decrement_ref_count2(str_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(group_strings_532,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_535 = come_decrement_ref_count2(match_string_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_536 = come_decrement_ref_count2(block_result_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(n_519==count) {
                    str_538=(char*)come_increment_ref_count(charp_substring(self,offset_508,-1));
                    buffer_append_str(result_518,str_538);
                    str_538 = come_decrement_ref_count2(str_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_531 = come_decrement_ref_count2(str_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(group_strings_532,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_535 = come_decrement_ref_count2(match_string_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_536 = come_decrement_ref_count2(block_result_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_538 = come_decrement_ref_count2(str_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_531 = come_decrement_ref_count2(str_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_532,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_535 = come_decrement_ref_count2(match_string_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_536 = come_decrement_ref_count2(block_result_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_539=(char*)come_increment_ref_count(charp_substring(self,offset_508,-1));
                buffer_append_str(result_518,str_539);
                str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=buffer_to_string(result_518)));
    /*i*/come_call_finalizer3(result_518,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_540;
int* p_541;
    result_540=0;
    p_541=value;
    while(*p_541) {
        result_540+=(*p_541);
        p_541++;
    }
    return result_540;
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
void* __right_value330 = (void*)0;
char* __result147__;
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value330=xsprintf("%ls",wc)));
    __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
char* result_542;
void* __right_value332 = (void*)0;
char* __result148__;
char* __result149__;
    result_542=(char*)come_increment_ref_count(__builtin_string(str));
    if(result_542[string_length(result_542)-1]==10) {
        __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value332=string_substring(result_542,0,-2)));
        result_542 = come_decrement_ref_count2(result_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    __result149__ = gComeFunResultObject = __result_obj__ = result_542;
    result_542 = come_decrement_ref_count2(result_542, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
char* __result150__;
char* result_543;
void* __right_value334 = (void*)0;
char* result2_544;
char* __result151__;
    if(path==((void*)0)) {
        __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string("")));
        __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    result_543=realpath(path,((void*)0));
    result2_544=(char*)come_increment_ref_count(__builtin_string(result_543));
    free(result_543);
    __result151__ = gComeFunResultObject = __result_obj__ = result2_544;
    result2_544 = come_decrement_ref_count2(result2_544, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
char* __result152__;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* __result153__;
    if(path==((void*)0)) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value335=__builtin_string("")));
        __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value337=__builtin_string(dirname(((char*)(__right_value336=__builtin_string(path)))))));
    __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

unsigned long unsigned  int xwcslen(int* wstr){
int* p_545;
unsigned long unsigned  int len_546;
    p_545=wstr;
    len_546=0;
    while(*p_545) {
        p_545++;
        len_546++;
    }
    return len_546;
}

