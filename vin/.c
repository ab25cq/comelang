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
typedef unsigned int chtype;
typedef unsigned long unsigned  int mmask_t;
typedef unsigned char NCURSES_BOOL;
extern unsigned int acs_map[];
typedef struct screen SCREEN;
typedef struct _win_st WINDOW;
typedef unsigned int attr_t;
typedef int (*NCURSES_OUTC)(int);
typedef int (*NCURSES_WINDOW_CB)(struct _win_st*,void*);
typedef int (*NCURSES_SCREEN_CB)(struct screen*,void*);
extern struct _win_st* curscr;
extern struct _win_st* newscr;
extern struct _win_st* stdscr;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
struct anonymous_typeX13
{
    short short id;
    int x;
    int y;
    int z;
    unsigned long unsigned  int bstate;
};
typedef struct anonymous_typeX13 MEVENT;
struct accessx_descriptor
{
    unsigned int ad_name_offset;
    int ad_flags;
    int ad_pad[2];
};
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct fd_set
{
    int fds_bits[((((1024)%((sizeof(int)*8)))==0)?((1024)/((sizeof(int)*8))):(((1024)/((sizeof(int)*8)))+1))];
};
typedef struct fd_set fd_set;
typedef int suseconds_t;
typedef unsigned char uuid_t[16];
extern char* suboptarg;
struct fssearchblock;
struct searchstate;
extern int optreset;
struct pollfd
{
    int fd;
    short short events;
    short short revents;
};
typedef unsigned int nfds_t;
enum eMode { kEditMode
,kInsertMode
,kVisualMode
,kCommandMode
,kSearchMode
,kHorizonVisualMode
,kVerticalVisualMode
,kRewriteMode
,kShellMode
,kBinaryMode
};
struct list_item$1intph
{
    int* item;
    struct list_item$1intph* prev;
    struct list_item$1intph* next;
};
struct list$1intph
{
    struct list_item$1intph* head;
    struct list_item$1intph* tail;
    int len;
    struct list_item$1intph* it;
};
struct tuple3$3intintint
{
    int v1;
    int v2;
    int v3;
};
struct list_item$1tuple3$3intintintph
{
    struct tuple3$3intintint* item;
    struct list_item$1tuple3$3intintintph* prev;
    struct list_item$1tuple3$3intintintph* next;
};
struct list$1tuple3$3intintintph
{
    struct list_item$1tuple3$3intintintph* head;
    struct list_item$1tuple3$3intintintph* tail;
    int len;
    struct list_item$1tuple3$3intintintph* it;
};
struct list_item$1list$1intphph
{
    struct list$1intph* item;
    struct list_item$1list$1intphph* prev;
    struct list_item$1list$1intphph* next;
};
struct list$1list$1intphph
{
    struct list_item$1list$1intphph* head;
    struct list_item$1list$1intphph* tail;
    int len;
    struct list_item$1list$1intphph* it;
};
struct list_item$1list$1intph
{
    struct list$1int* item;
    struct list_item$1list$1intph* prev;
    struct list_item$1list$1intph* next;
};
struct list$1list$1intph
{
    struct list_item$1list$1intph* head;
    struct list_item$1list$1intph* tail;
    int len;
    struct list_item$1list$1intph* it;
};
struct map$2intlist$1list$1intphph
{
    int* keys;
    _Bool* item_existance;
    struct list$1list$1intph** items;
    int size;
    int len;
    struct list$1int* key_list;
    int it;
};
struct map$2inttuple3$3intintintph
{
    int* keys;
    _Bool* item_existance;
    struct tuple3$3intintint** items;
    int size;
    int len;
    struct list$1int* key_list;
    int it;
};
struct ViWin
{
    struct _win_st* win;
    struct list$1intph* texts;
    struct list$1int* texts_length;
    int y;
    int x;
    int width;
    int height;
    int id;
    void* vi;
    int cursorY;
    int cursorX;
    int scroll;
    struct tuple3$3intintint* returnPoint;
    struct list$1tuple3$3intintintph* returnPointStack;
    struct list$1list$1intphph* undo;
    struct list$1int* undoScroll;
    struct list$1int* undoCursorX;
    struct list$1int* undoCursorY;
    int undoIndex;
    char* fileName;
    _Bool writed;
    int visualModeHead;
    int visualModeHeadX;
    int visualModeHeadHorizonScroll;
    int visualModeHeadHorizonX;
    int visualModeHeadHorizonY;
    int visualModeHeadBefore;
    int visualModeTailCursorYBefore;
    int visualModeTailScrollBefore;
    int mRepeatFowardNextCharacterKind;
    int mRepeatFowardNextCharacter;
    struct list$1int* inputedKeys;
    struct list$1int* savedInputedKeys;
    _Bool autoInput;
    int digitInput;
    int autoInputIndex;
    _Bool pressedDot;
    struct map$2intlist$1list$1intphph* macro;
    int recordingMacroKey;
    struct list$1list$1intph* recordingMacro;
    struct list$1list$1intph* runningMacro;
    int runningMacroIndex1;
    int runningMacroIndex2;
    struct map$2inttuple3$3intintintph* mark;
    int visualModeHorizonHeadScroll;
    int visualModeHorizonHeadX;
    int visualModeHorizonHeadY;
    int visualModeVerticalHeadX;
    int visualModeVerticalHeadY;
    int visualModeVerticalLen;
    int visualModeVerticalStartY;
    int visualModeVerticalStartScroll;
    int visualModeVerticalStartX;
    _Bool visualModeVerticalInserting;
    _Bool pasteMode;
};
struct Vi;
struct list_item$1ViWinph
{
    struct ViWin* item;
    struct list_item$1ViWinph* prev;
    struct list_item$1ViWinph* next;
};
struct list$1ViWinph
{
    struct list_item$1ViWinph* head;
    struct list_item$1ViWinph* tail;
    int len;
    struct list_item$1ViWinph* it;
};
struct list_item$1lambda
{
    void (*item)(struct Vi*,int);
    struct list_item$1lambda* prev;
    struct list_item$1lambda* next;
};
struct list$1lambda
{
    struct list_item$1lambda* head;
    struct list_item$1lambda* tail;
    int len;
    struct list_item$1lambda* it;
};
struct Vi
{
    struct list$1ViWinph* wins;
    struct ViWin* activeWin;
    struct list$1lambda* events;
    _Bool appEnd;
    int mode;
    int toggleWin;
    struct list$1intph* yank;
    struct list$1intph* fileYank;
    int yankKind;
    int searchString[128];
    _Bool searchReverse;
    _Bool regexSearch;
    char commandString[128];
};
extern int gBinaryMode;
enum { kYankKindLine
,kYankKindNoLine
};
enum eRepeatForwardNextCharacter { kRFNCNone
,kRFNC1
,kRFNC2
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
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long unsigned  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]);
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48();
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
struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
void come_regex_finalize(struct come_regex* reg);
struct come_regex* come_regex_clone(struct come_regex* reg);
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* regex);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* charp_printable(char* str);
char* wchar_t_to_string(int wc);
char* wchar_tp_to_string(int* wstr);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wstring_equals(int* left, int* right);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
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
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
int* charp_to_wstring(char* str);
int* __builtin_wstring(char* str);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long unsigned  int xwcslen(int* wstr);
int baudrate();
int beep();
_Bool can_change_color();
int cbreak();
int clear();
int clearok(struct _win_st* anonymous_var_nameX1122, _Bool anonymous_var_nameX1123);
int clrtobot();
int clrtoeol();
int COLOR_PAIR(int anonymous_var_nameX1130);
int curs_set(int anonymous_var_nameX1140);
int def_prog_mode();
int def_shell_mode();
int delch();
void delscreen(struct screen* anonymous_var_nameX1142);
int delwin(struct _win_st* anonymous_var_nameX1143);
int echo();
int erase();
char erasechar();
void filter();
int flash();
int halfdelay(int anonymous_var_nameX1156);
_Bool has_colors();
_Bool has_ic();
_Bool has_il();
void idcok(struct _win_st* anonymous_var_nameX1159, _Bool anonymous_var_nameX1160);
int idlok(struct _win_st* anonymous_var_nameX1161, _Bool anonymous_var_nameX1162);
void immedok(struct _win_st* anonymous_var_nameX1163, _Bool anonymous_var_nameX1164);
_Bool isendwin();
_Bool is_linetouched(struct _win_st* anonymous_var_nameX1185, int anonymous_var_nameX1186);
_Bool is_wintouched(struct _win_st* anonymous_var_nameX1187);
char* keyname(int anonymous_var_nameX1188);
char killchar();
int leaveok(struct _win_st* anonymous_var_nameX1191, _Bool anonymous_var_nameX1192);
char* longname();
int meta(struct _win_st* anonymous_var_nameX1193, _Bool anonymous_var_nameX1194);
int move(int anonymous_var_nameX1195, int anonymous_var_nameX1196);
int mvdelch(int anonymous_var_nameX1224, int anonymous_var_nameX1225);
int mvwdelch(struct _win_st* anonymous_var_nameX1307, int anonymous_var_nameX1308, int anonymous_var_nameX1309);
int napms(int anonymous_var_nameX1377);
int nl();
int nocbreak();
int nodelay(struct _win_st* anonymous_var_nameX1387, _Bool anonymous_var_nameX1388);
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(struct _win_st* anonymous_var_nameX1389, _Bool anonymous_var_nameX1390);
int PAIR_NUMBER(int anonymous_var_nameX1398);
void qiflush();
int raw();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int anonymous_var_nameX1419, int (*anonymous_lambda_var_nameZ9)(struct _win_st*,int));
int savetty();
int setscrreg(int anonymous_var_nameX1431, int anonymous_var_nameX1432);
int syncok(struct _win_st* anonymous_var_nameX1460, _Bool anonymous_var_nameX1461);
unsigned int termattrs();
char* termname();
void timeout(int anonymous_var_nameX1462);
int touchline(struct _win_st* anonymous_var_nameX1463, int anonymous_var_nameX1464, int anonymous_var_nameX1465);
int touchwin(struct _win_st* anonymous_var_nameX1466);
int typeahead(int anonymous_var_nameX1467);
int untouchwin(struct _win_st* anonymous_var_nameX1469);
void use_env(_Bool anonymous_var_nameX1470);
void use_tioctl(_Bool anonymous_var_nameX1471);
int wclrtobot(struct _win_st* anonymous_var_nameX1540);
int wclrtoeol(struct _win_st* anonymous_var_nameX1541);
void wcursyncup(struct _win_st* anonymous_var_nameX1545);
int wdelch(struct _win_st* anonymous_var_nameX1546);
int werase(struct _win_st* anonymous_var_nameX1550);
int wmove(struct _win_st* anonymous_var_nameX1581, int anonymous_var_nameX1582, int anonymous_var_nameX1583);
int wsetscrreg(struct _win_st* anonymous_var_nameX1595, int anonymous_var_nameX1596, int anonymous_var_nameX1597);
void wsyncdown(struct _win_st* anonymous_var_nameX1600);
void wsyncup(struct _win_st* anonymous_var_nameX1601);
void wtimeout(struct _win_st* anonymous_var_nameX1602, int anonymous_var_nameX1603);
int wtouchln(struct _win_st* anonymous_var_nameX1604, int anonymous_var_nameX1605, int anonymous_var_nameX1606, int anonymous_var_nameX1607);
char* _nc_tiparm(int anonymous_var_nameX1611, const char* anonymous_var_nameX1612, ...);
int tigetflag(char* anonymous_var_nameX1613);
int tigetnum(char* anonymous_var_nameX1614);
char* tigetstr(char* anonymous_var_nameX1615);
char* tparm(char* anonymous_var_nameX1617, ...);
char* tiparm(const char* anonymous_var_nameX1618, ...);
char* tiparm_s(int anonymous_var_nameX1619, int anonymous_var_nameX1620, const char* anonymous_var_nameX1621, ...);
int getattrs(const struct _win_st* anonymous_var_nameX1622);
int getcurx(const struct _win_st* anonymous_var_nameX1623);
int getcury(const struct _win_st* anonymous_var_nameX1624);
int getbegx(const struct _win_st* anonymous_var_nameX1625);
int getbegy(const struct _win_st* anonymous_var_nameX1626);
int getmaxx(const struct _win_st* anonymous_var_nameX1627);
int getmaxy(const struct _win_st* anonymous_var_nameX1628);
int getparx(const struct _win_st* anonymous_var_nameX1629);
int getpary(const struct _win_st* anonymous_var_nameX1630);
char* keybound(int anonymous_var_nameX1637, int anonymous_var_nameX1638);
const char* curses_version();
int define_key(const char* anonymous_var_nameX1641, int anonymous_var_nameX1642);
int get_escdelay();
int key_defined(const char* anonymous_var_nameX1643);
int keyok(int anonymous_var_nameX1644, _Bool anonymous_var_nameX1645);
int set_escdelay(int anonymous_var_nameX1650);
int set_tabsize(int anonymous_var_nameX1651);
int use_extended_names(_Bool anonymous_var_nameX1652);
int use_legacy_coding(int anonymous_var_nameX1653);
void nofilter();
int addch(const unsigned int anonymous_var_nameX1680);
int addchnstr(const unsigned int* anonymous_var_nameX1681, int anonymous_var_nameX1682);
int addchstr(const unsigned int* anonymous_var_nameX1683);
int addnstr(const char* anonymous_var_nameX1684, int anonymous_var_nameX1685);
int addstr(const char* anonymous_var_nameX1686);
int attroff(int anonymous_var_nameX1687);
int attron(int anonymous_var_nameX1688);
int attrset(int anonymous_var_nameX1689);
int attr_get(unsigned int* anonymous_var_nameX1690, short short* anonymous_var_nameX1691, void* anonymous_var_nameX1692);
int attr_off(unsigned int anonymous_var_nameX1693, void* anonymous_var_nameX1694);
int attr_on(unsigned int anonymous_var_nameX1695, void* anonymous_var_nameX1696);
int attr_set(unsigned int anonymous_var_nameX1697, short short anonymous_var_nameX1698, void* anonymous_var_nameX1699);
int bkgd(unsigned int anonymous_var_nameX1700);
void bkgdset(unsigned int anonymous_var_nameX1701);
int border(unsigned int anonymous_var_nameX1702, unsigned int anonymous_var_nameX1703, unsigned int anonymous_var_nameX1704, unsigned int anonymous_var_nameX1705, unsigned int anonymous_var_nameX1706, unsigned int anonymous_var_nameX1707, unsigned int anonymous_var_nameX1708, unsigned int anonymous_var_nameX1709);
int box(struct _win_st* anonymous_var_nameX1710, unsigned int anonymous_var_nameX1711, unsigned int anonymous_var_nameX1712);
int chgat(int anonymous_var_nameX1713, unsigned int anonymous_var_nameX1714, short short anonymous_var_nameX1715, const void* anonymous_var_nameX1716);
int color_content(short short anonymous_var_nameX1717, short short* anonymous_var_nameX1718, short short* anonymous_var_nameX1719, short short* anonymous_var_nameX1720);
int color_set(short short anonymous_var_nameX1721, void* anonymous_var_nameX1722);
int copywin(const struct _win_st* anonymous_var_nameX1723, struct _win_st* anonymous_var_nameX1724, int anonymous_var_nameX1725, int anonymous_var_nameX1726, int anonymous_var_nameX1727, int anonymous_var_nameX1728, int anonymous_var_nameX1729, int anonymous_var_nameX1730, int anonymous_var_nameX1731);
int delay_output(int anonymous_var_nameX1732);
int deleteln();
struct _win_st* derwin(struct _win_st* anonymous_var_nameX1733, int anonymous_var_nameX1734, int anonymous_var_nameX1735, int anonymous_var_nameX1736, int anonymous_var_nameX1737);
int doupdate();
struct _win_st* dupwin(struct _win_st* anonymous_var_nameX1738);
int echochar(const unsigned int anonymous_var_nameX1739);
int endwin();
int flushinp();
unsigned int getbkgd(struct _win_st* anonymous_var_nameX1740);
int getch();
int getnstr(char* anonymous_var_nameX1741, int anonymous_var_nameX1742);
int getstr(char* anonymous_var_nameX1743);
struct _win_st* getwin(struct __sFILE* anonymous_var_nameX1744);
int hline(unsigned int anonymous_var_nameX1745, int anonymous_var_nameX1746);
unsigned int inch();
int inchnstr(unsigned int* anonymous_var_nameX1747, int anonymous_var_nameX1748);
int inchstr(unsigned int* anonymous_var_nameX1749);
struct _win_st* initscr();
int init_color(short short anonymous_var_nameX1750, short short anonymous_var_nameX1751, short short anonymous_var_nameX1752, short short anonymous_var_nameX1753);
int init_pair(short short anonymous_var_nameX1754, short short anonymous_var_nameX1755, short short anonymous_var_nameX1756);
int innstr(char* anonymous_var_nameX1757, int anonymous_var_nameX1758);
int insch(unsigned int anonymous_var_nameX1759);
int insdelln(int anonymous_var_nameX1760);
int insertln();
int insnstr(const char* anonymous_var_nameX1761, int anonymous_var_nameX1762);
int insstr(const char* anonymous_var_nameX1763);
int instr(char* anonymous_var_nameX1764);
int intrflush(struct _win_st* anonymous_var_nameX1765, _Bool anonymous_var_nameX1766);
int keypad(struct _win_st* anonymous_var_nameX1767, _Bool anonymous_var_nameX1768);
int mvaddch(int anonymous_var_nameX1769, int anonymous_var_nameX1770, const unsigned int anonymous_var_nameX1771);
int mvaddchnstr(int anonymous_var_nameX1772, int anonymous_var_nameX1773, const unsigned int* anonymous_var_nameX1774, int anonymous_var_nameX1775);
int mvaddchstr(int anonymous_var_nameX1776, int anonymous_var_nameX1777, const unsigned int* anonymous_var_nameX1778);
int mvaddnstr(int anonymous_var_nameX1779, int anonymous_var_nameX1780, const char* anonymous_var_nameX1781, int anonymous_var_nameX1782);
int mvaddstr(int anonymous_var_nameX1783, int anonymous_var_nameX1784, const char* anonymous_var_nameX1785);
int mvchgat(int anonymous_var_nameX1786, int anonymous_var_nameX1787, int anonymous_var_nameX1788, unsigned int anonymous_var_nameX1789, short short anonymous_var_nameX1790, const void* anonymous_var_nameX1791);
int mvcur(int anonymous_var_nameX1792, int anonymous_var_nameX1793, int anonymous_var_nameX1794, int anonymous_var_nameX1795);
int mvderwin(struct _win_st* anonymous_var_nameX1796, int anonymous_var_nameX1797, int anonymous_var_nameX1798);
int mvgetch(int anonymous_var_nameX1799, int anonymous_var_nameX1800);
int mvgetnstr(int anonymous_var_nameX1801, int anonymous_var_nameX1802, char* anonymous_var_nameX1803, int anonymous_var_nameX1804);
int mvgetstr(int anonymous_var_nameX1805, int anonymous_var_nameX1806, char* anonymous_var_nameX1807);
int mvhline(int anonymous_var_nameX1808, int anonymous_var_nameX1809, unsigned int anonymous_var_nameX1810, int anonymous_var_nameX1811);
unsigned int mvinch(int anonymous_var_nameX1812, int anonymous_var_nameX1813);
int mvinchnstr(int anonymous_var_nameX1814, int anonymous_var_nameX1815, unsigned int* anonymous_var_nameX1816, int anonymous_var_nameX1817);
int mvinchstr(int anonymous_var_nameX1818, int anonymous_var_nameX1819, unsigned int* anonymous_var_nameX1820);
int mvinnstr(int anonymous_var_nameX1821, int anonymous_var_nameX1822, char* anonymous_var_nameX1823, int anonymous_var_nameX1824);
int mvinsch(int anonymous_var_nameX1825, int anonymous_var_nameX1826, unsigned int anonymous_var_nameX1827);
int mvinsnstr(int anonymous_var_nameX1828, int anonymous_var_nameX1829, const char* anonymous_var_nameX1830, int anonymous_var_nameX1831);
int mvinsstr(int anonymous_var_nameX1832, int anonymous_var_nameX1833, const char* anonymous_var_nameX1834);
int mvinstr(int anonymous_var_nameX1835, int anonymous_var_nameX1836, char* anonymous_var_nameX1837);
int mvprintw(int anonymous_var_nameX1838, int anonymous_var_nameX1839, const char* anonymous_var_nameX1840, ...);
int mvscanw(int anonymous_var_nameX1841, int anonymous_var_nameX1842, char* anonymous_var_nameX1843, ...);
int mvvline(int anonymous_var_nameX1844, int anonymous_var_nameX1845, unsigned int anonymous_var_nameX1846, int anonymous_var_nameX1847);
int mvwaddch(struct _win_st* anonymous_var_nameX1848, int anonymous_var_nameX1849, int anonymous_var_nameX1850, const unsigned int anonymous_var_nameX1851);
int mvwaddchnstr(struct _win_st* anonymous_var_nameX1852, int anonymous_var_nameX1853, int anonymous_var_nameX1854, const unsigned int* anonymous_var_nameX1855, int anonymous_var_nameX1856);
int mvwaddchstr(struct _win_st* anonymous_var_nameX1857, int anonymous_var_nameX1858, int anonymous_var_nameX1859, const unsigned int* anonymous_var_nameX1860);
int mvwaddnstr(struct _win_st* anonymous_var_nameX1861, int anonymous_var_nameX1862, int anonymous_var_nameX1863, const char* anonymous_var_nameX1864, int anonymous_var_nameX1865);
int mvwaddstr(struct _win_st* anonymous_var_nameX1866, int anonymous_var_nameX1867, int anonymous_var_nameX1868, const char* anonymous_var_nameX1869);
int mvwchgat(struct _win_st* anonymous_var_nameX1870, int anonymous_var_nameX1871, int anonymous_var_nameX1872, int anonymous_var_nameX1873, unsigned int anonymous_var_nameX1874, short short anonymous_var_nameX1875, const void* anonymous_var_nameX1876);
int mvwgetch(struct _win_st* anonymous_var_nameX1877, int anonymous_var_nameX1878, int anonymous_var_nameX1879);
int mvwgetnstr(struct _win_st* anonymous_var_nameX1880, int anonymous_var_nameX1881, int anonymous_var_nameX1882, char* anonymous_var_nameX1883, int anonymous_var_nameX1884);
int mvwgetstr(struct _win_st* anonymous_var_nameX1885, int anonymous_var_nameX1886, int anonymous_var_nameX1887, char* anonymous_var_nameX1888);
int mvwhline(struct _win_st* anonymous_var_nameX1889, int anonymous_var_nameX1890, int anonymous_var_nameX1891, unsigned int anonymous_var_nameX1892, int anonymous_var_nameX1893);
int mvwin(struct _win_st* anonymous_var_nameX1894, int anonymous_var_nameX1895, int anonymous_var_nameX1896);
unsigned int mvwinch(struct _win_st* anonymous_var_nameX1897, int anonymous_var_nameX1898, int anonymous_var_nameX1899);
int mvwinchnstr(struct _win_st* anonymous_var_nameX1900, int anonymous_var_nameX1901, int anonymous_var_nameX1902, unsigned int* anonymous_var_nameX1903, int anonymous_var_nameX1904);
int mvwinchstr(struct _win_st* anonymous_var_nameX1905, int anonymous_var_nameX1906, int anonymous_var_nameX1907, unsigned int* anonymous_var_nameX1908);
int mvwinnstr(struct _win_st* anonymous_var_nameX1909, int anonymous_var_nameX1910, int anonymous_var_nameX1911, char* anonymous_var_nameX1912, int anonymous_var_nameX1913);
int mvwinsch(struct _win_st* anonymous_var_nameX1914, int anonymous_var_nameX1915, int anonymous_var_nameX1916, unsigned int anonymous_var_nameX1917);
int mvwinsnstr(struct _win_st* anonymous_var_nameX1918, int anonymous_var_nameX1919, int anonymous_var_nameX1920, const char* anonymous_var_nameX1921, int anonymous_var_nameX1922);
int mvwinsstr(struct _win_st* anonymous_var_nameX1923, int anonymous_var_nameX1924, int anonymous_var_nameX1925, const char* anonymous_var_nameX1926);
int mvwinstr(struct _win_st* anonymous_var_nameX1927, int anonymous_var_nameX1928, int anonymous_var_nameX1929, char* anonymous_var_nameX1930);
int mvwprintw(struct _win_st* anonymous_var_nameX1931, int anonymous_var_nameX1932, int anonymous_var_nameX1933, const char* anonymous_var_nameX1934, ...);
int mvwscanw(struct _win_st* anonymous_var_nameX1935, int anonymous_var_nameX1936, int anonymous_var_nameX1937, char* anonymous_var_nameX1938, ...);
int mvwvline(struct _win_st* anonymous_var_nameX1939, int anonymous_var_nameX1940, int anonymous_var_nameX1941, unsigned int anonymous_var_nameX1942, int anonymous_var_nameX1943);
struct _win_st* newpad(int anonymous_var_nameX1944, int anonymous_var_nameX1945);
struct screen* newterm(char* anonymous_var_nameX1946, struct __sFILE* anonymous_var_nameX1947, struct __sFILE* anonymous_var_nameX1948);
struct _win_st* newwin(int anonymous_var_nameX1949, int anonymous_var_nameX1950, int anonymous_var_nameX1951, int anonymous_var_nameX1952);
int overlay(const struct _win_st* anonymous_var_nameX1953, struct _win_st* anonymous_var_nameX1954);
int overwrite(const struct _win_st* anonymous_var_nameX1955, struct _win_st* anonymous_var_nameX1956);
int pair_content(short short anonymous_var_nameX1957, short short* anonymous_var_nameX1958, short short* anonymous_var_nameX1959);
int pechochar(struct _win_st* anonymous_var_nameX1960, const unsigned int anonymous_var_nameX1961);
int pnoutrefresh(struct _win_st* anonymous_var_nameX1962, int anonymous_var_nameX1963, int anonymous_var_nameX1964, int anonymous_var_nameX1965, int anonymous_var_nameX1966, int anonymous_var_nameX1967, int anonymous_var_nameX1968);
int prefresh(struct _win_st* anonymous_var_nameX1969, int anonymous_var_nameX1970, int anonymous_var_nameX1971, int anonymous_var_nameX1972, int anonymous_var_nameX1973, int anonymous_var_nameX1974, int anonymous_var_nameX1975);
int printw(const char* anonymous_var_nameX1976, ...);
int putwin(struct _win_st* anonymous_var_nameX1977, struct __sFILE* anonymous_var_nameX1978);
int redrawwin(struct _win_st* anonymous_var_nameX1979);
int refresh();
int scanw(char* anonymous_var_nameX1980, ...);
int scr_dump(const char* anonymous_var_nameX1981);
int scr_init(const char* anonymous_var_nameX1982);
int scrl(int anonymous_var_nameX1983);
int scroll(struct _win_st* anonymous_var_nameX1984);
int scrollok(struct _win_st* anonymous_var_nameX1985, _Bool anonymous_var_nameX1986);
int scr_restore(const char* anonymous_var_nameX1987);
int scr_set(const char* anonymous_var_nameX1988);
struct screen* set_term(struct screen* anonymous_var_nameX1989);
int slk_attroff(const unsigned int anonymous_var_nameX1990);
int slk_attr_off(const unsigned int anonymous_var_nameX1991, void* anonymous_var_nameX1992);
int slk_attron(const unsigned int anonymous_var_nameX1993);
int slk_attr_on(unsigned int anonymous_var_nameX1994, void* anonymous_var_nameX1995);
int slk_attrset(const unsigned int anonymous_var_nameX1996);
unsigned int slk_attr();
int slk_attr_set(const unsigned int anonymous_var_nameX1997, short short anonymous_var_nameX1998, void* anonymous_var_nameX1999);
int slk_clear();
int slk_color(short short anonymous_var_nameX2000);
int slk_init(int anonymous_var_nameX2001);
char* slk_label(int anonymous_var_nameX2002);
int slk_noutrefresh();
int slk_refresh();
int slk_restore();
int slk_set(int anonymous_var_nameX2003, const char* anonymous_var_nameX2004, int anonymous_var_nameX2005);
int slk_touch();
int standout();
int standend();
int start_color();
struct _win_st* subpad(struct _win_st* anonymous_var_nameX2006, int anonymous_var_nameX2007, int anonymous_var_nameX2008, int anonymous_var_nameX2009, int anonymous_var_nameX2010);
struct _win_st* subwin(struct _win_st* anonymous_var_nameX2011, int anonymous_var_nameX2012, int anonymous_var_nameX2013, int anonymous_var_nameX2014, int anonymous_var_nameX2015);
int ungetch(int anonymous_var_nameX2016);
int vidattr(unsigned int anonymous_var_nameX2017);
int vidputs(unsigned int anonymous_var_nameX2018, int (*anonymous_var_nameX2019)(int));
int vline(unsigned int anonymous_var_nameX2020, int anonymous_var_nameX2021);
int vwprintw(struct _win_st* anonymous_var_nameX2022, const char* anonymous_var_nameX2023, va_list anonymous_var_nameX2024);
int vw_printw(struct _win_st* anonymous_var_nameX2025, const char* anonymous_var_nameX2026, va_list anonymous_var_nameX2027);
int vwscanw(struct _win_st* anonymous_var_nameX2028, char* anonymous_var_nameX2029, va_list anonymous_var_nameX2030);
int vw_scanw(struct _win_st* anonymous_var_nameX2031, char* anonymous_var_nameX2032, va_list anonymous_var_nameX2033);
int waddch(struct _win_st* anonymous_var_nameX2034, const unsigned int anonymous_var_nameX2035);
int waddchnstr(struct _win_st* anonymous_var_nameX2036, const unsigned int* anonymous_var_nameX2037, int anonymous_var_nameX2038);
int waddchstr(struct _win_st* anonymous_var_nameX2039, const unsigned int* anonymous_var_nameX2040);
int waddnstr(struct _win_st* anonymous_var_nameX2041, const char* anonymous_var_nameX2042, int anonymous_var_nameX2043);
int waddstr(struct _win_st* anonymous_var_nameX2044, const char* anonymous_var_nameX2045);
int wattron(struct _win_st* anonymous_var_nameX2046, int anonymous_var_nameX2047);
int wattroff(struct _win_st* anonymous_var_nameX2048, int anonymous_var_nameX2049);
int wattrset(struct _win_st* anonymous_var_nameX2050, int anonymous_var_nameX2051);
int wattr_get(struct _win_st* anonymous_var_nameX2052, unsigned int* anonymous_var_nameX2053, short short* anonymous_var_nameX2054, void* anonymous_var_nameX2055);
int wattr_on(struct _win_st* anonymous_var_nameX2056, unsigned int anonymous_var_nameX2057, void* anonymous_var_nameX2058);
int wattr_off(struct _win_st* anonymous_var_nameX2059, unsigned int anonymous_var_nameX2060, void* anonymous_var_nameX2061);
int wattr_set(struct _win_st* anonymous_var_nameX2062, unsigned int anonymous_var_nameX2063, short short anonymous_var_nameX2064, void* anonymous_var_nameX2065);
int wbkgd(struct _win_st* anonymous_var_nameX2066, unsigned int anonymous_var_nameX2067);
void wbkgdset(struct _win_st* anonymous_var_nameX2068, unsigned int anonymous_var_nameX2069);
int wborder(struct _win_st* anonymous_var_nameX2070, unsigned int anonymous_var_nameX2071, unsigned int anonymous_var_nameX2072, unsigned int anonymous_var_nameX2073, unsigned int anonymous_var_nameX2074, unsigned int anonymous_var_nameX2075, unsigned int anonymous_var_nameX2076, unsigned int anonymous_var_nameX2077, unsigned int anonymous_var_nameX2078);
int wchgat(struct _win_st* anonymous_var_nameX2079, int anonymous_var_nameX2080, unsigned int anonymous_var_nameX2081, short short anonymous_var_nameX2082, const void* anonymous_var_nameX2083);
int wclear(struct _win_st* anonymous_var_nameX2084);
int wcolor_set(struct _win_st* anonymous_var_nameX2085, short short anonymous_var_nameX2086, void* anonymous_var_nameX2087);
int wdeleteln(struct _win_st* anonymous_var_nameX2088);
int wechochar(struct _win_st* anonymous_var_nameX2089, const unsigned int anonymous_var_nameX2090);
int wgetch(struct _win_st* anonymous_var_nameX2091);
int wgetnstr(struct _win_st* anonymous_var_nameX2092, char* anonymous_var_nameX2093, int anonymous_var_nameX2094);
int wgetstr(struct _win_st* anonymous_var_nameX2095, char* anonymous_var_nameX2096);
int whline(struct _win_st* anonymous_var_nameX2097, unsigned int anonymous_var_nameX2098, int anonymous_var_nameX2099);
unsigned int winch(struct _win_st* anonymous_var_nameX2100);
int winchnstr(struct _win_st* anonymous_var_nameX2101, unsigned int* anonymous_var_nameX2102, int anonymous_var_nameX2103);
int winchstr(struct _win_st* anonymous_var_nameX2104, unsigned int* anonymous_var_nameX2105);
int winnstr(struct _win_st* anonymous_var_nameX2106, char* anonymous_var_nameX2107, int anonymous_var_nameX2108);
int winsch(struct _win_st* anonymous_var_nameX2109, unsigned int anonymous_var_nameX2110);
int winsdelln(struct _win_st* anonymous_var_nameX2111, int anonymous_var_nameX2112);
int winsertln(struct _win_st* anonymous_var_nameX2113);
int winsnstr(struct _win_st* anonymous_var_nameX2114, const char* anonymous_var_nameX2115, int anonymous_var_nameX2116);
int winsstr(struct _win_st* anonymous_var_nameX2117, const char* anonymous_var_nameX2118);
int winstr(struct _win_st* anonymous_var_nameX2119, char* anonymous_var_nameX2120);
int wnoutrefresh(struct _win_st* anonymous_var_nameX2121);
int wprintw(struct _win_st* anonymous_var_nameX2122, const char* anonymous_var_nameX2123, ...);
int wredrawln(struct _win_st* anonymous_var_nameX2124, int anonymous_var_nameX2125, int anonymous_var_nameX2126);
int wrefresh(struct _win_st* anonymous_var_nameX2127);
int wscanw(struct _win_st* anonymous_var_nameX2128, char* anonymous_var_nameX2129, ...);
int wscrl(struct _win_st* anonymous_var_nameX2130, int anonymous_var_nameX2131);
int wstandout(struct _win_st* anonymous_var_nameX2132);
int wstandend(struct _win_st* anonymous_var_nameX2133);
int wvline(struct _win_st* anonymous_var_nameX2134, unsigned int anonymous_var_nameX2135, int anonymous_var_nameX2136);
int putp(const char* anonymous_var_nameX2137);
_Bool is_term_resized(int anonymous_var_nameX2138, int anonymous_var_nameX2139);
int assume_default_colors(int anonymous_var_nameX2140, int anonymous_var_nameX2141);
int resize_term(int anonymous_var_nameX2142, int anonymous_var_nameX2143);
int resizeterm(int anonymous_var_nameX2144, int anonymous_var_nameX2145);
int use_default_colors();
int use_screen(struct screen* anonymous_var_nameX2146, int (*anonymous_var_nameX2147)(struct screen*,void*), void* anonymous_var_nameX2148);
int use_window(struct _win_st* anonymous_var_nameX2149, int (*anonymous_var_nameX2150)(struct _win_st*,void*), void* anonymous_var_nameX2151);
int wresize(struct _win_st* anonymous_var_nameX2152, int anonymous_var_nameX2153, int anonymous_var_nameX2154);
struct _win_st* wgetparent(const struct _win_st* anonymous_var_nameX2155);
_Bool is_cleared(const struct _win_st* anonymous_var_nameX2156);
_Bool is_idcok(const struct _win_st* anonymous_var_nameX2157);
_Bool is_idlok(const struct _win_st* anonymous_var_nameX2158);
_Bool is_immedok(const struct _win_st* anonymous_var_nameX2159);
_Bool is_keypad(const struct _win_st* anonymous_var_nameX2160);
_Bool is_leaveok(const struct _win_st* anonymous_var_nameX2161);
_Bool is_nodelay(const struct _win_st* anonymous_var_nameX2162);
_Bool is_notimeout(const struct _win_st* anonymous_var_nameX2163);
_Bool is_pad(const struct _win_st* anonymous_var_nameX2164);
_Bool is_scrollok(const struct _win_st* anonymous_var_nameX2165);
_Bool is_subwin(const struct _win_st* anonymous_var_nameX2166);
_Bool is_syncok(const struct _win_st* anonymous_var_nameX2167);
int wgetdelay(const struct _win_st* anonymous_var_nameX2168);
int wgetscrreg(const struct _win_st* anonymous_var_nameX2169, int* anonymous_var_nameX2170, int* anonymous_var_nameX2171);
_Bool has_mouse();
int getmouse(struct anonymous_typeX13* anonymous_var_nameX2172);
int ungetmouse(struct anonymous_typeX13* anonymous_var_nameX2173);
unsigned long unsigned  int mousemask(unsigned long unsigned  int anonymous_var_nameX2174, unsigned long unsigned  int* anonymous_var_nameX2175);
_Bool wenclose(const struct _win_st* anonymous_var_nameX2176, int anonymous_var_nameX2177, int anonymous_var_nameX2178);
int mouseinterval(int anonymous_var_nameX2179);
_Bool wmouse_trafo(const struct _win_st* anonymous_var_nameX2180, int* anonymous_var_nameX2181, int* anonymous_var_nameX2182, _Bool anonymous_var_nameX2183);
_Bool mouse_trafo(int* anonymous_var_nameX2184, int* anonymous_var_nameX2185, _Bool anonymous_var_nameX2186);
int mcprint(char* anonymous_var_nameX2187, int anonymous_var_nameX2188);
int has_key(int anonymous_var_nameX2189);
char* unctrl(unsigned int anonymous_var_nameX2190);
int getattrlistbulk(int anonymous_var_nameX2191, void* anonymous_var_nameX2192, void* anonymous_var_nameX2193, unsigned long unsigned  int anonymous_var_nameX2194, unsigned long unsigned  long anonymous_var_nameX2195);
int getattrlistat(int anonymous_var_nameX2196, const char* anonymous_var_nameX2197, void* anonymous_var_nameX2198, void* anonymous_var_nameX2199, unsigned long unsigned  int anonymous_var_nameX2200, unsigned long unsigned  int anonymous_var_nameX2201);
int setattrlistat(int anonymous_var_nameX2202, const char* anonymous_var_nameX2203, void* anonymous_var_nameX2204, void* anonymous_var_nameX2205, unsigned long unsigned  int anonymous_var_nameX2206, unsigned int anonymous_var_nameX2207);
long freadlink(int anonymous_var_nameX2208, char* anonymous_var_nameX2209, unsigned long unsigned  int anonymous_var_nameX2210);
int faccessat(int anonymous_var_nameX2211, const char* anonymous_var_nameX2212, int anonymous_var_nameX2213, int anonymous_var_nameX2214);
int fchownat(int anonymous_var_nameX2215, const char* anonymous_var_nameX2216, unsigned int anonymous_var_nameX2217, unsigned int anonymous_var_nameX2218, int anonymous_var_nameX2219);
int linkat(int anonymous_var_nameX2220, const char* anonymous_var_nameX2221, int anonymous_var_nameX2222, const char* anonymous_var_nameX2223, int anonymous_var_nameX2224);
long readlinkat(int anonymous_var_nameX2225, const char* anonymous_var_nameX2226, char* anonymous_var_nameX2227, unsigned long unsigned  int anonymous_var_nameX2228);
int symlinkat(const char* anonymous_var_nameX2229, int anonymous_var_nameX2230, const char* anonymous_var_nameX2231);
int unlinkat(int anonymous_var_nameX2232, const char* anonymous_var_nameX2233, int anonymous_var_nameX2234);
void _exit(int anonymous_var_nameX2235);
int access(const char* anonymous_var_nameX2236, int anonymous_var_nameX2237);
unsigned int alarm(unsigned int anonymous_var_nameX2238);
int chdir(const char* anonymous_var_nameX2239);
int chown(const char* anonymous_var_nameX2240, unsigned int anonymous_var_nameX2241, unsigned int anonymous_var_nameX2242);
int close(int anonymous_var_nameX2243);
int dup(int anonymous_var_nameX2244);
int dup2(int anonymous_var_nameX2245, int anonymous_var_nameX2246);
int execl(const char* __path, const char* __arg0, ...);
int execle(const char* __path, const char* __arg0, ...);
int execlp(const char* __file, const char* __arg0, ...);
int execv(const char* __path, char** __argv);
int execve(const char* __file, char** __argv, char** __envp);
int execvp(const char* __file, char** __argv);
int fork();
long fpathconf(int anonymous_var_nameX2247, int anonymous_var_nameX2248);
char* getcwd(char* anonymous_var_nameX2249, unsigned long unsigned  int anonymous_var_nameX2250);
unsigned int getegid();
unsigned int geteuid();
unsigned int getgid();
int getgroups(int anonymous_var_nameX2251, unsigned int anonymous_var_nameX2252[]);
char* getlogin();
int getpgrp();
int getpid();
int getppid();
unsigned int getuid();
int isatty(int anonymous_var_nameX2253);
int link(const char* anonymous_var_nameX2254, const char* anonymous_var_nameX2255);
long  long lseek(int anonymous_var_nameX2256, long  long anonymous_var_nameX2257, int anonymous_var_nameX2258);
long pathconf(const char* anonymous_var_nameX2259, int anonymous_var_nameX2260);
int pause();
int pipe(int anonymous_var_nameX2261[2]);
long read(int anonymous_var_nameX2262, void* anonymous_var_nameX2263, unsigned long unsigned  int anonymous_var_nameX2264);
int rmdir(const char* anonymous_var_nameX2265);
int setgid(unsigned int anonymous_var_nameX2266);
int setpgid(int anonymous_var_nameX2267, int anonymous_var_nameX2268);
int setsid();
int setuid(unsigned int anonymous_var_nameX2269);
unsigned int sleep(unsigned int anonymous_var_nameX2270);
long sysconf(int anonymous_var_nameX2271);
int tcgetpgrp(int anonymous_var_nameX2272);
int tcsetpgrp(int anonymous_var_nameX2273, int anonymous_var_nameX2274);
char* ttyname(int anonymous_var_nameX2275);
int ttyname_r(int anonymous_var_nameX2276, char* anonymous_var_nameX2277, unsigned long unsigned  int anonymous_var_nameX2278);
int unlink(const char* anonymous_var_nameX2279);
long write(int __fd, const void* __buf, unsigned long unsigned  int __nbyte);
unsigned long unsigned  int confstr(int anonymous_var_nameX2280, char* anonymous_var_nameX2281, unsigned long unsigned  int anonymous_var_nameX2282);
int getopt(int anonymous_var_nameX2283, char* anonymous_var_nameX2284[], const char* anonymous_var_nameX2285);
void* brk(const void* anonymous_var_nameX2286);
int chroot(const char* anonymous_var_nameX2287);
char* crypt(const char* anonymous_var_nameX2288, const char* anonymous_var_nameX2289);
void encrypt(char* anonymous_var_nameX2290, int anonymous_var_nameX2291);
int fchdir(int anonymous_var_nameX2292);
long gethostid();
int getpgid(int anonymous_var_nameX2293);
int getsid(int anonymous_var_nameX2294);
int getdtablesize();
int getpagesize();
char* getpass(const char* anonymous_var_nameX2295);
char* getwd(char* anonymous_var_nameX2296);
int lchown(const char* anonymous_var_nameX2297, unsigned int anonymous_var_nameX2298, unsigned int anonymous_var_nameX2299);
int lockf(int anonymous_var_nameX2300, int anonymous_var_nameX2301, long  long anonymous_var_nameX2302);
int nice(int anonymous_var_nameX2303);
long pread(int __fd, void* __buf, unsigned long unsigned  int __nbyte, long  long __offset);
long pwrite(int __fd, const void* __buf, unsigned long unsigned  int __nbyte, long  long __offset);
void* sbrk(int anonymous_var_nameX2304);
int setpgrp();
int setregid(unsigned int anonymous_var_nameX2305, unsigned int anonymous_var_nameX2306);
int setreuid(unsigned int anonymous_var_nameX2307, unsigned int anonymous_var_nameX2308);
void swab(const void* anonymous_var_nameX2309, void* anonymous_var_nameX2310, long anonymous_var_nameX2311);
void sync();
int truncate(const char* anonymous_var_nameX2312, long  long anonymous_var_nameX2313);
unsigned int ualarm(unsigned int anonymous_var_nameX2314, unsigned int anonymous_var_nameX2315);
int usleep(unsigned int anonymous_var_nameX2316);
int vfork();
int fsync(int anonymous_var_nameX2317);
int ftruncate(int anonymous_var_nameX2318, long  long anonymous_var_nameX2319);
int getlogin_r(char* anonymous_var_nameX2320, unsigned long unsigned  int anonymous_var_nameX2321);
int fchown(int anonymous_var_nameX2322, unsigned int anonymous_var_nameX2323, unsigned int anonymous_var_nameX2324);
int gethostname(char* anonymous_var_nameX2325, unsigned long unsigned  int anonymous_var_nameX2326);
long readlink(const char* anonymous_var_nameX2327, char* anonymous_var_nameX2328, unsigned long unsigned  int anonymous_var_nameX2329);
int setegid(unsigned int anonymous_var_nameX2330);
int seteuid(unsigned int anonymous_var_nameX2331);
int symlink(const char* anonymous_var_nameX2332, const char* anonymous_var_nameX2333);
int __darwin_check_fd_set_overflow(int anonymous_var_nameX2334, const void* anonymous_var_nameX2335, int anonymous_var_nameX2336);
int pselect(int anonymous_var_nameX2447, struct fd_set* anonymous_var_nameX2448, struct fd_set* anonymous_var_nameX2449, struct fd_set* anonymous_var_nameX2450, const struct timespec* anonymous_var_nameX2451, const unsigned int* anonymous_var_nameX2452);
int select(int anonymous_var_nameX2453, struct fd_set* anonymous_var_nameX2454, struct fd_set* anonymous_var_nameX2455, struct fd_set* anonymous_var_nameX2456, struct timeval* anonymous_var_nameX2457);
void _Exit(int anonymous_var_nameX2458);
int accessx_np(const struct accessx_descriptor* anonymous_var_nameX2459, unsigned long unsigned  int anonymous_var_nameX2460, int* anonymous_var_nameX2461, unsigned int anonymous_var_nameX2462);
int acct(const char* anonymous_var_nameX2463);
int add_profil(char* anonymous_var_nameX2464, unsigned long unsigned  int anonymous_var_nameX2465, unsigned long unsigned  int anonymous_var_nameX2466, unsigned int anonymous_var_nameX2467);
void endusershell();
int execvP(const char* __file, const char* __searchpath, char** __argv);
char* fflagstostr(unsigned long unsigned  int anonymous_var_nameX2468);
int getdomainname(char* anonymous_var_nameX2469, int anonymous_var_nameX2470);
int getgrouplist(const char* anonymous_var_nameX2471, int anonymous_var_nameX2472, int* anonymous_var_nameX2473, int* anonymous_var_nameX2474);
int gethostuuid(unsigned char anonymous_var_nameX2475[16], const struct timespec* anonymous_var_nameX2476);
unsigned short int getmode(const void* anonymous_var_nameX2477, unsigned short int anonymous_var_nameX2478);
int getpeereid(int anonymous_var_nameX2479, unsigned int* anonymous_var_nameX2480, unsigned int* anonymous_var_nameX2481);
int getsgroups_np(int* anonymous_var_nameX2482, unsigned char anonymous_var_nameX2483[16]);
char* getusershell();
int getwgroups_np(int* anonymous_var_nameX2484, unsigned char anonymous_var_nameX2485[16]);
int initgroups(const char* anonymous_var_nameX2486, int anonymous_var_nameX2487);
int issetugid();
char* mkdtemp(char* anonymous_var_nameX2488);
int mknod(const char* anonymous_var_nameX2489, unsigned short int anonymous_var_nameX2490, int anonymous_var_nameX2491);
int mkpath_np(const char* path, unsigned short int omode);
int mkpathat_np(int dfd, const char* path, unsigned short int omode);
int mkstemp(char* anonymous_var_nameX2492);
int mkstemps(char* anonymous_var_nameX2493, int anonymous_var_nameX2494);
char* mktemp(char* anonymous_var_nameX2495);
int mkostemp(char* path, int oflags);
int mkostemps(char* path, int slen, int oflags);
int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);
char* mkdtempat_np(int dfd, char* path);
int mkstempsat_np(int dfd, char* path, int slen);
int mkostempsat_np(int dfd, char* path, int slen, int oflags);
int nfssvc(int anonymous_var_nameX2496, void* anonymous_var_nameX2497);
int profil(char* anonymous_var_nameX2498, unsigned long unsigned  int anonymous_var_nameX2499, unsigned long unsigned  int anonymous_var_nameX2500, unsigned int anonymous_var_nameX2501);
int pthread_setugid_np(unsigned int anonymous_var_nameX2502, unsigned int anonymous_var_nameX2503);
int pthread_getugid_np(unsigned int* anonymous_var_nameX2504, unsigned int* anonymous_var_nameX2505);
int reboot(int anonymous_var_nameX2506);
int revoke(const char* anonymous_var_nameX2507);
int rcmd(char** anonymous_var_nameX2508, int anonymous_var_nameX2509, const char* anonymous_var_nameX2510, const char* anonymous_var_nameX2511, const char* anonymous_var_nameX2512, int* anonymous_var_nameX2513);
int rcmd_af(char** anonymous_var_nameX2514, int anonymous_var_nameX2515, const char* anonymous_var_nameX2516, const char* anonymous_var_nameX2517, const char* anonymous_var_nameX2518, int* anonymous_var_nameX2519, int anonymous_var_nameX2520);
int rresvport(int* anonymous_var_nameX2521);
int rresvport_af(int* anonymous_var_nameX2522, int anonymous_var_nameX2523);
int iruserok(unsigned long unsigned  int anonymous_var_nameX2524, int anonymous_var_nameX2525, const char* anonymous_var_nameX2526, const char* anonymous_var_nameX2527);
int iruserok_sa(const void* anonymous_var_nameX2528, int anonymous_var_nameX2529, int anonymous_var_nameX2530, const char* anonymous_var_nameX2531, const char* anonymous_var_nameX2532);
int ruserok(const char* anonymous_var_nameX2533, int anonymous_var_nameX2534, const char* anonymous_var_nameX2535, const char* anonymous_var_nameX2536);
int setdomainname(const char* anonymous_var_nameX2537, int anonymous_var_nameX2538);
int setgroups(int anonymous_var_nameX2539, const unsigned int* anonymous_var_nameX2540);
void sethostid(long anonymous_var_nameX2541);
int sethostname(const char* anonymous_var_nameX2542, int anonymous_var_nameX2543);
void setkey(const char* anonymous_var_nameX2544);
int setlogin(const char* anonymous_var_nameX2545);
void* setmode(const char* anonymous_var_nameX2546);
int setrgid(unsigned int anonymous_var_nameX2547);
int setruid(unsigned int anonymous_var_nameX2548);
int setsgroups_np(int anonymous_var_nameX2549, const unsigned char anonymous_var_nameX2550[16]);
void setusershell();
int setwgroups_np(int anonymous_var_nameX2551, const unsigned char anonymous_var_nameX2552[16]);
int strtofflags(char** anonymous_var_nameX2553, unsigned long unsigned  int* anonymous_var_nameX2554, unsigned long unsigned  int* anonymous_var_nameX2555);
int swapon(const char* anonymous_var_nameX2556);
int ttyslot();
int undelete(const char* anonymous_var_nameX2557);
int unwhiteout(const char* anonymous_var_nameX2558);
void* valloc(unsigned long unsigned  int anonymous_var_nameX2559);
int syscall(int anonymous_var_nameX2560, ...);
int getsubopt(char** anonymous_var_nameX2561, char** anonymous_var_nameX2562, char** anonymous_var_nameX2563);
int fgetattrlist(int anonymous_var_nameX2564, void* anonymous_var_nameX2565, void* anonymous_var_nameX2566, unsigned long unsigned  int anonymous_var_nameX2567, unsigned int anonymous_var_nameX2568);
int fsetattrlist(int anonymous_var_nameX2569, void* anonymous_var_nameX2570, void* anonymous_var_nameX2571, unsigned long unsigned  int anonymous_var_nameX2572, unsigned int anonymous_var_nameX2573);
int getattrlist(const char* anonymous_var_nameX2574, void* anonymous_var_nameX2575, void* anonymous_var_nameX2576, unsigned long unsigned  int anonymous_var_nameX2577, unsigned int anonymous_var_nameX2578);
int setattrlist(const char* anonymous_var_nameX2579, void* anonymous_var_nameX2580, void* anonymous_var_nameX2581, unsigned long unsigned  int anonymous_var_nameX2582, unsigned int anonymous_var_nameX2583);
int exchangedata(const char* anonymous_var_nameX2584, const char* anonymous_var_nameX2585, unsigned int anonymous_var_nameX2586);
int getdirentriesattr(int anonymous_var_nameX2587, void* anonymous_var_nameX2588, void* anonymous_var_nameX2589, unsigned long unsigned  int anonymous_var_nameX2590, unsigned int* anonymous_var_nameX2591, unsigned int* anonymous_var_nameX2592, unsigned int* anonymous_var_nameX2593, unsigned int anonymous_var_nameX2594);
int searchfs(const char* anonymous_var_nameX2595, struct fssearchblock* anonymous_var_nameX2596, unsigned long unsigned  int* anonymous_var_nameX2597, unsigned int anonymous_var_nameX2598, unsigned int anonymous_var_nameX2599, struct searchstate* anonymous_var_nameX2600);
int fsctl(const char* anonymous_var_nameX2601, unsigned long unsigned  int anonymous_var_nameX2602, void* anonymous_var_nameX2603, unsigned int anonymous_var_nameX2604);
int ffsctl(int anonymous_var_nameX2605, unsigned long unsigned  int anonymous_var_nameX2606, void* anonymous_var_nameX2607, unsigned int anonymous_var_nameX2608);
int fsync_volume_np(int anonymous_var_nameX2609, int anonymous_var_nameX2610);
int sync_volume_np(const char* anonymous_var_nameX2611, int anonymous_var_nameX2612);
int poll(struct pollfd* anonymous_var_nameX2613, unsigned int anonymous_var_nameX2614, int anonymous_var_nameX2615);
struct ViWin* ViWin_initialize_v1(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_user_finalize(struct ViWin* self);
void ViWin_view_v1(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v1(struct ViWin* self, struct Vi* nvi);
struct Vi* Vi_initialize_v1(struct Vi* self);
_Bool ViWin_equals(struct ViWin* left, struct ViWin* right);
int Vi_main_loop_v1(struct Vi* self);
void Vi_init_curses(struct Vi* self);
void ViWin_shellMode_v2(struct ViWin* self, struct Vi* nvi);
_Bool ViWin_pollCancel(struct ViWin* self);
void ViWin_insertModeView(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v3(struct ViWin* self, struct Vi* nvi);
void ViWin_insertText(struct ViWin* self, int* text);
void ViWin_enterNewLine(struct ViWin* self);
void ViWin_enterNewLine2(struct ViWin* self);
void ViWin_backSpace(struct ViWin* self);
void ViWin_backIndent(struct ViWin* self);
void ViWin_blinkBraceFoward(struct ViWin* self, int head, int tail, struct Vi* nvi);
void ViWin_blinkBraceEnd(struct ViWin* self, int head, int tail, struct Vi* nvi);
void ViWin_inputInsertMode(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v3(struct ViWin* self, struct Vi* nvi);
void ViWin_pushUndo_v3(struct ViWin* self);
void ViWin_writedFlagOn_v3(struct ViWin* self);
void ViWin_completion_v3(struct ViWin* self, struct Vi* nvi);
void ViWin_completion_neo_c2_v3(struct ViWin* self, struct Vi* nvi);
void ViWin_clearInputedKey_v3(struct ViWin* self);
void ViWin_saveInputedKey_v3(struct ViWin* self);
void ViWin_backwardWord_v3(struct ViWin* self);
void Vi_enterInsertMode_v3(struct Vi* self);
void Vi_enterInsertMode2_v3(struct Vi* self);
void Vi_exitFromInsertMode_v3(struct Vi* self);
struct Vi* Vi_initialize_v3(struct Vi* self);
int Vi_main_loop_v3(struct Vi* self);
void ViWin_forwardWord(struct ViWin* self);
void ViWin_forwardWord2(struct ViWin* self);
void ViWin_backwardWord_v4(struct ViWin* self);
struct Vi* Vi_initialize_v4(struct Vi* self);
struct ViWin* ViWin_initialize_v5(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_pushUndo_v5(struct ViWin* self);
void ViWin_redo(struct ViWin* self);
void ViWin_undo(struct ViWin* self);
struct Vi* Vi_initialize_v5(struct Vi* self);
void Vi_enterInsertMode_v5(struct Vi* self);
struct ViWin* ViWin_initialize_v6(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_statusBarView_v6(struct ViWin* self, struct Vi* nvi);
void ViWin_saveCursorPosition(struct ViWin* self, char* file_name);
void ViWin_readCursorPosition(struct ViWin* self, char* file_name);
void ViWin_openFile_v6(struct ViWin* self, char* file_name, int line_num, _Bool binary_mode);
void ViWin_makeTmpFile(struct ViWin* self);
void ViWin_deleteTmpFile(struct ViWin* self);
void ViWin_writeFile(struct ViWin* self, _Bool binary_mode);
void ViWin_writedFlagOn_v6(struct ViWin* self);
_Bool ViWin_saveDotToFile_v6(struct ViWin* self, struct Vi* nvi);
void Vi_openNewFile(struct Vi* self, char* file_name);
void Vi_closeActiveWin(struct Vi* self);
void Vi_exitFromApp_v6(struct Vi* self);
void Vi_toggleWin(struct Vi* self);
void Vi_nextWin(struct Vi* self);
void Vi_prevWin(struct Vi* self);
struct Vi* Vi_initialize_v6(struct Vi* self);
void Vi_repositionWindows_v6(struct Vi* self);
void Vi_saveLastOpenFile(struct Vi* self, char* file_name);
char* Vi_readLastOpenFile(struct Vi* self);
void Vi_openFile_v6(struct Vi* self, char* file_name, int line_num, _Bool binary_mode);
_Bool ViWin_saveYankToFile(struct ViWin* self, struct Vi* nvi);
_Bool ViWin_loadYankFromFile(struct ViWin* self, struct Vi* nvi);
_Bool ViWin_saveFileYankToFile(struct ViWin* self, struct Vi* nvi);
_Bool ViWin_loadFileYankFromFile(struct ViWin* self, struct Vi* nvi);
void ViWin_pasteAfterCursor(struct ViWin* self, struct Vi* nvi);
void ViWin_pasteBeforeCursor(struct ViWin* self, struct Vi* nvi);
void ViWin_filePasteAfterCursor(struct ViWin* self, struct Vi* nvi);
struct Vi* Vi_initialize_v7(struct Vi* self);
struct ViWin* ViWin_initialize_v8(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_visualModeView(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v8(struct ViWin* self, struct Vi* nvi);
void ViWin_yankOnVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_fileYankOnVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_indentVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_backIndentVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_changeCaseVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_joinVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_equalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_rewriteVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteOnVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_makeInputedKeyGVIndent_v8(struct ViWin* self, struct Vi* nvi);
void ViWin_makeInputedKeyGVDeIndent_v8(struct ViWin* self, struct Vi* nvi);
void ViWin_inputVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v8(struct ViWin* self, struct Vi* nvi);
void ViWin_restoreVisualMode_v8(struct ViWin* self, struct Vi* nvi);
void ViWin_gotoBraceEnd_v8(struct ViWin* self, struct Vi* nvi);
struct Vi* Vi_initialize_v8(struct Vi* self);
void Vi_enterVisualMode(struct Vi* self);
void Vi_exitFromVisualMode(struct Vi* self);
void ViWin_searchModeView(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v9(struct ViWin* self, struct Vi* nvi);
void ViWin_search(struct ViWin* self, struct Vi* nvi);
void ViWin_searchReverse(struct ViWin* self, struct Vi* nvi);
void ViWin_searchWordOnCursor(struct ViWin* self, struct Vi* nvi);
void ViWin_searchWordOnCursorReverse(struct ViWin* self, struct Vi* nvi);
void ViWin_inputSearchlMode(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v9(struct ViWin* self, struct Vi* nvi);
void Vi_saveSearchString(struct Vi* self, char* file_name);
void Vi_readSearchString(struct Vi* self, char* file_name);
void Vi_enterSearchMode_v9(struct Vi* self, _Bool regex_search, _Bool reverse);
void Vi_exitFromSearchMode(struct Vi* self);
struct Vi* Vi_initialize_v9(struct Vi* self);
struct ViWin* ViWin_initialize_v10(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_modifyCursorOnDeleting(struct ViWin* self);
void ViWin_deleteOneLine_v10(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteOneLine2(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteWord(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteForNextCharacter(struct ViWin* self);
void ViWin_deleteForNextCharacter2(struct ViWin* self);
void ViWin_deleteCursorCharactor(struct ViWin* self);
void ViWin_deleteBack(struct ViWin* self);
void ViWin_getCursorNumber(struct ViWin* self, int* head, int* tail);
void ViWin_incrementNumber(struct ViWin* self);
void ViWin_replaceCursorCharactor(struct ViWin* self);
void ViWin_deleteUntilTail(struct ViWin* self);
void ViWin_joinLines(struct ViWin* self);
void ViWin_yankOneLine(struct ViWin* self, struct Vi* nvi);
void ViWin_joinLines2_v10(struct ViWin* self);
void ViWin_forwardToNextCharacter1(struct ViWin* self, int key);
void ViWin_forwardToNextCharacter2(struct ViWin* self, int key);
void ViWin_repeatForwardNextCharacter(struct ViWin* self);
void ViWin_backwardToNextCharacter1(struct ViWin* self);
void ViWin_backwardToNextCharacter2(struct ViWin* self);
void ViWin_changeCase(struct ViWin* self);
void ViWin_moveToHead(struct ViWin* self);
struct Vi* Vi_initialize_v10(struct Vi* self);
void ViWin_toggleBraceForward(struct ViWin* self, int head, int tail);
void ViWin_toggleBraceBack(struct ViWin* self, int head, int tail);
void ViWin_toggleCommentForward(struct ViWin* self);
void ViWin_toggleCommentBackward(struct ViWin* self);
void ViWin_gotoBraceEnd_v11(struct ViWin* self, struct Vi* nvi);
void ViWin_gotoFunctionTop(struct ViWin* self, struct Vi* nvi);
void ViWin_gotoFunctionBottom(struct ViWin* self, struct Vi* nvi);
struct Vi* Vi_initialize_v11(struct Vi* self);
void ViWin_commandModeView(struct ViWin* self, struct Vi* nvi);
char* ViWin_selector(struct ViWin* self, struct list$1charph* lines);
void ViWin_fileCompetion(struct ViWin* self, struct Vi* nvi);
void ViWin_commandModeInput(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v12(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v12(struct ViWin* self, struct Vi* nvi);
void ViWin_subAllTextsFromCommandMode(struct ViWin* self, struct Vi* nvi);
void Vi_enterComandMode(struct Vi* self);
void Vi_exitFromComandMode(struct Vi* self);
struct Vi* Vi_initialize_v12(struct Vi* self);
int* ViWin_selector2(struct ViWin* self, struct list$1intph* lines);
void ViWin_completion_v13(struct ViWin* self, struct Vi* nvi);
void mreset_tty();
struct ViWin* ViWin_initialize_v14(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
_Bool ViWin_saveDotToFile_v14(struct ViWin* self, struct Vi* nvi);
_Bool ViWin_loadDotFromFile(struct ViWin* self, struct Vi* nvi);
int ViWin_getKey_v14(struct ViWin* self, _Bool head);
void ViWin_clearInputedKey_v14(struct ViWin* self);
void ViWin_saveInputedKeyOnTheMovingCursor_v14(struct ViWin* self);
void ViWin_saveInputedKey_v14(struct ViWin* self);
void ViWin_makeInputedKeyGVIndent_v14(struct ViWin* self, struct Vi* nvi);
void ViWin_makeInputedKeyGVDeIndent_v14(struct ViWin* self, struct Vi* nvi);
void ViWin_recordMacro(struct ViWin* self);
void ViWin_runMacro(struct ViWin* self);
struct Vi* Vi_initialize_v14(struct Vi* self);
struct ViWin* ViWin_initialize_v16(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_markAtCurrentPoint(struct ViWin* self, int c);
void ViWin_returnAtMarkedPoint(struct ViWin* self, int c);
void ViWin_returnBack(struct ViWin* self);
void ViWin_returnBackOfStack(struct ViWin* self);
struct Vi* Vi_initialize_v16(struct Vi* self);
struct ViWin* ViWin_initialize_v17(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_horizonVisualModeView(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v17(struct ViWin* self, struct Vi* nvi);
void ViWin_yankOnHorizonVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteOnHorizonVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_changeCaseHorizonVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_rewriteOnHorizonVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_inputHorizonVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v17(struct ViWin* self, struct Vi* nvi);
void Vi_enterHorizonVisualMode(struct Vi* self);
struct Vi* Vi_initialize_v17(struct Vi* self);
struct ViWin* ViWin_initialize_v18(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
void ViWin_verticalVisualModeView(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v18(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteOnVerticalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_deleteLinesOnVerticalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_changeCaseVerticalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_rewriteOnVerticalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_insertOnVerticalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_inputVerticalVisualMode(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v18(struct ViWin* self, struct Vi* nvi);
void Vi_enterVerticalVisualMode(struct Vi* self);
struct Vi* Vi_initialize_v18(struct Vi* self);
void ViWin_rewriteModeView(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v19(struct ViWin* self, struct Vi* nvi);
void ViWin_insertText2(struct ViWin* self, int* text);
void ViWin_inputRewritetMode(struct ViWin* self, struct Vi* nvi);
void ViWin_input_v19(struct ViWin* self, struct Vi* nvi);
void Vi_enterRewriteMode(struct Vi* self);
void Vi_exitFromRewiteMode(struct Vi* self);
struct Vi* Vi_initialize_v19(struct Vi* self);
int Vi_main_loop_v19(struct Vi* self);
struct Vi* Vi_initialize_v20(struct Vi* self);
void Vi_exitFromShellMode(struct Vi* self);
void ViWin_input_v20(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v20(struct ViWin* self, struct Vi* nvi);
void Vi_exitFromBinaryMode(struct Vi* self);
struct Vi* Vi_initialize_v21(struct Vi* self);
void Vi_enterBinaryMode(struct Vi* self);
void ViWin_input_v21(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v21(struct ViWin* self, struct Vi* nvi);
void ViWin_binaryModeView(struct ViWin* self, struct Vi* nvi);
int xgetmaxx();
int xgetmaxy();
int main(int argc, char** argv);
struct ViWin* ViWin_initialize_v2(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi);
static struct list$1tuple3$3intintintph* list$1tuple3$3intintintph_initialize(struct list$1tuple3$3intintintph* self);
static void list$1tuple3$3intintintphp_finalize(struct list$1tuple3$3intintintph* self);
static void list_item$1tuple3$3intintintphp_finalize(struct list_item$1tuple3$3intintintph* self);
static void list$1tuple3$3intintintph_finalize(struct list$1tuple3$3intintintph* self);
static void ViWin_finalize(struct ViWin* self);
static void list$1intph_finalize(struct list$1intph* self);
static void list_item$1intphp_finalize(struct list_item$1intph* self);
static void list$1intphp_finalize(struct list$1intph* self);
static void list$1int_finalize(struct list$1int* self);
static void tuple3$3intintintp_finalize(struct tuple3$3intintint* self);
static void list$1list$1intphph_finalize(struct list$1list$1intphph* self);
static void list_item$1list$1intphphp_finalize(struct list_item$1list$1intphph* self);
static void list$1list$1intphphp_finalize(struct list$1list$1intphph* self);
static void map$2intlist$1list$1intphph_finalize(struct map$2intlist$1list$1intphph* self);
static void list$1list$1intphp_finalize(struct list$1list$1intph* self);
static void list_item$1list$1intphp_finalize(struct list_item$1list$1intph* self);
static void map$2intlist$1list$1intphphp_finalize(struct map$2intlist$1list$1intphph* self);
static void list$1list$1intph_finalize(struct list$1list$1intph* self);
static void map$2inttuple3$3intintintph_finalize(struct map$2inttuple3$3intintintph* self);
static void map$2inttuple3$3intintintphp_finalize(struct map$2inttuple3$3intintintph* self);
void ViWin_textsView(struct ViWin* self, struct Vi* nvi);
static int list$1intph_length(struct list$1intph* self);
static int* list$1intph_item(struct list$1intph* self, int position, int* default_value);
static struct list$1intph* list$1intph_sublist(struct list$1intph* self, int begin, int tail);
static struct list$1intph* list$1intph_initialize(struct list$1intph* self);
static struct list$1intph* list$1intph_push_back(struct list$1intph* self, int* item);
static int* list$1intph_begin(struct list$1intph* self);
static _Bool list$1intph_end(struct list$1intph* self);
static int* list$1intph_next(struct list$1intph* self);
void ViWin_statusBarView_v2(struct ViWin* self, struct Vi* nvi);
void ViWin_view_v2(struct ViWin* self, struct Vi* nvi);
int ViWin_getKey_v2(struct ViWin* self, _Bool head);
void ViWin_input_v2(struct ViWin* self, struct Vi* nvi);
static void (*list$1lambda_item(struct list$1lambda* self, int position, void (*default_value)(struct Vi*,int)))(struct Vi*,int);
void ViWin_modifyUnderCursorYValue(struct ViWin* self);
void ViWin_modifyOverCursorYValue(struct ViWin* self);
void ViWin_modifyOverCursorXValue(struct ViWin* self);
static int list$1int_item(struct list$1int* self, int position, int default_value);
void ViWin_modifyOverCursorXValue2(struct ViWin* self);
void ViWin_modifyUnderCursorXValue(struct ViWin* self);
void ViWin_forward_v2(struct ViWin* self);
void ViWin_backward_v2(struct ViWin* self);
void ViWin_prevLine(struct ViWin* self);
void ViWin_nextLine(struct ViWin* self);
void ViWin_halfScrollUp(struct ViWin* self);
void ViWin_halfScrollDown(struct ViWin* self);
void ViWin_centeringCursor(struct ViWin* self);
void ViWin_topCursor(struct ViWin* self);
void ViWin_moveAtHead(struct ViWin* self);
void ViWin_moveAtHead2(struct ViWin* self);
void ViWin_moveAtTail(struct ViWin* self);
void ViWin_moveTop(struct ViWin* self);
void ViWin_restoreVisualMode_v2(struct ViWin* self, struct Vi* nvi);
void ViWin_keyG(struct ViWin* self, struct Vi* nvi);
void ViWin_moveBottom(struct ViWin* self);
void ViWin_openFile_v2(struct ViWin* self, char* file_name, int line_num, _Bool binary_mode);
void ViWin_saveReturnPoint(struct ViWin* self);
static struct tuple3$3intintint* tuple3$3intintintp_clone(struct tuple3$3intintint* self);
static void tuple3$3intintint_finalize(struct tuple3$3intintint* self);
static struct list$1tuple3$3intintintph* list$1tuple3$3intintintph_push_back(struct list$1tuple3$3intintintph* self, struct tuple3$3intintint* item);
void ViWin_saveInputedKeyOnTheMovingCursor_v2(struct ViWin* self);
void ViWin_joinLines2_v2(struct ViWin* self);
static void lambda1(struct Vi* self, int key);
static void lambda2(struct Vi* self, int key);
static void lambda3(struct Vi* self, int key);
static void lambda4(struct Vi* self, int key);
static void lambda5(struct Vi* self, int key);
static void lambda6(struct Vi* self, int key);
static void lambda7(struct Vi* self, int key);
static void lambda8(struct Vi* self, int key);
static void lambda9(struct Vi* self, int key);
static void lambda10(struct Vi* self, int key);
static void lambda11(struct Vi* self, int key);
static void lambda12(struct Vi* self, int key);
static void lambda13(struct Vi* self, int key);
static void lambda14(struct Vi* self, int key);
static void lambda15(struct Vi* self, int key);
static void lambda16(struct Vi* self, int key);
static void lambda17(struct Vi* self, int key);
static void lambda18(struct Vi* self, int key);
static void lambda19(struct Vi* self, int key);
static void lambda20(struct Vi* self, int key);
static void lambda21(struct Vi* self, int key);
static void lambda22(struct Vi* self, int key);
static void lambda23(struct Vi* self, int key);
static void lambda24(struct Vi* self, int key);
struct Vi* Vi_initialize_v2(struct Vi* self);
static struct list$1ViWinph* list$1ViWinph_initialize(struct list$1ViWinph* self);
static void list$1ViWinphp_finalize(struct list$1ViWinph* self);
static void list_item$1ViWinphp_finalize(struct list_item$1ViWinph* self);
static void list$1ViWinph_finalize(struct list$1ViWinph* self);
static struct list$1ViWinph* list$1ViWinph_push_back(struct list$1ViWinph* self, struct ViWin* item);
static struct ViWin* list$1ViWinphp_operator_load_element(struct list$1ViWinph* self, int position);
static struct list$1lambda* list$1lambda_initialize(struct list$1lambda* self);
static void list$1lambdap_finalize(struct list$1lambda* self);
static void list_item$1lambdap_finalize(struct list_item$1lambda* self);
static void list$1lambda_finalize(struct list$1lambda* self);
static struct list$1lambda* list$1lambda_push_back(struct list$1lambda* self, void (*item)(struct Vi*,int));
static struct list$1lambda* list$1lambda_replace(struct list$1lambda* self, int position, void (*item)(struct Vi*,int));
static void Vi_finalize(struct Vi* self);
void Vi_exitFromApp_v2(struct Vi* self);
void Vi_view(struct Vi* self);
static struct ViWin* list$1ViWinph_begin(struct list$1ViWinph* self);
static _Bool list$1ViWinph_end(struct list$1ViWinph* self);
static struct ViWin* list$1ViWinph_next(struct list$1ViWinph* self);
void Vi_clearView(struct Vi* self);
int Vi_main_loop_v2(struct Vi* self);
void Vi_openFile_v2(struct Vi* self, char* file_name, int line_num, _Bool binary_mode);
void Vi_repositionWindows_v2(struct Vi* self);
void Vi_enterSearchMode_v2(struct Vi* self, _Bool regex_search, _Bool search_reverse);
// uniq global variable

// source head3

// inline function
static inline _Bool die(char* msg){
    # 48 "/usr/local/include/comelang.h"
    perror(msg);
    # 49 "/usr/local/include/comelang.h"
    stackframe();
    # 50 "/usr/local/include/comelang.h"
    exit(4);
    # 52 "/usr/local/include/comelang.h"
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    # 2204 "/usr/local/include/comelang.h"
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2204, "buffer"))));
    # 2205 "/usr/local/include/comelang.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 2206 "/usr/local/include/comelang.h"
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
    # 2211 "/usr/local/include/comelang.h"
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2211, "buffer"))));
    # 2215 "/usr/local/include/comelang.h"
    for(    i_2=0;    i_2<len;    i_2++    ){
        # 2213 "/usr/local/include/comelang.h"
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    # 2215 "/usr/local/include/comelang.h"
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
    # 2220 "/usr/local/include/comelang.h"
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2220, "buffer"))));
    # 2221 "/usr/local/include/comelang.h"
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    # 2222 "/usr/local/include/comelang.h"
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
    # 2227 "/usr/local/include/comelang.h"
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2227, "buffer"))));
    # 2228 "/usr/local/include/comelang.h"
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    # 2229 "/usr/local/include/comelang.h"
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
    # 2234 "/usr/local/include/comelang.h"
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2234, "buffer"))));
    # 2235 "/usr/local/include/comelang.h"
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    # 2236 "/usr/local/include/comelang.h"
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
    # 2241 "/usr/local/include/comelang.h"
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2241, "buffer"))));
    # 2242 "/usr/local/include/comelang.h"
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    # 2243 "/usr/local/include/comelang.h"
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
    # 2248 "/usr/local/include/comelang.h"
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2248, "buffer"))));
    # 2249 "/usr/local/include/comelang.h"
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    # 2250 "/usr/local/include/comelang.h"
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
    # 2548 "/usr/local/include/comelang.h"
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
    # 2553 "/usr/local/include/comelang.h"
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
    # 2558 "/usr/local/include/comelang.h"
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
    # 2563 "/usr/local/include/comelang.h"
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
    # 2568 "/usr/local/include/comelang.h"
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
    # 2601 "/usr/local/include/comelang.h"
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2601, "buffer"))));
    # 2602 "/usr/local/include/comelang.h"
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    # 2603 "/usr/local/include/comelang.h"
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
    # 2608 "/usr/local/include/comelang.h"
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2608, "buffer"))));
    # 2609 "/usr/local/include/comelang.h"
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    # 2610 "/usr/local/include/comelang.h"
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
    # 2615 "/usr/local/include/comelang.h"
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2615, "buffer"))));
    # 2616 "/usr/local/include/comelang.h"
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    # 2617 "/usr/local/include/comelang.h"
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
    # 2622 "/usr/local/include/comelang.h"
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2622, "buffer"))));
    # 2623 "/usr/local/include/comelang.h"
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    # 2624 "/usr/local/include/comelang.h"
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
    # 2629 "/usr/local/include/comelang.h"
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2629, "buffer"))));
    # 2630 "/usr/local/include/comelang.h"
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    # 2631 "/usr/local/include/comelang.h"
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
    # 2636 "/usr/local/include/comelang.h"
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2636, "buffer"))));
    # 2637 "/usr/local/include/comelang.h"
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    # 2638 "/usr/local/include/comelang.h"
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
    # 2643 "/usr/local/include/comelang.h"
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2643, "buffer"))));
    # 2644 "/usr/local/include/comelang.h"
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    # 2645 "/usr/local/include/comelang.h"
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
    # 2650 "/usr/local/include/comelang.h"
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
    # 2655 "/usr/local/include/comelang.h"
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
    # 2660 "/usr/local/include/comelang.h"
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
    # 2665 "/usr/local/include/comelang.h"
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
    # 2670 "/usr/local/include/comelang.h"
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
    # 2675 "/usr/local/include/comelang.h"
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
    # 2680 "/usr/local/include/comelang.h"
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
    # 2685 "/usr/local/include/comelang.h"
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
    # 2690 "/usr/local/include/comelang.h"
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
    # 2695 "/usr/local/include/comelang.h"
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
    # 2700 "/usr/local/include/comelang.h"
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
    # 2705 "/usr/local/include/comelang.h"
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
    # 2710 "/usr/local/include/comelang.h"
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
    # 2715 "/usr/local/include/comelang.h"
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2715, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    # 2744 "/usr/local/include/comelang.h"
    return len;
}
static inline unsigned long unsigned  int shortpa_length(short short* self, unsigned long unsigned  int len){
    # 2749 "/usr/local/include/comelang.h"
    return len;
}
static inline unsigned long unsigned  int intpa_length(int* self, unsigned long unsigned  int len){
    # 2754 "/usr/local/include/comelang.h"
    return len;
}
static inline unsigned long unsigned  int longpa_length(long* self, unsigned long unsigned  int len){
    # 2759 "/usr/local/include/comelang.h"
    return len;
}
static inline unsigned long unsigned  int floatpa_length(float* self, unsigned long unsigned  int len){
    # 2764 "/usr/local/include/comelang.h"
    return len;
}
static inline unsigned long unsigned  int doublepa_length(double* self, unsigned long unsigned  int len){
    # 2769 "/usr/local/include/comelang.h"
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    # 2830 "/usr/local/include/comelang.h"
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    # 2835 "/usr/local/include/comelang.h"
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    # 2840 "/usr/local/include/comelang.h"
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
int* __result65__;
    # 51 "/usr/local/include/comelang-str.h"
    __result65__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value116=wchar_tp_substring(str,head,tail)));
    __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
    # 57 "/usr/local/include/comelang-str.h"
    return charp_index_count(str,search_str,count,default_value);
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    # 63 "/usr/local/include/comelang-str.h"
    return charp_index_regex_count(self,reg,count,default_value);
}
static inline int string_rindex(char* str, char* search_str, int default_value){
    # 69 "/usr/local/include/comelang-str.h"
    return charp_rindex(str,search_str,default_value);
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    # 75 "/usr/local/include/comelang-str.h"
    return charp_rindex_regex(self,reg,default_value);
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
    # 81 "/usr/local/include/comelang-str.h"
    return charp_rindex_count(str,search_str,default_value,-1);
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list$1charph* __result66__;
    # 87 "/usr/local/include/comelang-str.h"
    __result66__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value117=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct list$1charph* __result67__;
    # 93 "/usr/local/include/comelang-str.h"
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value118=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
struct list$1charph* __result68__;
    # 99 "/usr/local/include/comelang-str.h"
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value119=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list$1charph* __result69__;
    # 105 "/usr/local/include/comelang-str.h"
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value120=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
struct list$1charph* __result70__;
    # 111 "/usr/local/include/comelang-str.h"
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value121=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
char* __result71__;
    # 117 "/usr/local/include/comelang-str.h"
    __result71__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=charp_strip(self)));
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
char* __result72__;
    # 123 "/usr/local/include/comelang-str.h"
    __result72__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=string_printable(str)));
    __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
