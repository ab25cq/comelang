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
struct sMemHeaderTiny
{
    unsigned long unsigned  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long unsigned  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

// header function
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
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
static void* alloc_from_pages(unsigned long unsigned  int size);
static void* come_alloc_mem_from_heap_pool(unsigned long unsigned  int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool int_equals(int self, int right);
_Bool char_equals(char self, char right);
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long unsigned  int self, unsigned long unsigned  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool string_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
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
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long unsigned  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long unsigned  int size_t_clone(unsigned long unsigned  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
int string_length(char* str);
int charp_length(char* str);
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
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
int size_t_compare(unsigned long unsigned  int left, unsigned long unsigned  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_compare(struct integer* left, struct integer* right);
_Bool integer_equals(struct integer* self, struct integer* right);
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
// uniq global variable
// source head3
char* gComeStackFrameSName[128];
int gComeStackFrameSLine[128];
int gComeStackFrameID[128];
int gNumComeStackFrame=0;
void* gComeFunResultObject=((void*)0);
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeader* gAllocMem;
struct sHeapPage gHeapPages;

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










void come_push_stackframe(char* sname, int sline, int id){
    if(gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct buffer* buf_64;
void* __right_value118 = (void*)0;
int i_65;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
    buf_64=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 49, "buffer"))));
    buffer_append_str(buf_64,((char*)(__right_value118=xsprintf("%s %d\n",sname,sline))));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    i_65=gNumComeStackFrame-2;    i_65>=0;    i_65--    ){
        buffer_append_str(buf_64,((char*)(__right_value119=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_65],gComeStackFrameSLine[i_65],gComeStackFrameID[i_65]))));
        __right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value120=buffer_to_string(buf_64))));
    __right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_64,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
int i_66;
    for(    i_66=gNumComeStackFrame-1;    i_66>=0;    i_66--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_66],gComeStackFrameSLine[i_66],gComeStackFrameID[i_66]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value121=__builtin_string(gComeStackFrameBuffer)));
    __right_value121 = come_decrement_ref_count2(__right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result66__;
    if(mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result66__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result66__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result67__;
    if(mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_67;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_67=0;    i_67<gHeapPages.mSizePages;    i_67++    ){
        gHeapPages.mPages[i_67]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_68;
int n_69;
_Bool flag_70;
int i_71;
struct sMemHeaderTiny* it_72;
int n_73;
int i_74;
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(gComeGCLib) {
    }
    else {
        if(gComeDebugLib) {
            it_68=gAllocMem;
            n_69=0;
            while(it_68) {
                n_69++;
                flag_70=(_Bool)0;
                printf("#%d ",n_69);
                if(it_68->class_name) {
                    printf("%p (%s): ",(char*)it_68+sizeof(struct sMemHeader)+sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int),it_68->class_name);
                }
                for(                i_71=0;                i_71<16;                i_71++                ){
                    if(it_68->sname[i_71]) {
                        printf("%s %d #%d, ",it_68->sname[i_71],it_68->sline[i_71],it_68->id[i_71]);
                        flag_70=(_Bool)1;
                    }
                }
                if(flag_70) {
                    puts("");
                }
                it_68=it_68->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_69,gNumAlloc,gNumFree);
        }
        else {
            it_72=(struct sMemHeaderTiny*)gAllocMem;
            n_73=0;
            while(it_72) {
                n_73++;
                it_72=it_72->next;
            }
            if(n_73>0) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_73,gNumAlloc,gNumFree);
            }
        }
    }
    for(    i_74=0;    i_74<gHeapPages.mSizePages;    i_74++    ){
        free(gHeapPages.mPages[i_74]);
    }
    free(gHeapPages.mPages);
}

