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
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
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
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
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
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2204, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2211, "buffer"))));
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
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2220, "buffer"))));
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2227, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2234, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2241, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2248, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2548, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2553, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2558, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2563, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2568, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2601, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2603, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2608, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2610, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
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
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2615, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2617, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2622, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2624, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2629, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2631, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2636, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2638, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2643, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2645, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2650, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2655, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2660, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2665, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2670, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2675, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2680, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2685, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2690, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2695, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2700, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2705, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2710, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2715, "vector$1double")),len,self)));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "char*")));
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
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "double")));
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

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct sBlock* result_105;
int block_level_106;
int sline_107;
char* sname_108;
void* __right_value179 = (void*)0;
struct sNode* node_109;
void* __right_value180 = (void*)0;
char* __dec_obj108;
struct sNode* node_113;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value188 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value189 = (void*)0;
struct sNode* __dec_obj115;
char* p_115;
char* head_116;
void* __right_value190 = (void*)0;
char* source_117;
void* __right_value191 = (void*)0;
struct sNode* node_118;
struct sBlock* __result97__;
node_113 = (void*)0;
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
            sline_107=info->sline;
            sname_108=info->sname;
            node_109=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj108=info->sname;
            info->sname=(char*)come_increment_ref_count(node_109->sname(node_109->_protocol_obj));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_109->sline(node_109->_protocol_obj);
            if(node_109==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_109));
            parse_sharp_v5(info);
            if(node_109->terminated(node_109->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_109) { node_109 = come_decrement_ref_count2(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_109) { node_109 = come_decrement_ref_count2(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 226, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value185=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 226, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj114=node_113;
            node_113=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
            /*g*/come_call_finalizer3(__right_value185,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj115=node_113;
            node_113=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
            parse_sharp_v5(info);
            if(node_113==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            if(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_113));
        if(node_113) { node_113 = come_decrement_ref_count2(node_113, ((struct sNode*)node_113)->finalize, ((struct sNode*)node_113)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_115=info->p;
        head_116=info->head;
        source_117=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_117;
        info->head=source_117;
        node_118=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(node_118==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_118));
        info->p=p_115;
        info->head=head_116;
        source_117 = come_decrement_ref_count2(source_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_106;
    __result97__ = gComeFunResultObject = __result_obj__ = result_105;
    /*i*/come_call_finalizer3(result_105,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value181 = (void*)0;
struct list_item$1sNodeph* litem_110;
struct sNode* __dec_obj109;
void* __right_value182 = (void*)0;
struct list_item$1sNodeph* litem_111;
struct sNode* __dec_obj110;
void* __right_value183 = (void*)0;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj111;
struct list$1sNodeph* __result94__;
    if(self->len==0) {
        litem_110=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value181=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sNodeph"))));
        litem_110->prev=((void*)0);
        litem_110->next=((void*)0);
        __dec_obj109=litem_110->item;
        litem_110->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_110;
        self->head=litem_110;
    }
    else {
        if(self->len==1) {
            litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value182=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sNodeph"))));
            litem_111->prev=self->head;
            litem_111->next=((void*)0);
            __dec_obj110=litem_111->item;
            litem_111->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_111;
            self->head->next=litem_111;
        }
        else {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value183=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sNodeph"))));
            litem_112->prev=self->tail;
            litem_112->next=((void*)0);
            __dec_obj111=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_112;
            self->tail=litem_112;
        }
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj112;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj112=self->sname;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result95__;
void* __right_value186 = (void*)0;
struct sSemicolonNode* result_114;
void* __right_value187 = (void*)0;
char* __dec_obj113;
struct sSemicolonNode* __result96__;
    if(self==(void*)0) {
        __result95__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    result_114=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(self!=((void*)0)) {
        result_114->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj113=result_114->sname;
        result_114->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
_Bool inhibits_output_code_119;
struct sVarTable* old_table_120;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sVarTable* __dec_obj116;
struct sVarTable* current_loop_vtable_121;
struct list$1sTypeph* param_types__122;
struct list$1charph* param_names__123;
int i_124;
struct list$1charph* o2_saved_125;
char* name_128;
void* __right_value194 = (void*)0;
struct sType* type_131;
void* __right_value195 = (void*)0;
int block_level_135;
int i_136;
struct list$1sNodeph* o2_saved_137;
struct sNode* node_140;
struct list$1sRightValueObjectph* right_value_objects_143;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
char* __dec_obj124;
int stack_num_before_148;
int sline_149;
void* __right_value198 = (void*)0;
char* sname_150;
void* __right_value199 = (void*)0;
char* __dec_obj125;
void* __right_value200 = (void*)0;
char* __dec_obj126;
struct list$1sRightValueObjectph* __dec_obj127;
memset(&i_124, 0, sizeof(int));
memset(&i_136, 0, sizeof(int));
    if(info->output_header_file) {
        return 0;
    }
    inhibits_output_code_119=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_120=info->lv_table;
    if(!no_var_table) {
        __dec_obj116=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 284, "sVarTable")),(_Bool)0,old_table_120));
        /* a*/come_call_finalizer3(__dec_obj116,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_121=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__122=info->param_types;
    param_names__123=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(        o2_saved_125=(param_names),name_128=list$1charph_begin((o2_saved_125));        !list$1charph_end((o2_saved_125));        name_128=list$1charph_next((o2_saved_125))        ){
            type_131=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_124), "05function.c", 302, 0))));
            type_131->mFunctionParam=(_Bool)1;
            type_131->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_128,(struct sType*)come_increment_ref_count(sType_clone(type_131)),info);
            i_124++;
            /*i*/come_call_finalizer3(type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_135=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_137=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_140=list$1sNodeph_begin((o2_saved_137));        !list$1sNodeph_end((o2_saved_137));        node_140=list$1sNodeph_next((o2_saved_137))        ){
            right_value_objects_143=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj121=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 321, "list$1sRightValueObjectph"))));
            /* a*/come_call_finalizer3(__dec_obj121,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj122=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj124=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_148=list$1CVALUEph_length(info->stack);
            sline_149=info->sline;
            sname_150=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_140->sline(node_140->_protocol_obj);
            __dec_obj125=info->sname;
            info->sname=(char*)come_increment_ref_count(node_140->sname(node_140->_protocol_obj));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_140,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_149;
            __dec_obj126=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_150));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_148);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj127=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_143);
            /* a*/come_call_finalizer3(__dec_obj127,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_objects_143,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_150 = come_decrement_ref_count2(sname_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_137,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_120;
    info->block_level=block_level_135;
    info->param_types=param_types__122;
    info->param_names=param_names__123;
    if(string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_121;
    info->inhibits_output_code=inhibits_output_code_119;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_126;
char* __result98__;
char* __result99__;
char* result_127;
char* __result100__;
result_126 = (void*)0;
result_127 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_126,0,sizeof(char*));
        __result98__ = gComeFunResultObject = __result_obj__ = result_126;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    self->it=self->head;
    if(self->it) {
        __result99__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    memset(&result_127,0,sizeof(char*));
    __result100__ = gComeFunResultObject = __result_obj__ = result_127;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_129;
char* __result101__;
char* __result102__;
char* result_130;
char* __result103__;
result_129 = (void*)0;
result_130 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_129,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_129;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_130,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_130;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_132;
int i_133;
struct sType* __result104__;
struct sType* default_value_134;
struct sType* __result105__;
default_value_134 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_132=self->head;
    i_133=0;
    while(it_132!=((void*)0)) {
        if(position==i_133) {
            __result104__ = gComeFunResultObject = __result_obj__ = it_132->item;
            gComeFunResultObject = (void*)0;
            return __result104__;
        }
        it_132=it_132->next;
        i_133++;
    }
    memset(&default_value_134,0,sizeof(struct sType*));
    __result105__ = gComeFunResultObject = __result_obj__ = default_value_134;
    /*i*/come_call_finalizer3(default_value_134,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_138;
struct sNode* __result106__;
struct sNode* __result107__;
struct sNode* result_139;
struct sNode* __result108__;
result_138 = (void*)0;
result_139 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_138,0,sizeof(struct sNode*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_138;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->head;
    if(self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_139,0,sizeof(struct sNode*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_139;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_141;
struct sNode* __result109__;
struct sNode* __result110__;
struct sNode* result_142;
struct sNode* __result111__;
result_141 = (void*)0;
result_142 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_141,0,sizeof(struct sNode*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_141;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_142,0,sizeof(struct sNode*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_142;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_144;
struct list_item$1sRightValueObjectph* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj117;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj117=self->item;
            /* a*/come_call_finalizer3(__dec_obj117,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj118=self->mType;
            /* a*/come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj119=self->mVarName;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj120=self->mFunName;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_146;
struct list_item$1sRightValueObjectph* prev_it_147;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        /*i*/come_call_finalizer3(prev_it_147,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_151;
struct list_item$1sRightValueObjectph* prev_it_152;
struct list$1sRightValueObjectph* __result113__;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
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
char* head_153;
_Bool dquort_154;
_Bool squort_155;
int sline_156;
int nest_157;
char* tail_158;
void* __right_value201 = (void*)0;
char* buf_159;
void* __right_value202 = (void*)0;
char* __result114__;
    head_153=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_154=(_Bool)0;
        squort_155=(_Bool)0;
        sline_156=0;
        nest_157=0;
        while(1) {
            if(dquort_154) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_156);
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
                        dquort_154=!dquort_154;
                    }
                    else {
                        if(*info->p==10) {
                            info->p++;
                            info->sline++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_156);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_156);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_155) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_156);
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
                            squort_155=!squort_155;
                        }
                        else {
                            if(*info->p==10) {
                                info->p++;
                                info->sline++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_156);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_156);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_156=info->sline;
                        info->p++;
                        squort_155=!squort_155;
                    }
                    else {
                        if(*info->p==34) {
                            sline_156=info->sline;
                            info->p++;
                            dquort_154=!dquort_154;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_157++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_157==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_157--;
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
    tail_158=info->p;
    buf_159=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_158-head_153+1)), "05function.c", 531, "char"));
    memcpy(buf_159,head_153,tail_158-head_153);
    buf_159[tail_158-head_153]=0;
    __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value202=__builtin_string(buf_159)));
    buf_159 = come_decrement_ref_count2(buf_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_160;
char* p3_161;
int i_162;
    terminated_160=(_Bool)0;
    p3_161=p;
    for(    i_162=0;    i_162<strlen(p2);    i_162++    ){
        if(*p3_161==0) {
            terminated_160=(_Bool)1;
            break;
        }
        p3_161++;
    }
    return !terminated_160&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct buffer* asm_fun_name_163;
int brace_num_164;
int len_165;
_Bool in_dquort_166;
int brace_num_167;
int brace_num_168;
void* __right_value205 = (void*)0;
char* __result115__;
    asm_fun_name_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 554, "buffer"))));
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
                                brace_num_164=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_164++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_164--;
                                            if(brace_num_164==0) {
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
                                    len_165=0;
                                    in_dquort_166=(_Bool)0;
                                    brace_num_167=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_166=!in_dquort_166;
                                        }
                                        else {
                                            if(in_dquort_166) {
                                                buffer_append_char(asm_fun_name_163,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_167++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_167--;
                                                        if(brace_num_167==0) {
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
                                        brace_num_168=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_168++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_168--;
                                                    if(brace_num_168==0) {
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
    __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value205=buffer_to_string(asm_fun_name_163)));
    /*i*/come_call_finalizer3(asm_fun_name_163,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_169;
int head_sline_170;
void* __right_value206 = (void*)0;
char* buf_171;
void* __right_value207 = (void*)0;
struct sNode* node_172;
    while(*info->p) {
        parse_sharp_v5(info);
        head_169=info->p;
        head_sline_170=info->sline;
        buf_171=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_171 = come_decrement_ref_count2(buf_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_172=(struct sNode*)come_increment_ref_count(top_level_v99(buf_171,head_169,head_sline_170,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_172!=((void*)0)) {
            if(!node_compile(node_172,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_171 = come_decrement_ref_count2(buf_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_172) { node_172 = come_decrement_ref_count2(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_171 = come_decrement_ref_count2(buf_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_172) { node_172 = come_decrement_ref_count2(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value208 = (void*)0;
char* name_173;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sType* result_type_174;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __list_values1___175[5];
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1sTypeph* param_types_180;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
char* __list_values2___181[5];
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct list$1charph* param_names_186;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct list$1charph* param_default_parametors_187;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sFun* main_fun_188;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* name_230;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct sType* result_type_231;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* __list_values3___232[1];
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1sTypeph* param_types_233;
void* __right_value256 = (void*)0;
char* __list_values4___234[1];
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1charph* param_names_235;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charph* param_default_parametors_236;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sFun* main_fun_237;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
char* name_238;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* result_type_239;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __list_values5___240[7];
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sTypeph* param_types_241;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* __list_values6___242[7];
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1charph* param_names_243;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1charph* param_default_parametors_244;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sFun* main_fun_245;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
char* name_246;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* result_type_247;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __list_values7___248[5];
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1sTypeph* param_types_249;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* __list_values8___250[5];
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1charph* param_names_251;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1charph* param_default_parametors_252;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sFun* main_fun_253;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
char* name_254;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* result_type_255;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __list_values9___256[1];
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1sTypeph* param_types_257;
void* __right_value337 = (void*)0;
char* __list_values10___258[1];
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1charph* param_names_259;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1charph* param_default_parametors_260;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sFun* main_fun_261;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* name_262;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* result_type_263;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __list_values11___264[4];
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1sTypeph* param_types_265;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
char* __list_values12___266[4];
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1charph* param_names_267;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1charph* param_default_parametors_268;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sFun* main_fun_269;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
char* name_270;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* result_type_271;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* __list_values13___272[3];
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1sTypeph* param_types_273;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
char* __list_values14___274[3];
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1charph* param_names_275;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1charph* param_default_parametors_276;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sFun* main_fun_277;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
char* name_278;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* result_type_279;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* __list_values15___280[1];
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1sTypeph* param_types_281;
void* __right_value406 = (void*)0;
char* __list_values16___282[1];
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1charph* param_names_283;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1charph* param_default_parametors_284;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sFun* main_fun_285;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* name_286;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sType* result_type_287;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sType* __list_values17___288[3];
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct list$1sTypeph* param_types_289;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
char* __list_values18___290[3];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1charph* param_names_291;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1charph* param_default_parametors_292;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sFun* main_fun_293;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
char* name_294;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sType* result_type_295;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sTypeph* param_types_296;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* param_names_297;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1charph* param_default_parametors_298;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sFun* main_fun_299;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
char* name_300;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* result_type_301;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* __list_values19___302[4];
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1sTypeph* param_types_303;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* __list_values20___304[4];
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1charph* param_names_305;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1charph* param_default_parametors_306;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sFun* main_fun_307;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
char* name_308;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* result_type_309;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1sTypeph* param_types_310;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1charph* param_names_311;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1charph* param_default_parametors_312;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sFun* fun_313;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
char* name_314;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* result_type_315;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1sTypeph* param_types_316;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1charph* param_names_317;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1charph* param_default_parametors_318;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sFun* fun_319;
void* __right_value506 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_173=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_174=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 723, "sType")),"void*",(_Bool)0,info));
        {__list_values1___175[0]=come_increment_ref_count(((struct sType*)(__right_value212=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")),"int",(_Bool)0,info))));
__list_values1___175[1]=come_increment_ref_count(((struct sType*)(__right_value214=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")),"int",(_Bool)0,info))));
__list_values1___175[2]=come_increment_ref_count(((struct sType*)(__right_value216=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")),"char*",(_Bool)0,info))));
__list_values1___175[3]=come_increment_ref_count(((struct sType*)(__right_value218=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")),"int",(_Bool)0,info))));
__list_values1___175[4]=come_increment_ref_count(((struct sType*)(__right_value220=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")),"char*",(_Bool)0,info))));
}        param_types_180=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 724, "struct list$1sTypeph")),5,__list_values1___175));
        /*g*/come_call_finalizer3(__right_value212,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value214,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value216,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value218,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___181[0]=come_increment_ref_count(((char*)(__right_value226=__builtin_string("count"))));
__list_values2___181[1]=come_increment_ref_count(((char*)(__right_value227=__builtin_string("size"))));
__list_values2___181[2]=come_increment_ref_count(((char*)(__right_value228=__builtin_string("sname"))));
__list_values2___181[3]=come_increment_ref_count(((char*)(__right_value229=__builtin_string("sline"))));
__list_values2___181[4]=come_increment_ref_count(((char*)(__right_value230=__builtin_string("class_name"))));
}        param_names_186=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 725, "struct list$1charph")),5,__list_values2___181));
        __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_187=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 726, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_187,((void*)0));
        list$1charph_push_back(param_default_parametors_187,((void*)0));
        list$1charph_push_back(param_default_parametors_187,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_187,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_187,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_188=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 732, "sFun")),(char*)come_increment_ref_count(name_173),(struct sType*)come_increment_ref_count(result_type_174),(struct list$1sTypeph*)come_increment_ref_count(param_types_180),(struct list$1charph*)come_increment_ref_count(param_names_186),(struct list$1charph*)come_increment_ref_count(param_default_parametors_187),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_173)),(struct sFun*)come_increment_ref_count(main_fun_188));
        name_173 = come_decrement_ref_count2(name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_180,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_186,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_187,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_188,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_230=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_231=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")),"void*",(_Bool)0,info));
        {__list_values3___232[0]=come_increment_ref_count(((struct sType*)(__right_value253=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 744, "sType")),"void*",(_Bool)0,info))));
}        param_types_233=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 744, "struct list$1sTypeph")),1,__list_values3___232));
        /*g*/come_call_finalizer3(__right_value253,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___234[0]=come_increment_ref_count(((char*)(__right_value256=__builtin_string("mem"))));
}        param_names_235=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 745, "struct list$1charph")),1,__list_values4___234));
        __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_236=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 746, "list$1charph"))));
        main_fun_237=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 747, "sFun")),(char*)come_increment_ref_count(name_230),(struct sType*)come_increment_ref_count(result_type_231),(struct list$1sTypeph*)come_increment_ref_count(param_types_233),(struct list$1charph*)come_increment_ref_count(param_names_235),(struct list$1charph*)come_increment_ref_count(param_default_parametors_236),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_230)),(struct sFun*)come_increment_ref_count(main_fun_237));
        name_230 = come_decrement_ref_count2(name_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_231,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_233,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_235,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_236,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_237,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_238=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_239=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")),"void",(_Bool)0,info));
        {__list_values5___240[0]=come_increment_ref_count(((struct sType*)(__right_value270=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"void*",(_Bool)0,info))));
__list_values5___240[1]=come_increment_ref_count(((struct sType*)(__right_value272=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"void*",(_Bool)0,info))));
__list_values5___240[2]=come_increment_ref_count(((struct sType*)(__right_value274=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"void*",(_Bool)0,info))));
__list_values5___240[3]=come_increment_ref_count(((struct sType*)(__right_value276=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"void*",(_Bool)0,info))));
__list_values5___240[4]=come_increment_ref_count(((struct sType*)(__right_value278=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"int",(_Bool)0,info))));
__list_values5___240[5]=come_increment_ref_count(((struct sType*)(__right_value280=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"int",(_Bool)0,info))));
__list_values5___240[6]=come_increment_ref_count(((struct sType*)(__right_value282=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")),"int",(_Bool)0,info))));
}        param_types_241=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 759, "struct list$1sTypeph")),7,__list_values5___240));
        /*g*/come_call_finalizer3(__right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value272,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value274,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value276,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value282,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___242[0]=come_increment_ref_count(((char*)(__right_value285=__builtin_string("fun"))));
__list_values6___242[1]=come_increment_ref_count(((char*)(__right_value286=__builtin_string("mem"))));
__list_values6___242[2]=come_increment_ref_count(((char*)(__right_value287=__builtin_string("protocol_fun"))));
__list_values6___242[3]=come_increment_ref_count(((char*)(__right_value288=__builtin_string("protocol_obj"))));
__list_values6___242[4]=come_increment_ref_count(((char*)(__right_value289=__builtin_string("call_finalizer_only"))));
__list_values6___242[5]=come_increment_ref_count(((char*)(__right_value290=__builtin_string("no_decrement"))));
__list_values6___242[6]=come_increment_ref_count(((char*)(__right_value291=__builtin_string("no_free"))));
}        param_names_243=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 760, "struct list$1charph")),7,__list_values6___242));
        __right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_244=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 761, "list$1charph"))));
        main_fun_245=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 762, "sFun")),(char*)come_increment_ref_count(name_238),(struct sType*)come_increment_ref_count(result_type_239),(struct list$1sTypeph*)come_increment_ref_count(param_types_241),(struct list$1charph*)come_increment_ref_count(param_names_243),(struct list$1charph*)come_increment_ref_count(param_default_parametors_244),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_238)),(struct sFun*)come_increment_ref_count(main_fun_245));
        name_238 = come_decrement_ref_count2(name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_243,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_244,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_245,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_246=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_247=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 773, "sType")),"void*",(_Bool)0,info));
        {__list_values7___248[0]=come_increment_ref_count(((struct sType*)(__right_value305=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")),"void*",(_Bool)0,info))));
__list_values7___248[1]=come_increment_ref_count(((struct sType*)(__right_value307=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")),"void*",(_Bool)0,info))));
__list_values7___248[2]=come_increment_ref_count(((struct sType*)(__right_value309=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")),"void*",(_Bool)0,info))));
__list_values7___248[3]=come_increment_ref_count(((struct sType*)(__right_value311=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")),"bool",(_Bool)0,info))));
__list_values7___248[4]=come_increment_ref_count(((struct sType*)(__right_value313=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")),"bool",(_Bool)0,info))));
}        param_types_249=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 774, "struct list$1sTypeph")),5,__list_values7___248));
        /*g*/come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value307,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value309,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value311,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value313,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___250[0]=come_increment_ref_count(((char*)(__right_value316=__builtin_string("mem"))));
__list_values8___250[1]=come_increment_ref_count(((char*)(__right_value317=__builtin_string("protocol_fun"))));
__list_values8___250[2]=come_increment_ref_count(((char*)(__right_value318=__builtin_string("protocol_obj"))));
__list_values8___250[3]=come_increment_ref_count(((char*)(__right_value319=__builtin_string("no_decrement"))));
__list_values8___250[4]=come_increment_ref_count(((char*)(__right_value320=__builtin_string("no_free"))));
}        param_names_251=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 775, "struct list$1charph")),5,__list_values8___250));
        __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_252=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 776, "list$1charph"))));
        main_fun_253=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 777, "sFun")),(char*)come_increment_ref_count(name_246),(struct sType*)come_increment_ref_count(result_type_247),(struct list$1sTypeph*)come_increment_ref_count(param_types_249),(struct list$1charph*)come_increment_ref_count(param_names_251),(struct list$1charph*)come_increment_ref_count(param_default_parametors_252),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_246)),(struct sFun*)come_increment_ref_count(main_fun_253));
        name_246 = come_decrement_ref_count2(name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_249,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_251,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_252,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_253,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_254=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_255=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")),"void",(_Bool)0,info));
        {__list_values9___256[0]=come_increment_ref_count(((struct sType*)(__right_value334=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 789, "sType")),"void*",(_Bool)0,info))));
}        param_types_257=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 789, "struct list$1sTypeph")),1,__list_values9___256));
        /*g*/come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___258[0]=come_increment_ref_count(((char*)(__right_value337=__builtin_string("mem"))));
}        param_names_259=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 790, "struct list$1charph")),1,__list_values10___258));
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_260=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 791, "list$1charph"))));
        main_fun_261=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 792, "sFun")),(char*)come_increment_ref_count(name_254),(struct sType*)come_increment_ref_count(result_type_255),(struct list$1sTypeph*)come_increment_ref_count(param_types_257),(struct list$1charph*)come_increment_ref_count(param_names_259),(struct list$1charph*)come_increment_ref_count(param_default_parametors_260),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_254)),(struct sFun*)come_increment_ref_count(main_fun_261));
        name_254 = come_decrement_ref_count2(name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_255,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_257,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_259,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_260,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_261,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_262=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_263=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 803, "sType")),"void*",(_Bool)0,info));
        {__list_values11___264[0]=come_increment_ref_count(((struct sType*)(__right_value351=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"void*",(_Bool)0,info))));