int* __result73__;
    # 129 "/usr/local/include/comelang-str.h"
    __result73__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value124=charp_to_wstring(str)));
    __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result74__;
    # 137 "/usr/local/include/comelang-str.h"
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
    # 142 "/usr/local/include/comelang-str.h"
    __result75__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value127=string_to_wstring(((char*)(__right_value126=xsprintf("%d",self))))));
    __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(int* str){
    # 148 "/usr/local/include/comelang-str.h"
    return wchar_tp_length(str);
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
int* __result76__;
    # 154 "/usr/local/include/comelang-str.h"
    __result76__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value128=wchar_tp_delete(str,head,tail)));
    __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline int wstring_index(int* str, int* search_str, int default_value){
    # 160 "/usr/local/include/comelang-str.h"
    return wchar_tp_index(str,search_str,default_value);
}
static inline int wstring_rindex(int* str, int* search_str, int default_value){
    # 166 "/usr/local/include/comelang-str.h"
    return wchar_tp_rindex(str,search_str,default_value);
}
static inline int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
int* __result77__;
    # 172 "/usr/local/include/comelang-str.h"
    __result77__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value129=wchar_tp_reverse(str)));
    __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
int* __result78__;
    # 178 "/usr/local/include/comelang-str.h"
    __result78__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value130=wchar_tp_multiply(str,n)));
    __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