static void* alloc_from_pages(unsigned long unsigned  int size){
void* __result_obj__=(void*)0;
void* result_75;
unsigned long unsigned  int free_area_76;
int new_size_pages_77;
void** new_pages_78;
int i_79;
void* __result68__;
    result_75=((void*)0);
    if(size<2048*2) {
        if(gHeapPages.mFreeMem[size]) {
            result_75=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_75,0,size);
        }
        if(result_75==((void*)0)) {
            free_area_76=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(size>=free_area_76) {
                gHeapPages.mCurrentPages++;
                if(gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_77=gHeapPages.mSizePages*2;
                    new_pages_78=calloc(1,sizeof(char*)*new_size_pages_77);
                    i_79=0;
                    for(                    ;                    i_79<gHeapPages.mSizePages;                    i_79++                    ){
                        new_pages_78[i_79]=gHeapPages.mPages[i_79];
                    }
                    for(                    ;                    i_79<new_size_pages_77;                    i_79++                    ){
                        new_pages_78[i_79]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_78;
                    gHeapPages.mSizePages=new_size_pages_77;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_75=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_75=calloc(1,size);
    }
    __result68__ = gComeFunResultObject = __result_obj__ = result_75;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long unsigned  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_80;
struct sMemHeader* it_81;
void* __result69__;
void* result_82;
struct sMemHeaderTiny* it_83;
void* __result70__;
    if(gComeDebugLib) {
        result_80=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_81=result_80;
        it_81->allocated=177783;
        it_81->size=size+sizeof(struct sMemHeader);
        it_81->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(gNumComeStackFrame<16) {
            memcpy(it_81->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_81->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_81->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_81->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_81->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_81->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_81->next=gAllocMem;
        it_81->prev=((void*)0);
        if(class_name) {
            it_81->class_name=strdup(class_name);
        }
        else {
            it_81->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_81;
        }
        gAllocMem=it_81;
        gNumAlloc++;
        __result69__ = gComeFunResultObject = __result_obj__ = (char*)result_80+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    else {
        result_82=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_83=result_82;
        it_83->allocated=177783;
        it_83->size=size+sizeof(struct sMemHeaderTiny);
        it_83->free_next=((void*)0);
        it_83->next=(struct sMemHeaderTiny*)gAllocMem;
        it_83->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_83;
        }
        gAllocMem=(struct sMemHeader*)it_83;
        gNumAlloc++;
        __result70__ = gComeFunResultObject = __result_obj__ = (char*)result_82+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_84;
struct sMemHeader* prev_it_85;
struct sMemHeader* next_it_86;
unsigned long unsigned  int size_87;
struct sMemHeaderTiny* it_88;
struct sMemHeaderTiny* prev_it_89;
struct sMemHeaderTiny* next_it_90;
unsigned long unsigned  int size_91;
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_84=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(it_84->allocated!=177783) {
                    return;
                }
                it_84->allocated=0;
                prev_it_85=it_84->prev;
                next_it_86=it_84->next;
                if(it_84->class_name) {
                    free(it_84->class_name);
                }
                if(gAllocMem==it_84) {
                    gAllocMem=next_it_86;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_85) {
                        prev_it_85->next=next_it_86;
                    }
                    if(next_it_86) {
                        next_it_86->prev=prev_it_85;
                    }
                }
                size_87=it_84->size;
                if(size_87<2048*2) {
                    if(gHeapPages.mFreeMem[size_87]==((void*)0)) {
                        it_84->free_next=((void*)0);
                        gHeapPages.mFreeMem[size_87]=(struct sMemHeaderTiny*)it_84;
                    }
                    else {
                        it_84->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_87];
                        gHeapPages.mFreeMem[size_87]=(struct sMemHeaderTiny*)it_84;
                    }
                }
                else {
                    free(it_84);
                }
                gNumFree++;
            }
            else {
                it_88=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(it_88->allocated!=177783) {
                    return;
                }
                it_88->allocated=0;
                prev_it_89=it_88->prev;
                next_it_90=it_88->next;
                if(gAllocMem==it_88) {
                    gAllocMem=(struct sMemHeader*)next_it_90;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_89) {
                        prev_it_89->next=next_it_90;
                    }
                    if(next_it_90) {
                        next_it_90->prev=prev_it_89;
                    }
                }
                size_91=it_88->size;
                if(size_91<2048*2) {
                    if(gHeapPages.mFreeMem[size_91]==((void*)0)) {
                        it_88->free_next=((void*)0);
                        gHeapPages.mFreeMem[size_91]=it_88;
                    }
                    else {
                        it_88->free_next=gHeapPages.mFreeMem[size_91];
                        gHeapPages.mFreeMem[size_91]=it_88;
                    }
                }
                else {
                    free(it_88);
                }
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_92;
char* __result71__;
    it_92=(struct sMemHeader*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int)-sizeof(struct sMemHeaderTiny));
    if(it_92->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_92);
        exit(2);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = it_92->class_name;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_93;
unsigned long unsigned  int* ref_count_94;
unsigned long unsigned  int* size2_95;
void* __result72__;
    mem_93=come_alloc_mem_from_heap_pool(sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int)+count*size,sname,sline,class_name);
    ref_count_94=(unsigned long unsigned  int*)mem_93;
    *ref_count_94=0;
    size2_95=(unsigned long unsigned  int*)(mem_93+sizeof(unsigned long unsigned  int));
    *size2_95=size*count+sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int);
    __result72__ = gComeFunResultObject = __result_obj__ = mem_93+sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

void come_free_object(void* mem){
unsigned long unsigned  int* ref_count_96;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_96=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    come_free_mem_of_heap_pool((char*)ref_count_96);
}

void come_free(void* mem){
unsigned long unsigned  int* ref_count_97;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_97=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    come_free_mem_of_heap_pool((char*)ref_count_97);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result73__;
char* mem_98;
unsigned long unsigned  int* size_p_99;
unsigned long unsigned  int size_100;
void* result_101;
void* __result74__;
    if(!block) {
        __result73__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    mem_98=(char*)block-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int);
    size_p_99=(unsigned long unsigned  int*)(mem_98+sizeof(unsigned long unsigned  int));
    size_100=*size_p_99-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int);
    result_101=come_calloc(1,size_100,sname,sline,class_name);
    memcpy(result_101,block,size_100);
    __result74__ = gComeFunResultObject = __result_obj__ = result_101;
    gComeFunResultObject = (void*)0;
    return __result74__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result75__;
unsigned long unsigned  int* ref_count_102;
void* __result76__;
    if(mem==((void*)0)) {
        __result75__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    ref_count_102=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    (*ref_count_102)++;
    __result76__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result76__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result77__;
unsigned long unsigned  int* ref_count_103;
void* __result78__;
    if(mem==((void*)0)) {
        __result77__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    ref_count_103=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    printf("ref_count %ld\n",*ref_count_103);
    __result78__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result79__;
unsigned long unsigned  int* ref_count_104;
unsigned long unsigned  int count_105;
void (*finalizer_106)(void*);
void* __result80__;
void* __result81__;
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    ref_count_104=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    if(!no_decrement) {
        (*ref_count_104)--;
    }
    count_105=*ref_count_104;
    if(!no_free&&(count_105<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_106=protocol_fun;
            finalizer_106(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result82__;
void* __result83__;
unsigned long unsigned  int* ref_count_107;
unsigned long unsigned  int count_108;
void (*finalizer_109)(void*);
void* __result84__;
void* __result85__;
memset(&finalizer_109, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            __result82__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result82__;
        }
    }
    if(mem==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    ref_count_107=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    if(!no_decrement) {
        (*ref_count_107)--;
    }
    count_108=*ref_count_107;
    if(!no_free&&(count_108<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_109=protocol_fun;
            finalizer_109(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result84__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result85__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_110)(void*);
void (*finalizer_111)(void*);
unsigned long unsigned  int* ref_count_112;
unsigned long unsigned  int count_113;
void (*finalizer_114)(void*);
void (*finalizer_115)(void*);
memset(&finalizer_110, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_110=protocol_fun;
                finalizer_110(protocol_obj);
            }
            finalizer_111=fun;
            finalizer_111(mem);
        }
    }
    else {
        ref_count_112=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
        if(!no_decrement) {
            (*ref_count_112)--;
        }
        count_113=*ref_count_112;
        if(!no_free&&(count_113<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_114=protocol_fun;
                    finalizer_114(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_115=fun;
                    finalizer_115(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_116)(void*);
void (*finalizer_117)(void*);
unsigned long unsigned  int* ref_count_118;
unsigned long unsigned  int count_119;
void (*finalizer_120)(void*);
void (*finalizer_121)(void*);
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_120, 0, sizeof(void (*)(void*)));
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            return;
        }
    }
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_116=protocol_fun;
                finalizer_116(protocol_obj);
            }
            finalizer_117=fun;
            finalizer_117(mem);
        }
    }
    else {
        ref_count_118=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
        if(!no_decrement) {
            (*ref_count_118)--;
        }
        count_119=*ref_count_118;
        if(!no_free&&(count_119<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_120=protocol_fun;
                    finalizer_120(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_121=fun;
                    finalizer_121(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_122)(void*);
unsigned long unsigned  int* ref_count_123;
unsigned long unsigned  int count_124;
void (*finalizer_125)(void*);
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
memset(&finalizer_125, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            return;
        }
    }
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            finalizer_122=fun;
            finalizer_122(mem);
        }
    }
    else {
        ref_count_123=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
        if(!no_decrement) {
            (*ref_count_123)--;
        }
        count_124=*ref_count_123;
        if(!no_free&&(count_124<=0||force_delete_)) {
            if(mem) {
                if(fun) {
                    finalizer_125=fun;
                    finalizer_125(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result86__;
int len_126;
void* __right_value122 = (void*)0;
char* result_127;
char* __result87__;
    if(str==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    len_126=strlen(str)+1;
    result_127=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_126)), "libcomelang.c", 901, "char"));
    strncpy(result_127,str,len_126);
    __result87__ = gComeFunResultObject = __result_obj__ = result_127;
    result_127 = come_decrement_ref_count2(result_127, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_128;
int i_129;
    found_128=(_Bool)0;
    for(    i_129=0;    i_129<len;    i_129++    ){
        if(array[i_129]==element) {
            found_128=(_Bool)1;
            break;
        }
    }
    return found_128;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
char* __dec_obj15;
struct buffer* __result88__;
    self->size=128;
    __dec_obj15=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 926, "char"));
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

void buffer_finalize(struct buffer* self){
    if(self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
    if(self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result89__;
void* __right_value124 = (void*)0;
struct buffer* result_130;
void* __right_value125 = (void*)0;
char* __dec_obj16;
struct buffer* __result90__;
    if(self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_130=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 948, "buffer"));
    result_130->size=self->size;
    __dec_obj16=result_130->buf;
    result_130->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 951, "char"));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_130->len=self->len;
    memcpy(result_130->buf,self->buf,self->len);
    __result90__ = gComeFunResultObject = __result_obj__ = result_130;
    /*i*/come_call_finalizer3(result_130,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

int buffer_length(struct buffer* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size){
void* __result_obj__=(void*)0;
struct buffer* __result91__;
void* __right_value126 = (void*)0;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* __right_value127 = (void*)0;
char* __dec_obj17;
struct buffer* __result92__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf_131=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 990, "char"));
        memcpy(old_buf_131,self->buf,self->size);
        old_len_132=self->len;
        new_size_133=(self->size+size+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libcomelang.c", 994, "char"));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
        old_buf_131 = come_decrement_ref_count2(old_buf_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result93__;
void* __right_value128 = (void*)0;
char* old_buf_134;
int old_len_135;
int new_size_136;
void* __right_value129 = (void*)0;
char* __dec_obj18;
struct buffer* __result94__;
    if(self==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf_134=(char*)come_increment_ref_count(charp_clone(self->buf));
        old_len_135=self->len;
        new_size_136=(self->size+10+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_136)), "libcomelang.c", 1017, "char"));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_134,old_len_135);
        self->buf[old_len_135]=0;
        self->size=new_size_136;
        old_buf_134 = come_decrement_ref_count2(old_buf_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result95__;
int size_137;
void* __right_value130 = (void*)0;
char* old_buf_138;
int old_len_139;
int new_size_140;
void* __right_value131 = (void*)0;
char* __dec_obj19;
struct buffer* __result96__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    size_137=strlen(mem);
    if(self->len+size_137+1+1>=self->size) {
        old_buf_138=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 1039, "char"));
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_140)), "libcomelang.c", 1043, "char"));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
        old_buf_138 = come_decrement_ref_count2(old_buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result97__;
int size_141;
void* __right_value132 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value133 = (void*)0;
char* __dec_obj20;
struct buffer* __result98__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result97__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    size_141=strlen(mem)+1;
    if(self->len+size_141+1+1+1>=self->size) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 1063, "char"));
        memcpy(old_buf_142,self->buf,self->size);
        old_len_143=self->len;
        new_size_144=(self->size+size_141+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_144)), "libcomelang.c", 1067, "char"));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        old_buf_142 = come_decrement_ref_count2(old_buf_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_141);
    self->len+=size_141;
    self->buf[self->len]=0;
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result99__;
int* mem_145;
int size_146;
void* __right_value134 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value135 = (void*)0;
char* __dec_obj21;
struct buffer* __result100__;
    if(self==((void*)0)) {
        __result99__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    mem_145=&value;
    size_146=sizeof(int);
    if(self->len+size_146+1+1>=self->size) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 1090, "char"));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_149)), "libcomelang.c", 1094, "char"));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        old_buf_147 = come_decrement_ref_count2(old_buf_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_145,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_150;
int size_151;
void* __right_value136 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value137 = (void*)0;
char* __dec_obj22;
struct buffer* __result101__;
    mem_150=&value;
    size_151=sizeof(long);
    if(self->len+size_151+1+1>=self->size) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 1113, "char"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj22=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_154)), "libcomelang.c", 1117, "char"));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        old_buf_152 = come_decrement_ref_count2(old_buf_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_150,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__=(void*)0;
struct buffer* __result102__;
short short* mem_155;
int size_156;
void* __right_value138 = (void*)0;
char* old_buf_157;
int old_len_158;
int new_size_159;
void* __right_value139 = (void*)0;
char* __dec_obj23;
struct buffer* __result103__;
    if(self==((void*)0)) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    mem_155=&value;
    size_156=sizeof(short short);
    if(self->len+size_156+1+1>=self->size) {
        old_buf_157=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang.c", 1140, "char"));
        memcpy(old_buf_157,self->buf,self->size);
        old_len_158=self->len;
        new_size_159=(self->size+size_156+1)*2;
        __dec_obj23=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_159)), "libcomelang.c", 1144, "char"));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_157,old_len_158);
        self->buf[old_len_158]=0;
        self->size=new_size_159;
        old_buf_157 = come_decrement_ref_count2(old_buf_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_155,size_156);
    self->len+=size_156;
    self->buf[self->len]=0;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result104__;