__list_values11___264[1]=come_increment_ref_count(((struct sType*)(__right_value353=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"char*",(_Bool)0,info))));
__list_values11___264[2]=come_increment_ref_count(((struct sType*)(__right_value355=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"int",(_Bool)0,info))));
__list_values11___264[3]=come_increment_ref_count(((struct sType*)(__right_value357=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"char*",(_Bool)0,info))));
}        param_types_265=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 804, "struct list$1sTypeph")),4,__list_values11___264));
        /*g*/come_call_finalizer3(__right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value353,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value355,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value357,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___266[0]=come_increment_ref_count(((char*)(__right_value360=__builtin_string("block"))));
__list_values12___266[1]=come_increment_ref_count(((char*)(__right_value361=__builtin_string("sname"))));
__list_values12___266[2]=come_increment_ref_count(((char*)(__right_value362=__builtin_string("sline"))));
__list_values12___266[3]=come_increment_ref_count(((char*)(__right_value363=__builtin_string("class_name"))));
}        param_names_267=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 805, "struct list$1charph")),4,__list_values12___266));
        __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_268=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 806, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_268,((void*)0));
        list$1charph_push_back(param_default_parametors_268,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_268,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_268,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_269=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 811, "sFun")),(char*)come_increment_ref_count(name_262),(struct sType*)come_increment_ref_count(result_type_263),(struct list$1sTypeph*)come_increment_ref_count(param_types_265),(struct list$1charph*)come_increment_ref_count(param_names_267),(struct list$1charph*)come_increment_ref_count(param_default_parametors_268),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_262)),(struct sFun*)come_increment_ref_count(main_fun_269));
        name_262 = come_decrement_ref_count2(name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_265,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_267,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_268,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_269,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_270=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_271=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 822, "sType")),"void*",(_Bool)0,info));
        {__list_values13___272[0]=come_increment_ref_count(((struct sType*)(__right_value380=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")),"void*",(_Bool)0,info))));
__list_values13___272[1]=come_increment_ref_count(((struct sType*)(__right_value382=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")),"int",(_Bool)0,info))));
__list_values13___272[2]=come_increment_ref_count(((struct sType*)(__right_value384=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")),"long",(_Bool)0,info))));
}        param_types_273=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 823, "struct list$1sTypeph")),3,__list_values13___272));
        /*g*/come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value384,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___274[0]=come_increment_ref_count(((char*)(__right_value387=__builtin_string("b"))));
__list_values14___274[1]=come_increment_ref_count(((char*)(__right_value388=__builtin_string("c"))));
__list_values14___274[2]=come_increment_ref_count(((char*)(__right_value389=__builtin_string("len"))));
}        param_names_275=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 824, "struct list$1charph")),3,__list_values14___274));
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_276=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 825, "list$1charph"))));
        main_fun_277=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 826, "sFun")),(char*)come_increment_ref_count(name_270),(struct sType*)come_increment_ref_count(result_type_271),(struct list$1sTypeph*)come_increment_ref_count(param_types_273),(struct list$1charph*)come_increment_ref_count(param_names_275),(struct list$1charph*)come_increment_ref_count(param_default_parametors_276),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_270)),(struct sFun*)come_increment_ref_count(main_fun_277));
        name_270 = come_decrement_ref_count2(name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_273,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_275,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_276,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_277,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_278=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_279=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")),"char*",(_Bool)0,info));
        {__list_values15___280[0]=come_increment_ref_count(((struct sType*)(__right_value403=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 838, "sType")),"char*",(_Bool)0,info))));
}        param_types_281=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 838, "struct list$1sTypeph")),1,__list_values15___280));
        /*g*/come_call_finalizer3(__right_value403,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___282[0]=come_increment_ref_count(((char*)(__right_value406=__builtin_string("str"))));
}        param_names_283=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 839, "struct list$1charph")),1,__list_values16___282));
        __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_284=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 840, "list$1charph"))));
        main_fun_285=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 841, "sFun")),(char*)come_increment_ref_count(name_278),(struct sType*)come_increment_ref_count(result_type_279),(struct list$1sTypeph*)come_increment_ref_count(param_types_281),(struct list$1charph*)come_increment_ref_count(param_names_283),(struct list$1charph*)come_increment_ref_count(param_default_parametors_284),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_278)),(struct sFun*)come_increment_ref_count(main_fun_285));
        name_278 = come_decrement_ref_count2(name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_279,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_281,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_285,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_286=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_287=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 852, "sType")),"void",(_Bool)0,info));
        {__list_values17___288[0]=come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")),"int",(_Bool)0,info))));
__list_values17___288[1]=come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")),"int",(_Bool)0,info))));
__list_values17___288[2]=come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")),"int",(_Bool)0,info))));
}        param_types_289=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 853, "struct list$1sTypeph")),3,__list_values17___288));
        /*g*/come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___290[0]=come_increment_ref_count(((char*)(__right_value427=xsprintf("come_malloc"))));
__list_values18___290[1]=come_increment_ref_count(((char*)(__right_value428=xsprintf("come_debug"))));
__list_values18___290[2]=come_increment_ref_count(((char*)(__right_value429=xsprintf("come_gc"))));
}        param_names_291=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 854, "struct list$1charph")),3,__list_values18___290));
        __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_292=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 855, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_292,((void*)0));
        main_fun_293=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 857, "sFun")),(char*)come_increment_ref_count(name_286),(struct sType*)come_increment_ref_count(result_type_287),(struct list$1sTypeph*)come_increment_ref_count(param_types_289),(struct list$1charph*)come_increment_ref_count(param_names_291),(struct list$1charph*)come_increment_ref_count(param_default_parametors_292),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_286)),(struct sFun*)come_increment_ref_count(main_fun_293));
        name_286 = come_decrement_ref_count2(name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_289,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_291,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_292,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_293,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_294=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_295=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")),"void",(_Bool)0,info));
        param_types_296=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 869, "list$1sTypeph"))));
        param_names_297=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))));
        param_default_parametors_298=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 871, "list$1charph"))));
        main_fun_299=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 872, "sFun")),(char*)come_increment_ref_count(name_294),(struct sType*)come_increment_ref_count(result_type_295),(struct list$1sTypeph*)come_increment_ref_count(param_types_296),(struct list$1charph*)come_increment_ref_count(param_names_297),(struct list$1charph*)come_increment_ref_count(param_default_parametors_298),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_294)),(struct sFun*)come_increment_ref_count(main_fun_299));
        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_296,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_298,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_299,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_300=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_301=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info));
        {__list_values19___302[0]=come_increment_ref_count(((struct sType*)(__right_value457=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"void*",(_Bool)0,info))));