int* __result79__;
    # 184 "/usr/local/include/comelang-str.h"
    __result79__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value131=wchar_tp_printable(str)));
    __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline unsigned int wstring_get_hash_key(int* value){
    # 206 "/usr/local/include/comelang-str.h"
    return wchar_tp_get_hash_key(value);
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    # 218 "/usr/local/include/comelang-str.h"
    return charp_match_group_strings(self,reg,count,group_strings);
}
static inline int string_index(char* str, char* search_str, int default_value){
    # 224 "/usr/local/include/comelang-str.h"
    return charp_index(str,search_str,default_value);
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
    # 230 "/usr/local/include/comelang-str.h"
    return charp_index_regex(self,reg,default_value);
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
char* __result80__;
    # 237 "/usr/local/include/comelang-str.h"
    __result80__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=charp_replace(self,index,c)));
    __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result81__;
    # 243 "/usr/local/include/comelang-str.h"
    __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=charp_multiply(str,n)));
    __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result82__;
    # 249 "/usr/local/include/comelang-str.h"
    __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=charp_sub(self,reg,replace)));
    __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
char* __result83__;
    # 255 "/usr/local/include/comelang-str.h"
    __result83__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value135=charp_sub_count(self,reg,replace,count)));
    __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* __result84__;
    # 261 "/usr/local/include/comelang-str.h"
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value136=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct list$1charph* __result85__;
    # 267 "/usr/local/include/comelang-str.h"
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value137=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value137,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
struct list$1charph* __result86__;
    # 273 "/usr/local/include/comelang-str.h"
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value138=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    # 279 "/usr/local/include/comelang-str.h"
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* __result87__;
    # 285 "/usr/local/include/comelang-str.h"
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    # 291 "/usr/local/include/comelang-str.h"
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    # 297 "/usr/local/include/comelang-str.h"
    return charp_match_count(self,reg,count);
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
char* __result88__;
    # 303 "/usr/local/include/comelang-str.h"
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value140=charp_sub_block(self,reg,parent,block)));
    __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