int len_160;
int new_size_161;
void* __right_value140 = (void*)0;
char* __dec_obj24;
int i_162;
struct buffer* __result105__;
    if(self==((void*)0)) {
        __result104__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    len_160=self->len;
    len_160=(len_160+3)&~3;
    if(len_160>=self->size) {
        new_size_161=(self->size+1+1)*2;
        __dec_obj24=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_161)), "libcomelang.c", 1168, "char"));
        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_161;
    }
    for(    i_162=self->len;    i_162<len_160;    i_162++    ){
        self->buf[i_162]=0;
    }
    self->len=len_160;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct buffer* result_163;
struct buffer* __result106__;
struct buffer* __result107__;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 1198, "buffer"))));
    if(self==((void*)0)) {
        __result106__ = gComeFunResultObject = __result_obj__ = result_163;
        /*i*/come_call_finalizer3(result_163,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    buffer_append_str(result_163,self);
    __result107__ = gComeFunResultObject = __result_obj__ = result_163;
    /*i*/come_call_finalizer3(result_163,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct buffer* result_164;
struct buffer* __result108__;
struct buffer* __result109__;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 1211, "buffer"))));
    if(self==((void*)0)) {
        __result108__ = gComeFunResultObject = __result_obj__ = result_164;
        /*i*/come_call_finalizer3(result_164,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    buffer_append_str(result_164,self);
    __result109__ = gComeFunResultObject = __result_obj__ = result_164;
    /*i*/come_call_finalizer3(result_164,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
char* __result110__;
void* __right_value146 = (void*)0;
char* __result111__;
    if(self==((void*)0)) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value145=__builtin_string("")));
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value146=__builtin_string(self->buf)));
    __right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short short self, short short right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long unsigned  int self, unsigned long unsigned  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool string_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool string_operator_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool string_operator_not_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)1;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)1;
            }
        }
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)1;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)1;
            }
        }
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
char* __result112__;
int len_165;
void* __right_value148 = (void*)0;
char* result_166;
char* __result113__;
    if(self==((void*)0)||right==((void*)0)) {
        __result112__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value147=__builtin_string("")));
        __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    len_165=strlen(self)+strlen(right);
    result_166=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_165+1)), "libcomelang.c", 1373, "char"));
    strncpy(result_166,self,len_165+1);
    strncat(result_166,right,len_165+1);
    __result113__ = gComeFunResultObject = __result_obj__ = result_166;
    result_166 = come_decrement_ref_count2(result_166, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
char* __result114__;
int len_167;
void* __right_value150 = (void*)0;
char* result_168;
char* __result115__;
    if(self==((void*)0)||right==((void*)0)) {
        __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value149=__builtin_string("")));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    len_167=strlen(self)+strlen(right);
    result_168=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_167+1)), "libcomelang.c", 1388, "char"));
    strncpy(result_168,self,len_167+1);
    strncat(result_168,right,len_167+1);
    __result115__ = gComeFunResultObject = __result_obj__ = result_168;
    result_168 = come_decrement_ref_count2(result_168, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
char* __result116__;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct buffer* buf_169;
int i_170;
void* __right_value154 = (void*)0;
char* __result117__;
    if(self==((void*)0)) {
        __result116__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value151=__builtin_string("")));
        __right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    buf_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 1401, "buffer"))));
    for(    i_170=0;    i_170<right;    i_170++    ){
        buffer_append_str(buf_169,self);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value154=buffer_to_string(buf_169)));
    /*i*/come_call_finalizer3(buf_169,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* __result118__;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct buffer* buf_171;
int i_172;
void* __right_value158 = (void*)0;
char* __result119__;
    if(self==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value155=__builtin_string("")));
        __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    buf_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 1415, "buffer"))));
    for(    i_172=0;    i_172<right;    i_172++    ){
        buffer_append_str(buf_171,self);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=buffer_to_string(buf_171)));
    /*i*/come_call_finalizer3(buf_171,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long unsigned  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int string_get_hash_key(char* value){
int result_173;
char* p_174;
    if(value==((void*)0)) {
        return 0;
    }
    result_173=0;
    p_174=value;
    while(*p_174) {
        result_173+=(*p_174);
        p_174++;
    }
    return result_173;
}

unsigned int charp_get_hash_key(char* value){
int result_175;
char* p_176;
    if(value==((void*)0)) {
        return 0;
    }
    result_175=0;
    p_176=value;
    while(*p_176) {
        result_175+=(*p_176);
        p_176++;
    }
    return result_175;
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long unsigned  int size_t_clone(unsigned long unsigned  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result120__;
void* __right_value159 = (void*)0;
char* __result121__;
    if(self==((void*)0)) {
        __result120__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    __result121__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string(self)));
    __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result122__;
void* __right_value160 = (void*)0;
char* __result123__;
    if(self==((void*)0)) {
        __result122__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    __result123__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value160=__builtin_string(self)));
    __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

_Bool xiswalpha(int c){
_Bool result_177;
    result_177=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_177;
}

_Bool xiswblank(int c){
    return c==32||c==9;
}

_Bool xiswdigit(int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_178;
    result_178=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_178;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_179;
    result_179=(c>=32&&c<=126);
    return result_179;
}

_Bool xiswascii(int c){
_Bool result_180;
    result_180=(c>=32&&c<=126);
    return result_180;
}

int string_length(char* str){
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
char* __result124__;
int len_181;
void* __right_value162 = (void*)0;
char* result_182;
int i_183;
char* __result125__;
    if(str==((void*)0)) {
        __result124__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=__builtin_string("")));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    len_181=strlen(str);
    result_182=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_181+1)), "libcomelang.c", 1632, "char"));
    for(    i_183=0;    i_183<len_181;    i_183++    ){
        result_182[i_183]=str[len_181-i_183-1];
    }
    result_182[len_181]=0;
    __result125__ = gComeFunResultObject = __result_obj__ = result_182;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