__list_values19___302[1]=come_increment_ref_count(((struct sType*)(__right_value459=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"char*",(_Bool)0,info))));
__list_values19___302[2]=come_increment_ref_count(((struct sType*)(__right_value461=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"int",(_Bool)0,info))));
__list_values19___302[3]=come_increment_ref_count(((struct sType*)(__right_value463=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"int",(_Bool)0,info))));
}        param_types_303=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 884, "struct list$1sTypeph")),4,__list_values19___302));
        /*g*/come_call_finalizer3(__right_value457,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value459,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___304[0]=come_increment_ref_count(((char*)(__right_value466=__builtin_string("mem"))));
__list_values20___304[1]=come_increment_ref_count(((char*)(__right_value467=__builtin_string("sname"))));
__list_values20___304[2]=come_increment_ref_count(((char*)(__right_value468=__builtin_string("sline"))));
__list_values20___304[3]=come_increment_ref_count(((char*)(__right_value469=__builtin_string("id"))));
}        param_names_305=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "struct list$1charph")),4,__list_values20___304));
        __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_306=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 886, "list$1charph"))));
        main_fun_307=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 887, "sFun")),(char*)come_increment_ref_count(name_300),(struct sType*)come_increment_ref_count(result_type_301),(struct list$1sTypeph*)come_increment_ref_count(param_types_303),(struct list$1charph*)come_increment_ref_count(param_names_305),(struct list$1charph*)come_increment_ref_count(param_default_parametors_306),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_300)),(struct sFun*)come_increment_ref_count(main_fun_307));
        name_300 = come_decrement_ref_count2(name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_303,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_305,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_306,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_307,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_308=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_309=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void",(_Bool)0,info));
        param_types_310=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 899, "list$1sTypeph"))));
        param_names_311=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))));
        param_default_parametors_312=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 901, "list$1charph"))));
        fun_313=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 902, "sFun")),(char*)come_increment_ref_count(name_308),(struct sType*)come_increment_ref_count(result_type_309),(struct list$1sTypeph*)come_increment_ref_count(param_types_310),(struct list$1charph*)come_increment_ref_count(param_names_311),(struct list$1charph*)come_increment_ref_count(param_default_parametors_312),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_308)),(struct sFun*)come_increment_ref_count(fun_313));
        name_308 = come_decrement_ref_count2(name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_310,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_311,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_312,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_313,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_314=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_315=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 913, "sType")),"void",(_Bool)0,info));
        param_types_316=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 914, "list$1sTypeph"))));
        param_names_317=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 915, "list$1charph"))));
        param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 916, "list$1charph"))));
        fun_319=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 917, "sFun")),(char*)come_increment_ref_count(name_314),(struct sType*)come_increment_ref_count(result_type_315),(struct list$1sTypeph*)come_increment_ref_count(param_types_316),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_314)),(struct sFun*)come_increment_ref_count(fun_319));
        name_314 = come_decrement_ref_count2(name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_316,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_319,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_176;
struct list$1sTypeph* __result117__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0;    i_176<num_value;    i_176++    ){
        list$1sTypeph_push_back(self,values[i_176]);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
struct list_item$1sTypeph* litem_177;
struct sType* __dec_obj128;
void* __right_value222 = (void*)0;
struct list_item$1sTypeph* litem_178;
struct sType* __dec_obj129;
void* __right_value223 = (void*)0;
struct list_item$1sTypeph* litem_179;
struct sType* __dec_obj130;
struct list$1sTypeph* __result116__;
    if(self->len==0) {
        litem_177=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value221=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        __dec_obj128=litem_177->item;
        litem_177->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_177;
        self->head=litem_177;
    }
    else {
        if(self->len==1) {
            litem_178=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value222=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_178->prev=self->head;
            litem_178->next=((void*)0);
            __dec_obj129=litem_178->item;
            litem_178->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_178;
            self->head->next=litem_178;
        }
        else {
            litem_179=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value223=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_179->prev=self->tail;
            litem_179->next=((void*)0);
            __dec_obj130=litem_179->item;
            litem_179->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_179;
            self->tail=litem_179;
        }
    }
    self->len++;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_182;
struct list$1charph* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0;    i_182<num_value;    i_182++    ){
        list$1charph_push_back(self,values[i_182]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
struct list_item$1charph* litem_183;
char* __dec_obj131;
void* __right_value232 = (void*)0;
struct list_item$1charph* litem_184;
char* __dec_obj132;
void* __right_value233 = (void*)0;
struct list_item$1charph* litem_185;
char* __dec_obj133;
struct list$1charph* __result118__;
    if(self->len==0) {
        litem_183=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value231=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        __dec_obj131=litem_183->item;
        litem_183->item=(char*)come_increment_ref_count(item);
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_183;
        self->head=litem_183;
    }
    else {
        if(self->len==1) {
            litem_184=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value232=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_184->prev=self->head;
            litem_184->next=((void*)0);
            __dec_obj132=litem_184->item;
            litem_184->item=(char*)come_increment_ref_count(item);
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_184;
            self->head->next=litem_184;
        }
        else {
            litem_185=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value233=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_185->prev=self->tail;
            litem_185->next=((void*)0);
            __dec_obj133=litem_185->item;
            litem_185->item=(char*)come_increment_ref_count(item);
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_185;
            self->tail=litem_185;
        }
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_206;
unsigned int it_207;
_Bool same_key_exist_224;
char* it2_227;
struct map$2charphsFunph* __result140__;
    if(self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_206=string_get_hash_key(key)%self->size;
    it_207=hash_206;
    while((_Bool)1) {
        if(self->item_existance[it_207]) {
            if(string_equals(self->keys[it_207],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_207]);
                    self->keys[it_207] = come_decrement_ref_count2(self->keys[it_207], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_207]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_207]);
                    self->keys[it_207]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_207],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_207]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_207]=item;
                }
                break;
            }
            it_207++;
            if(it_207>=self->size) {
                it_207=0;
            }
            else {
                if(it_207==hash_206) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_207]=(_Bool)1;
            if(1) {
                self->keys[it_207]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_207]=key;
            }
            if(1) {
                self->items[it_207]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_207]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_224=(_Bool)0;
    for(    it2_227=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_227=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_227,key)) {
            same_key_exist_224=(_Bool)1;
        }
    }
    if(!same_key_exist_224) {
        list$1charp_push_back(self->key_list,key);
    }
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_189;
void* __right_value245 = (void*)0;
char** keys_190;
void* __right_value246 = (void*)0;
struct sFun** items_191;
void* __right_value247 = (void*)0;
_Bool* item_existance_192;
int len_193;
char* it_196;
struct sFun* default_value_199;
struct sFun* it2_200;
unsigned int hash_203;
int n_204;
struct sFun* default_value_205;
default_value_199 = (void*)0;
default_value_205 = (void*)0;
    size_189=self->size*10;
    keys_190=(char**)come_increment_ref_count(((char**)(__right_value245=(char**)come_calloc(1, sizeof(char*)*(1*(size_189)), "/usr/local/include/comelang.h", 1620, "char*%"))));
    items_191=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value246=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_189)), "/usr/local/include/comelang.h", 1621, "sFun*%"))));
    item_existance_192=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value247=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_189)), "/usr/local/include/comelang.h", 1622, "bool"))));
    len_193=0;
    for(    it_196=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_196=map$2charphsFunph_next(self)    ){
        memset(&default_value_199,0,sizeof(struct sFun*));
        it2_200=map$2charphsFunph_at(self,it_196,default_value_199);
        hash_203=string_get_hash_key(it_196)%size_189;
        n_204=hash_203;
        while((_Bool)1) {
            if(item_existance_192[n_204]) {
                n_204++;
                if(n_204>=size_189) {
                    n_204=0;
                }
                else {
                    if(n_204==hash_203) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_192[n_204]=(_Bool)1;
                keys_190[n_204]=it_196;
                items_191[n_204]=map$2charphsFunph_at(self,it_196,default_value_205);
                len_193++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_190;
    self->items=items_191;
    self->item_existance=item_existance_192;
    self->size=size_189;
    self->len=len_193;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_194;
char* __result120__;
char* __result121__;
char* result_195;
char* __result122__;
result_194 = (void*)0;
result_195 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_194,0,sizeof(char*));
        __result120__ = gComeFunResultObject = __result_obj__ = result_194;
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result121__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    memset(&result_195,0,sizeof(char*));
    __result122__ = gComeFunResultObject = __result_obj__ = result_195;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_197;
char* __result123__;
char* __result124__;
char* result_198;
char* __result125__;
result_197 = (void*)0;
result_198 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_197,0,sizeof(char*));
        __result123__ = gComeFunResultObject = __result_obj__ = result_197;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result124__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    memset(&result_198,0,sizeof(char*));
    __result125__ = gComeFunResultObject = __result_obj__ = result_198;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_201;
unsigned int it_202;
struct sFun* __result126__;
struct sFun* __result127__;
struct sFun* __result128__;
struct sFun* __result129__;
    hash_201=string_get_hash_key(((char*)key))%self->size;
    it_202=hash_201;
    while((_Bool)1) {
        if(self->item_existance[it_202]) {
            if(string_equals(self->keys[it_202],key)) {
                __result126__ = gComeFunResultObject = __result_obj__ = self->items[it_202];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result126__;
            }
            it_202++;
            if(it_202>=self->size) {
                it_202=0;
            }
            else {
                if(it_202==hash_201) {
                    __result127__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result127__;
                }
            }
        }
        else {
            __result128__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result128__;
        }
    }
    __result129__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_208;
struct list_item$1charp* it_209;
struct list$1charp* __result133__;
    it2_208=0;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        if(charp_equals(it_209->item,item)) {
            list$1charp_delete(self,it2_208,it2_208+1);
            break;
        }
        it2_208++;
        it_209=it_209->next;
    }
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_210;
struct list$1charp* __result130__;
struct list_item$1charp* it_213;
int i_214;
struct list_item$1charp* prev_it_215;
struct list_item$1charp* it_216;
int i_217;
struct list_item$1charp* prev_it_218;
struct list_item$1charp* it_219;
struct list_item$1charp* head_prev_it_220;
struct list_item$1charp* tail_it_221;
int i_222;
struct list_item$1charp* prev_it_223;
struct list$1charp* __result132__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_210=tail;
        tail=head;
        head=tmp_210;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result130__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_213=self->head;
            i_214=0;
            while(it_213!=((void*)0)) {
                if(i_214<tail) {
                    prev_it_215=it_213;
                    it_213=it_213->next;
                    i_214++;
                    /*i*/come_call_finalizer3(prev_it_215,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_214==tail) {
                        self->head=it_213;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_213=it_213->next;
                        i_214++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_216=self->head;
                i_217=0;
                while(it_216!=((void*)0)) {
                    if(i_217==head) {
                        self->tail=it_216->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_217>=head) {
                        prev_it_218=it_216;
                        it_216=it_216->next;
                        i_217++;
                        /*i*/come_call_finalizer3(prev_it_218,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_216=it_216->next;
                        i_217++;
                    }
                }
            }
            else {
                it_219=self->head;
                head_prev_it_220=((void*)0);
                tail_it_221=((void*)0);
                i_222=0;
                while(it_219!=((void*)0)) {
                    if(i_222==head) {
                        head_prev_it_220=it_219->prev;
                    }
                    if(i_222==tail) {
                        tail_it_221=it_219;
                    }
                    if(i_222>=head&&i_222<tail) {
                        prev_it_223=it_219;
                        it_219=it_219->next;
                        i_222++;
                        /*i*/come_call_finalizer3(prev_it_223,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_219=it_219->next;
                        i_222++;
                    }
                }
                if(head_prev_it_220!=((void*)0)) {
                    head_prev_it_220->next=tail_it_221;
                }
                if(tail_it_221!=((void*)0)) {
                    tail_it_221->prev=head_prev_it_220;
                }
            }
        }
    }
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_211;
struct list_item$1charp* prev_it_212;
struct list$1charp* __result131__;
    it_211=self->head;
    while(it_211!=((void*)0)) {
        prev_it_212=it_211;
        it_211=it_211->next;
        /*i*/come_call_finalizer3(prev_it_212,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_225;
char* __result134__;
char* __result135__;
char* result_226;
char* __result136__;
result_225 = (void*)0;
result_226 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_225,0,sizeof(char*));
        __result134__ = gComeFunResultObject = __result_obj__ = result_225;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    self->it=self->head;
    if(self->it) {
        __result135__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    memset(&result_226,0,sizeof(char*));
    __result136__ = gComeFunResultObject = __result_obj__ = result_226;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_228;
char* __result137__;
char* __result138__;
char* result_229;
char* __result139__;
result_228 = (void*)0;
result_229 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_228,0,sizeof(char*));
        __result137__ = gComeFunResultObject = __result_obj__ = result_228;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result138__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    memset(&result_229,0,sizeof(char*));
    __result139__ = gComeFunResultObject = __result_obj__ = result_229;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_320;
_Bool is_type_name_flag_321;
int sline_322;
_Bool define_struct_nobody_323;
char* p_324;
int sline_325;
void* __right_value507 = (void*)0;
char* word_326;
_Bool define_function_pointer_result_function_327;
_Bool define_variable_between_brace_328;
char* p_329;
void* __right_value508 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_330;
char* fun_name_331;
_Bool err_332;
void* __right_value509 = (void*)0;
char* word_333;
_Bool define_function_flag_334;
char* p_335;
void* __right_value510 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_336;
char* fun_name_337;
_Bool err_338;
char* word_339;
void* __right_value511 = (void*)0;
char* __dec_obj136;
void* __right_value512 = (void*)0;
char* __dec_obj137;
char* __dec_obj138;
void* __right_value513 = (void*)0;
char* __dec_obj139;
_Bool define_variable_340;
char* p_341;
void* __right_value514 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_342;
char* fun_name_343;
_Bool err_344;
void* __right_value515 = (void*)0;
char* word_345;
void* __right_value516 = (void*)0;
char* word_346;
char* p_347;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* word_348;
void* __right_value519 = (void*)0;
char* __dec_obj140;
void* __right_value520 = (void*)0;
char* word_349;
void* __right_value521 = (void*)0;
char* word_352;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* node_353;
struct sNode* __result142__;
void* __right_value524 = (void*)0;
struct sNode* __result143__;
char* header_head_354;
void* __right_value525 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_355;
char* fun_name_356;
_Bool err_357;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1sTypeph* param_types_358;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1charph* param_names_359;
void* __right_value530 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_360;
char* param_name_361;
_Bool err_362;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1sTypeph* param_types2_364;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1charph* param_names2_365;
void* __right_value537 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_366;
char* param_name_367;
_Bool err_368;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
char* header_tail_370;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* result_type2_371;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct tuple1$1sTypeph* __dec_obj142;
void* __right_value544 = (void*)0;
struct list$1sTypeph* __dec_obj143;
void* __right_value545 = (void*)0;
struct list$1charph* __dec_obj144;
_Bool var_args_372;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* header_buf_373;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1charph* param_default_parametors_374;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sFun* fun_375;
void* __right_value555 = (void*)0;
struct sFun* fun2_379;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value593 = (void*)0;
struct sNode* __result172__;
void* __right_value594 = (void*)0;
struct sNode* node_414;
struct sNode* __result173__;
void* __right_value595 = (void*)0;
struct sNode* node_415;
char* source_tail_416;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct buffer* header_417;
struct sNode* __result174__;
void* __right_value598 = (void*)0;
char* buf2_418;
void* __right_value599 = (void*)0;
struct sNode* __result175__;
    source_head_320=info->p;
    is_type_name_flag_321=is_type_name(buf,info);
    sline_322=info->sline;
    define_struct_nobody_323=(_Bool)0;
    {
        p_324=info->p;
        sline_325=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_326=(char*)come_increment_ref_count(parse_word(info));
                if(*info->p==59) {
                    define_struct_nobody_323=(_Bool)1;
                }
                word_326 = come_decrement_ref_count2(word_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_325;
    }
    define_function_pointer_result_function_327=(_Bool)0;
    define_variable_between_brace_328=(_Bool)0;
    if(is_type_name_flag_321) {
        p_329=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value508=backtrace_parse_type((_Bool)0,info)));
            result_type_330=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_331=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_332=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value508,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_327=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_333=(char*)come_increment_ref_count(parse_word(info));
                        if(!is_type_name(word_333,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_328=(_Bool)1;
                            }
                        }
                        word_333 = come_decrement_ref_count2(word_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_331 = come_decrement_ref_count2(fun_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_322;
    }
    define_function_flag_334=(_Bool)0;
    if(is_type_name_flag_321&&!define_function_pointer_result_function_327&&charp_operator_not_equals(buf,"__typeof__")) {
        p_335=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value510=backtrace_parse_type((_Bool)0,info)));
            result_type_336=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_337=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_338=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value510,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_337 = come_decrement_ref_count2(fun_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_339=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj136=word_339;
                word_339=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(string_operator_equals(word_339,"extern")) {
                    __dec_obj137=word_339;
                    word_339=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj138=word_339;
                word_339=((void*)0);
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_339) {
                if(is_type_name(word_339,info)) {
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
                        __dec_obj139=word_339;
                        word_339=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(strlen(word_339)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_321) {
                        define_function_flag_334=(_Bool)1;
                    }
                }
            }
            word_339 = come_decrement_ref_count2(word_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_335;
        info->sline=sline_322;
    }
    define_variable_340=(_Bool)1;
    if(is_type_name_flag_321&&!define_function_pointer_result_function_327) {
        p_341=info->p;
        info->p=head;
        if(!is_type_name_flag_321) {
            define_variable_340=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value514=backtrace_parse_type((_Bool)0,info)));
            result_type_342=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_343=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_344=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value514,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_345=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_340=(_Bool)1;
                            }
                        }
                        word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_346=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_346,info)&&*info->p!=40) {
                                define_variable_340=(_Bool)1;
                            }
                        }
                        word_346 = come_decrement_ref_count2(word_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_343 = come_decrement_ref_count2(fun_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_340=(_Bool)0;
        }
        else {
            if(define_variable_340) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_340=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_340=(_Bool)0;
                }
            }
        }
        info->p=p_341;
        info->sline=sline_322;
    }
    else {
        define_variable_340=(_Bool)0;
    }
    {
        p_347=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value517=parse_word(info)));
                __right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_348=(char*)come_increment_ref_count(parse_word(info));
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj140=word_348;
                        word_348=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(string_operator_equals(word_348,"extends")) {
                            define_variable_340=(_Bool)0;
                        }
                    }
                    word_348 = come_decrement_ref_count2(word_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_340=(_Bool)0;
        }
        else {
            if(define_variable_340) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_340=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_340=(_Bool)0;
                }
            }
        }
        info->p=p_347;
        info->sline=sline_322;
    }
    if(charp_operator_equals(buf,"template")) {
        word_349=(char*)come_increment_ref_count(parse_word(info));
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
                            word_352=(char*)come_increment_ref_count(parse_word(info));
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_352)));
                            word_352 = come_decrement_ref_count2(word_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_353=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result142__ = gComeFunResultObject = __result_obj__ = node_353;
            if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_349 = come_decrement_ref_count2(word_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result142__;
            if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_349 = come_decrement_ref_count2(word_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_323) {
        }
        else {
            if(define_variable_between_brace_328) {
                info->p=head;
                info->sline=sline_322;
                __result143__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value524=parse_global_variable(info)));
                if(__right_value524) { __right_value524 = come_decrement_ref_count2(__right_value524, ((struct sNode*)__right_value524)->finalize, ((struct sNode*)__right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result143__;
            }
            else {
                if(define_function_pointer_result_function_327) {
                    header_head_354=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value525=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_355=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_356=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_357=multiple_assign_var4->v3;
                    /*g*/come_call_finalizer3(__right_value525,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_358=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1241, "list$1sTypeph"))));
                        param_names_359=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1242, "list$1charph"))));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value530=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_360=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_361=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_362=multiple_assign_var5->v3;
                                /*g*/come_call_finalizer3(__right_value530,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_362) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_358,(struct sType*)come_increment_ref_count(param_type_360));
                                static int num_function_pointer_result_var_name_a_363=0;
                                list$1charph_push_back(param_names_359,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_363)));
                                if(xisalpha(*info->p)||*info->p==95) {
                                    (void)((char*)(__right_value532=parse_word(info)));
                                    __right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        /*i*/come_call_finalizer3(param_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_361 = come_decrement_ref_count2(param_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                                        exit(2);
                                    }
                                }
                                /*i*/come_call_finalizer3(param_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_361 = come_decrement_ref_count2(param_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_364=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1288, "list$1sTypeph"))));
                            param_names2_365=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1289, "list$1charph"))));
                            if(*info->p==41) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while((_Bool)1) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value537=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_366=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_367=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_368=multiple_assign_var6->v3;
                                    /*g*/come_call_finalizer3(__right_value537,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_368) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_364,(struct sType*)come_increment_ref_count(param_type_366));
                                    static int num_function_pointer_result_var_name_b_369=0;
                                    list$1charph_push_back(param_names2_365,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_369)));
                                    if(xisalpha(*info->p)||*info->p==95) {
                                        (void)((char*)(__right_value539=parse_word(info)));
                                        __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            /*i*/come_call_finalizer3(param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_367 = come_decrement_ref_count2(param_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or ) (2)");
                                            exit(2);
                                        }
                                    }
                                    /*i*/come_call_finalizer3(param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_367 = come_decrement_ref_count2(param_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_370=info->p;
                            result_type2_371=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1331, "sType")),"lambda",(_Bool)0,info));
                            __dec_obj142=result_type2_371->mResultType;
                            result_type2_371->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1333, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_355)));
                            /* a*/come_call_finalizer3(__dec_obj142,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj143=result_type2_371->mParamTypes;
                            result_type2_371->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_364));
                            /* a*/come_call_finalizer3(__dec_obj143,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj144=result_type2_371->mParamNames;
                            result_type2_371->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_365));
                            /* a*/come_call_finalizer3(__dec_obj144,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            result_type2_371->mVarArgs=(_Bool)0;
                            result_type2_371->mStatic=(_Bool)0;
                            var_args_372=(_Bool)0;
                            header_buf_373=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1341, "buffer"))));
                            buffer_append(header_buf_373,header_head_354,header_tail_370-header_head_354);
                            buffer_append_char(header_buf_373,0);
                            param_default_parametors_374=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1345, "list$1charph"))));
                            fun_375=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1347, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_356)),(struct sType*)come_increment_ref_count(result_type2_371),(struct list$1sTypeph*)come_increment_ref_count(param_types_358),(struct list$1charph*)come_increment_ref_count(param_names_359),(struct list$1charph*)come_increment_ref_count(param_default_parametors_374),(_Bool)1,var_args_372,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_373)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_379=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value555=__builtin_string(fun_name_356))));
                            __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_379==((void*)0)||fun2_379->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_356)),(struct sFun*)come_increment_ref_count(fun_375));
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1359, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value558=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1359, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_375),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result172__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value593=_inf_value2));
                            /*i*/come_call_finalizer3(param_types2_364,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names2_365,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_373,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_374,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_375,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_359,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_356 = come_decrement_ref_count2(fun_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value558,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value593) { __right_value593 = come_decrement_ref_count2(__right_value593, ((struct sNode*)__right_value593)->finalize, ((struct sNode*)__right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result172__;
                            /*i*/come_call_finalizer3(param_types2_364,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names2_365,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_373,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_374,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_375,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_names_359,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(result_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_356 = come_decrement_ref_count2(fun_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_334) {
                        info->p=head;
                        info->sline=sline_322;
                        node_414=(struct sNode*)come_increment_ref_count(parse_function(info));
                        __result173__ = gComeFunResultObject = __result_obj__ = node_414;
                        if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        gComeFunResultObject = (void*)0;
                        return __result173__;
                        if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(define_variable_340) {
                            info->p=head;
                            info->sline=sline_322;
                            node_415=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
                            source_tail_416=info->p;
                            header_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1383, "buffer"))));
                            buffer_append(header_417,source_head_320,source_tail_416-source_head_320);
                            __result174__ = gComeFunResultObject = __result_obj__ = node_415;
                            if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(header_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            gComeFunResultObject = (void*)0;
                            return __result174__;
                            if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(header_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_322;
    buf2_418=(char*)come_increment_ref_count(parse_word(info));
    __result175__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value599=top_level_v98(buf2_418,head,head_sline,info)));
    buf2_418 = come_decrement_ref_count2(buf2_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value599) { __right_value599 = come_decrement_ref_count2(__right_value599, ((struct sNode*)__right_value599)->finalize, ((struct sNode*)__right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result175__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj134;
char* __dec_obj135;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj134=self->v1;
            /* a*/come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj135=self->v2;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_350;
struct list_item$1charph* prev_it_351;
struct list$1charph* __result141__;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        /*i*/come_call_finalizer3(prev_it_351,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result141__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj141;
struct tuple1$1sTypeph* __result144__;
    __dec_obj141=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_376;
unsigned int hash_377;
unsigned int it_378;
struct sFun* __result145__;
struct sFun* __result146__;
struct sFun* __result147__;
struct sFun* __result148__;
default_value_376 = (void*)0;
    memset(&default_value_376,0,sizeof(struct sFun*));
    hash_377=string_get_hash_key(((char*)key))%self->size;
    it_378=hash_377;
    while((_Bool)1) {
        if(self->item_existance[it_378]) {
            if(string_equals(self->keys[it_378],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_378];
                /*i*/come_call_finalizer3(default_value_376,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_378++;
            if(it_378>=self->size) {
                it_378=0;
            }
            else {
                if(it_378==hash_377) {
                    __result146__ = gComeFunResultObject = __result_obj__ = default_value_376;
                    /*i*/come_call_finalizer3(default_value_376,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result146__;
                }
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value_376;
            /*i*/come_call_finalizer3(default_value_376,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value_376;
    /*i*/come_call_finalizer3(default_value_376,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result150__;
void* __right_value561 = (void*)0;
struct sFun* result_381;
void* __right_value562 = (void*)0;
char* __dec_obj148;
void* __right_value563 = (void*)0;
struct sType* __dec_obj149;
void* __right_value564 = (void*)0;
struct list$1sTypeph* __dec_obj150;
void* __right_value565 = (void*)0;
struct list$1charph* __dec_obj151;
void* __right_value566 = (void*)0;
struct list$1charph* __dec_obj152;
void* __right_value567 = (void*)0;
struct sType* __dec_obj153;
void* __right_value585 = (void*)0;
struct sBlock* __dec_obj163;
void* __right_value586 = (void*)0;
struct buffer* __dec_obj164;
void* __right_value587 = (void*)0;
struct buffer* __dec_obj165;
void* __right_value588 = (void*)0;
struct buffer* __dec_obj166;
void* __right_value589 = (void*)0;
struct buffer* __dec_obj167;
void* __right_value590 = (void*)0;
char* __dec_obj168;
void* __right_value591 = (void*)0;
char* __dec_obj169;
struct sFun* __result170__;
    if(self==(void*)0) {
        __result150__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    result_381=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj148=result_381->mName;
        result_381->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj149=result_381->mResultType;
        result_381->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj150=result_381->mParamTypes;
        result_381->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj150,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj151=result_381->mParamNames;
        result_381->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj151,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj152=result_381->mParamDefaultParametors;
        result_381->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        /* a*/come_call_finalizer3(__dec_obj152,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj153=result_381->mLambdaType;
        result_381->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /* a*/come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj163=result_381->mBlock;
        result_381->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /* a*/come_call_finalizer3(__dec_obj163,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_381->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result_381->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj164=result_381->mSource;
        result_381->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /* a*/come_call_finalizer3(__dec_obj164,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj165=result_381->mSourceHead;
        result_381->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /* a*/come_call_finalizer3(__dec_obj165,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj166=result_381->mSourceHead2;
        result_381->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /* a*/come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj167=result_381->mSourceDefer;
        result_381->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /* a*/come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_381->mStatic=self->mStatic;
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj168=result_381->mComeHeader;
        result_381->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_381->mCloner=self->mCloner;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj169=result_381->mDeclareSName;
        result_381->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_381->mNoResultType=self->mNoResultType;
    }
    if(self!=((void*)0)) {
        result_381->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result170__ = gComeFunResultObject = __result_obj__ = result_381;
    /*i*/come_call_finalizer3(result_381,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result151__;
void* __right_value568 = (void*)0;
struct sBlock* result_382;
void* __right_value569 = (void*)0;
struct list$1sNodeph* __dec_obj154;
void* __right_value584 = (void*)0;
struct sVarTable* __dec_obj162;
struct sBlock* __result169__;
    if(self==(void*)0) {
        __result151__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    result_382=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj154=result_382->mNodes;
        result_382->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        /* a*/come_call_finalizer3(__dec_obj154,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj162=result_382->mVarTable;
        result_382->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /* a*/come_call_finalizer3(__dec_obj162,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result169__ = gComeFunResultObject = __result_obj__ = result_382;
    /*i*/come_call_finalizer3(result_382,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result152__;
void* __right_value570 = (void*)0;
struct sVarTable* result_383;
void* __right_value583 = (void*)0;
struct map$2charphsVarph* __dec_obj161;
struct sVarTable* __result168__;
    if(self==(void*)0) {
        __result152__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    result_383=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj161=result_383->mVars;
        result_383->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        /* a*/come_call_finalizer3(__dec_obj161,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_383->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result_383->mParent=self->mParent;
    }
    if(self!=((void*)0)) {
        result_383->mID=self->mID;
    }
    __result168__ = gComeFunResultObject = __result_obj__ = result_383;
    /*i*/come_call_finalizer3(result_383,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result153__;
void* __right_value571 = (void*)0;
void* __right_value577 = (void*)0;
struct map$2charphsVarph* result_387;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1charp* __dec_obj160;
char* it_390;
struct sVar* default_value_393;
struct sVar* it2_396;
struct map$2charphsVarph* __result167__;
default_value_393 = (void*)0;
    if(self==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    result_387=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1463, "map$2charphsVarph"))));
    __dec_obj160=result_387->key_list;
    result_387->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1465, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj160,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_390=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_390=map$2charphsVarph_next(self)    ){
        memset(&default_value_393,0,sizeof(struct sVar*));
        it2_396=map$2charphsVarph_at(self,it_390,default_value_393);
        map$2charphsVarph_put(result_387,it_390,it2_396);
    }
    __result167__ = gComeFunResultObject = __result_obj__ = result_387;
    /*i*/come_call_finalizer3(result_387,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
int i_384;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1charp* __dec_obj155;
struct map$2charphsVarph* __result155__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value572=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1369, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value573=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value574=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1371, "bool"))));
    for(    i_384=0;    i_384<128;    i_384++    ){
        self->item_existance[i_384]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj155=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1381, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj155,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result154__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_385;
int i_386;
    for(    i_385=0;    i_385<self->size;    i_385++    ){
        if(self->item_existance[i_385]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_385],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_386=0;    i_386<self->size;    i_386++    ){
        if(self->item_existance[i_386]) {
            if(1) {
                self->keys[i_386] = come_decrement_ref_count2(self->keys[i_386], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj156;
char* __dec_obj157;
struct sType* __dec_obj158;
char* __dec_obj159;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj156=self->mName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj157=self->mCValueName;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj158=self->mType;
            /* a*/come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj159=self->mFunName;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_388;
char* __result156__;
char* __result157__;
char* result_389;
char* __result158__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_388,0,sizeof(char*));
        __result156__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result157__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    memset(&result_389,0,sizeof(char*));
    __result158__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_391;
char* __result159__;
char* __result160__;
char* result_392;
char* __result161__;
result_391 = (void*)0;
result_392 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_391,0,sizeof(char*));
        __result159__ = gComeFunResultObject = __result_obj__ = result_391;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result160__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    memset(&result_392,0,sizeof(char*));
    __result161__ = gComeFunResultObject = __result_obj__ = result_392;
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_394;
unsigned int it_395;
struct sVar* __result162__;
struct sVar* __result163__;
struct sVar* __result164__;
struct sVar* __result165__;
    hash_394=string_get_hash_key(((char*)key))%self->size;
    it_395=hash_394;
    while((_Bool)1) {
        if(self->item_existance[it_395]) {
            if(string_equals(self->keys[it_395],key)) {
                __result162__ = gComeFunResultObject = __result_obj__ = self->items[it_395];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result162__;
            }
            it_395++;
            if(it_395>=self->size) {
                it_395=0;
            }
            else {
                if(it_395==hash_394) {
                    __result163__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result163__;
                }
            }
        }
        else {
            __result164__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result164__;
        }
    }
    __result165__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_408;
int it_409;
_Bool same_key_exist_410;
char* it2_411;
struct map$2charphsVarph* __result166__;
    if(self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_408=string_get_hash_key(key)%self->size;
    it_409=hash_408;
    while((_Bool)1) {
        if(self->item_existance[it_409]) {
            if(string_equals(self->keys[it_409],key)) {
                if(1) {
                    self->keys[it_409] = come_decrement_ref_count2(self->keys[it_409], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_409]);
                    self->keys[it_409]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_409]);
                    self->keys[it_409]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_409],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_409]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_409]=item;
                }
                break;
            }
            it_409++;
            if(it_409>=self->size) {
                it_409=0;
            }
            else {
                if(it_409==hash_408) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_409]=(_Bool)1;
            if(1) {
                self->keys[it_409]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_409]=key;
            }
            if(1) {
                self->items[it_409]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_409]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_410=(_Bool)0;
    for(    it2_411=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_411=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_411,key)) {
            same_key_exist_410=(_Bool)1;
        }
    }
    if(!same_key_exist_410) {
        list$1charp_push_back(self->key_list,key);
    }
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_397;
void* __right_value580 = (void*)0;
char** keys_398;
void* __right_value581 = (void*)0;
struct sVar** items_399;
void* __right_value582 = (void*)0;
_Bool* item_existance_400;
int len_401;
char* it_402;
struct sVar* default_value_403;
struct sVar* it2_404;
unsigned int hash_405;
int n_406;
struct sVar* default_value_407;
default_value_403 = (void*)0;
default_value_407 = (void*)0;
    size_397=self->size*10;
    keys_398=(char**)come_increment_ref_count(((char**)(__right_value580=(char**)come_calloc(1, sizeof(char*)*(1*(size_397)), "/usr/local/include/comelang.h", 1620, "char*%"))));
    items_399=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value581=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_397)), "/usr/local/include/comelang.h", 1621, "sVar*%"))));
    item_existance_400=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value582=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_397)), "/usr/local/include/comelang.h", 1622, "bool"))));
    len_401=0;
    for(    it_402=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_402=map$2charphsVarph_next(self)    ){
        memset(&default_value_403,0,sizeof(struct sVar*));
        it2_404=map$2charphsVarph_at(self,it_402,default_value_403);
        hash_405=string_get_hash_key(it_402)%size_397;
        n_406=hash_405;
        while((_Bool)1) {
            if(item_existance_400[n_406]) {
                n_406++;
                if(n_406>=size_397) {
                    n_406=0;
                }
                else {
                    if(n_406==hash_405) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_400[n_406]=(_Bool)1;
                keys_398[n_406]=it_402;
                items_399[n_406]=map$2charphsVarph_at(self,it_402,default_value_407);
                len_401++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_398;
    self->items=items_399;
    self->item_existance=item_existance_400;
    self->size=size_397;
    self->len=len_401;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_412;
int i_413;
    for(    i_412=0;    i_412<self->size;    i_412++    ){
        if(self->item_existance[i_412]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_412],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_413=0;    i_413<self->size;    i_413++    ){
        if(self->item_existance[i_413]) {
            if(1) {
                self->keys[i_413] = come_decrement_ref_count2(self->keys[i_413], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_419;
struct sType* type_427;
struct sClass* generics_class_431;
void* __right_value600 = (void*)0;
_Bool generics_type_name_432;
void* __right_value601 = (void*)0;
_Bool mgenerics_type_name_434;
    klass_419=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_427=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_431=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_432=list$1charph_contained(info->generics_type_names,((char*)(__right_value600=__builtin_string(buf))));
    __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_434=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value601=__builtin_string(buf))));
    __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(gComeC) {
        return (type_427&&type_427->mTypedef)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||(klass_419&&klass_419->mNumber)||(klass_419&&klass_419->mFloat)||charp_operator_equals(buf,"void")||charp_operator_equals(buf,"_Nullable");
    }
    else {
        return generics_class_431||generics_type_name_432||mgenerics_type_name_434||klass_419||type_427||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable");
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_420;
unsigned int hash_421;
unsigned int it_422;
struct sClass* __result176__;
struct sClass* __result177__;
struct sClass* __result178__;
struct sClass* __result179__;
default_value_420 = (void*)0;
    memset(&default_value_420,0,sizeof(struct sClass*));
    hash_421=string_get_hash_key(((char*)key))%self->size;
    it_422=hash_421;
    while((_Bool)1) {
        if(self->item_existance[it_422]) {
            if(string_equals(self->keys[it_422],key)) {
                __result176__ = gComeFunResultObject = __result_obj__ = self->items[it_422];
                /*i*/come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result176__;
            }
            it_422++;
            if(it_422>=self->size) {
                it_422=0;
            }
            else {
                if(it_422==hash_421) {
                    __result177__ = gComeFunResultObject = __result_obj__ = default_value_420;
                    /*i*/come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result177__;
                }
            }
        }
        else {
            __result178__ = gComeFunResultObject = __result_obj__ = default_value_420;
            /*i*/come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result178__;
        }
    }
    __result179__ = gComeFunResultObject = __result_obj__ = default_value_420;
    /*i*/come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj171;
struct list$1tuple2$2charphsTypephph* __dec_obj172;
char* __dec_obj176;
char* __dec_obj177;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj171=self->mName;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj172=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj172,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj176=self->mDeclareSName;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj177=self->mParentClassName;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_423;
struct list_item$1tuple2$2charphsTypephph* prev_it_424;
    it_423=self->head;
    while(it_423!=((void*)0)) {
        prev_it_424=it_423;
        it_423=it_423->next;
        /*i*/come_call_finalizer3(prev_it_424,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj173;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj173=self->item;
            /* a*/come_call_finalizer3(__dec_obj173,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj174;
struct sType* __dec_obj175;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj174=self->v1;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj175=self->v2;
            /* a*/come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_425;
struct list_item$1tuple2$2charphsTypephph* prev_it_426;
    it_425=self->head;
    while(it_425!=((void*)0)) {
        prev_it_426=it_425;
        it_425=it_425->next;
        /*i*/come_call_finalizer3(prev_it_426,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_428;
unsigned int hash_429;
unsigned int it_430;
struct sType* __result180__;
struct sType* __result181__;
struct sType* __result182__;
struct sType* __result183__;
default_value_428 = (void*)0;
    memset(&default_value_428,0,sizeof(struct sType*));
    hash_429=string_get_hash_key(((char*)key))%self->size;
    it_430=hash_429;
    while((_Bool)1) {
        if(self->item_existance[it_430]) {
            if(string_equals(self->keys[it_430],key)) {
                __result180__ = gComeFunResultObject = __result_obj__ = self->items[it_430];
                /*i*/come_call_finalizer3(default_value_428,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result180__;
            }
            it_430++;
            if(it_430>=self->size) {
                it_430=0;
            }
            else {
                if(it_430==hash_429) {
                    __result181__ = gComeFunResultObject = __result_obj__ = default_value_428;
                    /*i*/come_call_finalizer3(default_value_428,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result181__;
                }
            }
        }
        else {
            __result182__ = gComeFunResultObject = __result_obj__ = default_value_428;
            /*i*/come_call_finalizer3(default_value_428,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result182__;
        }
    }
    __result183__ = gComeFunResultObject = __result_obj__ = default_value_428;
    /*i*/come_call_finalizer3(default_value_428,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_433;
    for(    it_433=list$1charph_begin(self);    !list$1charph_end(self);    it_433=list$1charph_next(self)    ){
        if(string_operator_equals(it_433,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_435;
int caller_line_436;
char* caller_sname_437;
char* last_code_438;
char* __dec_obj178;
char* last_code2_439;
char* __dec_obj179;
char* last_code3_440;
char* __dec_obj180;
void* __right_value602 = (void*)0;
char* sname_top_441;
int sline_top_442;
struct sFun* funX_443;
_Bool __result184__;
void* __right_value603 = (void*)0;
struct sType* result_type_444;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct list$1sTypeph* param_types_445;
struct list$1sTypeph* o2_saved_446;
struct sType* it_449;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sType* param_type_452;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1charph* param_names_453;
void* __right_value610 = (void*)0;
struct list$1charph* param_default_parametors_454;
char* p_455;
int sline_456;
char* sname_457;
char* head_458;
struct buffer* source_459;
void* __right_value611 = (void*)0;
struct buffer* __dec_obj181;
struct sType* generics_type_saved_460;
void* __right_value612 = (void*)0;
struct sType* __dec_obj182;
struct list$1charph* method_generics_type_names_461;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1charph* __dec_obj183;
struct list$1charph* o2_saved_462;
char* it_463;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct list$1charph* __dec_obj184;
char* __dec_obj185;
void* __right_value617 = (void*)0;
struct sBlock* block_464;
struct buffer* __dec_obj186;
char* __dec_obj187;
_Bool var_args_465;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sFun* fun_466;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value629 = (void*)0;
struct sNode* node_467;
_Bool in_generics_fun_469;
_Bool __result193__;
struct sType* __dec_obj192;
struct list$1charph* __dec_obj193;
void* __right_value630 = (void*)0;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
_Bool __result194__;
    caller_fun_435=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_436=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_437=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_438=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj178=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_439=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj179=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_440=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj180=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_441=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_442=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_443=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_443) {
        __result184__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_438 = come_decrement_ref_count2(last_code_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_439 = come_decrement_ref_count2(last_code2_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_440 = come_decrement_ref_count2(last_code3_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_441 = come_decrement_ref_count2(sname_top_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result184__;
    }
    result_type_444=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_445=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1444, "list$1sTypeph"))));
    for(    o2_saved_446=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_449=list$1sTypeph_begin((o2_saved_446));    !list$1sTypeph_end((o2_saved_446));    it_449=list$1sTypeph_next((o2_saved_446))    ){
        param_type_452=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value606=sType_clone(it_449))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_452->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_445,(struct sType*)come_increment_ref_count(sType_clone(param_type_452)));
        /*i*/come_call_finalizer3(param_type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_453=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_454=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_455=info->p;
    sline_456=info->sline;
    sname_457=(char*)come_increment_ref_count(info->sname);
    head_458=info->head;
    source_459=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj181=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_460=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj182=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /* a*/come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_461=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj183=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1471, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj183,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_462=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_463=list$1charph_begin((o2_saved_462));    !list$1charph_end((o2_saved_462));    it_463=list$1charph_next((o2_saved_462))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_463)));
    }
    /*i*/come_call_finalizer3(o2_saved_462,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj184=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj184,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj185=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_464=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
    info->head=head_458;
    __dec_obj186=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_459);
    /* a*/come_call_finalizer3(__dec_obj186,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_455;
    info->sline=sline_456;
    __dec_obj187=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_457);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_444->mInline=(_Bool)0;
    var_args_465=generics_fun->mVarArgs;
    fun_466=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1493, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_444),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_445)),(struct list$1charph*)come_increment_ref_count(param_names_453),(struct list$1charph*)come_increment_ref_count(param_default_parametors_454),(_Bool)0,var_args_465,(struct sBlock*)come_increment_ref_count(block_464),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_466));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1500, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value625=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1500, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_466),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_467=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value625,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_469=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(!node_compile(node_467,info)) {
        __result193__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_438 = come_decrement_ref_count2(last_code_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_439 = come_decrement_ref_count2(last_code2_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_440 = come_decrement_ref_count2(last_code3_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_441 = come_decrement_ref_count2(sname_top_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_445,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_454,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_457 = come_decrement_ref_count2(sname_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_460,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_461,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_464,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_466,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_467) { node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result193__;
    }
    info->in_generics_fun=in_generics_fun_469;
    __dec_obj192=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_460);
    /* a*/come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj193=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_461);
    /* a*/come_call_finalizer3(__dec_obj193,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj194=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_441));
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_442;
    __dec_obj195=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_438);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_439);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_440);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_435;
    info->caller_line=caller_line_436;
    info->caller_sname=caller_sname_437;
    __result194__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_438 = come_decrement_ref_count2(last_code_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_439 = come_decrement_ref_count2(last_code2_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_440 = come_decrement_ref_count2(last_code3_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_441 = come_decrement_ref_count2(sname_top_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_445,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_454,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_457 = come_decrement_ref_count2(sname_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_461,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_464,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_466,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_467) { node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result194__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_447;
struct sType* __result185__;
struct sType* __result186__;
struct sType* result_448;
struct sType* __result187__;
result_447 = (void*)0;
result_448 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_447,0,sizeof(struct sType*));
        __result185__ = gComeFunResultObject = __result_obj__ = result_447;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    self->it=self->head;
    if(self->it) {
        __result186__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    memset(&result_448,0,sizeof(struct sType*));
    __result187__ = gComeFunResultObject = __result_obj__ = result_448;
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_450;
struct sType* __result188__;
struct sType* __result189__;
struct sType* result_451;
struct sType* __result190__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_450,0,sizeof(struct sType*));
        __result188__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result189__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    memset(&result_451,0,sizeof(struct sType*));
    __result190__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_470;
int caller_line_471;
char* caller_sname_472;
char* last_code_473;
char* __dec_obj198;
char* last_code2_474;
char* __dec_obj199;
char* last_code3_475;
char* __dec_obj200;
void* __right_value631 = (void*)0;
char* sname_top_476;
int sline_top_477;
struct sFun* funX_478;
_Bool __result195__;
void* __right_value632 = (void*)0;
struct sType* result_type_479;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1sTypeph* param_types_480;
struct list$1sTypeph* o2_saved_481;
struct sType* it_482;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sType* param_type_483;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1charph* param_names_484;
void* __right_value639 = (void*)0;
struct list$1charph* param_default_parametors_485;
char* p_486;
int sline_487;
char* sname_488;
char* head_489;
struct buffer* source_490;
void* __right_value640 = (void*)0;
struct buffer* __dec_obj201;
struct list$1charph* method_generics_type_names_491;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct list$1charph* __dec_obj202;
struct list$1charph* o2_saved_492;
char* it_493;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct list$1charph* __dec_obj203;
char* __dec_obj204;
void* __right_value645 = (void*)0;
struct sBlock* block_494;
struct buffer* __dec_obj205;
char* __dec_obj206;
_Bool var_args_495;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sFun* fun_496;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value657 = (void*)0;
struct sNode* node_497;
_Bool __result198__;
struct list$1charph* __dec_obj211;
void* __right_value658 = (void*)0;
char* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
_Bool __result199__;
    caller_fun_470=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_471=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_472=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_473=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj198=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_474=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj199=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_475=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj200=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_476=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_477=info->sline;
    funX_478=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_478) {
        __result195__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_473 = come_decrement_ref_count2(last_code_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_474 = come_decrement_ref_count2(last_code2_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_475 = come_decrement_ref_count2(last_code3_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_476 = come_decrement_ref_count2(sname_top_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result195__;
    }
    result_type_479=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_480=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1554, "list$1sTypeph"))));
    for(    o2_saved_481=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_482=list$1sTypeph_begin((o2_saved_481));    !list$1sTypeph_end((o2_saved_481));    it_482=list$1sTypeph_next((o2_saved_481))    ){
        param_type_483=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value635=sType_clone(it_482))),info));
        /*g*/come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_483->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_480,(struct sType*)come_increment_ref_count(sType_clone(param_type_483)));
        /*i*/come_call_finalizer3(param_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_481,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_484=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_485=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_486=info->p;
    sline_487=info->sline;
    sname_488=(char*)come_increment_ref_count(info->sname);
    head_489=info->head;
    source_490=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj201=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj201,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_491=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj202=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1578, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_492=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_493=list$1charph_begin((o2_saved_492));    !list$1charph_end((o2_saved_492));    it_493=list$1charph_next((o2_saved_492))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_493)));
    }
    /*i*/come_call_finalizer3(o2_saved_492,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj203=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj203,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj204=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_494=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
    info->head=head_489;
    __dec_obj205=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_490);
    /* a*/come_call_finalizer3(__dec_obj205,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_486;
    info->sline=sline_487;
    __dec_obj206=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_488);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_479->mInline=(_Bool)0;
    var_args_495=generics_fun->mVarArgs;
    fun_496=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1600, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_479),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_480)),(struct list$1charph*)come_increment_ref_count(param_names_484),(struct list$1charph*)come_increment_ref_count(param_default_parametors_485),(_Bool)0,var_args_495,(struct sBlock*)come_increment_ref_count(block_494),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_496));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1607, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value653=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1607, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_496),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_497=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value653,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(!node_compile(node_497,info)) {
        __result198__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_473 = come_decrement_ref_count2(last_code_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_474 = come_decrement_ref_count2(last_code2_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_475 = come_decrement_ref_count2(last_code3_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_476 = come_decrement_ref_count2(sname_top_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_480,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_484,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_488 = come_decrement_ref_count2(sname_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_491,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_494,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_496,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_497) { node_497 = come_decrement_ref_count2(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result198__;
    }
    __dec_obj211=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_491);
    /* a*/come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj212=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_476));
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_477;
    __dec_obj213=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_473);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_474);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj215=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_475);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_470;
    info->caller_line=caller_line_471;
    info->caller_sname=caller_sname_472;
    __result199__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_473 = come_decrement_ref_count2(last_code_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_474 = come_decrement_ref_count2(last_code2_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_475 = come_decrement_ref_count2(last_code3_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_476 = come_decrement_ref_count2(sname_top_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_480,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_484,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_488 = come_decrement_ref_count2(sname_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_491,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_494,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_496,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_497) { node_497 = come_decrement_ref_count2(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result199__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_499;
char* source_head_500;
struct sType* result_type_501;
char* var_name_502;
_Bool constructor__503;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* __dec_obj216;
void* __right_value661 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_504;
char* var_name2_505;
_Bool err_506;
struct sType* __dec_obj217;
char* __dec_obj218;
_Bool method_definition_507;
char* p_508;
int sline_509;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct buffer* buf2_510;
char* fun_name_511;
char* base_fun_name_512;
void* __right_value664 = (void*)0;
char* __dec_obj219;
void* __right_value665 = (void*)0;
char* __dec_obj220;
void* __right_value666 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_513;
char* name_514;
_Bool err_515;
void* __right_value667 = (void*)0;
char* __dec_obj221;
void* __right_value668 = (void*)0;
char* __dec_obj222;
void* __right_value669 = (void*)0;
char* __dec_obj223;
void* __right_value670 = (void*)0;
char* __dec_obj224;
void* __right_value671 = (void*)0;
char* __dec_obj225;
void* __right_value672 = (void*)0;
char* __dec_obj226;
void* __right_value673 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_516;
struct list$1charph* param_names_517;
struct list$1charph* param_default_parametors_518;
_Bool var_args_519;
char* header_tail_520;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct buffer* header_buf_521;
int version_522;
int n_523;
void* __right_value676 = (void*)0;
struct sBlock* block_524;
void* __right_value677 = (void*)0;
char* fun_name_526;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sFun* fun_527;
void* __right_value683 = (void*)0;
struct sFun* fun2_528;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value689 = (void*)0;
struct sNode* __result202__;
void* __right_value690 = (void*)0;
char* none_generics_name_530;
void* __right_value691 = (void*)0;
char* generics_sname_531;
int generics_sline_532;
void* __right_value692 = (void*)0;
char* block_533;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sGenericsFun* fun_534;
void* __right_value699 = (void*)0;
char* fun_name3_535;
void* __right_value703 = (void*)0;
struct sNode* __result214__;
void* __right_value704 = (void*)0;
char* generics_sname_557;
int generics_sline_558;
void* __right_value705 = (void*)0;
char* block_559;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sGenericsFun* fun_560;
void* __right_value712 = (void*)0;
char* fun_name3_561;
void* __right_value713 = (void*)0;
struct sNode* __result215__;
char* source_tail_562;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct buffer* header_563;
void* __right_value716 = (void*)0;
char* name_564;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
char* name_565;
void* __right_value719 = (void*)0;
int i_566;
struct sType* param_type_567;
char* param_name_571;
char* default_parametor_572;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
char* impl_name_573;
void* __right_value725 = (void*)0;
char* result_type_name_574;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
char* impl_name_575;
void* __right_value728 = (void*)0;
char* result_type_name_576;
void* __right_value729 = (void*)0;
int i_577;
struct sType* param_type_578;
char* param_name_579;
char* default_parametor_580;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sBlock* block_581;
_Bool static__582;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
char* new_fun_name_583;
void* __right_value738 = (void*)0;
char* __dec_obj232;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sFun* fun_584;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sFun* fun2_585;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value753 = (void*)0;
struct sNode* __result220__;
void* __right_value754 = (void*)0;
char* new_fun_name_587;
void* __right_value755 = (void*)0;
char* __dec_obj237;
_Bool result_type_static_588;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun_589;
void* __right_value761 = (void*)0;
struct sFun* fun2_590;
void* __right_value762 = (void*)0;
char* source_tail_591;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct buffer* header_592;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value771 = (void*)0;
struct sNode* __result223__;
void* __right_value772 = (void*)0;
char* asm_fun_594;
void* __right_value773 = (void*)0;
char* __dec_obj242;
_Bool result_type_static_595;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sFun* fun_596;
void* __right_value779 = (void*)0;
struct sFun* fun2_597;
void* __right_value780 = (void*)0;
char* source_tail_598;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct buffer* header_599;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value789 = (void*)0;
struct sNode* __result226__;
struct sNode* __result227__;
fun_name_511 = (void*)0;
    header_head_499=info->p;
    source_head_500=info->p;
    result_type_501=((void*)0);
    var_name_502=((void*)0);
    constructor__503=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value659=parse_word(info)));
        __right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj216=result_type_501;
        result_type_501=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /* a*/come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_501->mHeap=(_Bool)1;
        constructor__503=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value661=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_504=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_505=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_506=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value661,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj217=result_type_501;
        result_type_501=(struct sType*)come_increment_ref_count(result_type2_504);
        /* a*/come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj218=var_name_502;
        var_name_502=(char*)come_increment_ref_count(var_name2_505);
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_506) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_504,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_505 = come_decrement_ref_count2(var_name2_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_507=(_Bool)0;
    {
        p_508=info->p;
        sline_509=info->sline;
        buf2_510=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1671, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_510,*info->p);
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
        if(buffer_length(buf2_510)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_507=(_Bool)1;
        }
        info->p=p_508;
        info->sline=sline_509;
        /*i*/come_call_finalizer3(buf2_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_512=((void*)0);
    if(constructor__503) {
        __dec_obj219=base_fun_name_512;
        base_fun_name_512=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj220=fun_name_511;
        fun_name_511=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_512,info,(_Bool)1));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        if(method_definition_507) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value666=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_513=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_514=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_515=multiple_assign_var8->v3;
            /*g*/come_call_finalizer3(__right_value666,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_515) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            __dec_obj221=base_fun_name_512;
            base_fun_name_512=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj222=fun_name_511;
            fun_name_511=(char*)come_increment_ref_count(create_method_name(obj_type_513,(_Bool)0,base_fun_name_512,info,(_Bool)1));
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                __dec_obj223=base_fun_name_512;
                base_fun_name_512=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj224=fun_name_511;
                fun_name_511=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_512,info,(_Bool)1));
                __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj225=fun_name_511;
                fun_name_511=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj226=base_fun_name_512;
                base_fun_name_512=(char*)come_increment_ref_count(__builtin_string(fun_name_511));
                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_512,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value673=parse_params(info,constructor__503)));
    param_types_516=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_517=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_518=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_519=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value673,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_520=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_512,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1738, "buffer"))));
    buffer_append(header_buf_521,header_head_499,header_tail_520-header_head_499);
    buffer_append_char(header_buf_521,0);
    version_522=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_523=0;
        while(xisdigit(*info->p)) {
            n_523=n_523*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_522=n_523;
    }
    if(charp_operator_equals(base_fun_name_512,"lambda")) {
        block_524=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        static int lambda_num_525=0;
        lambda_num_525++;
        fun_name_526=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_525));
        result_type_501->mStatic=(_Bool)0;
        fun_527=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1768, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_526)),(struct sType*)come_increment_ref_count(result_type_501),(struct list$1sTypeph*)come_increment_ref_count(param_types_516),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),(_Bool)0,var_args_519,(struct sBlock*)come_increment_ref_count(block_524),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_521)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_528=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value683=__builtin_string(fun_name_526))));
        __right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_528==((void*)0)||fun2_528->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_526)),(struct sFun*)come_increment_ref_count(fun_527));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1779, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value686=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1779, "sLambdaNode")),fun_527,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result202__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value689=_inf_value5));
        /*i*/come_call_finalizer3(block_524,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_526 = come_decrement_ref_count2(fun_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_527,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value686,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value689) { __right_value689 = come_decrement_ref_count2(__right_value689, ((struct sNode*)__right_value689)->finalize, ((struct sNode*)__right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result202__;
        /*i*/come_call_finalizer3(block_524,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_526 = come_decrement_ref_count2(fun_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_527,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_530=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
            generics_sname_531=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_532=info->sline;
            block_533=(char*)come_increment_ref_count(skip_block(info));
            fun_534=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1789, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value694=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value695=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_511)),(struct sType*)come_increment_ref_count(result_type_501),(struct list$1sTypeph*)come_increment_ref_count(param_types_516),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),var_args_519,(char*)come_increment_ref_count(block_533),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_531)),generics_sline_532));
            /*g*/come_call_finalizer3(__right_value694,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            /*g*/come_call_finalizer3(__right_value695,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_535=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_530,base_fun_name_512));
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_535)),(struct sGenericsFun*)come_increment_ref_count(fun_534));
            __result214__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_530 = come_decrement_ref_count2(none_generics_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_531 = come_decrement_ref_count2(generics_sname_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_533 = come_decrement_ref_count2(block_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_534,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_535 = come_decrement_ref_count2(fun_name3_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result214__;
            none_generics_name_530 = come_decrement_ref_count2(none_generics_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_531 = come_decrement_ref_count2(generics_sname_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_533 = come_decrement_ref_count2(block_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_534,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_535 = come_decrement_ref_count2(fun_name3_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_557=(char*)come_increment_ref_count(__builtin_string(info->sname));
                generics_sline_558=info->sline;
                block_559=(char*)come_increment_ref_count(skip_block(info));
                fun_560=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1803, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value707=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value708=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_511)),(struct sType*)come_increment_ref_count(result_type_501),(struct list$1sTypeph*)come_increment_ref_count(param_types_516),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),var_args_519,(char*)come_increment_ref_count(block_559),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_557)),generics_sline_558));
                /*g*/come_call_finalizer3(__right_value707,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                /*g*/come_call_finalizer3(__right_value708,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_561=(char*)come_increment_ref_count(charp_clone(base_fun_name_512));
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_561)),(struct sGenericsFun*)come_increment_ref_count(fun_560));
                __result215__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_557 = come_decrement_ref_count2(generics_sname_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_559 = come_decrement_ref_count2(block_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_560,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_561 = come_decrement_ref_count2(fun_name3_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
                generics_sname_557 = come_decrement_ref_count2(generics_sname_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_559 = come_decrement_ref_count2(block_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_560,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_561 = come_decrement_ref_count2(fun_name3_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_562=info->p-1;
                    header_563=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1814, "buffer"))));
                    if(constructor__503) {
                        if(list$1sTypeph_length(param_types_516)==1) {
                            name_564=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_563,((char*)(__right_value717=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_564,name_564,name_564))));
                            __right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_565=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_563,((char*)(__right_value719=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_565,name_565,name_565))));
                            __right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_566=1;                            i_566<list$1sTypeph_length(param_types_516);                            i_566++                            ){
                                param_type_567=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_516,i_566), "05function.c", 1826, 1));
                                param_name_571=((char*)come_null_check(list$1charphp_operator_load_element(param_names_517,i_566), "05function.c", 1827, 2));
                                default_parametor_572=list$1charphp_operator_load_element(param_default_parametors_518,i_566);
                                if(default_parametor_572) {
                                    buffer_append_str(header_563,((char*)(__right_value721=xsprintf("extern %s %s=%s",((char*)(__right_value720=make_come_type_name_string_no_solved(param_type_567,(_Bool)0,info))),param_name_571,default_parametor_572))));
                                    __right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_563,((char*)(__right_value723=xsprintf("extern %s %s",((char*)(__right_value722=make_come_type_name_string_no_solved(param_type_567,(_Bool)0,info))),param_name_571))));
                                    __right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_566!=list$1sTypeph_length(param_types_516)-1) {
                                    buffer_append_str(header_563,",");
                                }
                            }
                            buffer_append_str(header_563,");\n");
                            name_565 = come_decrement_ref_count2(name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_516)==1) {
                                impl_name_573=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_574=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_501,(_Bool)0,info));
                                buffer_append_str(header_563,((char*)(__right_value726=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_574,impl_name_573,base_fun_name_512,impl_name_573))));
                                __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_573 = come_decrement_ref_count2(impl_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_574 = come_decrement_ref_count2(result_type_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_575=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_576=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_501,(_Bool)0,info));
                                buffer_append_str(header_563,((char*)(__right_value729=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_576,impl_name_575,base_fun_name_512,impl_name_575))));
                                __right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_577=1;                                i_577<list$1sTypeph_length(param_types_516);                                i_577++                                ){
                                    param_type_578=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_516,i_577), "05function.c", 1857, 3));
                                    param_name_579=((char*)come_null_check(list$1charphp_operator_load_element(param_names_517,i_577), "05function.c", 1858, 4));
                                    default_parametor_580=list$1charphp_operator_load_element(param_default_parametors_518,i_577);
                                    if(default_parametor_580) {
                                        buffer_append_str(header_563,((char*)(__right_value731=xsprintf("extern %s %s=%s",((char*)(__right_value730=make_come_type_name_string_no_solved(param_type_578,(_Bool)0,info))),param_name_579,default_parametor_580))));
                                        __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_563,((char*)(__right_value733=xsprintf("extern %s %s",((char*)(__right_value732=make_come_type_name_string_no_solved(param_type_578,(_Bool)0,info))),param_name_579))));
                                        __right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_577!=list$1sTypeph_length(param_types_516)-1) {
                                        buffer_append_str(header_563,",");
                                    }
                                }
                                buffer_append_str(header_563,");\n");
                                impl_name_575 = come_decrement_ref_count2(impl_name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_576 = come_decrement_ref_count2(result_type_name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_563,source_head_500,source_tail_562-source_head_500);
                            buffer_append_str(header_563,";\n");
                        }
                    }
                    if(!result_type_501->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(__right_value734=buffer_to_string(header_563))));
                        __right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_581=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__503));
                    static__582=(_Bool)0;
                    if(result_type_501->mStatic) {
                        result_type_501->mStatic=(_Bool)0;
                        static__582=(_Bool)1;
                    }
                    if(version_522>0) {
                        new_fun_name_583=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value736=__builtin_string(fun_name_511))),version_522));
                        __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj232=fun_name_511;
                        fun_name_511=(char*)come_increment_ref_count(__builtin_string(new_fun_name_583));
                        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_583 = come_decrement_ref_count2(new_fun_name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_584=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1898, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_511)),(struct sType*)come_increment_ref_count(result_type_501),(struct list$1sTypeph*)come_increment_ref_count(param_types_516),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),(_Bool)0,var_args_519,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_581)),static__582,(char*)come_increment_ref_count(buffer_to_string(header_buf_521)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_511)),(struct sFun*)come_increment_ref_count(fun_584));
                    }
                    else {
                        fun2_585=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value746=__builtin_string(fun_name_511))));
                        __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_585==((void*)0)||fun2_585->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_511)),(struct sFun*)come_increment_ref_count(fun_584));
                        }
                    }
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1918, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value749=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1918, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_584),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result220__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value753=_inf_value6));
                    /*i*/come_call_finalizer3(header_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_581,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_584,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value749,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value753) { __right_value753 = come_decrement_ref_count2(__right_value753, ((struct sNode*)__right_value753)->finalize, ((struct sNode*)__right_value753)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result220__;
                    /*i*/come_call_finalizer3(header_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_581,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_584,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_522>0) {
                            new_fun_name_587=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_511,version_522));
                            __dec_obj237=fun_name_511;
                            fun_name_511=(char*)come_increment_ref_count(__builtin_string(new_fun_name_587));
                            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
                            new_fun_name_587 = come_decrement_ref_count2(new_fun_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_static_588=result_type_501->mStatic;
                            result_type_501->mStatic=(_Bool)0;
                            fun_589=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1933, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_511)),(struct sType*)come_increment_ref_count(result_type_501),(struct list$1sTypeph*)come_increment_ref_count(param_types_516),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),(_Bool)1,var_args_519,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_521)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_590=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value761=__builtin_string(fun_name_511))));
                            __right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_590==((void*)0)||fun2_590->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_511)),(struct sFun*)come_increment_ref_count(fun_589));
                            }
                            source_tail_591=info->p;
                            header_592=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1947, "buffer"))));
                            buffer_append(header_592,source_head_500,source_tail_591-source_head_500);
                            if(!result_type_static_588) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value765=buffer_to_string(header_592))));
                                __right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1954, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value767=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1954, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_589),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value771=_inf_value7));
                            /*i*/come_call_finalizer3(fun_589,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_592,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value767,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value771) { __right_value771 = come_decrement_ref_count2(__right_value771, ((struct sNode*)__right_value771)->finalize, ((struct sNode*)__right_value771)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result223__;
                            /*i*/come_call_finalizer3(fun_589,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_592,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_594=(char*)come_increment_ref_count(parse_attribute(info));
                            if(string_operator_not_equals(asm_fun_594,"")) {
                                __dec_obj242=fun_name_511;
                                fun_name_511=(char*)come_increment_ref_count(__builtin_string(asm_fun_594));
                                __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            expected_next_character(59,info);
                            result_type_static_595=result_type_501->mStatic;
                            result_type_501->mStatic=(_Bool)0;
                            fun_596=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1968, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_511)),(struct sType*)come_increment_ref_count(result_type_501),(struct list$1sTypeph*)come_increment_ref_count(param_types_516),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),(_Bool)1,var_args_519,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_521)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_597=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value779=__builtin_string(fun_name_511))));
                            __right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_597==((void*)0)||fun2_597->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_511)),(struct sFun*)come_increment_ref_count(fun_596));
                            }
                            source_tail_598=info->p;
                            header_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1982, "buffer"))));
                            buffer_append(header_599,source_head_500,source_tail_598-source_head_500);
                            if(!result_type_static_595) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value783=buffer_to_string(header_599))));
                                __right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1989, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value785=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1989, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_596),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value789=_inf_value8));
                            asm_fun_594 = come_decrement_ref_count2(asm_fun_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value785,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value789) { __right_value789 = come_decrement_ref_count2(__right_value789, ((struct sNode*)__right_value789)->finalize, ((struct sNode*)__right_value789)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result226__;
                            asm_fun_594 = come_decrement_ref_count2(asm_fun_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    __result227__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_502 = come_decrement_ref_count2(var_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_512 = come_decrement_ref_count2(base_fun_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj227;
struct list$1charph* __dec_obj228;
struct list$1charph* __dec_obj229;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj227=self->v1;
            /* a*/come_call_finalizer3(__dec_obj227,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj228=self->v2;
            /* a*/come_call_finalizer3(__dec_obj228,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj229=self->v3;
            /* a*/come_call_finalizer3(__dec_obj229,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj230;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj230=self->sname;
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result200__;
void* __right_value687 = (void*)0;
struct sLambdaNode* result_529;
void* __right_value688 = (void*)0;
char* __dec_obj231;
struct sLambdaNode* __result201__;
    if(self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_529=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(self!=((void*)0)) {
        result_529->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_529->sname;
        result_529->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_529->mFun=self->mFun;
    }
    __result201__ = gComeFunResultObject = __result_obj__ = result_529;
    /*i*/come_call_finalizer3(result_529,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_553;
unsigned int it_554;
_Bool same_key_exist_555;
char* it2_556;
struct map$2charphsGenericsFunph* __result213__;
    if(self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_553=string_get_hash_key(key)%self->size;
    it_554=hash_553;
    while((_Bool)1) {
        if(self->item_existance[it_554]) {
            if(string_equals(self->keys[it_554],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_554]);
                    self->keys[it_554] = come_decrement_ref_count2(self->keys[it_554], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_554]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_554]);
                    self->keys[it_554]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_554],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_554]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_554]=item;
                }
                break;
            }
            it_554++;
            if(it_554>=self->size) {
                it_554=0;
            }
            else {
                if(it_554==hash_553) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_554]=(_Bool)1;
            if(1) {
                self->keys[it_554]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_554]=key;
            }
            if(1) {
                self->items[it_554]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_554]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_555=(_Bool)0;
    for(    it2_556=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_556=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_556,key)) {
            same_key_exist_555=(_Bool)1;
        }
    }
    if(!same_key_exist_555) {
        list$1charp_push_back(self->key_list,key);
    }
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_536;
void* __right_value700 = (void*)0;
char** keys_537;
void* __right_value701 = (void*)0;
struct sGenericsFun** items_538;
void* __right_value702 = (void*)0;
_Bool* item_existance_539;
int len_540;
char* it_543;
struct sGenericsFun* default_value_546;
struct sGenericsFun* it2_547;
unsigned int hash_550;
int n_551;
struct sGenericsFun* default_value_552;
default_value_546 = (void*)0;
default_value_552 = (void*)0;
    size_536=self->size*10;
    keys_537=(char**)come_increment_ref_count(((char**)(__right_value700=(char**)come_calloc(1, sizeof(char*)*(1*(size_536)), "/usr/local/include/comelang.h", 1620, "char*%"))));
    items_538=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value701=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_536)), "/usr/local/include/comelang.h", 1621, "sGenericsFun*%"))));
    item_existance_539=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value702=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_536)), "/usr/local/include/comelang.h", 1622, "bool"))));
    len_540=0;
    for(    it_543=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_543=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_546,0,sizeof(struct sGenericsFun*));
        it2_547=map$2charphsGenericsFunph_at(self,it_543,default_value_546);
        hash_550=string_get_hash_key(it_543)%size_536;
        n_551=hash_550;
        while((_Bool)1) {
            if(item_existance_539[n_551]) {
                n_551++;
                if(n_551>=size_536) {
                    n_551=0;
                }
                else {
                    if(n_551==hash_550) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_539[n_551]=(_Bool)1;
                keys_537[n_551]=it_543;
                items_538[n_551]=map$2charphsGenericsFunph_at(self,it_543,default_value_552);
                len_540++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_537;
    self->items=items_538;
    self->item_existance=item_existance_539;
    self->size=size_536;
    self->len=len_540;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_541;
char* __result203__;
char* __result204__;
char* result_542;
char* __result205__;
result_541 = (void*)0;
result_542 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_541,0,sizeof(char*));
        __result203__ = gComeFunResultObject = __result_obj__ = result_541;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result204__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    memset(&result_542,0,sizeof(char*));
    __result205__ = gComeFunResultObject = __result_obj__ = result_542;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_544;
char* __result206__;
char* __result207__;
char* result_545;
char* __result208__;
result_544 = (void*)0;
result_545 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_544,0,sizeof(char*));
        __result206__ = gComeFunResultObject = __result_obj__ = result_544;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result207__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    memset(&result_545,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = result_545;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_548;
unsigned int it_549;
struct sGenericsFun* __result209__;
struct sGenericsFun* __result210__;
struct sGenericsFun* __result211__;
struct sGenericsFun* __result212__;
    hash_548=string_get_hash_key(((char*)key))%self->size;
    it_549=hash_548;
    while((_Bool)1) {
        if(self->item_existance[it_549]) {
            if(string_equals(self->keys[it_549],key)) {
                __result209__ = gComeFunResultObject = __result_obj__ = self->items[it_549];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result209__;
            }
            it_549++;
            if(it_549>=self->size) {
                it_549=0;
            }
            else {
                if(it_549==hash_548) {
                    __result210__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result210__;
                }
            }
        }
        else {
            __result211__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result211__;
        }
    }
    __result212__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_568;
int i_569;
char* __result216__;
char* default_value_570;
char* __result217__;
default_value_570 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_568=self->head;
    i_569=0;
    while(it_568!=((void*)0)) {
        if(position==i_569) {
            __result216__ = gComeFunResultObject = __result_obj__ = it_568->item;
            gComeFunResultObject = (void*)0;
            return __result216__;
        }
        it_568=it_568->next;
        i_569++;
    }
    memset(&default_value_570,0,sizeof(char*));
    __result217__ = gComeFunResultObject = __result_obj__ = default_value_570;
    default_value_570 = come_decrement_ref_count2(default_value_570, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_601;
char* __dec_obj247;
char* last_code2_602;
char* __dec_obj248;
char* last_code3_603;
char* __dec_obj249;
struct sClass* current_stack_frame_struct_604;
struct sFun* finalizer_605;
void* __right_value790 = (void*)0;
char* real_fun_name_606;
void* __right_value791 = (void*)0;
char* user_real_fun_name_607;
struct sFun* user_finalizer_608;
void* __right_value792 = (void*)0;
struct sType* type2_609;
struct sClass* klass_610;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct buffer* source_611;
struct list$1tuple2$2charphsTypephph* o2_saved_613;
struct tuple2$2charphsTypeph* it_616;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_619;
struct sType* field_type_620;
char* p_622;
int sline_623;
char* sname_624;
char* head_625;
struct buffer* source3_626;
struct buffer* __dec_obj250;
void* __right_value795 = (void*)0;
char* __dec_obj251;
void* __right_value796 = (void*)0;
struct sBlock* block_627;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sType* result_type_628;
void* __right_value799 = (void*)0;
char* name_629;
void* __right_value800 = (void*)0;
struct sType* self_type_630;
struct sType* __list_values21___631[1];
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct list$1sTypeph* param_types_632;
void* __right_value803 = (void*)0;
char* __list_values22___633[1];
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct list$1charph* param_names_634;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1charph* param_default_parametors_635;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct buffer* header_buf_636;
void* __right_value810 = (void*)0;
int i_637;
struct sType* param_type_638;
char* param_name_639;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct sFun* fun_640;
void* __right_value816 = (void*)0;
struct sFun* fun2_641;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value823 = (void*)0;
struct sNode* node_642;
struct buffer* __dec_obj256;
char* __dec_obj257;
char* __dec_obj258;
char* __dec_obj259;
char* __dec_obj260;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct tuple2$2sFunpcharph* __result237__;
    last_code_601=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj247=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_602=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj248=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_603=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj249=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_604=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_605=((void*)0);
    real_fun_name_606=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_607=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_608=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_607);
    type2_609=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_609;
    klass_610=type->mClass;
    if(type->mPointerNum>0&&klass_610->mStruct) {
        source_611=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2029, "buffer"))));
        buffer_append_char(source_611,123);
        if(user_finalizer_608) {
            char source2_612[1024];
            memset(&source2_612, 0, sizeof(char)            *(1024)            );
            snprintf(source2_612,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_607);
            buffer_append_str(source_611,source2_612);
        }
        klass_610=map$2charphsClassphp_operator_load_element(info->classes,klass_610->mName);
        for(        o2_saved_613=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_610->mFields)),it_616=list$1tuple2$2charphsTypephph_begin((o2_saved_613));        !list$1tuple2$2charphsTypephph_end((o2_saved_613));        it_616=list$1tuple2$2charphsTypephph_next((o2_saved_613))        ){
            multiple_assign_var10=it_616;
            name_619=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_620=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_620->mClass->mName)&&type->mPointerNum==field_type_620->mPointerNum&&field_type_620->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_620->mHeap) {
                char source2_621[1024];
                memset(&source2_621, 0, sizeof(char)                *(1024)                );
                snprintf(source2_621,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_619,name_619,name_619,name_619);
                buffer_append_str(source_611,source2_621);
            }
            name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_611,125);
        p_622=info->p;
        sline_623=info->sline;
        sname_624=(char*)come_increment_ref_count(info->sname);
        head_625=info->head;
        source3_626=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj250=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_611);
        /* a*/come_call_finalizer3(__dec_obj250,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_611->buf;
        info->head=source_611->buf;
        __dec_obj251=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_606));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_627=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_628=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2075, "sType")),"void",(_Bool)0,info));
        name_629=(char*)come_increment_ref_count(string_clone(real_fun_name_606));
        self_type_630=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_630->mHeap=(_Bool)0;
        if(self_type_630->mPointerNum>1) {
            self_type_630->mPointerNum=1;
        }
        {__list_values21___631[0]=come_increment_ref_count(self_type_630);
}        param_types_632=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2082, "struct list$1sTypeph")),1,__list_values21___631));
        {__list_values22___633[0]=come_increment_ref_count(((char*)(__right_value803=__builtin_string("self"))));
}        param_names_634=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2083, "struct list$1charph")),1,__list_values22___633));
        __right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2084, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_635,((void*)0));
        header_buf_636=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2087, "buffer"))));
        buffer_append_str(header_buf_636,((char*)(__right_value810=make_come_type_name_string(result_type_628,info))));
        __right_value810 = come_decrement_ref_count2(__right_value810, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_636," ");
        buffer_append_str(header_buf_636,real_fun_name_606);
        buffer_append_str(header_buf_636,"(");
        for(        i_637=0;        i_637<list$1sTypeph_length(param_types_632);        i_637++        ){
            param_type_638=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_632,i_637), "05function.c", 2095, 5));
            param_name_639=((char*)come_null_check(list$1charphp_operator_load_element(param_names_634,i_637), "05function.c", 2096, 6));
            buffer_append_str(header_buf_636,((char*)(__right_value811=make_come_type_name_string(param_type_638,info))));
            __right_value811 = come_decrement_ref_count2(__right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_636," ");
            buffer_append_str(header_buf_636,param_name_639);
            if(i_637!=list$1sTypeph_length(param_types_632)-1) {
                buffer_append_str(header_buf_636,",");
            }
        }
        buffer_append_str(header_buf_636,")");
        result_type_628->mStatic=(_Bool)0;
        fun_640=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2110, "sFun")),(char*)come_increment_ref_count(name_629),(struct sType*)come_increment_ref_count(result_type_628),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_627),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_636)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_641=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value816=__builtin_string(fun_name))));
        __right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_641==((void*)0)||fun2_641->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_629)),(struct sFun*)come_increment_ref_count(fun_640));
        }
        finalizer_605=fun_640;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2126, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value819=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2126, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_640),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_642=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value819,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_642,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj256=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_626);
        /* a*/come_call_finalizer3(__dec_obj256,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_622;
        info->head=head_625;
        info->sline=sline_623;
        __dec_obj257=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_624);
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_624 = come_decrement_ref_count2(sname_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_627,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_628,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_640,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_642) { node_642 = come_decrement_ref_count2(node_642, ((struct sNode*)node_642)->finalize, ((struct sNode*)node_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_604;
    __dec_obj258=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_601);
    __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj259=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_602);
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj260=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_603);
    __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value825=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2146, "struct tuple2$2sFunpcharph")),finalizer_605,(char*)come_increment_ref_count(real_fun_name_606))));
    last_code_601 = come_decrement_ref_count2(last_code_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_602 = come_decrement_ref_count2(last_code2_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_603 = come_decrement_ref_count2(last_code3_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_606 = come_decrement_ref_count2(real_fun_name_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_607 = come_decrement_ref_count2(user_real_fun_name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_609,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value825,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_614;
struct tuple2$2charphsTypeph* __result228__;
struct tuple2$2charphsTypeph* __result229__;
struct tuple2$2charphsTypeph* result_615;
struct tuple2$2charphsTypeph* __result230__;
result_614 = (void*)0;
result_615 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_614,0,sizeof(struct tuple2$2charphsTypeph*));
        __result228__ = gComeFunResultObject = __result_obj__ = result_614;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    self->it=self->head;
    if(self->it) {
        __result229__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    memset(&result_615,0,sizeof(struct tuple2$2charphsTypeph*));
    __result230__ = gComeFunResultObject = __result_obj__ = result_615;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_617;
struct tuple2$2charphsTypeph* __result231__;
struct tuple2$2charphsTypeph* __result232__;
struct tuple2$2charphsTypeph* result_618;
struct tuple2$2charphsTypeph* __result233__;
result_617 = (void*)0;
result_618 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_617,0,sizeof(struct tuple2$2charphsTypeph*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_617;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_618,0,sizeof(struct tuple2$2charphsTypeph*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_618;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj261;
struct tuple2$2sFunpcharph* __result236__;
    self->v1=v1;
    __dec_obj261=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj262;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj262=self->v2;
            __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_644;
char* __dec_obj263;
char* last_code2_645;
char* __dec_obj264;
char* last_code3_646;
char* __dec_obj265;
struct sClass* current_stack_frame_struct_647;
struct sFun* finalizer_648;
void* __right_value826 = (void*)0;
char* real_fun_name_649;
void* __right_value827 = (void*)0;
struct sType* type2_650;
struct sClass* klass_651;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct buffer* source_652;
struct list$1tuple2$2charphsTypephph* o2_saved_653;
struct tuple2$2charphsTypeph* it_654;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_655;
struct sType* field_type_656;
char* p_658;
int sline_659;
char* sname_660;
char* head_661;
struct buffer* source3_662;
struct buffer* __dec_obj266;
void* __right_value830 = (void*)0;
char* __dec_obj267;
void* __right_value831 = (void*)0;
struct sBlock* block_663;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sType* result_type_664;
void* __right_value834 = (void*)0;
char* name_665;
void* __right_value835 = (void*)0;
struct sType* self_type_666;
struct sType* __list_values23___667[1];
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct list$1sTypeph* param_types_668;
void* __right_value838 = (void*)0;
char* __list_values24___669[1];
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1charph* param_names_670;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1charph* param_default_parametors_671;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* header_buf_672;
void* __right_value845 = (void*)0;
int i_673;
struct sType* param_type_674;
char* param_name_675;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sFun* fun_676;
void* __right_value851 = (void*)0;
struct sFun* fun2_677;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value858 = (void*)0;
struct sNode* node_678;
struct buffer* __dec_obj272;
char* __dec_obj273;
char* __dec_obj274;
char* __dec_obj275;
char* __dec_obj276;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct tuple2$2sFunpcharph* __result240__;
    last_code_644=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj263=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_645=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj264=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_646=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj265=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_647=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_648=((void*)0);
    real_fun_name_649=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_650=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_650;
    klass_651=type->mClass;
    if(type->mPointerNum>0&&klass_651->mStruct) {
        source_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2173, "buffer"))));
        buffer_append_char(source_652,123);
        klass_651=map$2charphsClassphp_operator_load_element(info->classes,klass_651->mName);
        for(        o2_saved_653=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_651->mFields)),it_654=list$1tuple2$2charphsTypephph_begin((o2_saved_653));        !list$1tuple2$2charphsTypephph_end((o2_saved_653));        it_654=list$1tuple2$2charphsTypephph_next((o2_saved_653))        ){
            multiple_assign_var11=it_654;
            name_655=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_656=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_656->mClass->mName)&&type->mPointerNum==field_type_656->mPointerNum&&field_type_656->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_656->mHeap) {
                char source2_657[1024];
                memset(&source2_657, 0, sizeof(char)                *(1024)                );
                snprintf(source2_657,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_655,name_655,name_655,name_655);
                buffer_append_str(source_652,source2_657);
            }
            name_655 = come_decrement_ref_count2(name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_653,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_652,125);
        p_658=info->p;
        sline_659=info->sline;
        sname_660=(char*)come_increment_ref_count(info->sname);
        head_661=info->head;
        source3_662=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj266=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_652);
        /* a*/come_call_finalizer3(__dec_obj266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_652->buf;
        info->head=source_652->buf;
        __dec_obj267=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_649));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_663=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_664=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2212, "sType")),"void",(_Bool)0,info));
        name_665=(char*)come_increment_ref_count(string_clone(real_fun_name_649));
        self_type_666=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_666->mHeap=(_Bool)0;
        if(self_type_666->mPointerNum>1) {
            self_type_666->mPointerNum=1;
        }
        {__list_values23___667[0]=come_increment_ref_count(self_type_666);
}        param_types_668=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2219, "struct list$1sTypeph")),1,__list_values23___667));
        {__list_values24___669[0]=come_increment_ref_count(((char*)(__right_value838=__builtin_string("self"))));
}        param_names_670=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2220, "struct list$1charph")),1,__list_values24___669));
        __right_value838 = come_decrement_ref_count2(__right_value838, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_671=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2221, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_671,((void*)0));
        header_buf_672=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2224, "buffer"))));
        buffer_append_str(header_buf_672,((char*)(__right_value845=make_come_type_name_string(result_type_664,info))));
        __right_value845 = come_decrement_ref_count2(__right_value845, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_672," ");
        buffer_append_str(header_buf_672,real_fun_name_649);
        buffer_append_str(header_buf_672,"(");
        for(        i_673=0;        i_673<list$1sTypeph_length(param_types_668);        i_673++        ){
            param_type_674=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_668,i_673), "05function.c", 2232, 7));
            param_name_675=((char*)come_null_check(list$1charphp_operator_load_element(param_names_670,i_673), "05function.c", 2233, 8));
            buffer_append_str(header_buf_672,((char*)(__right_value846=make_come_type_name_string(param_type_674,info))));
            __right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_672," ");
            buffer_append_str(header_buf_672,param_name_675);
            if(i_673!=list$1sTypeph_length(param_types_668)-1) {
                buffer_append_str(header_buf_672,",");
            }
        }
        buffer_append_str(header_buf_672,")");
        result_type_664->mStatic=(_Bool)0;
        fun_676=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2247, "sFun")),(char*)come_increment_ref_count(name_665),(struct sType*)come_increment_ref_count(result_type_664),(struct list$1sTypeph*)come_increment_ref_count(param_types_668),(struct list$1charph*)come_increment_ref_count(param_names_670),(struct list$1charph*)come_increment_ref_count(param_default_parametors_671),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_663),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_672)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_677=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value851=__builtin_string(fun_name))));
        __right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_677==((void*)0)||fun2_677->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_665)),(struct sFun*)come_increment_ref_count(fun_676));
        }
        finalizer_648=fun_676;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2263, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value854=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2263, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_676),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_678=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value854,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_678,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj272=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_662);
        /* a*/come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_658;
        info->head=head_661;
        info->sline=sline_659;
        __dec_obj273=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_660);
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_660 = come_decrement_ref_count2(sname_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_663,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_665 = come_decrement_ref_count2(name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_666,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_668,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_670,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_671,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_672,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_676,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_678) { node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_647;
    __dec_obj274=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_644);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_645);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_646);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result240__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value860=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2283, "struct tuple2$2sFunpcharph")),finalizer_648,(char*)come_increment_ref_count(real_fun_name_649))));
    last_code_644 = come_decrement_ref_count2(last_code_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_645 = come_decrement_ref_count2(last_code2_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_646 = come_decrement_ref_count2(last_code3_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_649 = come_decrement_ref_count2(real_fun_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_650,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value860,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_680;
char* __dec_obj277;
char* last_code2_681;
char* __dec_obj278;
char* last_code3_682;
char* __dec_obj279;
struct sClass* current_stack_frame_struct_683;
struct sFun* equaler_684;
void* __right_value861 = (void*)0;
char* real_fun_name_685;
void* __right_value862 = (void*)0;
struct sType* type2_686;
struct sClass* klass_687;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct buffer* source_688;
char* name_689;
struct list$1tuple2$2charphsTypephph* o2_saved_691;
struct tuple2$2charphsTypeph* it_692;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_693;
struct sType* field_type_694;
char* p_696;
int sline_697;
char* sname_698;
char* head_699;
struct buffer* source3_700;
struct buffer* __dec_obj280;
void* __right_value865 = (void*)0;
char* __dec_obj281;
void* __right_value866 = (void*)0;
struct sBlock* block_701;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sType* result_type_702;
void* __right_value869 = (void*)0;
char* name_703;
void* __right_value870 = (void*)0;
struct sType* left_type_704;
void* __right_value871 = (void*)0;
struct sType* right_type_705;
struct sType* __list_values25___706[2];
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1sTypeph* param_types_707;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
char* __list_values26___708[2];
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct list$1charph* param_names_709;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1charph* param_default_parametors_710;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct buffer* header_buf_711;
void* __right_value882 = (void*)0;
int i_712;
struct sType* param_type_713;
char* param_name_714;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sFun* fun_715;
void* __right_value888 = (void*)0;
struct sFun* fun2_716;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value895 = (void*)0;
struct sNode* node_717;
struct buffer* __dec_obj286;
char* __dec_obj287;
char* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct tuple2$2sFunpcharph* __result243__;
    last_code_680=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj277=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_681=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj278=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_682=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj279=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_683=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_684=((void*)0);
    real_fun_name_685=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_686=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_686;
    klass_687=type->mClass;
    if(type->mPointerNum>0&&!klass_687->mNumber) {
        source_688=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2308, "buffer"))));
        buffer_append_char(source_688,123);
        if(klass_687->mProtocol) {
            name_689="_protocol_obj";
            char source2_690[1024];
            memset(&source2_690, 0, sizeof(char)            *(1024)            );
            snprintf(source2_690,1024,"return left.%s.equals(right.%s);\n",name_689,name_689);
            buffer_append_str(source_688,source2_690);
        }
        else {
            klass_687=map$2charphsClassphp_operator_load_element(info->classes,klass_687->mName);
            for(            o2_saved_691=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_687->mFields)),it_692=list$1tuple2$2charphsTypephph_begin((o2_saved_691));            !list$1tuple2$2charphsTypephph_end((o2_saved_691));            it_692=list$1tuple2$2charphsTypephph_next((o2_saved_691))            ){
                multiple_assign_var12=it_692;
                name_693=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_694=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_694->mClass->mName)&&type->mPointerNum==field_type_694->mPointerNum&&field_type_694->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_695[1024];
                memset(&source2_695, 0, sizeof(char)                *(1024)                );
                snprintf(source2_695,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_693,name_693);
                buffer_append_str(source_688,source2_695);
                name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_691,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_688,"return true;");
        buffer_append_char(source_688,125);
        p_696=info->p;
        sline_697=info->sline;
        sname_698=(char*)come_increment_ref_count(info->sname);
        head_699=info->head;
        source3_700=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj280=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_688);
        /* a*/come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_688->buf;
        info->head=source_688->buf;
        __dec_obj281=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_685));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_701=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_702=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2354, "sType")),"bool",(_Bool)0,info));
        name_703=(char*)come_increment_ref_count(string_clone(real_fun_name_685));
        left_type_704=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_704->mHeap=(_Bool)0;
        right_type_705=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_705->mHeap=(_Bool)0;
        {__list_values25___706[0]=come_increment_ref_count(left_type_704);
__list_values25___706[1]=come_increment_ref_count(right_type_705);
}        param_types_707=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2360, "struct list$1sTypeph")),2,__list_values25___706));
        {__list_values26___708[0]=come_increment_ref_count(((char*)(__right_value874=__builtin_string("left"))));
__list_values26___708[1]=come_increment_ref_count(((char*)(__right_value875=__builtin_string("right"))));
}        param_names_709=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2361, "struct list$1charph")),2,__list_values26___708));
        __right_value874 = come_decrement_ref_count2(__right_value874, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value875 = come_decrement_ref_count2(__right_value875, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_710=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2362, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_710,((void*)0));
        list$1charph_push_back(param_default_parametors_710,((void*)0));
        header_buf_711=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2366, "buffer"))));
        buffer_append_str(header_buf_711,((char*)(__right_value882=make_come_type_name_string(result_type_702,info))));
        __right_value882 = come_decrement_ref_count2(__right_value882, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_711," ");
        buffer_append_str(header_buf_711,real_fun_name_685);
        buffer_append_str(header_buf_711,"(");
        for(        i_712=0;        i_712<list$1sTypeph_length(param_types_707);        i_712++        ){
            param_type_713=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_707,i_712), "05function.c", 2374, 9));
            param_name_714=((char*)come_null_check(list$1charphp_operator_load_element(param_names_709,i_712), "05function.c", 2375, 10));
            buffer_append_str(header_buf_711,((char*)(__right_value883=make_come_type_name_string(param_type_713,info))));
            __right_value883 = come_decrement_ref_count2(__right_value883, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_711," ");
            buffer_append_str(header_buf_711,param_name_714);
            if(i_712!=list$1sTypeph_length(param_types_707)-1) {
                buffer_append_str(header_buf_711,",");
            }
        }
        buffer_append_str(header_buf_711,")");
        result_type_702->mStatic=(_Bool)0;
        fun_715=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2389, "sFun")),(char*)come_increment_ref_count(name_703),(struct sType*)come_increment_ref_count(result_type_702),(struct list$1sTypeph*)come_increment_ref_count(param_types_707),(struct list$1charph*)come_increment_ref_count(param_names_709),(struct list$1charph*)come_increment_ref_count(param_default_parametors_710),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_701),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_711)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_716=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value888=__builtin_string(fun_name))));
        __right_value888 = come_decrement_ref_count2(__right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_716==((void*)0)||fun2_716->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_703)),(struct sFun*)come_increment_ref_count(fun_715));
        }
        equaler_684=fun_715;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2405, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value891=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2405, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_715),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_717=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value891,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_717,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj286=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_700);
        /* a*/come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_696;
        info->head=head_699;
        info->sline=sline_697;
        __dec_obj287=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_698);
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_698 = come_decrement_ref_count2(sname_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_700,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_701,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_703 = come_decrement_ref_count2(name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_704,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_705,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_707,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_709,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_710,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_711,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_715,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_683;
    __dec_obj288=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_680);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_681);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj290=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_682);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result243__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value897=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2425, "struct tuple2$2sFunpcharph")),equaler_684,(char*)come_increment_ref_count(real_fun_name_685))));
    last_code_680 = come_decrement_ref_count2(last_code_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_681 = come_decrement_ref_count2(last_code2_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_682 = come_decrement_ref_count2(last_code3_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_685 = come_decrement_ref_count2(real_fun_name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_686,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value897,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_719;
char* __dec_obj291;
char* last_code2_720;
char* __dec_obj292;
char* last_code3_721;
char* __dec_obj293;
struct sClass* current_stack_frame_struct_722;
struct sFun* equaler_723;
void* __right_value898 = (void*)0;
char* real_fun_name_724;
void* __right_value899 = (void*)0;
struct sType* type2_725;
struct sClass* klass_726;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct buffer* source_727;
char* name_728;
int i_731;
struct list$1tuple2$2charphsTypephph* o2_saved_732;
struct tuple2$2charphsTypeph* it_733;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_734;
struct sType* field_type_735;
char* p_739;
int sline_740;
char* sname_741;
char* head_742;
struct buffer* source3_743;
struct buffer* __dec_obj294;
void* __right_value902 = (void*)0;
char* __dec_obj295;
void* __right_value903 = (void*)0;
struct sBlock* block_744;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sType* result_type_745;
void* __right_value906 = (void*)0;
char* name_746;
void* __right_value907 = (void*)0;
struct sType* left_type_747;
void* __right_value908 = (void*)0;
struct sType* right_type_748;
struct sType* __list_values27___749[2];
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct list$1sTypeph* param_types_750;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
char* __list_values28___751[2];
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct list$1charph* param_names_752;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct list$1charph* param_default_parametors_753;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct buffer* header_buf_754;
void* __right_value919 = (void*)0;
int i_755;
struct sType* param_type_756;
char* param_name_757;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sFun* fun_758;
void* __right_value925 = (void*)0;
struct sFun* fun2_759;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value932 = (void*)0;
struct sNode* node_760;
struct buffer* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct tuple2$2sFunpcharph* __result246__;
    last_code_719=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj291=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_720=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj292=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_721=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj293=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_722=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_723=((void*)0);
    real_fun_name_724=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_725=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_725;
    klass_726=type->mClass;
    if(type->mPointerNum>0&&!klass_726->mNumber) {
        source_727=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2450, "buffer"))));
        buffer_append_char(source_727,123);
        if(klass_726->mProtocol) {
            name_728="_protocol_obj";
            char source2_729[1024];
            memset(&source2_729, 0, sizeof(char)            *(1024)            );
            snprintf(source2_729,1024,"return !left.%s.equals(right.%s);\n",name_728,name_728);
            buffer_append_str(source_727,source2_729);
        }
        else {
            char source2_730[1024];
            memset(&source2_730, 0, sizeof(char)            *(1024)            );
            snprintf(source2_730,1024,"return !(");
            buffer_append_str(source_727,source2_730);
            i_731=0;
            klass_726=map$2charphsClassphp_operator_load_element(info->classes,klass_726->mName);
            for(            o2_saved_732=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_726->mFields)),it_733=list$1tuple2$2charphsTypephph_begin((o2_saved_732));            !list$1tuple2$2charphsTypephph_end((o2_saved_732));            it_733=list$1tuple2$2charphsTypephph_next((o2_saved_732))            ){
                multiple_assign_var13=it_733;
                name_734=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_735=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_735->mClass->mName)&&type->mPointerNum==field_type_735->mPointerNum&&field_type_735->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_736[1024];
                memset(&source2_736, 0, sizeof(char)                *(1024)                );
                snprintf(source2_736,1024,"left.%s.equals(right.%s)",name_734,name_734);
                buffer_append_str(source_727,source2_736);
                if(i_731==list$1tuple2$2charphsTypephph_length(klass_726->mFields)-1) {
                    char source2_737[1024];
                    memset(&source2_737, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_737,1024,");");
                    buffer_append_str(source_727,source2_737);
                }
                else {
                    char source2_738[1024];
                    memset(&source2_738, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_738,1024," && ");
                    buffer_append_str(source_727,source2_738);
                }
                i_731++;
                name_734 = come_decrement_ref_count2(name_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_732,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_727,125);
        p_739=info->p;
        sline_740=info->sline;
        sname_741=(char*)come_increment_ref_count(info->sname);
        head_742=info->head;
        source3_743=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj294=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_727);
        /* a*/come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_727->buf;
        info->head=source_727->buf;
        __dec_obj295=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_724));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_744=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_745=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2513, "sType")),"bool",(_Bool)0,info));
        name_746=(char*)come_increment_ref_count(string_clone(real_fun_name_724));
        left_type_747=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_747->mHeap=(_Bool)0;
        right_type_748=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_748->mHeap=(_Bool)0;
        {__list_values27___749[0]=come_increment_ref_count(left_type_747);
__list_values27___749[1]=come_increment_ref_count(right_type_748);
}        param_types_750=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2519, "struct list$1sTypeph")),2,__list_values27___749));
        {__list_values28___751[0]=come_increment_ref_count(((char*)(__right_value911=__builtin_string("left"))));
__list_values28___751[1]=come_increment_ref_count(((char*)(__right_value912=__builtin_string("right"))));
}        param_names_752=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2520, "struct list$1charph")),2,__list_values28___751));
        __right_value911 = come_decrement_ref_count2(__right_value911, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_753=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2521, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_753,((void*)0));
        list$1charph_push_back(param_default_parametors_753,((void*)0));
        header_buf_754=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2525, "buffer"))));
        buffer_append_str(header_buf_754,((char*)(__right_value919=make_come_type_name_string(result_type_745,info))));
        __right_value919 = come_decrement_ref_count2(__right_value919, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_754," ");
        buffer_append_str(header_buf_754,real_fun_name_724);
        buffer_append_str(header_buf_754,"(");
        for(        i_755=0;        i_755<list$1sTypeph_length(param_types_750);        i_755++        ){
            param_type_756=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_750,i_755), "05function.c", 2533, 11));
            param_name_757=((char*)come_null_check(list$1charphp_operator_load_element(param_names_752,i_755), "05function.c", 2534, 12));
            buffer_append_str(header_buf_754,((char*)(__right_value920=make_come_type_name_string(param_type_756,info))));
            __right_value920 = come_decrement_ref_count2(__right_value920, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_754," ");
            buffer_append_str(header_buf_754,param_name_757);
            if(i_755!=list$1sTypeph_length(param_types_750)-1) {
                buffer_append_str(header_buf_754,",");
            }
        }
        buffer_append_str(header_buf_754,")");
        result_type_745->mStatic=(_Bool)0;
        fun_758=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2548, "sFun")),(char*)come_increment_ref_count(name_746),(struct sType*)come_increment_ref_count(result_type_745),(struct list$1sTypeph*)come_increment_ref_count(param_types_750),(struct list$1charph*)come_increment_ref_count(param_names_752),(struct list$1charph*)come_increment_ref_count(param_default_parametors_753),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_744),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_754)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_759=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value925=__builtin_string(fun_name))));
        __right_value925 = come_decrement_ref_count2(__right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_759==((void*)0)||fun2_759->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_746)),(struct sFun*)come_increment_ref_count(fun_758));
        }
        equaler_723=fun_758;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2564, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value928=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2564, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_758),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_760=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value928,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_760,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_743);
        /* a*/come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_739;
        info->head=head_742;
        info->sline=sline_740;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_741);
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_727,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_741 = come_decrement_ref_count2(sname_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_744,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_745,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_746 = come_decrement_ref_count2(name_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_748,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_750,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_752,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_753,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_754,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_758,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_760) { node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_722;
    __dec_obj302=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_719);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_720);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_721);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value934=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2584, "struct tuple2$2sFunpcharph")),equaler_723,(char*)come_increment_ref_count(real_fun_name_724))));
    last_code_719 = come_decrement_ref_count2(last_code_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_720 = come_decrement_ref_count2(last_code2_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_721 = come_decrement_ref_count2(last_code3_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_724 = come_decrement_ref_count2(real_fun_name_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_725,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value934,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_762;
char* __dec_obj305;
char* last_code2_763;
char* __dec_obj306;
char* last_code3_764;
char* __dec_obj307;
struct sClass* current_stack_frame_struct_765;
struct sFun* equaler_766;
void* __right_value935 = (void*)0;
char* real_fun_name_767;
void* __right_value936 = (void*)0;
struct sType* type2_768;
struct sClass* klass_769;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct buffer* source_770;
char* name_771;
struct list$1tuple2$2charphsTypephph* o2_saved_773;
struct tuple2$2charphsTypeph* it_774;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_775;
struct sType* field_type_776;
char* p_778;
int sline_779;
char* sname_780;
char* head_781;
struct buffer* source3_782;
struct buffer* __dec_obj308;
void* __right_value939 = (void*)0;
char* __dec_obj309;
void* __right_value940 = (void*)0;
struct sBlock* block_783;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct sType* result_type_784;
void* __right_value943 = (void*)0;
char* name_785;
void* __right_value944 = (void*)0;
struct sType* left_type_786;
void* __right_value945 = (void*)0;
struct sType* right_type_787;
struct sType* __list_values29___788[2];
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct list$1sTypeph* param_types_789;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
char* __list_values30___790[2];
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct list$1charph* param_names_791;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct list$1charph* param_default_parametors_792;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct buffer* header_buf_793;
void* __right_value956 = (void*)0;
int i_794;
struct sType* param_type_795;
char* param_name_796;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sFun* fun_797;
void* __right_value962 = (void*)0;
struct sFun* fun2_798;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value969 = (void*)0;
struct sNode* node_799;
struct buffer* __dec_obj314;
char* __dec_obj315;
char* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct tuple2$2sFunpcharph* __result249__;
    last_code_762=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj305=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_763=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj306=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_764=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj307=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_765=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_766=((void*)0);
    real_fun_name_767=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_768=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_768;
    klass_769=type->mClass;
    if(type->mPointerNum>0&&!klass_769->mNumber) {
        source_770=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2609, "buffer"))));
        buffer_append_char(source_770,123);
        if(klass_769->mProtocol) {
            name_771="_protocol_obj";
            char source2_772[1024];
            memset(&source2_772, 0, sizeof(char)            *(1024)            );
            snprintf(source2_772,1024,"return left.%s.equals(right.%s);\n",name_771,name_771);
            buffer_append_str(source_770,source2_772);
        }
        else {
            klass_769=map$2charphsClassphp_operator_load_element(info->classes,klass_769->mName);
            for(            o2_saved_773=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_769->mFields)),it_774=list$1tuple2$2charphsTypephph_begin((o2_saved_773));            !list$1tuple2$2charphsTypephph_end((o2_saved_773));            it_774=list$1tuple2$2charphsTypephph_next((o2_saved_773))            ){
                multiple_assign_var14=it_774;
                name_775=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_776=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_776->mClass->mName)&&type->mPointerNum==field_type_776->mPointerNum&&field_type_776->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_777[1024];
                memset(&source2_777, 0, sizeof(char)                *(1024)                );
                snprintf(source2_777,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_775,name_775);
                buffer_append_str(source_770,source2_777);
                name_775 = come_decrement_ref_count2(name_775, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_776,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_773,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_770,"return true;\n");
        buffer_append_char(source_770,125);
        p_778=info->p;
        sline_779=info->sline;
        sname_780=(char*)come_increment_ref_count(info->sname);
        head_781=info->head;
        source3_782=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_770);
        /* a*/come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_770->buf;
        info->head=source_770->buf;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_767));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_783=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_784=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2655, "sType")),"bool",(_Bool)0,info));
        name_785=(char*)come_increment_ref_count(string_clone(real_fun_name_767));
        left_type_786=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_786->mHeap=(_Bool)0;
        right_type_787=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_787->mHeap=(_Bool)0;
        {__list_values29___788[0]=come_increment_ref_count(left_type_786);
__list_values29___788[1]=come_increment_ref_count(right_type_787);
}        param_types_789=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2661, "struct list$1sTypeph")),2,__list_values29___788));
        {__list_values30___790[0]=come_increment_ref_count(((char*)(__right_value948=__builtin_string("left"))));
__list_values30___790[1]=come_increment_ref_count(((char*)(__right_value949=__builtin_string("right"))));
}        param_names_791=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2662, "struct list$1charph")),2,__list_values30___790));
        __right_value948 = come_decrement_ref_count2(__right_value948, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_792=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2663, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_792,((void*)0));
        list$1charph_push_back(param_default_parametors_792,((void*)0));
        header_buf_793=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2667, "buffer"))));
        buffer_append_str(header_buf_793,((char*)(__right_value956=make_come_type_name_string(result_type_784,info))));
        __right_value956 = come_decrement_ref_count2(__right_value956, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_793," ");
        buffer_append_str(header_buf_793,real_fun_name_767);
        buffer_append_str(header_buf_793,"(");
        for(        i_794=0;        i_794<list$1sTypeph_length(param_types_789);        i_794++        ){
            param_type_795=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_789,i_794), "05function.c", 2675, 13));
            param_name_796=((char*)come_null_check(list$1charphp_operator_load_element(param_names_791,i_794), "05function.c", 2676, 14));
            buffer_append_str(header_buf_793,((char*)(__right_value957=make_come_type_name_string(param_type_795,info))));
            __right_value957 = come_decrement_ref_count2(__right_value957, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_793," ");
            buffer_append_str(header_buf_793,param_name_796);
            if(i_794!=list$1sTypeph_length(param_types_789)-1) {
                buffer_append_str(header_buf_793,",");
            }
        }
        buffer_append_str(header_buf_793,")");
        result_type_784->mStatic=(_Bool)0;
        fun_797=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2690, "sFun")),(char*)come_increment_ref_count(name_785),(struct sType*)come_increment_ref_count(result_type_784),(struct list$1sTypeph*)come_increment_ref_count(param_types_789),(struct list$1charph*)come_increment_ref_count(param_names_791),(struct list$1charph*)come_increment_ref_count(param_default_parametors_792),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_783),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_793)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_798=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value962=__builtin_string(fun_name))));
        __right_value962 = come_decrement_ref_count2(__right_value962, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_798==((void*)0)||fun2_798->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_785)),(struct sFun*)come_increment_ref_count(fun_797));
        }
        equaler_766=fun_797;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2706, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value965=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2706, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_797),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_799=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value965,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_799,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_782);
        /* a*/come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_778;
        info->head=head_781;
        info->sline=sline_779;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_780);
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_780 = come_decrement_ref_count2(sname_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_783,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_784,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_785 = come_decrement_ref_count2(name_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_787,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_789,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_791,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_792,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_797,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_765;
    __dec_obj316=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_762);
    __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj317=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_763);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj318=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_764);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value971=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2726, "struct tuple2$2sFunpcharph")),equaler_766,(char*)come_increment_ref_count(real_fun_name_767))));
    last_code_762 = come_decrement_ref_count2(last_code_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_763 = come_decrement_ref_count2(last_code2_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_764 = come_decrement_ref_count2(last_code3_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_767 = come_decrement_ref_count2(real_fun_name_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_768,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value971,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_801;
char* __dec_obj319;
char* last_code2_802;
char* __dec_obj320;
char* last_code3_803;
char* __dec_obj321;
struct sClass* current_stack_frame_struct_804;
struct sFun* cloner_805;
void* __right_value972 = (void*)0;
char* real_fun_name_806;
void* __right_value973 = (void*)0;
struct sType* type2_807;
struct sClass* klass_808;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct buffer* source_809;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
char* name_810;
struct list$1tuple2$2charphsTypephph* o2_saved_812;
struct tuple2$2charphsTypeph* it_813;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_814;
struct sType* field_type_815;
struct list$1tuple2$2charphsTypephph* o2_saved_818;
struct tuple2$2charphsTypeph* it_819;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_820;
struct sType* field_type_821;
void* __right_value978 = (void*)0;
char* p_825;
int sline_826;
char* sname_827;
struct buffer* source3_828;
char* head_829;
struct buffer* __dec_obj322;
void* __right_value979 = (void*)0;
char* __dec_obj323;
void* __right_value980 = (void*)0;
struct sBlock* block_830;
void* __right_value981 = (void*)0;
struct sType* result_type_831;
void* __right_value982 = (void*)0;
char* name_832;
void* __right_value983 = (void*)0;
struct sType* self_type_833;
struct sType* __list_values31___834[1];
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct list$1sTypeph* param_types_835;
void* __right_value986 = (void*)0;
char* __list_values32___836[1];
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct list$1charph* param_names_837;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct list$1charph* param_default_parametors_838;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct buffer* header_buf_839;
void* __right_value993 = (void*)0;
int i_840;
struct sType* param_type_841;
char* param_name_842;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sFun* fun_843;
void* __right_value999 = (void*)0;
struct sFun* fun2_844;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1006 = (void*)0;
struct sNode* node_845;
char* __dec_obj328;
struct buffer* __dec_obj329;
char* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct tuple2$2sFunpcharph* __result252__;
    last_code_801=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_802=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_803=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj321=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_804=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_805=((void*)0);
    real_fun_name_806=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_807=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_807;
    klass_808=type->mClass;
    if(type->mPointerNum>0&&!klass_808->mNumber) {
        source_809=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2751, "buffer"))));
        buffer_append_str(source_809,"{\n");
        buffer_append_str(source_809,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_809,((char*)(__right_value977=xsprintf("var result = new %s;\n",((char*)(__right_value976=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value976 = come_decrement_ref_count2(__right_value976, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_808->mProtocol) {
            name_810="_protocol_obj";
            char source2_811[1024];
            memset(&source2_811, 0, sizeof(char)            *(1024)            );
            snprintf(source2_811,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_809,source2_811);
            klass_808=map$2charphsClassphp_operator_load_element(info->classes,klass_808->mName);
            for(            o2_saved_812=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_808->mFields)),it_813=list$1tuple2$2charphsTypephph_begin((o2_saved_812));            !list$1tuple2$2charphsTypephph_end((o2_saved_812));            it_813=list$1tuple2$2charphsTypephph_next((o2_saved_812))            ){
                multiple_assign_var15=it_813;
                name_814=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_815=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_815->mClass->mName)&&type->mPointerNum==field_type_815->mPointerNum&&field_type_815->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_814,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_815->mArrayNum)>0) {
                        char source2_816[1024];
                        memset(&source2_816, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_816,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_814,name_814,name_814);
                        buffer_append_str(source_809,source2_816);
                    }
                    else {
                        char source2_817[1024];
                        memset(&source2_817, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_817,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_814,name_814);
                        buffer_append_str(source_809,source2_817);
                    }
                }
                name_814 = come_decrement_ref_count2(name_814, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_815,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_812,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_808=map$2charphsClassphp_operator_load_element(info->classes,klass_808->mName);
            for(            o2_saved_818=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_808->mFields)),it_819=list$1tuple2$2charphsTypephph_begin((o2_saved_818));            !list$1tuple2$2charphsTypephph_end((o2_saved_818));            it_819=list$1tuple2$2charphsTypephph_next((o2_saved_818))            ){
                multiple_assign_var16=it_819;
                name_820=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_821=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_821->mClass->mName)&&type->mPointerNum==field_type_821->mPointerNum&&field_type_821->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_821->mHeap) {
                    char source2_822[1024];
                    memset(&source2_822, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_822,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_820,name_820,name_820);
                    buffer_append_str(source_809,source2_822);
                }
                else {
                    if(list$1sNodeph_length(field_type_821->mArrayNum)>0) {
                        char source2_823[1024];
                        memset(&source2_823, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_823,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_820,name_820,name_820);
                        buffer_append_str(source_809,source2_823);
                    }
                    else {
                        char source2_824[1024];
                        memset(&source2_824, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_824,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_820,name_820);
                        buffer_append_str(source_809,source2_824);
                    }
                }
                name_820 = come_decrement_ref_count2(name_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_821,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_818,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_809,((char*)(__right_value978=xsprintf("return result;"))));
        __right_value978 = come_decrement_ref_count2(__right_value978, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_809,125);
        p_825=info->p;
        sline_826=info->sline;
        sname_827=(char*)come_increment_ref_count(info->sname);
        source3_828=(struct buffer*)come_increment_ref_count(info->source);
        head_829=info->head;
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_809);
        /* a*/come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_806));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_830=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_831=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_832=(char*)come_increment_ref_count(string_clone(real_fun_name_806));
        self_type_833=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_833->mHeap=(_Bool)0;
        {__list_values31___834[0]=come_increment_ref_count(self_type_833);
}        param_types_835=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2845, "struct list$1sTypeph")),1,__list_values31___834));
        {__list_values32___836[0]=come_increment_ref_count(((char*)(__right_value986=__builtin_string("self"))));
}        param_names_837=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2846, "struct list$1charph")),1,__list_values32___836));
        __right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_838=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2847, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_838,((void*)0));
        header_buf_839=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2850, "buffer"))));
        buffer_append_str(header_buf_839,((char*)(__right_value993=make_come_type_name_string(result_type_831,info))));
        __right_value993 = come_decrement_ref_count2(__right_value993, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_839," ");
        buffer_append_str(header_buf_839,real_fun_name_806);
        buffer_append_str(header_buf_839,"(");
        for(        i_840=0;        i_840<list$1sTypeph_length(param_types_835);        i_840++        ){
            param_type_841=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_835,i_840), "05function.c", 2858, 15));
            param_name_842=((char*)come_null_check(list$1charphp_operator_load_element(param_names_837,i_840), "05function.c", 2859, 16));
            buffer_append_str(header_buf_839,((char*)(__right_value994=make_come_type_name_string(param_type_841,info))));
            __right_value994 = come_decrement_ref_count2(__right_value994, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_839," ");
            buffer_append_str(header_buf_839,param_name_842);
            if(i_840!=list$1sTypeph_length(param_types_835)-1) {
                buffer_append_str(header_buf_839,",");
            }
        }
        buffer_append_str(header_buf_839,")");
        result_type_831->mStatic=(_Bool)0;
        fun_843=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2873, "sFun")),(char*)come_increment_ref_count(name_832),(struct sType*)come_increment_ref_count(result_type_831),(struct list$1sTypeph*)come_increment_ref_count(param_types_835),(struct list$1charph*)come_increment_ref_count(param_names_837),(struct list$1charph*)come_increment_ref_count(param_default_parametors_838),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_830),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_839)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_843->mCloner=(_Bool)1;
        fun2_844=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value999=__builtin_string(fun_name))));
        __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_844==((void*)0)||fun2_844->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_832)),(struct sFun*)come_increment_ref_count(fun_843));
        }
        cloner_805=fun_843;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2890, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1002=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2890, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_843),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_845=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1002,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_845,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj328=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_827);
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_826;
        __dec_obj329=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_828);
        /* a*/come_call_finalizer3(__dec_obj329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_825;
        info->head=head_829;
        info->sline=sline_826;
        /*i*/come_call_finalizer3(source_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_827 = come_decrement_ref_count2(sname_827, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_828,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_830,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_831,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_832 = come_decrement_ref_count2(name_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_835,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_837,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_838,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_839,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_843,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_845) { node_845 = come_decrement_ref_count2(node_845, ((struct sNode*)node_845)->finalize, ((struct sNode*)node_845)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_804;
    __dec_obj330=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_801);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj331=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_802);
    __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj332=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_803);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1008=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2912, "struct tuple2$2sFunpcharph")),cloner_805,(char*)come_increment_ref_count(real_fun_name_806))));
    last_code_801 = come_decrement_ref_count2(last_code_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_802 = come_decrement_ref_count2(last_code2_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_803 = come_decrement_ref_count2(last_code3_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_806 = come_decrement_ref_count2(real_fun_name_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_807,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1008,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj324;
struct sFun* __dec_obj325;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj324=self->sname;
            __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(self->mFun==gComeFunResultObject) {
            __dec_obj325=self->mFun;
            /* a*/come_call_finalizer3(__dec_obj325,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result250__;
void* __right_value1003 = (void*)0;
struct sFunNode* result_846;
void* __right_value1004 = (void*)0;
char* __dec_obj326;
void* __right_value1005 = (void*)0;
struct sFun* __dec_obj327;
struct sFunNode* __result251__;
    if(self==(void*)0) {
        __result250__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_846=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(self!=((void*)0)) {
        result_846->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj326=result_846->sname;
        result_846->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj327=result_846->mFun;
        result_846->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /* a*/come_call_finalizer3(__dec_obj327,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_846;
    /*i*/come_call_finalizer3(result_846,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