char* __result89__;
    # 309 "/usr/local/include/comelang-str.h"
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value141=charp_sub_block_count(self,reg,count,parent,block)));
    __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
char* __result91__;
    # 327 "/usr/local/include/comelang-str.h"
    __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value143=string_chomp(str)));
    __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static inline int __darwin_check_fd_set(int _a, const void* _b){
    # 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if((unsigned long unsigned  int)&__darwin_check_fd_set_overflow!=(unsigned long unsigned  int)0) {
        # 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        return __darwin_check_fd_set_overflow(_a,_b,0);
    }
    else {
        # 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        return 1;
    }
}
static inline int __darwin_fd_isset(int _fd, const struct fd_set* _p){
    # 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        # 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        return _p->fds_bits[(unsigned long unsigned  int)_fd/(sizeof(int)*8)]&((int)(((unsigned long unsigned  int)1)<<((unsigned long unsigned  int)_fd%(sizeof(int)*8))));
    }
    # 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    return 0;
}
static inline void __darwin_fd_set(int _fd, struct fd_set* _p){
    # 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        # 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        (_p->fds_bits[(unsigned long unsigned  int)_fd/(sizeof(int)*8)]|=((int)(((unsigned long unsigned  int)1)<<((unsigned long unsigned  int)_fd%(sizeof(int)*8)))));
    }
}
static inline void __darwin_fd_clr(int _fd, struct fd_set* _p){
    # 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        # 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        (_p->fds_bits[(unsigned long unsigned  int)_fd/(sizeof(int)*8)]&=~((int)(((unsigned long unsigned  int)1)<<((unsigned long unsigned  int)_fd%(sizeof(int)*8)))));
    }
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(char*)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    # 1 "smart_pointer$1charp_finalize"
    # 0 "smart_pointer$1charp_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1charp_finalize"
            __dec_obj2=self->memory;
            /* a*/come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1charp_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(short short*)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    # 1 "smart_pointer$1shortp_finalize"
    # 0 "smart_pointer$1shortp_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1shortp_finalize"
            __dec_obj4=self->memory;
            /* a*/come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1shortp_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(int*)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    # 1 "smart_pointer$1intp_finalize"
    # 0 "smart_pointer$1intp_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1intp_finalize"
            __dec_obj6=self->memory;
            /* a*/come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1intp_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(long*)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    # 1 "smart_pointer$1longp_finalize"
    # 0 "smart_pointer$1longp_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1longp_finalize"
            __dec_obj8=self->memory;
            /* a*/come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1longp_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(char**)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    # 1 "smart_pointer$1charpp_finalize"
    # 0 "smart_pointer$1charpp_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1charpp_finalize"
        # 0 "smart_pointer$1charpp_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1charpp_finalize"
            __dec_obj10=self->memory;
            /* a*/come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1charpp_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(float*)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    # 1 "smart_pointer$1floatp_finalize"
    # 0 "smart_pointer$1floatp_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1floatp_finalize"
        # 0 "smart_pointer$1floatp_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1floatp_finalize"
            __dec_obj12=self->memory;
            /* a*/come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1floatp_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    # 2299 "/usr/local/include/comelang.h"
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /* a*/come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 2301 "/usr/local/include/comelang.h"
    self->p=(double*)value->buf;
    # 2303 "/usr/local/include/comelang.h"
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    # 1 "smart_pointer$1doublep_finalize"
    # 0 "smart_pointer$1doublep_finalize"
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        # 0 "smart_pointer$1doublep_finalize"
        # 0 "smart_pointer$1doublep_finalize"
        if(self->memory==gComeFunResultObject) {
            # 0 "smart_pointer$1doublep_finalize"
            __dec_obj14=self->memory;
            /* a*/come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "smart_pointer$1doublep_finalize"
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result28__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1char_push_back(self,values[i_15]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 221, "list_item$1char"))));
        # 223 "/usr/local/include/comelang.h"
        litem_16->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_16->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_16->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_16;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_16;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 231, "list_item$1char"))));
            # 233 "/usr/local/include/comelang.h"
            litem_17->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_17->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_17->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_17;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_17;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 241, "list_item$1char"))));
            # 243 "/usr/local/include/comelang.h"
            litem_18->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_18->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_18->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_18;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_18;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    # 118 "/usr/local/include/comelang.h"
    it_19=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_19!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_20=it_19;
        # 121 "/usr/local/include/comelang.h"
        it_19=it_19->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1charp_push_back(self,values[i_21]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charp"))));
        # 223 "/usr/local/include/comelang.h"
        litem_22->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_22->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_22->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_22;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_22;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charp"))));
            # 233 "/usr/local/include/comelang.h"
            litem_23->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_23->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_23->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_23;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_23;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charp"))));
            # 243 "/usr/local/include/comelang.h"
            litem_24->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_24->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_24->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_24;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_24;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    # 118 "/usr/local/include/comelang.h"
    it_25=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_25!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_26=it_25;
        # 121 "/usr/local/include/comelang.h"
        it_25=it_25->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1short_push_back(self,values[i_27]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 221, "list_item$1short"))));
        # 223 "/usr/local/include/comelang.h"
        litem_28->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_28->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_28->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_28;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_28;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 231, "list_item$1short"))));
            # 233 "/usr/local/include/comelang.h"
            litem_29->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_29->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_29->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_29;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_29;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 241, "list_item$1short"))));
            # 243 "/usr/local/include/comelang.h"
            litem_30->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_30->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_30->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_30;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_30;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    # 118 "/usr/local/include/comelang.h"
    it_31=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_31!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_32=it_31;
        # 121 "/usr/local/include/comelang.h"
        it_31=it_31->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1int_push_back(self,values[i_33]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 221, "list_item$1int"))));
        # 223 "/usr/local/include/comelang.h"
        litem_34->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_34->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_34->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_34;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_34;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 231, "list_item$1int"))));
            # 233 "/usr/local/include/comelang.h"
            litem_35->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_35->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_35->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_35;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_35;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 241, "list_item$1int"))));
            # 243 "/usr/local/include/comelang.h"
            litem_36->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_36->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_36->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_36;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_36;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    # 118 "/usr/local/include/comelang.h"
    it_37=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_37!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_38=it_37;
        # 121 "/usr/local/include/comelang.h"
        it_37=it_37->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1long_push_back(self,values[i_39]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 221, "list_item$1long"))));
        # 223 "/usr/local/include/comelang.h"
        litem_40->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_40->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_40->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_40;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_40;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 231, "list_item$1long"))));
            # 233 "/usr/local/include/comelang.h"
            litem_41->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_41->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_41->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_41;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_41;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 241, "list_item$1long"))));
            # 243 "/usr/local/include/comelang.h"
            litem_42->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_42->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_42->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_42;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_42;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    # 118 "/usr/local/include/comelang.h"
    it_43=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_43!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_44=it_43;
        # 121 "/usr/local/include/comelang.h"
        it_43=it_43->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1float_push_back(self,values[i_45]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 221, "list_item$1float"))));
        # 223 "/usr/local/include/comelang.h"
        litem_46->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_46->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_46->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_46;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_46;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 231, "list_item$1float"))));
            # 233 "/usr/local/include/comelang.h"
            litem_47->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_47->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_47->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_47;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_47;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 241, "list_item$1float"))));
            # 243 "/usr/local/include/comelang.h"
            litem_48->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_48->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_48->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_48;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_48;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    # 118 "/usr/local/include/comelang.h"
    it_49=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_49!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_50=it_49;
        # 121 "/usr/local/include/comelang.h"
        it_49=it_49->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    # 107 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 108 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 109 "/usr/local/include/comelang.h"
    self->len=0;
    # 115 "/usr/local/include/comelang.h"
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        # 112 "/usr/local/include/comelang.h"
        list$1double_push_back(self,values[i_51]);
    }
    # 115 "/usr/local/include/comelang.h"
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
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 221, "list_item$1double"))));
        # 223 "/usr/local/include/comelang.h"
        litem_52->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_52->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_52->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_52;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_52;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 231, "list_item$1double"))));
            # 233 "/usr/local/include/comelang.h"
            litem_53->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_53->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_53->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_53;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_53;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 241, "list_item$1double"))));
            # 243 "/usr/local/include/comelang.h"
            litem_54->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_54->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_54->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_54;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_54;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    # 118 "/usr/local/include/comelang.h"
    it_55=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_55!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_56=it_55;
        # 121 "/usr/local/include/comelang.h"
        it_55=it_55->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "char")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(char)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_57=0;        i_57<self->len;        i_57++        ){
            # 1030 "/usr/local/include/comelang.h"
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "char*")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(char*)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            # 1030 "/usr/local/include/comelang.h"
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "short")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(short short)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_59=0;        i_59<self->len;        i_59++        ){
            # 1030 "/usr/local/include/comelang.h"
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "int")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(int)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_60=0;        i_60<self->len;        i_60++        ){
            # 1030 "/usr/local/include/comelang.h"
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "long")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(long)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_61=0;        i_61<self->len;        i_61++        ){
            # 1030 "/usr/local/include/comelang.h"
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "float")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(float)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_62=0;        i_62<self->len;        i_62++        ){
            # 1030 "/usr/local/include/comelang.h"
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    # 996 "/usr/local/include/comelang.h"
    self->size=num_value+1;
    # 997 "/usr/local/include/comelang.h"
    self->len=num_value;
    # 998 "/usr/local/include/comelang.h"
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 998, "double")));
    # 1000 "/usr/local/include/comelang.h"
    memcpy(self->items,values,sizeof(double)*self->len);
    # 1002 "/usr/local/include/comelang.h"
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    # 1033 "/usr/local/include/comelang.h"
    # 1027 "/usr/local/include/comelang.h"
    if(0) {
        # 1032 "/usr/local/include/comelang.h"
        for(        i_63=0;        i_63<self->len;        i_63++        ){
            # 1030 "/usr/local/include/comelang.h"
        }
    }
    # 1036 "/usr/local/include/comelang.h"
    # 1033 "/usr/local/include/comelang.h"
    if(self&&self->items) {
        # 1034 "/usr/local/include/comelang.h"
        come_free((char*)self->items);
    }
}

