char* __result126__;
int len_184;
void* __right_value164 = (void*)0;
char* result_185;
int i_186;
char* __result127__;
    if(str==((void*)0)) {
        __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=__builtin_string("")));
        __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    len_184=strlen(str);
    result_185=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_184+1)), "libcomelang.c", 1649, "char"));
    for(    i_186=0;    i_186<len_184;    i_186++    ){
        result_185[i_186]=str[len_184-i_186-1];
    }
    result_185[len_184]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = result_185;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
char* __result128__;
int len_187;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
char* __result129__;
void* __right_value168 = (void*)0;
char* __result130__;
void* __right_value169 = (void*)0;
char* __result131__;
void* __right_value170 = (void*)0;
char* result_188;
char* __result132__;
    if(str==((void*)0)) {
        __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
        __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result128__;
    }
    len_187=strlen(str);
    if(head<0) {
        head+=len_187;
    }
    if(tail<0) {
        tail+=len_187+1;
    }
    if(head>tail) {
        __result129__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=string_reverse(((char*)(__right_value166=charp_substring(str,tail,head))))));
        __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_187) {
        tail=len_187;
    }
    if(head==tail) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string("")));
        __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(tail-head+1<1) {
        __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=__builtin_string("")));
        __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    result_188=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang.c", 1694, "char"));
    memcpy(result_188,str+head,tail-head);
    result_188[tail-head]=0;
    __result132__ = gComeFunResultObject = __result_obj__ = result_188;
    result_188 = come_decrement_ref_count2(result_188, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value171 = (void*)0;
char* __result133__;
int len_189;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
char* __result134__;
void* __right_value174 = (void*)0;
char* __result135__;
void* __right_value175 = (void*)0;
char* __result136__;
void* __right_value176 = (void*)0;
char* result_190;
char* __result137__;
    if(str==((void*)0)) {
        __result133__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=__builtin_string("")));
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    len_189=strlen(str);
    if(head<0) {
        head+=len_189;
    }
    if(tail<0) {
        tail+=len_189+1;
    }
    if(head>tail) {
        __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=string_reverse(((char*)(__right_value172=charp_substring(str,tail,head))))));
        __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_189) {
        tail=len_189;
    }
    if(head==tail) {
        __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value174=__builtin_string("")));
        __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    if(tail-head+1<1) {
        __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=__builtin_string("")));
        __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    result_190=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang.c", 1737, "char"));
    memcpy(result_190,str+head,tail-head);
    result_190[tail-head]=0;
    __result137__ = gComeFunResultObject = __result_obj__ = result_190;
    result_190 = come_decrement_ref_count2(result_190, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
char* __result138__;
int len_191;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
char* __result139__;
void* __right_value180 = (void*)0;
char* __result140__;
void* __right_value181 = (void*)0;
char* __result141__;
void* __right_value182 = (void*)0;
char* result_192;
char* __result142__;
    if(str==((void*)0)) {
        __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value177=__builtin_string("")));
        __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    len_191=strlen(str);
    if(head<0) {
        head+=len_191;
    }
    if(tail<0) {
        tail+=len_191+1;
    }
    if(head>tail) {
        __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=string_reverse(((char*)(__right_value178=charp_substring(str,tail,head))))));
        __right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_191) {
        tail=len_191;
    }
    if(head==tail) {
        __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    if(tail-head+1<1) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value181=__builtin_string("")));
        __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    result_192=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang.c", 1780, "char"));
    memcpy(result_192,str+head,tail-head);
    result_192[tail-head]=0;
    __result142__ = gComeFunResultObject = __result_obj__ = result_192;
    result_192 = come_decrement_ref_count2(result_192, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
char* __result143__;
int len_193;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
char* __result144__;
void* __right_value186 = (void*)0;
char* __result145__;
void* __right_value187 = (void*)0;
char* __result146__;
void* __right_value188 = (void*)0;
char* result_194;
char* __result147__;
    if(str==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value183=__builtin_string("")));
        __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    len_193=strlen(str);
    if(head<0) {
        head+=len_193;
    }
    if(tail<0) {
        tail+=len_193+1;
    }
    if(head>tail) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=string_reverse(((char*)(__right_value184=charp_substring(str,tail,head))))));
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_193) {
        tail=len_193;
    }
    if(head==tail) {
        __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("")));
        __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    if(tail-head+1<1) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value187=__builtin_string("")));
        __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    result_194=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang.c", 1823, "char"));
    memcpy(result_194,str+head,tail-head);
    result_194[tail-head]=0;
    __result147__ = gComeFunResultObject = __result_obj__ = result_194;
    result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value189 = (void*)0;