static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_64;
struct list_item$1charph* prev_it_65;
    # 118 "/usr/local/include/comelang.h"
    it_64=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_64!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_65=it_64;
        # 121 "/usr/local/include/comelang.h"
        it_64=it_64->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_65,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj15;
    # 1 "list_item$1charphp_finalize"
    # 0 "list_item$1charphp_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 0 "list_item$1charphp_finalize"
        # 0 "list_item$1charphp_finalize"
        if(self->item==gComeFunResultObject) {
            # 0 "list_item$1charphp_finalize"
            __dec_obj15=self->item;
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            # 0 "list_item$1charphp_finalize"
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}







































struct ViWin* ViWin_initialize_v2(struct ViWin* self, int y, int x, int width, int height, struct Vi* vi){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct ViWin* result_66;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1tuple3$3intintintph* __dec_obj17;
struct ViWin* __result93__;
    # 6 "02base.c"
    result_66=(struct ViWin*)come_increment_ref_count(ViWin_initialize_v1((struct ViWin*)come_increment_ref_count(self),y,x,width,height,vi));
    # 8 "02base.c"
    __dec_obj17=result_66->returnPointStack;
    result_66->returnPointStack=(struct list$1tuple3$3intintintph*)come_increment_ref_count(list$1tuple3$3intintintph_initialize((struct list$1tuple3$3intintintph*)come_increment_ref_count((struct list$1tuple3$3intintintph*)come_calloc(1, sizeof(struct list$1tuple3$3intintintph)*(1), "02base.c", 8, "list$1tuple3$3intintintph"))));
    /* a*/come_call_finalizer3(__dec_obj17,list$1tuple3$3intintintph_finalize, 0, 0, 0, 0, (void*)0);
    # 10 "02base.c"
    __result93__ = gComeFunResultObject = __result_obj__ = result_66;
    /*i*/come_call_finalizer3(self,ViWin_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_66,ViWin_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1tuple3$3intintintph* list$1tuple3$3intintintph_initialize(struct list$1tuple3$3intintintph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3intintintph* __result92__;
    # 99 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 100 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 101 "/usr/local/include/comelang.h"
    self->len=0;
    # 103 "/usr/local/include/comelang.h"
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple3$3intintintphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1tuple3$3intintintphp_finalize(struct list$1tuple3$3intintintph* self){
struct list_item$1tuple3$3intintintph* it_67;
struct list_item$1tuple3$3intintintph* prev_it_68;
    # 118 "/usr/local/include/comelang.h"
    it_67=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_67!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_68=it_67;
        # 121 "/usr/local/include/comelang.h"
        it_67=it_67->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_68,list_item$1tuple3$3intintintphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3intintintphp_finalize(struct list_item$1tuple3$3intintintph* self){
struct tuple3$3intintint* __dec_obj16;
    # 1 "list_item$1tuple3$3intintintphp_finalize"
    # 0 "list_item$1tuple3$3intintintphp_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 0 "list_item$1tuple3$3intintintphp_finalize"
        # 0 "list_item$1tuple3$3intintintphp_finalize"
        if(self->item==gComeFunResultObject) {
            # 0 "list_item$1tuple3$3intintintphp_finalize"
            __dec_obj16=self->item;
            /* a*/come_call_finalizer3(__dec_obj16,tuple3$3intintintp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "list_item$1tuple3$3intintintphp_finalize"
            /*i*/come_call_finalizer3(self->item,tuple3$3intintintp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple3$3intintintph_finalize(struct list$1tuple3$3intintintph* self){
struct list_item$1tuple3$3intintintph* it_69;
struct list_item$1tuple3$3intintintph* prev_it_70;
    # 118 "/usr/local/include/comelang.h"
    it_69=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_69!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_70=it_69;
        # 121 "/usr/local/include/comelang.h"
        it_69=it_69->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_70,list_item$1tuple3$3intintintphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void ViWin_finalize(struct ViWin* self){
struct list$1intph* __dec_obj18;
struct list$1int* __dec_obj20;
struct tuple3$3intintint* __dec_obj21;
struct list$1tuple3$3intintintph* __dec_obj22;
struct list$1list$1intphph* __dec_obj23;
struct list$1int* __dec_obj25;
struct list$1int* __dec_obj26;
struct list$1int* __dec_obj27;
char* __dec_obj28;
struct list$1int* __dec_obj29;
struct list$1int* __dec_obj30;
struct map$2intlist$1list$1intphph* __dec_obj31;
struct list$1list$1intph* __dec_obj33;
struct list$1list$1intph* __dec_obj34;
struct map$2inttuple3$3intintintph* __dec_obj35;
    # 1 "ViWin_finalize"
    # 0 "ViWin_finalize"
    if(self!=((void*)0)) {
        # 0 "ViWin_finalize"
        ViWin_user_finalize(self);
    }
    # 2 "ViWin_finalize"
    # 1 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts!=((void*)0)) {
        # 1 "ViWin_finalize"
        # 1 "ViWin_finalize"
        if(self->texts==gComeFunResultObject) {
            # 1 "ViWin_finalize"
            __dec_obj18=self->texts;
            /* a*/come_call_finalizer3(__dec_obj18,list$1intph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 1 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->texts,list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 3 "ViWin_finalize"
    # 2 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts_length!=((void*)0)) {
        # 2 "ViWin_finalize"
        # 2 "ViWin_finalize"
        if(self->texts_length==gComeFunResultObject) {
            # 2 "ViWin_finalize"
            __dec_obj20=self->texts_length;
            /* a*/come_call_finalizer3(__dec_obj20,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 2 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->texts_length,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 4 "ViWin_finalize"
    # 3 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPoint!=((void*)0)) {
        # 3 "ViWin_finalize"
        # 3 "ViWin_finalize"
        if(self->returnPoint==gComeFunResultObject) {
            # 3 "ViWin_finalize"
            __dec_obj21=self->returnPoint;
            /* a*/come_call_finalizer3(__dec_obj21,tuple3$3intintintp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 3 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->returnPoint,tuple3$3intintintp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 5 "ViWin_finalize"
    # 4 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPointStack!=((void*)0)) {
        # 4 "ViWin_finalize"
        # 4 "ViWin_finalize"
        if(self->returnPointStack==gComeFunResultObject) {
            # 4 "ViWin_finalize"
            __dec_obj22=self->returnPointStack;
            /* a*/come_call_finalizer3(__dec_obj22,list$1tuple3$3intintintph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 4 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->returnPointStack,list$1tuple3$3intintintphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 6 "ViWin_finalize"
    # 5 "ViWin_finalize"
    if(self!=((void*)0)&&self->undo!=((void*)0)) {
        # 5 "ViWin_finalize"
        # 5 "ViWin_finalize"
        if(self->undo==gComeFunResultObject) {
            # 5 "ViWin_finalize"
            __dec_obj23=self->undo;
            /* a*/come_call_finalizer3(__dec_obj23,list$1list$1intphph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 5 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->undo,list$1list$1intphphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 7 "ViWin_finalize"
    # 6 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoScroll!=((void*)0)) {
        # 6 "ViWin_finalize"
        # 6 "ViWin_finalize"
        if(self->undoScroll==gComeFunResultObject) {
            # 6 "ViWin_finalize"
            __dec_obj25=self->undoScroll;
            /* a*/come_call_finalizer3(__dec_obj25,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 6 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->undoScroll,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 8 "ViWin_finalize"
    # 7 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorX!=((void*)0)) {
        # 7 "ViWin_finalize"
        # 7 "ViWin_finalize"
        if(self->undoCursorX==gComeFunResultObject) {
            # 7 "ViWin_finalize"
            __dec_obj26=self->undoCursorX;
            /* a*/come_call_finalizer3(__dec_obj26,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 7 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->undoCursorX,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 9 "ViWin_finalize"
    # 8 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorY!=((void*)0)) {
        # 8 "ViWin_finalize"
        # 8 "ViWin_finalize"
        if(self->undoCursorY==gComeFunResultObject) {
            # 8 "ViWin_finalize"
            __dec_obj27=self->undoCursorY;
            /* a*/come_call_finalizer3(__dec_obj27,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 8 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->undoCursorY,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 10 "ViWin_finalize"
    # 9 "ViWin_finalize"
    if(self!=((void*)0)&&self->fileName!=((void*)0)) {
        # 9 "ViWin_finalize"
        # 9 "ViWin_finalize"
        if(self->fileName==gComeFunResultObject) {
            # 9 "ViWin_finalize"
            __dec_obj28=self->fileName;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            # 9 "ViWin_finalize"
            self->fileName = come_decrement_ref_count2(self->fileName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 11 "ViWin_finalize"
    # 10 "ViWin_finalize"
    if(self!=((void*)0)&&self->inputedKeys!=((void*)0)) {
        # 10 "ViWin_finalize"
        # 10 "ViWin_finalize"
        if(self->inputedKeys==gComeFunResultObject) {
            # 10 "ViWin_finalize"
            __dec_obj29=self->inputedKeys;
            /* a*/come_call_finalizer3(__dec_obj29,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 10 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->inputedKeys,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 12 "ViWin_finalize"
    # 11 "ViWin_finalize"
    if(self!=((void*)0)&&self->savedInputedKeys!=((void*)0)) {
        # 11 "ViWin_finalize"
        # 11 "ViWin_finalize"
        if(self->savedInputedKeys==gComeFunResultObject) {
            # 11 "ViWin_finalize"
            __dec_obj30=self->savedInputedKeys;
            /* a*/come_call_finalizer3(__dec_obj30,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 11 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->savedInputedKeys,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 13 "ViWin_finalize"
    # 12 "ViWin_finalize"
    if(self!=((void*)0)&&self->macro!=((void*)0)) {
        # 12 "ViWin_finalize"
        # 12 "ViWin_finalize"
        if(self->macro==gComeFunResultObject) {
            # 12 "ViWin_finalize"
            __dec_obj31=self->macro;
            /* a*/come_call_finalizer3(__dec_obj31,map$2intlist$1list$1intphph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 12 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->macro,map$2intlist$1list$1intphphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 14 "ViWin_finalize"
    # 13 "ViWin_finalize"
    if(self!=((void*)0)&&self->recordingMacro!=((void*)0)) {
        # 13 "ViWin_finalize"
        # 13 "ViWin_finalize"
        if(self->recordingMacro==gComeFunResultObject) {
            # 13 "ViWin_finalize"
            __dec_obj33=self->recordingMacro;
            /* a*/come_call_finalizer3(__dec_obj33,list$1list$1intph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 13 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->recordingMacro,list$1list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 15 "ViWin_finalize"
    # 14 "ViWin_finalize"
    if(self!=((void*)0)&&self->runningMacro!=((void*)0)) {
        # 14 "ViWin_finalize"
        # 14 "ViWin_finalize"
        if(self->runningMacro==gComeFunResultObject) {
            # 14 "ViWin_finalize"
            __dec_obj34=self->runningMacro;
            /* a*/come_call_finalizer3(__dec_obj34,list$1list$1intph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 14 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->runningMacro,list$1list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 16 "ViWin_finalize"
    # 15 "ViWin_finalize"
    if(self!=((void*)0)&&self->mark!=((void*)0)) {
        # 15 "ViWin_finalize"
        # 15 "ViWin_finalize"
        if(self->mark==gComeFunResultObject) {
            # 15 "ViWin_finalize"
            __dec_obj35=self->mark;
            /* a*/come_call_finalizer3(__dec_obj35,map$2inttuple3$3intintintph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 15 "ViWin_finalize"
            /*i*/come_call_finalizer3(self->mark,map$2inttuple3$3intintintphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1intph_finalize(struct list$1intph* self){
struct list_item$1intph* it_71;
struct list_item$1intph* prev_it_72;
    # 118 "/usr/local/include/comelang.h"
    it_71=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_71!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_72=it_71;
        # 121 "/usr/local/include/comelang.h"
        it_71=it_71->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_72,list_item$1intphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intphp_finalize(struct list_item$1intph* self){
int* __dec_obj19;
    # 1 "list_item$1intphp_finalize"
    # 0 "list_item$1intphp_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 0 "list_item$1intphp_finalize"
        # 0 "list_item$1intphp_finalize"
        if(self->item==gComeFunResultObject) {
            # 0 "list_item$1intphp_finalize"
            __dec_obj19=self->item;
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            # 0 "list_item$1intphp_finalize"
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1intphp_finalize(struct list$1intph* self){
struct list_item$1intph* it_73;
struct list_item$1intph* prev_it_74;
    # 118 "/usr/local/include/comelang.h"
    it_73=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_73!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_74=it_73;
        # 121 "/usr/local/include/comelang.h"
        it_73=it_73->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_74,list_item$1intphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1int_finalize(struct list$1int* self){
struct list_item$1int* it_75;
struct list_item$1int* prev_it_76;
    # 118 "/usr/local/include/comelang.h"
    it_75=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_75!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_76=it_75;
        # 121 "/usr/local/include/comelang.h"
        it_75=it_75->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_76,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3intintintp_finalize(struct tuple3$3intintint* self){
}

static void list$1list$1intphph_finalize(struct list$1list$1intphph* self){
struct list_item$1list$1intphph* it_77;
struct list_item$1list$1intphph* prev_it_78;
    # 118 "/usr/local/include/comelang.h"
    it_77=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_77!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_78=it_77;
        # 121 "/usr/local/include/comelang.h"
        it_77=it_77->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_78,list_item$1list$1intphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1list$1intphphp_finalize(struct list_item$1list$1intphph* self){
struct list$1intph* __dec_obj24;
    # 1 "list_item$1list$1intphphp_finalize"
    # 0 "list_item$1list$1intphphp_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 0 "list_item$1list$1intphphp_finalize"
        # 0 "list_item$1list$1intphphp_finalize"
        if(self->item==gComeFunResultObject) {
            # 0 "list_item$1list$1intphphp_finalize"
            __dec_obj24=self->item;
            /* a*/come_call_finalizer3(__dec_obj24,list$1intph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "list_item$1list$1intphphp_finalize"
            /*i*/come_call_finalizer3(self->item,list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1list$1intphphp_finalize(struct list$1list$1intphph* self){
struct list_item$1list$1intphph* it_79;
struct list_item$1list$1intphph* prev_it_80;
    # 118 "/usr/local/include/comelang.h"
    it_79=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_79!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_80=it_79;
        # 121 "/usr/local/include/comelang.h"
        it_79=it_79->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_80,list_item$1list$1intphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2intlist$1list$1intphph_finalize(struct map$2intlist$1list$1intphph* self){
int i_81;
int i_84;
    # 1419 "/usr/local/include/comelang.h"
    for(    i_81=0;    i_81<self->size;    i_81++    ){
        # 1418 "/usr/local/include/comelang.h"
        # 1413 "/usr/local/include/comelang.h"
        if(self->item_existance[i_81]) {
            # 1417 "/usr/local/include/comelang.h"
            # 1414 "/usr/local/include/comelang.h"
            if(1) {
                # 1415 "/usr/local/include/comelang.h"
                /*i*/come_call_finalizer3(self->items[i_81],list$1list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1419 "/usr/local/include/comelang.h"
    come_free((char*)self->items);
    # 1428 "/usr/local/include/comelang.h"
    for(    i_84=0;    i_84<self->size;    i_84++    ){
        # 1427 "/usr/local/include/comelang.h"
        # 1422 "/usr/local/include/comelang.h"
        if(self->item_existance[i_84]) {
            # 1426 "/usr/local/include/comelang.h"
            # 1423 "/usr/local/include/comelang.h"
            if(0) {
                # 1424 "/usr/local/include/comelang.h"
            }
        }
    }
    # 1428 "/usr/local/include/comelang.h"
    come_free((char*)self->keys);
    # 1430 "/usr/local/include/comelang.h"
    /*i*/come_call_finalizer3(self->key_list,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    # 1432 "/usr/local/include/comelang.h"
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1list$1intphp_finalize(struct list$1list$1intph* self){
struct list_item$1list$1intph* it_82;
struct list_item$1list$1intph* prev_it_83;
    # 118 "/usr/local/include/comelang.h"
    it_82=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_82!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_83=it_82;
        # 121 "/usr/local/include/comelang.h"
        it_82=it_82->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_83,list_item$1list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1list$1intphp_finalize(struct list_item$1list$1intph* self){
struct list$1int* __dec_obj32;
    # 1 "list_item$1list$1intphp_finalize"
    # 0 "list_item$1list$1intphp_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 0 "list_item$1list$1intphp_finalize"
        # 0 "list_item$1list$1intphp_finalize"
        if(self->item==gComeFunResultObject) {
            # 0 "list_item$1list$1intphp_finalize"
            __dec_obj32=self->item;
            /* a*/come_call_finalizer3(__dec_obj32,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "list_item$1list$1intphp_finalize"
            /*i*/come_call_finalizer3(self->item,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2intlist$1list$1intphphp_finalize(struct map$2intlist$1list$1intphph* self){
int i_85;
int i_86;
    # 1419 "/usr/local/include/comelang.h"
    for(    i_85=0;    i_85<self->size;    i_85++    ){
        # 1418 "/usr/local/include/comelang.h"
        # 1413 "/usr/local/include/comelang.h"
        if(self->item_existance[i_85]) {
            # 1417 "/usr/local/include/comelang.h"
            # 1414 "/usr/local/include/comelang.h"
            if(1) {
                # 1415 "/usr/local/include/comelang.h"
                /*i*/come_call_finalizer3(self->items[i_85],list$1list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1419 "/usr/local/include/comelang.h"
    come_free((char*)self->items);
    # 1428 "/usr/local/include/comelang.h"
    for(    i_86=0;    i_86<self->size;    i_86++    ){
        # 1427 "/usr/local/include/comelang.h"
        # 1422 "/usr/local/include/comelang.h"
        if(self->item_existance[i_86]) {
            # 1426 "/usr/local/include/comelang.h"
            # 1423 "/usr/local/include/comelang.h"
            if(0) {
                # 1424 "/usr/local/include/comelang.h"
            }
        }
    }
    # 1428 "/usr/local/include/comelang.h"
    come_free((char*)self->keys);
    # 1430 "/usr/local/include/comelang.h"
    /*i*/come_call_finalizer3(self->key_list,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    # 1432 "/usr/local/include/comelang.h"
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1list$1intph_finalize(struct list$1list$1intph* self){
struct list_item$1list$1intph* it_87;
struct list_item$1list$1intph* prev_it_88;
    # 118 "/usr/local/include/comelang.h"
    it_87=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_87!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_88=it_87;
        # 121 "/usr/local/include/comelang.h"
        it_87=it_87->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_88,list_item$1list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2inttuple3$3intintintph_finalize(struct map$2inttuple3$3intintintph* self){
int i_89;
int i_90;
    # 1419 "/usr/local/include/comelang.h"
    for(    i_89=0;    i_89<self->size;    i_89++    ){
        # 1418 "/usr/local/include/comelang.h"
        # 1413 "/usr/local/include/comelang.h"
        if(self->item_existance[i_89]) {
            # 1417 "/usr/local/include/comelang.h"
            # 1414 "/usr/local/include/comelang.h"
            if(1) {
                # 1415 "/usr/local/include/comelang.h"
                /*i*/come_call_finalizer3(self->items[i_89],tuple3$3intintintp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1419 "/usr/local/include/comelang.h"
    come_free((char*)self->items);
    # 1428 "/usr/local/include/comelang.h"
    for(    i_90=0;    i_90<self->size;    i_90++    ){
        # 1427 "/usr/local/include/comelang.h"
        # 1422 "/usr/local/include/comelang.h"
        if(self->item_existance[i_90]) {
            # 1426 "/usr/local/include/comelang.h"
            # 1423 "/usr/local/include/comelang.h"
            if(0) {
                # 1424 "/usr/local/include/comelang.h"
            }
        }
    }
    # 1428 "/usr/local/include/comelang.h"
    come_free((char*)self->keys);
    # 1430 "/usr/local/include/comelang.h"
    /*i*/come_call_finalizer3(self->key_list,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    # 1432 "/usr/local/include/comelang.h"
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2inttuple3$3intintintphp_finalize(struct map$2inttuple3$3intintintph* self){
int i_91;
int i_92;
    # 1419 "/usr/local/include/comelang.h"
    for(    i_91=0;    i_91<self->size;    i_91++    ){
        # 1418 "/usr/local/include/comelang.h"
        # 1413 "/usr/local/include/comelang.h"
        if(self->item_existance[i_91]) {
            # 1417 "/usr/local/include/comelang.h"
            # 1414 "/usr/local/include/comelang.h"
            if(1) {
                # 1415 "/usr/local/include/comelang.h"
                /*i*/come_call_finalizer3(self->items[i_91],tuple3$3intintintp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1419 "/usr/local/include/comelang.h"
    come_free((char*)self->items);
    # 1428 "/usr/local/include/comelang.h"
    for(    i_92=0;    i_92<self->size;    i_92++    ){
        # 1427 "/usr/local/include/comelang.h"
        # 1422 "/usr/local/include/comelang.h"
        if(self->item_existance[i_92]) {
            # 1426 "/usr/local/include/comelang.h"
            # 1423 "/usr/local/include/comelang.h"
            if(0) {
                # 1424 "/usr/local/include/comelang.h"
            }
        }
    }
    # 1428 "/usr/local/include/comelang.h"
    come_free((char*)self->keys);
    # 1430 "/usr/local/include/comelang.h"
    /*i*/come_call_finalizer3(self->key_list,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    # 1432 "/usr/local/include/comelang.h"
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void ViWin_textsView(struct ViWin* self, struct Vi* nvi){
int maxy_93;
int maxx_94;
void* __right_value147 = (void*)0;
int* cursor_line_97;
int cursor_height_98;
int it2_99;
void* __right_value153 = (void*)0;
struct list$1intph* o2_saved_106;
int* it_109;
void* __right_value154 = (void*)0;
int* printable_line_112;
int x_113;
int cursor_y_114;
int cursor_x_115;
int terminal_width_116;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
int* c_117;
int cursor_x_118;
int x_119;
void* __right_value157 = (void*)0;
int* head_string_120;
void* __right_value158 = (void*)0;
int* printable_head_string_121;
void* __right_value159 = (void*)0;
int* cursor_string_122;
void* __right_value160 = (void*)0;
int* printable_cursor_string_123;
void* __right_value161 = (void*)0;
int* tail_string_124;
void* __right_value162 = (void*)0;
int* printable_tail_string_125;
int x_126;
int visible_x_127;
void* __right_value163 = (void*)0;
int* c_128;
    # 15 "02base.c"
    maxy_93=getmaxy(self->win);
    # 16 "02base.c"
    maxx_94=getmaxx(self->win);
    # 142 "02base.c"
    # 18 "02base.c"
    if(list$1intph_length(self->texts)>0) {
        # 19 "02base.c"
        cursor_line_97=(int*)come_increment_ref_count(wstring_printable(list$1intph_item(self->texts,self->scroll+self->cursorY,((void*)0))));
        # 21 "02base.c"
        cursor_height_98=(wcswidth(cursor_line_97,wstring_length(cursor_line_97))/(maxx_94-1));
        # 23 "02base.c"
        it2_99=0;
        # 141 "02base.c"
        for(        o2_saved_106=(struct list$1intph*)come_increment_ref_count((((struct list$1intph*)(__right_value153=list$1intph_sublist(self->texts,self->scroll,self->scroll+maxy_93-1))))),it_109=list$1intph_begin((o2_saved_106)) ,        /*f*/come_call_finalizer3(__right_value153,list$1intphp_finalize, 0, 1, 0, 0, (void*)0),
        0;        !list$1intph_end((o2_saved_106));        it_109=list$1intph_next((o2_saved_106))        ){
            # 26 "02base.c"
            printable_line_112=(int*)come_increment_ref_count(wstring_printable(it_109));
            # 139 "02base.c"
            # 29 "02base.c"
            if(it2_99>self->cursorY&&it2_99<=self->cursorY+cursor_height_98) {
            }
            else {
                # 139 "02base.c"
                # 32 "02base.c"
                if(self->cursorY==it2_99&&ViWin_equals(nvi->activeWin,self)) {
                    # 119 "02base.c"
                    # 34 "02base.c"
                    if(wstring_length(printable_line_112)==0) {
                        # 35 "02base.c"
                        wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                        # 36 "02base.c"
                        mvwprintw(self->win,it2_99,0,"$");
                        # 37 "02base.c"
                        wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                    }
                    else {
                        # 119 "02base.c"
                        # 39 "02base.c"
                        if(wcswidth(printable_line_112,wcslen(printable_line_112))>maxx_94-2) {
                            # 41 "02base.c"
                            x_113=0;
                            # 42 "02base.c"
                            cursor_y_114=it2_99;
                            # 43 "02base.c"
                            cursor_x_115=0;
                            # 44 "02base.c"
                            terminal_width_116=0;
                            # 70 "02base.c"
                            while(x_113<wstring_length(it_109)) {
                                # 46 "02base.c"
                                c_117=(int*)come_increment_ref_count(wstring_printable(((int*)(__right_value155=wstring_substring(it_109,x_113,x_113+1)))));
                                __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                # 59 "02base.c"
                                # 48 "02base.c"
                                if(x_113==self->cursorX) {
                                    # 49 "02base.c"
                                    wmove(self->win,cursor_y_114,cursor_x_115);
                                    # 50 "02base.c"
                                    wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                                    # 51 "02base.c"
                                    wprintw(self->win,"%ls",c_117);
                                    # 52 "02base.c"
                                    wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                                }
                                else {
                                    # 55 "02base.c"
                                    wmove(self->win,cursor_y_114,cursor_x_115);
                                    # 56 "02base.c"
                                    wprintw(self->win,"%ls",c_117);
                                }
                                # 59 "02base.c"
                                x_113++;
                                # 60 "02base.c"
                                cursor_x_115+=wcswidth(c_117,wstring_length(c_117));
                                # 61 "02base.c"
                                terminal_width_116+=wcswidth(c_117,wstring_length(c_117));
                                # 69 "02base.c"
                                # 63 "02base.c"
                                if(terminal_width_116>=maxx_94-2) {
                                    # 64 "02base.c"
                                    cursor_x_115=0;
                                    # 65 "02base.c"
                                    terminal_width_116=0;
                                    # 66 "02base.c"
                                    cursor_y_114++;
                                    # 67 "02base.c"
                                    wprintw(self->win,"~");
                                }
                                c_117 = come_decrement_ref_count2(c_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 78 "02base.c"
                            # 70 "02base.c"
                            if(self->cursorX==wstring_length(it_109)) {
                                # 71 "02base.c"
                                wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                                # 72 "02base.c"
                                wprintw(self->win,"$");
                                # 73 "02base.c"
                                wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                            }
                            else {
                                # 76 "02base.c"
                                wprintw(self->win,"$");
                            }
                        }
                        else {
                            # 80 "02base.c"
                            cursor_x_118=self->cursorX;
                            # 81 "02base.c"
                            x_119=0;
                            # 82 "02base.c"
                            head_string_120=(int*)come_increment_ref_count(wstring_substring(it_109,0,cursor_x_118));
                            # 83 "02base.c"
                            printable_head_string_121=(int*)come_increment_ref_count(wstring_printable(head_string_120));
                            # 85 "02base.c"
                            mvwprintw(self->win,it2_99,0,"%ls",printable_head_string_121);
                            # 87 "02base.c"
                            x_119+=wcswidth(printable_head_string_121,wstring_length(printable_head_string_121));
                            # 89 "02base.c"
                            cursor_string_122=(int*)come_increment_ref_count(wstring_substring(it_109,cursor_x_118,cursor_x_118+1));
                            # 90 "02base.c"
                            printable_cursor_string_123=(int*)come_increment_ref_count(wstring_printable(cursor_string_122));
                            # 103 "02base.c"
                            # 92 "02base.c"
                            if(printable_cursor_string_123[0]==0) {
                                # 93 "02base.c"
                                wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                                # 94 "02base.c"
                                mvwprintw(self->win,it2_99,x_119," ",printable_cursor_string_123);
                                # 95 "02base.c"
                                wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                            }
                            else {
                                # 98 "02base.c"
                                wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                                # 99 "02base.c"
                                mvwprintw(self->win,it2_99,x_119,"%ls",printable_cursor_string_123);
                                # 100 "02base.c"
                                wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                            }
                            # 103 "02base.c"
                            x_119+=wcswidth(printable_cursor_string_123,wstring_length(printable_cursor_string_123));
                            # 105 "02base.c"
                            tail_string_124=(int*)come_increment_ref_count(wstring_substring(it_109,cursor_x_118+1,-1));
                            # 106 "02base.c"
                            printable_tail_string_125=(int*)come_increment_ref_count(wstring_printable(tail_string_124));
                            # 108 "02base.c"
                            mvwprintw(self->win,it2_99,x_119,"%ls",printable_tail_string_125);
                            # 118 "02base.c"
                            # 110 "02base.c"
                            if(self->cursorX==wstring_length(it_109)) {
                                # 111 "02base.c"
                                wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                                # 112 "02base.c"
                                wprintw(self->win,"$");
                                # 113 "02base.c"
                                wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
                            }
                            else {
                                # 116 "02base.c"
                                wprintw(self->win,"$");
                            }
                            head_string_120 = come_decrement_ref_count2(head_string_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            printable_head_string_121 = come_decrement_ref_count2(printable_head_string_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            cursor_string_122 = come_decrement_ref_count2(cursor_string_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            printable_cursor_string_123 = come_decrement_ref_count2(printable_cursor_string_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            tail_string_124 = come_decrement_ref_count2(tail_string_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            printable_tail_string_125 = come_decrement_ref_count2(printable_tail_string_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                else {
                    # 137 "02base.c"
                    # 121 "02base.c"
                    if(wcswidth(printable_line_112,wcslen(printable_line_112))>maxx_94-2) {
                        # 123 "02base.c"
                        x_126=0;
                        # 124 "02base.c"
                        visible_x_127=0;
                        # 132 "02base.c"
                        while(visible_x_127<maxx_94-2&&x_126<wstring_length(printable_line_112)) {
                            # 126 "02base.c"
                            c_128=(int*)come_increment_ref_count(wstring_substring(printable_line_112,x_126,x_126+1));
                            # 127 "02base.c"
                            mvwprintw(self->win,it2_99,visible_x_127,"%ls",c_128);
                            # 129 "02base.c"
                            visible_x_127+=wcswidth(c_128,wcslen(c_128));
                            # 130 "02base.c"
                            x_126++;
                            c_128 = come_decrement_ref_count2(c_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 132 "02base.c"
                        wprintw(self->win,"~");
                    }
                    else {
                        # 135 "02base.c"
                        mvwprintw(self->win,it2_99,0,"%ls$",printable_line_112);
                    }
                }
            }
            # 139 "02base.c"
            it2_99++;
            printable_line_112 = come_decrement_ref_count2(printable_line_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_106,list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        cursor_line_97 = come_decrement_ref_count2(cursor_line_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1intph_length(struct list$1intph* self){
    # 358 "/usr/local/include/comelang.h"
    # 355 "/usr/local/include/comelang.h"
    if(self==((void*)0)) {
        # 356 "/usr/local/include/comelang.h"
        return 0;
    }
    # 358 "/usr/local/include/comelang.h"
    return self->len;
}

static int* list$1intph_item(struct list$1intph* self, int position, int* default_value){
void* __result_obj__=(void*)0;
struct list_item$1intph* it_95;
int i_96;
int* __result94__;
int* __result95__;
    # 340 "/usr/local/include/comelang.h"
    # 336 "/usr/local/include/comelang.h"
    if(position<0) {
        # 337 "/usr/local/include/comelang.h"
        position+=self->len;
    }
    # 340 "/usr/local/include/comelang.h"
    it_95=self->head;
    # 341 "/usr/local/include/comelang.h"
    i_96=0;
    # 348 "/usr/local/include/comelang.h"
    while(it_95!=((void*)0)) {
        # 346 "/usr/local/include/comelang.h"
        # 343 "/usr/local/include/comelang.h"
        if(position==i_96) {
            # 344 "/usr/local/include/comelang.h"
            __result94__ = gComeFunResultObject = __result_obj__ = it_95->item;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result94__;
        }
        # 346 "/usr/local/include/comelang.h"
        it_95=it_95->next;
        # 347 "/usr/local/include/comelang.h"
        i_96++;
    }
    # 350 "/usr/local/include/comelang.h"
    __result95__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1intph* list$1intph_sublist(struct list$1intph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct list$1intph* result_100;
struct list_item$1intph* it_101;
int i_102;
struct list$1intph* __result98__;
    # 651 "/usr/local/include/comelang.h"
    result_100=(struct list$1intph*)come_increment_ref_count(list$1intph_initialize((struct list$1intph*)come_increment_ref_count((struct list$1intph*)come_calloc(1, sizeof(struct list$1intph)*(1), "/usr/local/include/comelang.h", 651, "list$1intph"))));
    # 657 "/usr/local/include/comelang.h"
    # 653 "/usr/local/include/comelang.h"
    if(begin<0) {
        # 654 "/usr/local/include/comelang.h"
        begin+=self->len;
    }
    # 661 "/usr/local/include/comelang.h"
    # 657 "/usr/local/include/comelang.h"
    if(tail<0) {
        # 658 "/usr/local/include/comelang.h"
        tail+=self->len+1;
    }
    # 665 "/usr/local/include/comelang.h"
    # 661 "/usr/local/include/comelang.h"
    if(begin<0) {
        # 662 "/usr/local/include/comelang.h"
        begin=0;
    }
    # 669 "/usr/local/include/comelang.h"
    # 665 "/usr/local/include/comelang.h"
    if(tail>=self->len) {
        # 666 "/usr/local/include/comelang.h"
        tail=self->len;
    }
    # 669 "/usr/local/include/comelang.h"
    it_101=self->head;
    # 670 "/usr/local/include/comelang.h"
    i_102=0;
    # 677 "/usr/local/include/comelang.h"
    while(it_101!=((void*)0)) {
        # 675 "/usr/local/include/comelang.h"
        # 672 "/usr/local/include/comelang.h"
        if(i_102>=begin&&i_102<tail) {
            # 673 "/usr/local/include/comelang.h"
            list$1intph_push_back(result_100,(int*)come_increment_ref_count(it_101->item));
        }
        # 675 "/usr/local/include/comelang.h"
        it_101=it_101->next;
        # 676 "/usr/local/include/comelang.h"
        i_102++;
    }
    # 679 "/usr/local/include/comelang.h"
    __result98__ = gComeFunResultObject = __result_obj__ = result_100;
    /*i*/come_call_finalizer3(result_100,list$1intphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1intph* list$1intph_initialize(struct list$1intph* self){
void* __result_obj__=(void*)0;
struct list$1intph* __result96__;
    # 99 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 100 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 101 "/usr/local/include/comelang.h"
    self->len=0;
    # 103 "/usr/local/include/comelang.h"
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1intph* list$1intph_push_back(struct list$1intph* self, int* item){
void* __result_obj__=(void*)0;
void* __right_value150 = (void*)0;
struct list_item$1intph* litem_103;
int* __dec_obj36;
void* __right_value151 = (void*)0;
struct list_item$1intph* litem_104;
int* __dec_obj37;
void* __right_value152 = (void*)0;
struct list_item$1intph* litem_105;
int* __dec_obj38;
struct list$1intph* __result97__;
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_103=(struct list_item$1intph*)come_increment_ref_count(((struct list_item$1intph*)(__right_value150=(struct list_item$1intph*)come_calloc(1, sizeof(struct list_item$1intph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1intph"))));
        # 223 "/usr/local/include/comelang.h"
        litem_103->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_103->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        __dec_obj36=litem_103->item;
        litem_103->item=(int*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_103;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_103;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_104=(struct list_item$1intph*)come_increment_ref_count(((struct list_item$1intph*)(__right_value151=(struct list_item$1intph*)come_calloc(1, sizeof(struct list_item$1intph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1intph"))));
            # 233 "/usr/local/include/comelang.h"
            litem_104->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_104->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            __dec_obj37=litem_104->item;
            litem_104->item=(int*)come_increment_ref_count(item);
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_104;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_104;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_105=(struct list_item$1intph*)come_increment_ref_count(((struct list_item$1intph*)(__right_value152=(struct list_item$1intph*)come_calloc(1, sizeof(struct list_item$1intph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1intph"))));
            # 243 "/usr/local/include/comelang.h"
            litem_105->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_105->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            __dec_obj38=litem_105->item;
            litem_105->item=(int*)come_increment_ref_count(item);
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_105;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_105;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static int* list$1intph_begin(struct list$1intph* self){
void* __result_obj__=(void*)0;
int* result_107;
int* __result99__;
int* __result100__;
int* result_108;
int* __result101__;
result_107 = (void*)0;
result_108 = (void*)0;
    # 285 "/usr/local/include/comelang.h"
    # 280 "/usr/local/include/comelang.h"
    if(self==((void*)0)) {
        # 281 "/usr/local/include/comelang.h"
        # 282 "/usr/local/include/comelang.h"
        memset(&result_107,0,sizeof(int*));
        # 283 "/usr/local/include/comelang.h"
        __result99__ = gComeFunResultObject = __result_obj__ = result_107;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    # 285 "/usr/local/include/comelang.h"
    self->it=self->head;
    # 291 "/usr/local/include/comelang.h"
    # 287 "/usr/local/include/comelang.h"
    if(self->it) {
        # 288 "/usr/local/include/comelang.h"
        __result100__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    # 291 "/usr/local/include/comelang.h"
    # 292 "/usr/local/include/comelang.h"
    memset(&result_108,0,sizeof(int*));
    # 293 "/usr/local/include/comelang.h"
    __result101__ = gComeFunResultObject = __result_obj__ = result_108;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static _Bool list$1intph_end(struct list$1intph* self){
    # 315 "/usr/local/include/comelang.h"
    return self==((void*)0)||self->it==((void*)0);
}

static int* list$1intph_next(struct list$1intph* self){
void* __result_obj__=(void*)0;
int* result_110;
int* __result102__;
int* __result103__;
int* result_111;
int* __result104__;
result_110 = (void*)0;
result_111 = (void*)0;
    # 303 "/usr/local/include/comelang.h"
    # 297 "/usr/local/include/comelang.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 298 "/usr/local/include/comelang.h"
        # 299 "/usr/local/include/comelang.h"
        memset(&result_110,0,sizeof(int*));
        # 300 "/usr/local/include/comelang.h"
        __result102__ = gComeFunResultObject = __result_obj__ = result_110;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    # 303 "/usr/local/include/comelang.h"
    self->it=self->it->next;
    # 309 "/usr/local/include/comelang.h"
    # 305 "/usr/local/include/comelang.h"
    if(self->it) {
        # 306 "/usr/local/include/comelang.h"
        __result103__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    # 309 "/usr/local/include/comelang.h"
    # 310 "/usr/local/include/comelang.h"
    memset(&result_111,0,sizeof(int*));
    # 311 "/usr/local/include/comelang.h"
    __result104__ = gComeFunResultObject = __result_obj__ = result_111;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

void ViWin_statusBarView_v2(struct ViWin* self, struct Vi* nvi){
int maxy_129;
int maxx_130;
    # 146 "02base.c"
    maxy_129=getmaxy(self->win);
    # 147 "02base.c"
    maxx_130=getmaxx(self->win);
    # 149 "02base.c"
    wattr_on(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
    # 150 "02base.c"
    mvwprintw(self->win,self->height-1,0,"x %d y %d scroll %d",self->cursorX,self->cursorY,self->scroll);
    # 151 "02base.c"
    wattr_off(self->win,(unsigned int)(((unsigned int)((1))<<((10)+8))),((void*)0));
    # 153 "02base.c"
    wrefresh(self->win);
}

void ViWin_view_v2(struct ViWin* self, struct Vi* nvi){
    # 158 "02base.c"
    werase(self->win);
    # 160 "02base.c"
    ViWin_textsView(self,nvi);
    # 162 "02base.c"
    ViWin_statusBarView_v6(self,nvi);
    # 164 "02base.c"
    wrefresh(self->win);
}

int ViWin_getKey_v2(struct ViWin* self, _Bool head){
    # 169 "02base.c"
    return wgetch(self->win);
}

void ViWin_input_v2(struct ViWin* self, struct Vi* nvi){
int key_131;
void (*event_134)(struct Vi*,int);
memset(&event_134, 0, sizeof(void (*)(struct Vi*,int)));
    # 174 "02base.c"
    key_131=ViWin_getKey_v14(self,1);
    # 176 "02base.c"
    event_134=list$1lambda_item(nvi->events,key_131,((void*)0));
    # 181 "02base.c"
    # 178 "02base.c"
    if(event_134!=((void*)0)) {
        # 179 "02base.c"
        event_134(nvi,key_131);
    }
}

static void (*list$1lambda_item(struct list$1lambda* self, int position, void (*default_value)(struct Vi*,int)))(struct Vi*,int){
void* __result_obj__=(void*)0;
struct list_item$1lambda* it_132;
int i_133;
void (*__result105__)(struct Vi*,int);
void (*__result106__)(struct Vi*,int);
    # 340 "/usr/local/include/comelang.h"
    # 336 "/usr/local/include/comelang.h"
    if(position<0) {
        # 337 "/usr/local/include/comelang.h"
        position+=self->len;
    }
    # 340 "/usr/local/include/comelang.h"
    it_132=self->head;
    # 341 "/usr/local/include/comelang.h"
    i_133=0;
    # 348 "/usr/local/include/comelang.h"
    while(it_132!=((void*)0)) {
        # 346 "/usr/local/include/comelang.h"
        # 343 "/usr/local/include/comelang.h"
        if(position==i_133) {
            # 344 "/usr/local/include/comelang.h"
            __result105__ = gComeFunResultObject = __result_obj__ = it_132->item;
            gComeFunResultObject = (void*)0;
            return __result105__;
        }
        # 346 "/usr/local/include/comelang.h"
        it_132=it_132->next;
        # 347 "/usr/local/include/comelang.h"
        i_133++;
    }
    # 350 "/usr/local/include/comelang.h"
    __result106__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

void ViWin_modifyUnderCursorYValue(struct ViWin* self){
    # 194 "02base.c"
    # 185 "02base.c"
    if(self->cursorY<0) {
        # 186 "02base.c"
        self->scroll+=self->cursorY;
        # 192 "02base.c"
        # 188 "02base.c"
        if(self->scroll<0) {
            # 189 "02base.c"
            self->scroll=0;
        }
        # 192 "02base.c"
        self->cursorY=0;
    }
}

void ViWin_modifyOverCursorYValue(struct ViWin* self){
int maxy_135;
    # 221 "02base.c"
    # 198 "02base.c"
    if(list$1intph_length(self->texts)==0) {
        # 199 "02base.c"
        self->scroll=0;
        # 200 "02base.c"
        self->cursorY=0;
        # 201 "02base.c"
        self->cursorX=0;
    }
    else {
        # 204 "02base.c"
        maxy_135=getmaxy(self->win);
        # 217 "02base.c"
        # 206 "02base.c"
        if(self->cursorY>=maxy_135-2) {
            # 208 "02base.c"
            self->scroll+=self->cursorY-(maxy_135-2);
            # 214 "02base.c"
            # 210 "02base.c"
            if(self->scroll>=list$1intph_length(self->texts)-1) {
                # 211 "02base.c"
                self->scroll=list$1intph_length(self->texts)-1;
            }
            # 214 "02base.c"
            self->cursorY=maxy_135-2;
        }
        # 220 "02base.c"
        # 217 "02base.c"
        if(self->cursorY+self->scroll>=list$1intph_length(self->texts)-1) {
            # 218 "02base.c"
            self->cursorY=list$1intph_length(self->texts)-self->scroll-1;
        }
    }
}

void ViWin_modifyOverCursorXValue(struct ViWin* self){
int len_136;
int* cursor_line_139;
    # 256 "02base.c"
    # 225 "02base.c"
    if(list$1intph_length(self->texts)==0) {
        # 226 "02base.c"
        self->scroll=0;
        # 227 "02base.c"
        self->cursorY=0;
        # 228 "02base.c"
        self->cursorX=0;
    }
    else {
        # 256 "02base.c"
        # 230 "02base.c"
        if(gBinaryMode) {
            # 231 "02base.c"
            len_136=list$1int_item(self->texts_length,self->scroll+self->cursorY,-1);
            # 241 "02base.c"
            # 233 "02base.c"
            if(len_136!=-1&&self->cursorX>=len_136) {
                # 235 "02base.c"
                self->cursorX=len_136-1;
                # 240 "02base.c"
                # 237 "02base.c"
                if(self->cursorX<0) {
                    # 238 "02base.c"
                    self->cursorX=0;
                }
            }
        }
        else {
            # 243 "02base.c"
            cursor_line_139=list$1intph_item(self->texts,self->scroll+self->cursorY,((void*)0));
            # 255 "02base.c"
            # 245 "02base.c"
            if(cursor_line_139) {
                # 254 "02base.c"
                # 246 "02base.c"
                if(self->cursorX>=wstring_length(cursor_line_139)) {
                    # 248 "02base.c"
                    self->cursorX=wstring_length(cursor_line_139)-1;
                    # 253 "02base.c"
                    # 250 "02base.c"
                    if(self->cursorX<0) {
                        # 251 "02base.c"
                        self->cursorX=0;
                    }
                }
            }
        }
    }
}

static int list$1int_item(struct list$1int* self, int position, int default_value){
struct list_item$1int* it_137;
int i_138;
    # 340 "/usr/local/include/comelang.h"
    # 336 "/usr/local/include/comelang.h"
    if(position<0) {
        # 337 "/usr/local/include/comelang.h"
        position+=self->len;
    }
    # 340 "/usr/local/include/comelang.h"
    it_137=self->head;
    # 341 "/usr/local/include/comelang.h"
    i_138=0;
    # 348 "/usr/local/include/comelang.h"
    while(it_137!=((void*)0)) {
        # 346 "/usr/local/include/comelang.h"
        # 343 "/usr/local/include/comelang.h"
        if(position==i_138) {
            # 344 "/usr/local/include/comelang.h"
            return it_137->item;
        }
        # 346 "/usr/local/include/comelang.h"
        it_137=it_137->next;
        # 347 "/usr/local/include/comelang.h"
        i_138++;
    }
    # 350 "/usr/local/include/comelang.h"
    return default_value;
}

void ViWin_modifyOverCursorXValue2(struct ViWin* self){
int len_140;
int* cursor_line_141;
    # 293 "02base.c"
    # 260 "02base.c"
    if(list$1intph_length(self->texts)==0) {
        # 261 "02base.c"
        self->scroll=0;
        # 262 "02base.c"
        self->cursorY=0;
        # 263 "02base.c"
        self->cursorX=0;
    }
    else {
        # 293 "02base.c"
        # 265 "02base.c"
        if(gBinaryMode) {
            # 266 "02base.c"
            len_140=list$1int_item(self->texts_length,self->scroll+self->cursorY,-1);
            # 278 "02base.c"
            # 267 "02base.c"
            if(len_140==-1) {
                # 268 "02base.c"
                self->cursorX=0;
            }
            else {
                # 278 "02base.c"
                # 270 "02base.c"
                if(self->cursorX>=len_140) {
                    # 272 "02base.c"
                    self->cursorX=len_140+1;
                    # 277 "02base.c"
                    # 274 "02base.c"
                    if(self->cursorX<0) {
                        # 275 "02base.c"
                        self->cursorX=0;
                    }
                }
            }
        }
        else {
            # 280 "02base.c"
            cursor_line_141=list$1intph_item(self->texts,self->scroll+self->cursorY,((void*)0));
            # 292 "02base.c"
            # 282 "02base.c"
            if(cursor_line_141) {
                # 291 "02base.c"
                # 283 "02base.c"
                if(self->cursorX>=wstring_length(cursor_line_141)) {
                    # 285 "02base.c"
                    self->cursorX=wstring_length(cursor_line_141)+1;
                    # 290 "02base.c"
                    # 287 "02base.c"
                    if(self->cursorX<0) {
                        # 288 "02base.c"
                        self->cursorX=0;
                    }
                }
            }
        }
    }
}

void ViWin_modifyUnderCursorXValue(struct ViWin* self){
    # 300 "02base.c"
    # 297 "02base.c"
    if(self->cursorX<0) {
        # 298 "02base.c"
        self->cursorX=0;
    }
}

void ViWin_forward_v2(struct ViWin* self){
    # 304 "02base.c"
    self->cursorX++;
    # 305 "02base.c"
    ViWin_modifyOverCursorXValue(self);
}

void ViWin_backward_v2(struct ViWin* self){
    # 310 "02base.c"
    self->cursorX--;
    # 311 "02base.c"
    ViWin_modifyUnderCursorXValue(self);
}

void ViWin_prevLine(struct ViWin* self){
    # 316 "02base.c"
    self->cursorY--;
    # 318 "02base.c"
    ViWin_modifyUnderCursorYValue(self);
    # 319 "02base.c"
    ViWin_modifyOverCursorXValue(self);
}

void ViWin_nextLine(struct ViWin* self){
    # 324 "02base.c"
    self->cursorY++;
    # 326 "02base.c"
    ViWin_modifyOverCursorYValue(self);
    # 327 "02base.c"
    ViWin_modifyOverCursorXValue(self);
}

void ViWin_halfScrollUp(struct ViWin* self){
int maxy_142;
    # 332 "02base.c"
    maxy_142=getmaxy(self->win);
    # 334 "02base.c"
    self->cursorY-=maxy_142/2;
    # 336 "02base.c"
    ViWin_modifyUnderCursorYValue(self);
    # 337 "02base.c"
    ViWin_modifyOverCursorXValue(self);
}

void ViWin_halfScrollDown(struct ViWin* self){
int maxy_143;
    # 342 "02base.c"
    maxy_143=getmaxy(self->win);
    # 344 "02base.c"
    self->cursorY+=maxy_143/2;
    # 346 "02base.c"
    ViWin_modifyOverCursorYValue(self);
    # 347 "02base.c"
    ViWin_modifyOverCursorXValue(self);
}

void ViWin_centeringCursor(struct ViWin* self){
int maxy_144;
int n_145;
    # 352 "02base.c"
    maxy_144=getmaxy(self->win);
    # 354 "02base.c"
    n_145=self->scroll+self->cursorY;
    # 369 "02base.c"
    # 356 "02base.c"
    if(n_145>maxy_144/2) {
        # 357 "02base.c"
        self->scroll=n_145-maxy_144/2;
        # 358 "02base.c"
        self->cursorY=maxy_144/2;
        # 364 "02base.c"
        # 360 "02base.c"
        if(self->scroll>=list$1intph_length(self->texts)) {
            # 361 "02base.c"
            self->scroll=list$1intph_length(self->texts)-1;
            # 362 "02base.c"
            self->cursorY=0;
        }
        # 368 "02base.c"
        # 364 "02base.c"
        if(self->scroll<0) {
            # 365 "02base.c"
            self->scroll=0;
            # 366 "02base.c"
            self->cursorY=0;
        }
    }
}

void ViWin_topCursor(struct ViWin* self){
    # 373 "02base.c"
    self->scroll=self->scroll+self->cursorY;
    # 374 "02base.c"
    self->cursorY=0;
}

void ViWin_moveAtHead(struct ViWin* self){
    # 379 "02base.c"
    self->cursorX=0;
}

void ViWin_moveAtHead2(struct ViWin* self){
void* __right_value164 = (void*)0;
int* cursor_line_146;
    # 384 "02base.c"
    self->cursorX=0;
    # 385 "02base.c"
    cursor_line_146=list$1intph_item(self->texts,self->scroll+self->cursorY,(int*)come_increment_ref_count(__builtin_wstring("")));
    # 390 "02base.c"
    while(cursor_line_146[self->cursorX]==L' '||cursor_line_146[self->cursorX]==L'\11') {
        # 388 "02base.c"
        self->cursorX++;
    }
}

void ViWin_moveAtTail(struct ViWin* self){
void* __right_value165 = (void*)0;
int* cursor_line_147;
int line_max_148;
    # 394 "02base.c"
    cursor_line_147=list$1intph_item(self->texts,self->scroll+self->cursorY,(int*)come_increment_ref_count(__builtin_wstring("")));
    # 395 "02base.c"
    line_max_148=wstring_length(cursor_line_147);
    # 397 "02base.c"
    self->cursorX=line_max_148-1;
    # 402 "02base.c"
    # 399 "02base.c"
    if(self->cursorX<0) {
        # 400 "02base.c"
        self->cursorX=0;
    }
}

void ViWin_moveTop(struct ViWin* self){
    # 406 "02base.c"
    ViWin_saveReturnPoint(self);
    # 408 "02base.c"
    self->scroll=0;
    # 409 "02base.c"
    self->cursorY=0;
    # 410 "02base.c"
    self->cursorX=0;
    # 412 "02base.c"
    ViWin_modifyOverCursorXValue(self);
}

void ViWin_restoreVisualMode_v2(struct ViWin* self, struct Vi* nvi){
}

void ViWin_keyG(struct ViWin* self, struct Vi* nvi){
int key2_149;
    # 421 "02base.c"
    key2_149=ViWin_getKey_v14(self,0);
    # 444 "02base.c"
    switch (key2_149) {
        # 425 "02base.c"
        case 103:
        # 425 "02base.c"
        ViWin_moveTop(self);
        # 426 "02base.c"
        break;
        # 429 "02base.c"
        case 118:
        # 429 "02base.c"
        ViWin_restoreVisualMode_v8(self,nvi);
        # 430 "02base.c"
        break;
        # 433 "02base.c"
        case 47:
        # 433 "02base.c"
        Vi_enterSearchMode_v9(nvi,1,0);
        # 434 "02base.c"
        break;
        # 437 "02base.c"
        case 63:
        # 437 "02base.c"
        Vi_enterSearchMode_v9(nvi,1,1);
        # 438 "02base.c"
        break;
        # 441 "02base.c"
        case 74:
        # 441 "02base.c"
        ViWin_joinLines2_v10(self);
        # 442 "02base.c"
        break;
    }
}

void ViWin_moveBottom(struct ViWin* self){
    # 448 "02base.c"
    ViWin_saveReturnPoint(self);
    # 459 "02base.c"
    # 450 "02base.c"
    if(self->digitInput>0) {
        # 451 "02base.c"
        self->scroll=0;
        # 452 "02base.c"
        self->cursorY=self->digitInput;
        # 453 "02base.c"
        self->digitInput=0;
    }
    else {
        # 456 "02base.c"
        self->cursorY=list$1intph_length(self->texts)-1;
    }
    # 459 "02base.c"
    ViWin_modifyOverCursorXValue(self);
    # 460 "02base.c"
    ViWin_modifyOverCursorYValue(self);
    # 461 "02base.c"
    ViWin_centeringCursor(self);
}

void ViWin_openFile_v2(struct ViWin* self, char* file_name, int line_num, _Bool binary_mode){
    file_name = come_decrement_ref_count2(file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void ViWin_saveReturnPoint(struct ViWin* self){
void* __right_value166 = (void*)0;
struct tuple3$3intintint* return_point_150;
void* __right_value168 = (void*)0;
struct tuple3$3intintint* __dec_obj39;
void* __right_value172 = (void*)0;
    # 470 "02base.c"
    return_point_150=(struct tuple3$3intintint*)come_increment_ref_count((struct tuple3$3intintint*)come_calloc(1, sizeof(struct tuple3$3intintint)*(1), "02base.c", 470, "tuple3$3intintint"));
    # 472 "02base.c"
    return_point_150->v1=self->cursorY;
    # 473 "02base.c"
    return_point_150->v2=self->cursorX;
    # 474 "02base.c"
    return_point_150->v3=self->scroll;
    # 476 "02base.c"
    __dec_obj39=self->returnPoint;
    self->returnPoint=(struct tuple3$3intintint*)come_increment_ref_count(tuple3$3intintintp_clone(return_point_150));
    /* a*/come_call_finalizer3(__dec_obj39,tuple3$3intintint_finalize, 0, 0, 0, 0, (void*)0);
    # 477 "02base.c"
    list$1tuple3$3intintintph_push_back(self->returnPointStack,(struct tuple3$3intintint*)come_increment_ref_count(tuple3$3intintintp_clone(return_point_150)));
    /*i*/come_call_finalizer3(return_point_150,tuple3$3intintintp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple3$3intintint* tuple3$3intintintp_clone(struct tuple3$3intintint* self){
void* __result_obj__=(void*)0;
struct tuple3$3intintint* __result107__;
void* __right_value167 = (void*)0;
struct tuple3$3intintint* result_151;
struct tuple3$3intintint* __result108__;
    # 3 "tuple3$3intintintp_clone"
    # 2 "tuple3$3intintintp_clone"
    if(self==(void*)0) {
        # 2 "tuple3$3intintintp_clone"
        __result107__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    # 3 "tuple3$3intintintp_clone"
    result_151=(struct tuple3$3intintint*)come_increment_ref_count((struct tuple3$3intintint*)come_calloc(1, sizeof(struct tuple3$3intintint)*(1), "tuple3$3intintintp_clone", 3, "tuple3$3intintint"));
    # 5 "tuple3$3intintintp_clone"
    # 4 "tuple3$3intintintp_clone"
    if(self!=((void*)0)) {
        # 4 "tuple3$3intintintp_clone"
        result_151->v1=self->v1;
    }
    # 6 "tuple3$3intintintp_clone"
    # 5 "tuple3$3intintintp_clone"
    if(self!=((void*)0)) {
        # 5 "tuple3$3intintintp_clone"
        result_151->v2=self->v2;
    }
    # 7 "tuple3$3intintintp_clone"
    # 6 "tuple3$3intintintp_clone"
    if(self!=((void*)0)) {
        # 6 "tuple3$3intintintp_clone"
        result_151->v3=self->v3;
    }
    # 7 "tuple3$3intintintp_clone"
    __result108__ = gComeFunResultObject = __result_obj__ = result_151;
    /*i*/come_call_finalizer3(result_151,tuple3$3intintint_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void tuple3$3intintint_finalize(struct tuple3$3intintint* self){
}

static struct list$1tuple3$3intintintph* list$1tuple3$3intintintph_push_back(struct list$1tuple3$3intintintph* self, struct tuple3$3intintint* item){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
struct list_item$1tuple3$3intintintph* litem_152;
struct tuple3$3intintint* __dec_obj40;
void* __right_value170 = (void*)0;
struct list_item$1tuple3$3intintintph* litem_153;
struct tuple3$3intintint* __dec_obj41;
void* __right_value171 = (void*)0;
struct list_item$1tuple3$3intintintph* litem_154;
struct tuple3$3intintint* __dec_obj42;
struct list$1tuple3$3intintintph* __result109__;
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_152=(struct list_item$1tuple3$3intintintph*)come_increment_ref_count(((struct list_item$1tuple3$3intintintph*)(__right_value169=(struct list_item$1tuple3$3intintintph*)come_calloc(1, sizeof(struct list_item$1tuple3$3intintintph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple3$3intintintph"))));
        # 223 "/usr/local/include/comelang.h"
        litem_152->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_152->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        __dec_obj40=litem_152->item;
        litem_152->item=(struct tuple3$3intintint*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj40,tuple3$3intintint_finalize, 0, 0, 0, 0, (void*)0);
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_152;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_152;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_153=(struct list_item$1tuple3$3intintintph*)come_increment_ref_count(((struct list_item$1tuple3$3intintintph*)(__right_value170=(struct list_item$1tuple3$3intintintph*)come_calloc(1, sizeof(struct list_item$1tuple3$3intintintph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple3$3intintintph"))));
            # 233 "/usr/local/include/comelang.h"
            litem_153->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_153->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            __dec_obj41=litem_153->item;
            litem_153->item=(struct tuple3$3intintint*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj41,tuple3$3intintint_finalize, 0, 0, 0, 0, (void*)0);
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_153;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_153;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_154=(struct list_item$1tuple3$3intintintph*)come_increment_ref_count(((struct list_item$1tuple3$3intintintph*)(__right_value171=(struct list_item$1tuple3$3intintintph*)come_calloc(1, sizeof(struct list_item$1tuple3$3intintintph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple3$3intintintph"))));
            # 243 "/usr/local/include/comelang.h"
            litem_154->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_154->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            __dec_obj42=litem_154->item;
            litem_154->item=(struct tuple3$3intintint*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj42,tuple3$3intintint_finalize, 0, 0, 0, 0, (void*)0);
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_154;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_154;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple3$3intintintp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

void ViWin_saveInputedKeyOnTheMovingCursor_v2(struct ViWin* self){
}

void ViWin_joinLines2_v2(struct ViWin* self){
}

static void lambda1(struct Vi* self, int key){
    # 521 "02base.c"
    ViWin_forward_v2(self->activeWin);
    # 522 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda2(struct Vi* self, int key){
    # 526 "02base.c"
    ViWin_forward_v2(self->activeWin);
    # 527 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda3(struct Vi* self, int key){
    # 531 "02base.c"
    ViWin_forward_v2(self->activeWin);
    # 532 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda4(struct Vi* self, int key){
    # 536 "02base.c"
    ViWin_backward_v2(self->activeWin);
    # 537 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda5(struct Vi* self, int key){
    # 541 "02base.c"
    ViWin_backward_v2(self->activeWin);
    # 542 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda6(struct Vi* self, int key){
    # 546 "02base.c"
    ViWin_backward_v2(self->activeWin);
    # 547 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda7(struct Vi* self, int key){
    # 551 "02base.c"
    ViWin_nextLine(self->activeWin);
    # 552 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda8(struct Vi* self, int key){
    # 556 "02base.c"
    ViWin_nextLine(self->activeWin);
    # 557 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda9(struct Vi* self, int key){
    # 561 "02base.c"
    ViWin_nextLine(self->activeWin);
    # 562 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda10(struct Vi* self, int key){
    # 566 "02base.c"
    ViWin_prevLine(self->activeWin);
    # 567 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda11(struct Vi* self, int key){
    # 571 "02base.c"
    ViWin_prevLine(self->activeWin);
    # 572 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda12(struct Vi* self, int key){
    # 576 "02base.c"
    ViWin_prevLine(self->activeWin);
    # 577 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda13(struct Vi* self, int key){
    # 581 "02base.c"
    ViWin_moveAtHead(self->activeWin);
    # 582 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda14(struct Vi* self, int key){
    # 586 "02base.c"
    ViWin_moveAtHead2(self->activeWin);
    # 587 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda15(struct Vi* self, int key){
    # 591 "02base.c"
    ViWin_moveAtHead2(self->activeWin);
    # 592 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda16(struct Vi* self, int key){
    # 596 "02base.c"
    ViWin_moveAtHead(self->activeWin);
    # 597 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda17(struct Vi* self, int key){
    # 612 "02base.c"
    # 601 "02base.c"
    if(self->activeWin->digitInput>0) {
        # 602 "02base.c"
        self->activeWin->cursorY+=self->activeWin->digitInput;
        # 603 "02base.c"
        ViWin_modifyOverCursorYValue(self->activeWin);
        # 605 "02base.c"
        self->activeWin->digitInput=0;
        # 606 "02base.c"
        ViWin_moveAtTail(self->activeWin);
    }
    else {
        # 609 "02base.c"
        ViWin_moveAtTail(self->activeWin);
    }
    # 612 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda18(struct Vi* self, int key){
    # 633 "02base.c"
    ViWin_halfScrollDown(self->activeWin);
    # 634 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda19(struct Vi* self, int key){
    # 638 "02base.c"
    ViWin_halfScrollUp(self->activeWin);
    # 639 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda20(struct Vi* self, int key){
    # 643 "02base.c"
    Vi_clearView(self);
    # 644 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda21(struct Vi* self, int key){
    # 648 "02base.c"
    ViWin_keyG(self->activeWin,self);
    # 649 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda22(struct Vi* self, int key){
    # 653 "02base.c"
    ViWin_moveBottom(self->activeWin);
    # 654 "02base.c"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
}

static void lambda23(struct Vi* self, int key){
int key2_181;
    # 658 "02base.c"
    key2_181=ViWin_getKey_v14(self->activeWin,0);
    # 673 "02base.c"
    switch (key2_181) {
        # 662 "02base.c"
        case 122:
        # 663 "02base.c"
        case 46:
        # 663 "02base.c"
        ViWin_centeringCursor(self->activeWin);
        # 664 "02base.c"
        ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
        # 665 "02base.c"
        break;
        # 668 "02base.c"
        case 10:
        # 669 "02base.c"
        case 116:
        # 669 "02base.c"
        ViWin_topCursor(self->activeWin);
        # 670 "02base.c"
        ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
        # 671 "02base.c"
        break;
    }
}

static void lambda24(struct Vi* self, int key){
int key2_182;
    # 676 "02base.c"
    key2_182=ViWin_getKey_v14(self->activeWin,0);
    # 683 "02base.c"
    switch (key2_182) {
        # 680 "02base.c"
        case 90:
        # 680 "02base.c"
        Vi_exitFromApp_v6(self);
        # 681 "02base.c"
        break;
    }
}

struct Vi* Vi_initialize_v2(struct Vi* self){
void* __result_obj__=(void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct list$1ViWinph* __dec_obj44;
int maxx_159;
int maxy_160;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct ViWin* win_161;
void* __right_value177 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct list$1lambda* __dec_obj48;
int i_172;
struct Vi* __result118__;
    # 493 "02base.c"
    setlocale(0,"");
    # 495 "02base.c"
    Vi_init_curses(self);
    # 497 "02base.c"
    __dec_obj44=self->wins;
    self->wins=(struct list$1ViWinph*)come_increment_ref_count(list$1ViWinph_initialize((struct list$1ViWinph*)come_increment_ref_count((struct list$1ViWinph*)come_calloc(1, sizeof(struct list$1ViWinph)*(1), "02base.c", 497, "list$1ViWinph"))));
    /* a*/come_call_finalizer3(__dec_obj44,list$1ViWinph_finalize, 0, 0, 0, 0, (void*)0);
    # 499 "02base.c"
    maxx_159=xgetmaxx();
    # 500 "02base.c"
    maxy_160=xgetmaxy();
    # 502 "02base.c"
    win_161=(struct ViWin*)come_increment_ref_count(ViWin_initialize_v18((struct ViWin*)come_increment_ref_count((struct ViWin*)come_calloc(1, sizeof(struct ViWin)*(1), "02base.c", 502, "ViWin")),0,0,maxx_159-1,maxy_160,self));
    # 504 "02base.c"
    list$1intph_push_back(win_161->texts,(int*)come_increment_ref_count(__builtin_wstring("")));
    # 505 "02base.c"
    list$1int_push_back(win_161->texts_length,0);
    # 507 "02base.c"
    list$1ViWinph_push_back(self->wins,(struct ViWin*)come_increment_ref_count(win_161));
    # 509 "02base.c"
    self->activeWin=((struct ViWin*)come_null_check(list$1ViWinphp_operator_load_element(self->wins,-1), "02base.c", 509, 0));
    # 511 "02base.c"
    self->appEnd=0;
    # 513 "02base.c"
    __dec_obj48=self->events;
    self->events=(struct list$1lambda*)come_increment_ref_count(list$1lambda_initialize((struct list$1lambda*)come_increment_ref_count((struct list$1lambda*)come_calloc(1, sizeof(struct list$1lambda)*(1), "02base.c", 513, "list$1lambda"))));
    /* a*/come_call_finalizer3(__dec_obj48,list$1lambda_finalize, 0, 0, 0, 0, (void*)0);
    # 519 "02base.c"
    for(    i_172=0;    i_172<511;    i_172++    ){
        # 516 "02base.c"
        list$1lambda_push_back(self->events,((void*)0));
    }
    # 523 "02base.c"
    list$1lambda_replace(self->events,108,lambda1);
    # 528 "02base.c"
    list$1lambda_replace(self->events,261,lambda2);
    # 533 "02base.c"
    list$1lambda_replace(self->events,70-65+1,lambda3);
    # 538 "02base.c"
    list$1lambda_replace(self->events,104,lambda4);
    # 543 "02base.c"
    list$1lambda_replace(self->events,66-65+1,lambda5);
    # 548 "02base.c"
    list$1lambda_replace(self->events,260,lambda6);
    # 553 "02base.c"
    list$1lambda_replace(self->events,106,lambda7);
    # 558 "02base.c"
    list$1lambda_replace(self->events,258,lambda8);
    # 563 "02base.c"
    list$1lambda_replace(self->events,78-65+1,lambda9);
    # 568 "02base.c"
    list$1lambda_replace(self->events,107,lambda10);
    # 573 "02base.c"
    list$1lambda_replace(self->events,259,lambda11);
    # 578 "02base.c"
    list$1lambda_replace(self->events,80-65+1,lambda12);
    # 583 "02base.c"
    list$1lambda_replace(self->events,48,lambda13);
    # 588 "02base.c"
    list$1lambda_replace(self->events,65-65+1,lambda14);
    # 593 "02base.c"
    list$1lambda_replace(self->events,94,lambda15);
    # 598 "02base.c"
    list$1lambda_replace(self->events,124,lambda16);
    # 613 "02base.c"
    list$1lambda_replace(self->events,36,lambda17);
    # 635 "02base.c"
    list$1lambda_replace(self->events,68-65+1,lambda18);
    # 640 "02base.c"
    list$1lambda_replace(self->events,85-65+1,lambda19);
    # 645 "02base.c"
    list$1lambda_replace(self->events,76-65+1,lambda20);
    # 650 "02base.c"
    list$1lambda_replace(self->events,103,lambda21);
    # 655 "02base.c"
    list$1lambda_replace(self->events,71,lambda22);
    # 673 "02base.c"
    list$1lambda_replace(self->events,122,lambda23);
    # 683 "02base.c"
    list$1lambda_replace(self->events,90,lambda24);
    # 685 "02base.c"
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,Vi_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(win_161,ViWin_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1ViWinph* list$1ViWinph_initialize(struct list$1ViWinph* self){
void* __result_obj__=(void*)0;
struct list$1ViWinph* __result110__;
    # 99 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 100 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 101 "/usr/local/include/comelang.h"
    self->len=0;
    # 103 "/usr/local/include/comelang.h"
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1ViWinphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static void list$1ViWinphp_finalize(struct list$1ViWinph* self){
struct list_item$1ViWinph* it_155;
struct list_item$1ViWinph* prev_it_156;
    # 118 "/usr/local/include/comelang.h"
    it_155=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_155!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_156=it_155;
        # 121 "/usr/local/include/comelang.h"
        it_155=it_155->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_156,list_item$1ViWinphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1ViWinphp_finalize(struct list_item$1ViWinph* self){
struct ViWin* __dec_obj43;
    # 1 "list_item$1ViWinphp_finalize"
    # 0 "list_item$1ViWinphp_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 0 "list_item$1ViWinphp_finalize"
        # 0 "list_item$1ViWinphp_finalize"
        if(self->item==gComeFunResultObject) {
            # 0 "list_item$1ViWinphp_finalize"
            __dec_obj43=self->item;
            /* a*/come_call_finalizer3(__dec_obj43,ViWin_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "list_item$1ViWinphp_finalize"
            /*i*/come_call_finalizer3(self->item,ViWin_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1ViWinph_finalize(struct list$1ViWinph* self){
struct list_item$1ViWinph* it_157;
struct list_item$1ViWinph* prev_it_158;
    # 118 "/usr/local/include/comelang.h"
    it_157=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_157!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_158=it_157;
        # 121 "/usr/local/include/comelang.h"
        it_157=it_157->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_158,list_item$1ViWinphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1ViWinph* list$1ViWinph_push_back(struct list$1ViWinph* self, struct ViWin* item){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
struct list_item$1ViWinph* litem_162;
struct ViWin* __dec_obj45;
void* __right_value179 = (void*)0;
struct list_item$1ViWinph* litem_163;
struct ViWin* __dec_obj46;
void* __right_value180 = (void*)0;
struct list_item$1ViWinph* litem_164;
struct ViWin* __dec_obj47;
struct list$1ViWinph* __result111__;
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_162=(struct list_item$1ViWinph*)come_increment_ref_count(((struct list_item$1ViWinph*)(__right_value178=(struct list_item$1ViWinph*)come_calloc(1, sizeof(struct list_item$1ViWinph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1ViWinph"))));
        # 223 "/usr/local/include/comelang.h"
        litem_162->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_162->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        __dec_obj45=litem_162->item;
        litem_162->item=(struct ViWin*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj45,ViWin_finalize, 0, 0, 0, 0, (void*)0);
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_162;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_162;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_163=(struct list_item$1ViWinph*)come_increment_ref_count(((struct list_item$1ViWinph*)(__right_value179=(struct list_item$1ViWinph*)come_calloc(1, sizeof(struct list_item$1ViWinph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1ViWinph"))));
            # 233 "/usr/local/include/comelang.h"
            litem_163->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_163->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            __dec_obj46=litem_163->item;
            litem_163->item=(struct ViWin*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,ViWin_finalize, 0, 0, 0, 0, (void*)0);
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_163;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_163;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_164=(struct list_item$1ViWinph*)come_increment_ref_count(((struct list_item$1ViWinph*)(__right_value180=(struct list_item$1ViWinph*)come_calloc(1, sizeof(struct list_item$1ViWinph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1ViWinph"))));
            # 243 "/usr/local/include/comelang.h"
            litem_164->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_164->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            __dec_obj47=litem_164->item;
            litem_164->item=(struct ViWin*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj47,ViWin_finalize, 0, 0, 0, 0, (void*)0);
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_164;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_164;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,ViWin_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct ViWin* list$1ViWinphp_operator_load_element(struct list$1ViWinph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1ViWinph* it_165;
int i_166;
struct ViWin* __result112__;
struct ViWin* default_value_167;
struct ViWin* __result113__;
default_value_167 = (void*)0;
    # 691 "/usr/local/include/comelang.h"
    # 687 "/usr/local/include/comelang.h"
    if(position<0) {
        # 688 "/usr/local/include/comelang.h"
        position+=self->len;
    }
    # 691 "/usr/local/include/comelang.h"
    it_165=self->head;
    # 692 "/usr/local/include/comelang.h"
    i_166=0;
    # 699 "/usr/local/include/comelang.h"
    while(it_165!=((void*)0)) {
        # 697 "/usr/local/include/comelang.h"
        # 694 "/usr/local/include/comelang.h"
        if(position==i_166) {
            # 695 "/usr/local/include/comelang.h"
            __result112__ = gComeFunResultObject = __result_obj__ = it_165->item;
            gComeFunResultObject = (void*)0;
            return __result112__;
        }
        # 697 "/usr/local/include/comelang.h"
        it_165=it_165->next;
        # 698 "/usr/local/include/comelang.h"
        i_166++;
    }
    # 701 "/usr/local/include/comelang.h"
    # 702 "/usr/local/include/comelang.h"
    memset(&default_value_167,0,sizeof(struct ViWin*));
    # 703 "/usr/local/include/comelang.h"
    __result113__ = gComeFunResultObject = __result_obj__ = default_value_167;
    /*i*/come_call_finalizer3(default_value_167,ViWin_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1lambda* list$1lambda_initialize(struct list$1lambda* self){
void* __result_obj__=(void*)0;
struct list$1lambda* __result114__;
    # 99 "/usr/local/include/comelang.h"
    self->head=((void*)0);
    # 100 "/usr/local/include/comelang.h"
    self->tail=((void*)0);
    # 101 "/usr/local/include/comelang.h"
    self->len=0;
    # 103 "/usr/local/include/comelang.h"
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1lambdap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void list$1lambdap_finalize(struct list$1lambda* self){
struct list_item$1lambda* it_168;
struct list_item$1lambda* prev_it_169;
    # 118 "/usr/local/include/comelang.h"
    it_168=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_168!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_169=it_168;
        # 121 "/usr/local/include/comelang.h"
        it_168=it_168->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_169,list_item$1lambdap_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1lambdap_finalize(struct list_item$1lambda* self){
}

static void list$1lambda_finalize(struct list$1lambda* self){
struct list_item$1lambda* it_170;
struct list_item$1lambda* prev_it_171;
    # 118 "/usr/local/include/comelang.h"
    it_170=self->head;
    # 124 "/usr/local/include/comelang.h"
    while(it_170!=((void*)0)) {
        # 120 "/usr/local/include/comelang.h"
        prev_it_171=it_170;
        # 121 "/usr/local/include/comelang.h"
        it_170=it_170->next;
        # 122 "/usr/local/include/comelang.h"
        /*i*/come_call_finalizer3(prev_it_171,list_item$1lambdap_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1lambda* list$1lambda_push_back(struct list$1lambda* self, void (*item)(struct Vi*,int)){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
struct list_item$1lambda* litem_173;
void* __right_value184 = (void*)0;
struct list_item$1lambda* litem_174;
void* __right_value185 = (void*)0;
struct list_item$1lambda* litem_175;
struct list$1lambda* __result115__;
    # 251 "/usr/local/include/comelang.h"
    # 220 "/usr/local/include/comelang.h"
    if(self->len==0) {
        # 221 "/usr/local/include/comelang.h"
        litem_173=(struct list_item$1lambda*)come_increment_ref_count(((struct list_item$1lambda*)(__right_value183=(struct list_item$1lambda*)come_calloc(1, sizeof(struct list_item$1lambda)*(1), "/usr/local/include/comelang.h", 221, "list_item$1lambda"))));
        # 223 "/usr/local/include/comelang.h"
        litem_173->prev=((void*)0);
        # 224 "/usr/local/include/comelang.h"
        litem_173->next=((void*)0);
        # 225 "/usr/local/include/comelang.h"
        litem_173->item=item;
        # 227 "/usr/local/include/comelang.h"
        self->tail=litem_173;
        # 228 "/usr/local/include/comelang.h"
        self->head=litem_173;
    }
    else {
        # 251 "/usr/local/include/comelang.h"
        # 230 "/usr/local/include/comelang.h"
        if(self->len==1) {
            # 231 "/usr/local/include/comelang.h"
            litem_174=(struct list_item$1lambda*)come_increment_ref_count(((struct list_item$1lambda*)(__right_value184=(struct list_item$1lambda*)come_calloc(1, sizeof(struct list_item$1lambda)*(1), "/usr/local/include/comelang.h", 231, "list_item$1lambda"))));
            # 233 "/usr/local/include/comelang.h"
            litem_174->prev=self->head;
            # 234 "/usr/local/include/comelang.h"
            litem_174->next=((void*)0);
            # 235 "/usr/local/include/comelang.h"
            litem_174->item=item;
            # 237 "/usr/local/include/comelang.h"
            self->tail=litem_174;
            # 238 "/usr/local/include/comelang.h"
            self->head->next=litem_174;
        }
        else {
            # 241 "/usr/local/include/comelang.h"
            litem_175=(struct list_item$1lambda*)come_increment_ref_count(((struct list_item$1lambda*)(__right_value185=(struct list_item$1lambda*)come_calloc(1, sizeof(struct list_item$1lambda)*(1), "/usr/local/include/comelang.h", 241, "list_item$1lambda"))));
            # 243 "/usr/local/include/comelang.h"
            litem_175->prev=self->tail;
            # 244 "/usr/local/include/comelang.h"
            litem_175->next=((void*)0);
            # 245 "/usr/local/include/comelang.h"
            litem_175->item=item;
            # 247 "/usr/local/include/comelang.h"
            self->tail->next=litem_175;
            # 248 "/usr/local/include/comelang.h"
            self->tail=litem_175;
        }
    }
    # 251 "/usr/local/include/comelang.h"
    self->len++;
    # 253 "/usr/local/include/comelang.h"
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct list$1lambda* list$1lambda_replace(struct list$1lambda* self, int position, void (*item)(struct Vi*,int)){
void* __result_obj__=(void*)0;
int len_176;
int i_177;
void (*default_value_178)(struct Vi*,int);
struct list$1lambda* __result116__;
struct list_item$1lambda* it_179;
int i_180;
struct list$1lambda* __result117__;
memset(&default_value_178, 0, sizeof(void (*)(struct Vi*,int)));
    # 587 "/usr/local/include/comelang.h"
    # 584 "/usr/local/include/comelang.h"
    if(position<0) {
        # 585 "/usr/local/include/comelang.h"
        position+=self->len;
    }
    # 591 "/usr/local/include/comelang.h"
    # 587 "/usr/local/include/comelang.h"
    if(position<0) {
        # 588 "/usr/local/include/comelang.h"
        position=0;
    }
    # 602 "/usr/local/include/comelang.h"
    # 591 "/usr/local/include/comelang.h"
    if(self->len==0||position>=self->len) {
        # 592 "/usr/local/include/comelang.h"
        len_176=self->len;
        # 598 "/usr/local/include/comelang.h"
        for(        i_177=0;        i_177<position-len_176;        i_177++        ){
            # 594 "/usr/local/include/comelang.h"
            # 595 "/usr/local/include/comelang.h"
            memset(&default_value_178,0,sizeof(void (*)(struct Vi*,int)));
            # 596 "/usr/local/include/comelang.h"
            list$1lambda_push_back(self,default_value_178);
        }
        # 598 "/usr/local/include/comelang.h"
        list$1lambda_push_back(self,item);
        # 599 "/usr/local/include/comelang.h"
        __result116__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    # 602 "/usr/local/include/comelang.h"
    it_179=self->head;
    # 603 "/usr/local/include/comelang.h"
    i_180=0;
    # 613 "/usr/local/include/comelang.h"
    while(it_179!=((void*)0)) {
        # 609 "/usr/local/include/comelang.h"
        # 605 "/usr/local/include/comelang.h"
        if(position==i_180) {
            # 606 "/usr/local/include/comelang.h"
            it_179->item=item;
            # 607 "/usr/local/include/comelang.h"
            break;
        }
        # 609 "/usr/local/include/comelang.h"
        it_179=it_179->next;
        # 610 "/usr/local/include/comelang.h"
        i_180++;
    }
    # 613 "/usr/local/include/comelang.h"
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void Vi_finalize(struct Vi* self){
struct list$1ViWinph* __dec_obj49;
struct list$1lambda* __dec_obj50;
struct list$1intph* __dec_obj51;
struct list$1intph* __dec_obj52;
    # 1 "Vi_finalize"
    # 0 "Vi_finalize"
    if(self!=((void*)0)&&self->wins!=((void*)0)) {
        # 0 "Vi_finalize"
        # 0 "Vi_finalize"
        if(self->wins==gComeFunResultObject) {
            # 0 "Vi_finalize"
            __dec_obj49=self->wins;
            /* a*/come_call_finalizer3(__dec_obj49,list$1ViWinph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 0 "Vi_finalize"
            /*i*/come_call_finalizer3(self->wins,list$1ViWinphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 2 "Vi_finalize"
    # 1 "Vi_finalize"
    if(self!=((void*)0)&&self->events!=((void*)0)) {
        # 1 "Vi_finalize"
        # 1 "Vi_finalize"
        if(self->events==gComeFunResultObject) {
            # 1 "Vi_finalize"
            __dec_obj50=self->events;
            /* a*/come_call_finalizer3(__dec_obj50,list$1lambda_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 1 "Vi_finalize"
            /*i*/come_call_finalizer3(self->events,list$1lambdap_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 3 "Vi_finalize"
    # 2 "Vi_finalize"
    if(self!=((void*)0)&&self->yank!=((void*)0)) {
        # 2 "Vi_finalize"
        # 2 "Vi_finalize"
        if(self->yank==gComeFunResultObject) {
            # 2 "Vi_finalize"
            __dec_obj51=self->yank;
            /* a*/come_call_finalizer3(__dec_obj51,list$1intph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 2 "Vi_finalize"
            /*i*/come_call_finalizer3(self->yank,list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 4 "Vi_finalize"
    # 3 "Vi_finalize"
    if(self!=((void*)0)&&self->fileYank!=((void*)0)) {
        # 3 "Vi_finalize"
        # 3 "Vi_finalize"
        if(self->fileYank==gComeFunResultObject) {
            # 3 "Vi_finalize"
            __dec_obj52=self->fileYank;
            /* a*/come_call_finalizer3(__dec_obj52,list$1intph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            # 3 "Vi_finalize"
            /*i*/come_call_finalizer3(self->fileYank,list$1intphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void Vi_exitFromApp_v2(struct Vi* self){
    # 690 "02base.c"
    self->appEnd=1;
}

void Vi_view(struct Vi* self){
struct list$1ViWinph* o2_saved_183;
struct ViWin* it_186;
    # 695 "02base.c"
    werase(stdscr);
    # 701 "02base.c"
    for(    o2_saved_183=(struct list$1ViWinph*)come_increment_ref_count((self->wins)),it_186=list$1ViWinph_begin((o2_saved_183));    !list$1ViWinph_end((o2_saved_183));    it_186=list$1ViWinph_next((o2_saved_183))    ){
        # 698 "02base.c"
        ViWin_view_v21(it_186,self);
        # 699 "02base.c"
        wrefresh(it_186->win);
    }
    /*i*/come_call_finalizer3(o2_saved_183,list$1ViWinphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct ViWin* list$1ViWinph_begin(struct list$1ViWinph* self){
void* __result_obj__=(void*)0;
struct ViWin* result_184;
struct ViWin* __result119__;
struct ViWin* __result120__;
struct ViWin* result_185;
struct ViWin* __result121__;
result_184 = (void*)0;
result_185 = (void*)0;
    # 285 "/usr/local/include/comelang.h"
    # 280 "/usr/local/include/comelang.h"
    if(self==((void*)0)) {
        # 281 "/usr/local/include/comelang.h"
        # 282 "/usr/local/include/comelang.h"
        memset(&result_184,0,sizeof(struct ViWin*));
        # 283 "/usr/local/include/comelang.h"
        __result119__ = gComeFunResultObject = __result_obj__ = result_184;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    # 285 "/usr/local/include/comelang.h"
    self->it=self->head;
    # 291 "/usr/local/include/comelang.h"
    # 287 "/usr/local/include/comelang.h"
    if(self->it) {
        # 288 "/usr/local/include/comelang.h"
        __result120__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    # 291 "/usr/local/include/comelang.h"
    # 292 "/usr/local/include/comelang.h"
    memset(&result_185,0,sizeof(struct ViWin*));
    # 293 "/usr/local/include/comelang.h"
    __result121__ = gComeFunResultObject = __result_obj__ = result_185;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static _Bool list$1ViWinph_end(struct list$1ViWinph* self){
    # 315 "/usr/local/include/comelang.h"
    return self==((void*)0)||self->it==((void*)0);
}

static struct ViWin* list$1ViWinph_next(struct list$1ViWinph* self){
void* __result_obj__=(void*)0;
struct ViWin* result_187;
struct ViWin* __result122__;
struct ViWin* __result123__;
struct ViWin* result_188;
struct ViWin* __result124__;
result_187 = (void*)0;
result_188 = (void*)0;
    # 303 "/usr/local/include/comelang.h"
    # 297 "/usr/local/include/comelang.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 298 "/usr/local/include/comelang.h"
        # 299 "/usr/local/include/comelang.h"
        memset(&result_187,0,sizeof(struct ViWin*));
        # 300 "/usr/local/include/comelang.h"
        __result122__ = gComeFunResultObject = __result_obj__ = result_187;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    # 303 "/usr/local/include/comelang.h"
    self->it=self->it->next;
    # 309 "/usr/local/include/comelang.h"
    # 305 "/usr/local/include/comelang.h"
    if(self->it) {
        # 306 "/usr/local/include/comelang.h"
        __result123__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    # 309 "/usr/local/include/comelang.h"
    # 310 "/usr/local/include/comelang.h"
    memset(&result_188,0,sizeof(struct ViWin*));
    # 311 "/usr/local/include/comelang.h"
    __result124__ = gComeFunResultObject = __result_obj__ = result_188;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

void Vi_clearView(struct Vi* self){
struct list$1ViWinph* o2_saved_189;
struct ViWin* it_190;
    # 705 "02base.c"
    clearok(stdscr,1);
    # 706 "02base.c"
    wclear(stdscr);
    # 707 "02base.c"
    clearok(stdscr,0);
    # 714 "02base.c"
    for(    o2_saved_189=(struct list$1ViWinph*)come_increment_ref_count((self->wins)),it_190=list$1ViWinph_begin((o2_saved_189));    !list$1ViWinph_end((o2_saved_189));    it_190=list$1ViWinph_next((o2_saved_189))    ){
        # 709 "02base.c"
        clearok(it_190->win,1);
        # 710 "02base.c"
        wclear(it_190->win);
        # 711 "02base.c"
        clearok(it_190->win,0);
        # 712 "02base.c"
        ViWin_view_v21(it_190,self);
    }
    /*i*/come_call_finalizer3(o2_saved_189,list$1ViWinphp_finalize, 0, 0, 0, 0, (void*)0);
    # 714 "02base.c"
    wrefresh(stdscr);
}

int Vi_main_loop_v2(struct Vi* self){
    # 725 "02base.c"
    while(!self->appEnd) {
        # 720 "02base.c"
        Vi_view(self);
        # 722 "02base.c"
        ViWin_input_v21(self->activeWin,self);
    }
    # 728 ""
    return 0;
}

void Vi_openFile_v2(struct Vi* self, char* file_name, int line_num, _Bool binary_mode){
    file_name = come_decrement_ref_count2(file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void Vi_repositionWindows_v2(struct Vi* self){
}

void Vi_enterSearchMode_v2(struct Vi* self, _Bool regex_search, _Bool search_reverse){
}