char* __result148__;
va_list args_195;
char* result_196;
int len_197;
void* __right_value190 = (void*)0;
char* __result149__;
void* __right_value191 = (void*)0;
char* result2_198;
char* __result150__;
memset(&args_195, 0, sizeof(va_list));
result_196 = (void*)0;
    if(msg==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value189=__builtin_string("")));
        __right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    __builtin_va_start(args_195,msg);
    len_197=vasprintf(&result_196,msg,args_195);
    __builtin_va_end(args_195);
    if(len_197<0) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=__builtin_string("")));
        __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result2_198=(char*)come_increment_ref_count(__builtin_string(result_196));
    free(result_196);
    __result150__ = gComeFunResultObject = __result_obj__ = result2_198;
    result2_198 = come_decrement_ref_count2(result2_198, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
char* __result151__;
int len_199;
void* __right_value193 = (void*)0;
char* __result152__;
void* __right_value194 = (void*)0;
char* __result153__;
void* __right_value195 = (void*)0;
char* sub_str_200;
void* __right_value196 = (void*)0;
char* __result154__;
    if(str==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value192=__builtin_string("")));
        __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    len_199=strlen(str);
    if(strcmp(str,"")==0) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string(str)));
        __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    if(head<0) {
        head+=len_199;
    }
    if(tail<0) {
        tail+=len_199+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string(str)));
        __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    if(tail>=len_199) {
        tail=len_199;
    }
    sub_str_200=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_200,string_length(sub_str_200)+1);
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value196=__builtin_string(str)));
    sub_str_200 = come_decrement_ref_count2(sub_str_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result155__;
int len_201;
void* __right_value198 = (void*)0;
char* __result156__;
void* __right_value199 = (void*)0;
char* __result157__;
void* __right_value200 = (void*)0;
char* sub_str_202;
void* __right_value201 = (void*)0;
char* __result158__;
    if(str==((void*)0)) {
        __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=__builtin_string("")));
        __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    len_201=strlen(str);
    if(strcmp(str,"")==0) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=__builtin_string(str)));
        __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    if(head<0) {
        head+=len_201;
    }
    if(tail<0) {
        tail+=len_201+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value199=__builtin_string(str)));
        __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    if(tail>=len_201) {
        tail=len_201;
    }
    sub_str_202=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_202,string_length(sub_str_202)+1);
    __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value201=__builtin_string(str)));
    sub_str_202 = come_decrement_ref_count2(sub_str_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value201 = come_decrement_ref_count2(__right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1charph* __result160__;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1charph* result_205;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct buffer* str_206;
int i_207;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1charph* __result162__;
    if(self==((void*)0)) {
        __result160__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value203=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang.c", 1934, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value203,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    result_205=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang.c", 1937, "list$1charph"))));
    str_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 1939, "buffer"))));
    for(    i_207=0;    i_207<charp_length(self);    i_207++    ){
        if(self[i_207]==c) {
            list$1charph_push_back(result_205,(char*)come_increment_ref_count(__builtin_string(str_206->buf)));
            buffer_reset(str_206);
        }
        else {
            buffer_append_char(str_206,self[i_207]);
        }
    }
    if(buffer_length(str_206)!=0) {
        list$1charph_push_back(result_205,(char*)come_increment_ref_count(__builtin_string(str_206->buf)));
    }
    __result162__ = gComeFunResultObject = __result_obj__ = result_205;
    /*i*/come_call_finalizer3(result_205,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_206,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result159__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_203;
struct list_item$1charph* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        /*i*/come_call_finalizer3(prev_it_204,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj25;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj25=self->item;
            __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_208;
char* __dec_obj26;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_209;
char* __dec_obj27;
void* __right_value210 = (void*)0;
struct list_item$1charph* litem_210;
char* __dec_obj28;
struct list$1charph* __result161__;
    if(self->len==0) {
        litem_208=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        __dec_obj26=litem_208->item;
        litem_208->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_208;
        self->head=litem_208;
    }
    else {
        if(self->len==1) {
            litem_209=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_209->prev=self->head;
            litem_209->next=((void*)0);
            __dec_obj27=litem_209->item;
            litem_209->item=(char*)come_increment_ref_count(item);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_209;
            self->head->next=litem_209;
        }
        else {
            litem_210=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value210=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_210->prev=self->tail;
            litem_210->next=((void*)0);
            __dec_obj28=litem_210->item;
            litem_210->item=(char*)come_increment_ref_count(item);
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_210;
            self->tail=litem_210;
        }
    }
    self->len++;
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1charph* __result163__;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1charph* result_211;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct buffer* str_212;
int i_213;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1charph* __result164__;
    if(self==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value214=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang.c", 1960, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value214,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_211=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang.c", 1963, "list$1charph"))));
    str_212=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 1965, "buffer"))));
    for(    i_213=0;    i_213<charp_length(self);    i_213++    ){
        if(self[i_213]==c) {
            list$1charph_push_back(result_211,(char*)come_increment_ref_count(__builtin_string(str_212->buf)));
            buffer_reset(str_212);
        }
        else {
            buffer_append_char(str_212,self[i_213]);
        }
    }
    if(buffer_length(str_212)!=0) {
        list$1charph_push_back(result_211,(char*)come_increment_ref_count(__builtin_string(str_212->buf)));
    }
    __result164__ = gComeFunResultObject = __result_obj__ = result_211;
    /*i*/come_call_finalizer3(result_211,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result165__;
char* p_214;
void* __right_value222 = (void*)0;
char* __result166__;
void* __right_value223 = (void*)0;
char* __result167__;
void* __right_value224 = (void*)0;
char* __result168__;
    if(path==((void*)0)) {
        __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=__builtin_string("")));
        __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    p_214=path+strlen(path);
    while(p_214>=path) {
        if(*p_214==47) {
            break;
        }
        else {
            p_214--;
        }
    }
    if(p_214<path) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=__builtin_string(path)));
        __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    else {
        __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=__builtin_string(p_214+1)));
        __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=__builtin_string("")));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
char* __result169__;
void* __right_value226 = (void*)0;
char* path2_215;
char* p_216;
void* __right_value227 = (void*)0;
char* __result170__;
void* __right_value228 = (void*)0;
char* __result171__;
void* __right_value229 = (void*)0;
char* __result172__;
    if(path==((void*)0)) {
        __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=__builtin_string("")));
        __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    path2_215=(char*)come_increment_ref_count(xbasename(path));
    p_216=path2_215+strlen(path2_215);
    while(p_216>=path2_215) {
        if(*p_216==46) {
            break;
        }
        else {
            p_216--;
        }
    }
    if(p_216<path2_215) {
        __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(path2_215)));
        path2_215 = come_decrement_ref_count2(path2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    else {
        __result171__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=string_substring(path2_215,0,p_216-path2_215)));
        path2_215 = come_decrement_ref_count2(path2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value229=__builtin_string("")));
    path2_215 = come_decrement_ref_count2(path2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
char* __result173__;
char* p_217;
void* __right_value231 = (void*)0;
char* __result174__;
void* __right_value232 = (void*)0;
char* __result175__;
void* __right_value233 = (void*)0;
char* __result176__;
    if(path==((void*)0)) {
        __result173__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=__builtin_string("")));
        __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    p_217=path+strlen(path);
    while(p_217>=path) {
        if(*p_217==46) {
            break;
        }
        else {
            p_217--;
        }
    }
    if(p_217<path) {
        __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value231=__builtin_string(path)));
        __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    else {
        __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value232=__builtin_string(p_217+1)));
        __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=__builtin_string("")));
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result177__;
void* __right_value235 = (void*)0;
char* __result178__;
    if(self) {
        __result177__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("true")));
        __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    else {
        __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=__builtin_string("false")));
        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value236 = (void*)0;
char* __result179__;
    __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value236=xsprintf("%c",self)));
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* short_to_string(short short self){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
char* __result180__;
    __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=xsprintf("%d",self)));
    __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
char* __result181__;
    __result181__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=xsprintf("%d",self)));
    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=xsprintf("%ld",self)));
    __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* size_t_to_string(unsigned long unsigned  int self){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
char* __result183__;
    __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value240=xsprintf("%ld",self)));
    __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
char* __result184__;
    __result184__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=xsprintf("%f",self)));
    __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
char* __result185__;
    __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value242=xsprintf("%lf",self)));
    __right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result186__;
void* __right_value244 = (void*)0;
char* __result187__;
    if(self==((void*)0)) {
        __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=__builtin_string("")));
        __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string(self)));
    __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* __result188__;
void* __right_value246 = (void*)0;
char* __result189__;
    if(self==((void*)0)) {
        __result188__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value245=__builtin_string("")));
        __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string(self)));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

int bool_compare(_Bool left, _Bool right){
    if(!left&&right) {
        return -1;
    }
    else {
        if(left&&right) {
            return 0;
        }
        else {
            if(!left&&!right) {
                return 0;
            }
            else {
                return 1;
            }
        }
    }
    return 0;
}

int char_compare(char left, char right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int short_compare(short short left, short short right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int int_compare(int left, int right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int long_compare(long left, long right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int size_t_compare(unsigned long unsigned  int left, unsigned long unsigned  int right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int float_compare(float left, float right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int double_compare(double left, double right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left,right);
}

char* FILE_read(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result190__;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct buffer* buf_218;
int size_220;
void* __right_value250 = (void*)0;
char* __result191__;
    if(f==((void*)0)) {
        __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    buf_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 2295, "buffer"))));
    while(1) {
        char buf2_219[1024];
        memset(&buf2_219, 0, sizeof(char)        *(1024)        );
        size_220=fread(buf2_219,1,1024,f);
        buffer_append(buf_218,buf2_219,size_220);
        if(size_220<1024) {
            break;
        }
    }
    __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=buffer_to_string(buf_218)));
    /*i*/come_call_finalizer3(buf_218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

int FILE_write(struct __sFILE* f, char* str){
    if(f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
int result_221;
    if(f==((void*)0)) {
        return -1;
    }
    result_221=fclose(f);
    if(result_221<0) {
        return result_221;
    }
    return result_221;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result192__;
va_list args_223;
int result_224;
struct __sFILE* __result193__;
struct __sFILE* __result194__;
memset(&args_223, 0, sizeof(va_list));
    if(f==((void*)0)||msg==((void*)0)) {
        __result192__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    char msg2_222[1024*2*2*2];
    memset(&msg2_222, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_223,msg);
    vsnprintf(msg2_222,1024*2*2*2,msg,args_223);
    __builtin_va_end(args_223);
    result_224=fprintf(f,"%s",msg2_222);
    if(result_224<0) {
        __result193__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    __result194__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result194__;
}

int string_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_225;
int result_226;
int result2_227;
f_225 = (void*)0;
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f_225=fopen(file_name,"a");
    }
    else {
        f_225=fopen(file_name,"w");
    }
    if(f_225==((void*)0)) {
        return -1;
    }
    result_226=fwrite(self,strlen(self),1,f_225);
    if(result_226<0) {
        return result_226;
    }
    result2_227=fclose(f_225);
    if(result2_227<0) {
        return result2_227;
    }
    return result_226;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_228;
int result_229;
int result2_230;
f_228 = (void*)0;
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f_228=fopen(file_name,"a");
    }
    else {
        f_228=fopen(file_name,"w");
    }
    if(f_228==((void*)0)) {
        return -1;
    }
    result_229=fwrite(self,strlen(self),1,f_228);
    if(result_229<0) {
        return result_229;
    }
    result2_230=fclose(f_228);
    if(result2_230<0) {
        return result2_230;
    }
    return result_229;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result195__;
struct __sFILE* f_231;
void* __right_value252 = (void*)0;
char* __result196__;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct buffer* buf_232;
int size_234;
void* __right_value255 = (void*)0;
char* result_235;
int result2_236;
void* __right_value256 = (void*)0;
char* __result197__;
char* __result198__;
    if(file_name==((void*)0)) {
        __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("")));
        __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    f_231=fopen(file_name,"r");
    if(f_231==((void*)0)) {
        __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("")));
        __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    buf_232=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 2435, "buffer"))));
    while(1) {
        char buf2_233[1024];
        memset(&buf2_233, 0, sizeof(char)        *(1024)        );
        size_234=fread(buf2_233,1,1024,f_231);
        buffer_append(buf_232,buf2_233,size_234);
        if(size_234<1024) {
            break;
        }
    }
    result_235=(char*)come_increment_ref_count(buffer_to_string(buf_232));
    result2_236=fclose(f_231);
    if(result2_236<0) {
        __result197__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_232,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    __result198__ = gComeFunResultObject = __result_obj__ = result_235;
    /*i*/come_call_finalizer3(buf_232,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
char* __result199__;
struct __sFILE* f_237;
void* __right_value258 = (void*)0;
char* __result200__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct buffer* buf_238;
int size_240;
void* __right_value261 = (void*)0;
char* result_241;
int result2_242;
void* __right_value262 = (void*)0;
char* __result201__;
char* __result202__;
    if(file_name==((void*)0)) {
        __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("")));
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    f_237=fopen(file_name,"r");
    if(f_237==((void*)0)) {
        __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value258=__builtin_string("")));
        __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    buf_238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang.c", 2472, "buffer"))));
    while(1) {
        char buf2_239[1024];
        memset(&buf2_239, 0, sizeof(char)        *(1024)        );
        size_240=fread(buf2_239,1,1024,f_237);
        buffer_append(buf_238,buf2_239,size_240);
        if(size_240<1024) {
            break;
        }
    }
    result_241=(char*)come_increment_ref_count(buffer_to_string(buf_238));
    result2_242=fclose(f_237);
    if(result2_242<0) {
        __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_238,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_241 = come_decrement_ref_count2(result_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    __result202__ = gComeFunResultObject = __result_obj__ = result_241;
    /*i*/come_call_finalizer3(buf_238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_241 = come_decrement_ref_count2(result_241, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1charph* result_243;
struct list$1charph* __result203__;
void* __right_value265 = (void*)0;
struct list$1charph* __result204__;
    result_243=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang.c", 2499, "list$1charph"))));
    if(f==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = result_243;
        /*i*/come_call_finalizer3(result_243,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    while(1) {
        char buf_244[1024];
        memset(&buf_244, 0, sizeof(char)        *(1024)        );
        if(fgets(buf_244,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_243,(char*)come_increment_ref_count(__builtin_string(buf_244)));
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_243;
    /*i*/come_call_finalizer3(result_243,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_245;
    if(path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_245=fopen(path,mode);
    if(f_245) {
        block(parent,f_245);
        fclose(f_245);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
char* __result205__;
void* __right_value267 = (void*)0;
char* __result206__;
    if(self==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value266=__builtin_string("")));
        __right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    puts(self);
    __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value267=__builtin_string(self)));
    __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
char* __result207__;
void* __right_value269 = (void*)0;
char* __result208__;
    if(self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value268=__builtin_string("")));
        __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    printf("%s",self);
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value269=__builtin_string(self)));
    __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
char* __result209__;
char* msg2_246;
va_list args_247;
void* __right_value271 = (void*)0;
char* __result210__;
msg2_246 = (void*)0;
memset(&args_247, 0, sizeof(va_list));
    if(self==((void*)0)) {
        __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=__builtin_string("")));
        __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    __builtin_va_start(args_247,self);
    vasprintf(&msg2_246,self,args_247);
    __builtin_va_end(args_247);
    printf("%s",msg2_246);
    free(msg2_246);
    __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value271=__builtin_string(self)));
    __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
char* __result211__;
char* msg2_248;
va_list args_249;
void* __right_value273 = (void*)0;
char* __result212__;
msg2_248 = (void*)0;
memset(&args_249, 0, sizeof(va_list));
    if(self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value272=__builtin_string("")));
        __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    __builtin_va_start(args_249,self);
    vasprintf(&msg2_248,self,args_249);
    __builtin_va_end(args_249);
    printf("%s",msg2_248);
    free(msg2_248);
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value273=__builtin_string(self)));
    __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
char* __result213__;
void* __right_value275 = (void*)0;
char* __result214__;
    if(self==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value274=__builtin_string("")));
        __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    puts(self);
    __result214__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value275=__builtin_string(self)));
    __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_250;
    for(    i_250=0;    i_250<self;    i_250++    ){
        block(parent,i_250);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result215__;
    self->value=value;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void integer_finalize(struct integer* self){
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* char_to_integer(char self){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct integer* __result216__;
    __result216__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value277=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2642, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct integer* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value279=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2647, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value279,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

struct integer* int_to_integer(int self){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct integer* __result218__;
    __result218__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value281=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2652, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value281,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct integer* __result219__;
    __result219__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value283=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2657, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value283,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(left->value<right->value) {
        return -1;
    }
    else {
        if(left->value>right->value) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

_Bool integer_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
    return self->value!=right->value;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct integer* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value285=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2692, "integer")),left->value+right->value)));
    /*g*/come_call_finalizer3(__right_value285,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct integer* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value287=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2697, "integer")),left->value-right->value)));
    /*g*/come_call_finalizer3(__right_value287,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct integer* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value289=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2702, "integer")),left->value*right->value)));
    /*g*/come_call_finalizer3(__right_value289,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct integer* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value291=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2707, "integer")),left->value/right->value)));
    /*g*/come_call_finalizer3(__right_value291,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct integer* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value293=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2712, "integer")),left->value%right->value)));
    /*g*/come_call_finalizer3(__right_value293,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct integer* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value295=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2717, "integer")),left->value<<right->value)));
    /*g*/come_call_finalizer3(__right_value295,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct integer* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value297=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2722, "integer")),left->value>>right->value)));
    /*g*/come_call_finalizer3(__right_value297,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct integer* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value299=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2727, "integer")),left->value>=right->value)));
    /*g*/come_call_finalizer3(__right_value299,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct integer* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value301=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2732, "integer")),left->value<=right->value)));
    /*g*/come_call_finalizer3(__right_value301,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct integer* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value303=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2737, "integer")),left->value<right->value)));
    /*g*/come_call_finalizer3(__right_value303,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct integer* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value305=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2742, "integer")),left->value>right->value)));
    /*g*/come_call_finalizer3(__right_value305,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct integer* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value307=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2747, "integer")),left->value&right->value)));
    /*g*/come_call_finalizer3(__right_value307,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct integer* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value309=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2752, "integer")),left->value^right->value)));
    /*g*/come_call_finalizer3(__right_value309,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct integer* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value311=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2757, "integer")),left->value|right->value)));
    /*g*/come_call_finalizer3(__right_value311,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct integer* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value313=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2762, "integer")),left->value&&right->value)));
    /*g*/come_call_finalizer3(__right_value313,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct integer* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value315=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang.c", 2767, "integer")),left->value||right->value)));
    /*g*/come_call_finalizer3(__right_value315,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

int assert_v2(int exp){
    if(exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

