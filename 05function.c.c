// source head
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
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
typedef short int16_t;
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
    short _flags;
    short _file;
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
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long unsigned  long uint_least64_t;
typedef char int_fast8_t;
typedef short int_fast16_t;
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
extern void* wildcard;
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
    short* p;
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
    short item;
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
    short* items;
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
struct integer
{
    long value;
};
struct floating
{
    double value;
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
    _Bool mOmitSemicolon;
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
struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};
struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
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
    _Bool comma_instead_of_semicolon;
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
    _Bool in_conditional_operator;
    char* if_result_var_name;
    struct list$1sVarph* match_it_var;
    struct list$1int* sline_stack;
    int sline_top;
    _Bool new_;
    struct sFun* calling_fun;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
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
extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
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
struct buffer* buffer_append_short(struct buffer* self, short value);
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
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
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
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
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
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long unsigned  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
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
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long unsigned  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
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
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
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
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
void free_objects_of_match_lv_tables(struct sInfo* info);
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
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
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
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
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
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
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static struct list$1int* list$1int_initialize(struct list$1int* self);
static void list$1int_finalize(struct list$1int* self);
static struct list$1int* list$1int_add(struct list$1int* self, int item);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
static void list$1int_pop_front(struct list$1int* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right);
static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2419, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2426, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2435, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2442, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2449, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2456, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2463, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2763, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2768, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2773, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2778, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2783, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2816, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2818, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2823, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2825, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2830, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2832, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2837, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2839, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2844, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2846, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2851, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2853, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2858, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2860, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2865, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2870, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2875, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2880, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2885, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2890, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2895, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2900, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2905, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2910, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2915, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2920, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2925, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2930, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long unsigned  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
}
static inline unsigned long unsigned  int shortpa_length(short* self, unsigned long unsigned  int len){
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
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    self->p=(short*)value->buf;
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 223, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 233, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 243, "list_item$1char"))));
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 223, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 233, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 243, "list_item$1charp"))));
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


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
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

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 223, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 233, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 243, "list_item$1short"))));
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 223, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 233, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 243, "list_item$1int"))));
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 223, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 233, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 243, "list_item$1long"))));
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 223, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 233, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 243, "list_item$1float"))));
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 223, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 233, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 243, "list_item$1double"))));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "char*")));
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
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1017, "double")));
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
    /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_66;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* result_type_67;
void* __right_value122 = (void*)0;
int block_level_68;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_69;
void* __right_value125 = (void*)0;
char* __dec_obj18;
void* __right_value161 = (void*)0;
struct sType* __dec_obj63;
_Bool __result88__;
    come_fun_66=info->come_fun;
    info->come_fun=self->mFun;
    result_type_67=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_67,"__result_obj__",(_Bool)0,info))));
        /* U11 */__right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_68=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_68;
    come_value_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_69->c_value;
    come_value_69->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value_69->type;
    come_value_69->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_69->var=((void*)0);
    add_come_last_code(info,"%s",come_value_69->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
    info->come_fun=come_fun_66;
    __result88__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value126 = (void*)0;
struct sType* result_70;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value130 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value131 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value132 = (void*)0;
char* __dec_obj44;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj48;
void* __right_value147 = (void*)0;
struct list$1sNodeph* __dec_obj52;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __dec_obj53;
void* __right_value155 = (void*)0;
struct list$1charph* __dec_obj57;
void* __right_value156 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value158 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value159 = (void*)0;
char* __dec_obj61;
void* __right_value160 = (void*)0;
char* __dec_obj62;
struct sType* __result86__;
    if(    self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_70=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_70->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_70->mNoSolvedGenericsType;
        result_70->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_70->mOriginalLoadVarType;
        result_70->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj43=result_70->mNoExceptionType;
        result_70->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj44=result_70->mGenericsName;
        result_70->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj48=result_70->mGenericsTypes;
        result_70->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj52=result_70->mArrayNum;
        result_70->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj53=result_70->mParamTypes;
        result_70->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj57=result_70->mParamNames;
        result_70->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj58=result_70->mResultType;
        result_70->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_70->mAlignas;
        result_70->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_70->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_70->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_70->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_70->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_70->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_70->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_70->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_70->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_70->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_70->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_70->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_70->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_70->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_70->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_70->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_70->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_70->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_70->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_70->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_70->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj60=result_70->mSizeNum;
        result_70->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_70->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_70->mOriginalTypeName;
        result_70->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_70->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_70->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_70->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_70->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_70->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_70->mAsmName;
        result_70->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_70->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_70->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_70->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_70->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginIsArray=self->mOriginIsArray;
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_70;
    /*i*/come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* result_71;
void* __right_value128 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result71__;
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_71=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_71->v1;
        result_71->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_71;
    /*i*/come_call_finalizer3(result_71,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
char* __dec_obj26;
struct list$1sTypeph* __dec_obj27;
struct list$1sNodeph* __dec_obj29;
struct list$1sTypeph* __dec_obj31;
struct list$1charph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct sNode* __dec_obj36;
struct sNode* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj20=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj22=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj24=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj27=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj29=self->mArrayNum;
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj31=self->mParamTypes;
            come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj32=self->mParamNames;
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj34=self->mResultType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj36=self->mAlignas;
            /* U1 */ if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            /* U1 */ if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj38=self->mOriginalTypeName;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj39=self->mAsmName;
            /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_72;
struct list_item$1sTypeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_74;
struct list_item$1sTypeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_76;
struct list_item$1sNodeph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj30;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            /* U1 */ if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_78;
struct list_item$1sNodeph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_82;
struct list_item$1charph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj35;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj40=self->v1;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result72__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_84=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 139, "list$1sTypeph"))));
    it_85=self->head;
    while(it_85!=((void*)0)) {
        list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(sType_clone(it_85->item)));
        it_85=it_85->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_84;
    /*i*/come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj47;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1sTypeph"))));
        litem_86->prev=((void*)0);
        litem_86->next=((void*)0);
        __dec_obj45=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_86;
        self->head=litem_86;
    }
    else if(    self->len==1) {
        litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1sTypeph"))));
        litem_87->prev=self->head;
        litem_87->next=((void*)0);
        __dec_obj46=litem_87->item;
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_87;
        self->head->next=litem_87;
    }
    else {
        litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1sTypeph"))));
        litem_88->prev=self->tail;
        litem_88->next=((void*)0);
        __dec_obj47=litem_88->item;
        litem_88->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_88;
        self->tail=litem_88;
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
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1sNodeph* result_89;
struct list_item$1sNodeph* it_90;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_89=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 139, "list$1sNodeph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1sNodeph_add(result_89,(struct sNode*)come_increment_ref_count(sNode_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj50;
void* __right_value144 = (void*)0;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj51;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1sNodeph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj49=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1) {
        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1sNodeph"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj50=litem_92->item;
        litem_92->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1sNodeph"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj51=litem_93->item;
        litem_93->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_93;
        self->tail=litem_93;
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
void* __right_value145 = (void*)0;
struct sNode* result_94;
struct sNode* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_94=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_94->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_94->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_94->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_94->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_94->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_94->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_94->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_94->kind=self->kind;
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_94;
    if(result_94) { result_94 = come_decrement_ref_count2(result_94, ((struct sNode*)result_94)->finalize, ((struct sNode*)result_94)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result82__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_95;
struct list_item$1charph* it_96;
void* __right_value154 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_95=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 139, "list$1charph"))));
    it_96=self->head;
    while(it_96!=((void*)0)) {
        list$1charph_add(result_95,(char*)come_increment_ref_count(string_clone(it_96->item)));
        it_96=it_96->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_95;
    /*i*/come_call_finalizer3(result_95,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj54;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_98;
char* __dec_obj55;
void* __right_value153 = (void*)0;
struct list_item$1charph* litem_99;
char* __dec_obj56;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1charph"))));
        litem_97->prev=((void*)0);
        litem_97->next=((void*)0);
        __dec_obj54=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_97;
        self->head=litem_97;
    }
    else if(    self->len==1) {
        litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1charph"))));
        litem_98->prev=self->head;
        litem_98->next=((void*)0);
        __dec_obj55=litem_98->item;
        litem_98->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_98;
        self->head->next=litem_98;
    }
    else {
        litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1charph"))));
        litem_99->prev=self->tail;
        litem_99->next=((void*)0);
        __dec_obj56=litem_99->item;
        litem_99->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_99;
        self->tail=litem_99;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj64;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_101;
struct CVALUE* __dec_obj68;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_102;
struct CVALUE* __dec_obj69;
struct list$1CVALUEph* __result87__;
    if(    self->len==0) {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1CVALUEph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj64=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_100;
        self->head=litem_100;
    }
    else if(    self->len==1) {
        litem_101=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1CVALUEph"))));
        litem_101->prev=self->head;
        litem_101->next=((void*)0);
        __dec_obj68=litem_101->item;
        litem_101->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_101;
        self->head->next=litem_101;
    }
    else {
        litem_102=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1CVALUEph"))));
        litem_102->prev=self->tail;
        litem_102->next=((void*)0);
        __dec_obj69=litem_102->item;
        litem_102->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_102;
        self->tail=litem_102;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj65;
struct sType* __dec_obj66;
char* __dec_obj67;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj65=self->c_value;
            /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj66=self->type;
            come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj67=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
struct sFun* __dec_obj70;
struct sFunNode* __result89__;
    ((struct sNodeBase*)(__right_value165=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value165,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj70=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj70,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string("sFunNode")));
    /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_103;
char* come_fun_name_104;
void* __right_value167 = (void*)0;
char* __dec_obj88;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sType* result_type_105;
void* __right_value170 = (void*)0;
int block_level_106;
void* __right_value171 = (void*)0;
char* __dec_obj89;
_Bool __result91__;
    come_fun_103=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_104=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj88=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_105=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_105,"__result_obj__",(_Bool)0,info))));
            /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_106=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_106;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_103;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_104);
    /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    /* U13 */come_fun_name_104 = come_decrement_ref_count2(come_fun_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj71;
struct sType* __dec_obj72;
struct list$1sTypeph* __dec_obj73;
struct list$1charph* __dec_obj74;
struct list$1charph* __dec_obj75;
struct sType* __dec_obj76;
struct sBlock* __dec_obj77;
struct buffer* __dec_obj80;
struct buffer* __dec_obj81;
struct buffer* __dec_obj82;
struct buffer* __dec_obj83;
char* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj72=self->mResultType;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj75=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj76=self->mLambdaType;
            come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj77=self->mBlock;
            come_call_finalizer3(__dec_obj77,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj80=self->mSource;
            come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj81=self->mSourceHead;
            come_call_finalizer3(__dec_obj81,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj82=self->mSourceHead2;
            come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj83=self->mSourceDefer;
            come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj84=self->mComeHeader;
            /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj78;
struct sVarTable* __dec_obj79;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj78=self->mNodes;
            come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj79=self->mVarTable;
            come_call_finalizer3(__dec_obj79,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct list$1sNodeph* __dec_obj90;
struct sBlock* __result92__;
    __dec_obj90=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
struct sType* __dec_obj91;
void* __right_value175 = (void*)0;
struct list$1charph* __dec_obj92;
void* __right_value176 = (void*)0;
struct list$1charph* __dec_obj93;
char* __dec_obj94;
struct sType* __dec_obj95;
struct list$1sTypeph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct list$1charph* __dec_obj98;
char* __dec_obj99;
void* __right_value177 = (void*)0;
char* __dec_obj100;
struct sGenericsFun* __result93__;
    __dec_obj91=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj100=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
char* __dec_obj104;
struct sType* __dec_obj105;
struct list$1sTypeph* __dec_obj106;
struct list$1charph* __dec_obj107;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj101=self->mImplType;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj102=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj103=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj105=self->mResultType;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj106=self->mParamTypes;
            come_call_finalizer3(__dec_obj106,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj107=self->mParamNames;
            come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj108=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj109=self->mBlock;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj110=self->mGenericsSName;
            /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct sBlock* result_107;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1int* __dec_obj111;
int sline_top_113;
int block_level_114;
char* p_115;
int sline_116;
char* sname_117;
void* __right_value185 = (void*)0;
struct sNode* node_118;
void* __right_value186 = (void*)0;
char* __dec_obj112;
_Bool omit_semicolon_122;
void* __right_value190 = (void*)0;
char* __dec_obj116;
char* head_137;
void* __right_value191 = (void*)0;
struct sNode* value_138;
char* tail_139;
void* __right_value192 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sNode* node_141;
struct sNode* node_142;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value199 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value200 = (void*)0;
struct sNode* __dec_obj121;
_Bool omit_semicolon_144;
char* p_145;
char* head_146;
void* __right_value201 = (void*)0;
char* source_147;
void* __right_value202 = (void*)0;
struct sNode* node_148;
struct sBlock* __result102__;
node_142 = (void*)0;
    result_107=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    if(    info->sline_stack==((void*)0)) {
        __dec_obj111=info->sline_stack;
        info->sline_stack=(struct list$1int*)come_increment_ref_count(list$1int_initialize((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "05function.c", 162, "list$1int"))));
        come_call_finalizer3(__dec_obj111,list$1int_finalize, 0, 0, 0, 0, (void*)0);
    }
    list$1int_add(info->sline_stack,info->sline);
    sline_top_113=info->sline_top;
    info->sline_top=info->sline;
    block_level_114=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_115=info->p;
            sline_116=info->sline;
            sname_117=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_116;
            }
            node_118=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj112=info->sname;
            info->sname=(char*)come_increment_ref_count(node_118->sname(node_118->_protocol_obj));
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_118->sline(node_118->_protocol_obj);
            if(            node_118==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_118));
            parse_sharp_v5(info);
            if(            node_118->terminated(node_118->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_122=(_Bool)1;
            if(            node_118->terminated(node_118->_protocol_obj)) {
                omit_semicolon_122=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_122=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_107->mOmitSemicolon=omit_semicolon_122;
                if(                omit_semicolon_122&&in_function) {
                    list$1sNodeph_delete(result_107->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_115;
                    info->sline=sline_116;
                    __dec_obj116=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_117));
                    /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_137=info->p;
                    value_138=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_139=info->p;
                    __dec_obj117=value_138;
                    value_138=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_138),info));
                    /* U1 */ if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_140[tail_139-head_137+1];
                    memset(&buf_140, 0, sizeof(char)                    *(tail_139-head_137+1)                    );
                    memcpy(buf_140,head_137,tail_139-head_137);
                    buf_140[tail_139-head_137]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_141=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_138),(char*)come_increment_ref_count(__builtin_string(buf_140)),info));
                    list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_141));
                    if(value_138) { value_138 = come_decrement_ref_count2(value_138, ((struct sNode*)value_138)->finalize, ((struct sNode*)value_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_141) { node_141 = come_decrement_ref_count2(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_138) { value_138 = come_decrement_ref_count2(value_138, ((struct sNode*)value_138)->finalize, ((struct sNode*)value_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_141) { node_141 = come_decrement_ref_count2(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 274, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value196=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 274, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj120=node_142;
            node_142=(struct sNode*)come_increment_ref_count(_inf_value1);
            /* U1 */ if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value196,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_142));
        }
        else {
            __dec_obj121=node_142;
            node_142=(struct sNode*)come_increment_ref_count(expression_v13(info));
            /* U1 */ if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_142==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_142->terminated(node_142->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_144=(_Bool)1;
            if(            node_142->terminated(node_142->_protocol_obj)) {
                omit_semicolon_144=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_144=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_107->mOmitSemicolon=omit_semicolon_144;
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_142));
        }
        if(node_142) { node_142 = come_decrement_ref_count2(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_145=info->p;
        head_146=info->head;
        source_147=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_147;
        info->head=source_147;
        node_148=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_148==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_148));
        info->p=p_145;
        info->head=head_146;
        /* U13 */source_147 = come_decrement_ref_count2(source_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_148) { node_148 = come_decrement_ref_count2(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_114;
    list$1int_pop_front(info->sline_stack);
    __result102__ = gComeFunResultObject = __result_obj__ = result_107;
    /*i*/come_call_finalizer3(result_107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct list$1int* list$1int_initialize(struct list$1int* self){
void* __result_obj__=(void*)0;
struct list$1int* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void list$1int_finalize(struct list$1int* self){
struct list_item$1int* it_108;
struct list_item$1int* prev_it_109;
    it_108=self->head;
    while(it_108!=((void*)0)) {
        prev_it_109=it_108;
        it_108=it_108->next;
        /*i*/come_call_finalizer3(prev_it_109,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int* list$1int_add(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
struct list_item$1int* litem_110;
void* __right_value183 = (void*)0;
struct list_item$1int* litem_111;
void* __right_value184 = (void*)0;
struct list_item$1int* litem_112;
struct list$1int* __result95__;
    if(    self->len==0) {
        litem_110=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value182=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 153, "list_item$1int"))));
        litem_110->prev=((void*)0);
        litem_110->next=((void*)0);
        litem_110->item=item;
        self->tail=litem_110;
        self->head=litem_110;
    }
    else if(    self->len==1) {
        litem_111=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value183=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 163, "list_item$1int"))));
        litem_111->prev=self->head;
        litem_111->next=((void*)0);
        litem_111->item=item;
        self->tail=litem_111;
        self->head->next=litem_111;
    }
    else {
        litem_112=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value184=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 173, "list_item$1int"))));
        litem_112->prev=self->tail;
        litem_112->next=((void*)0);
        litem_112->item=item;
        self->tail->next=litem_112;
        self->tail=litem_112;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
struct list_item$1sNodeph* litem_119;
struct sNode* __dec_obj113;
void* __right_value188 = (void*)0;
struct list_item$1sNodeph* litem_120;
struct sNode* __dec_obj114;
void* __right_value189 = (void*)0;
struct list_item$1sNodeph* litem_121;
struct sNode* __dec_obj115;
struct list$1sNodeph* __result96__;
    if(    self->len==0) {
        litem_119=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value187=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1sNodeph"))));
        litem_119->prev=((void*)0);
        litem_119->next=((void*)0);
        __dec_obj113=litem_119->item;
        litem_119->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_119;
        self->head=litem_119;
    }
    else if(    self->len==1) {
        litem_120=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value188=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1sNodeph"))));
        litem_120->prev=self->head;
        litem_120->next=((void*)0);
        __dec_obj114=litem_120->item;
        litem_120->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_120;
        self->head->next=litem_120;
    }
    else {
        litem_121=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value189=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1sNodeph"))));
        litem_121->prev=self->tail;
        litem_121->next=((void*)0);
        __dec_obj115=litem_121->item;
        litem_121->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_121;
        self->tail=litem_121;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_123;
struct list$1sNodeph* __result97__;
struct list_item$1sNodeph* it_126;
int i_127;
struct list_item$1sNodeph* prev_it_128;
struct list_item$1sNodeph* it_129;
int i_130;
struct list_item$1sNodeph* prev_it_131;
struct list_item$1sNodeph* it_132;
struct list_item$1sNodeph* head_prev_it_133;
struct list_item$1sNodeph* tail_it_134;
int i_135;
struct list_item$1sNodeph* prev_it_136;
struct list$1sNodeph* __result99__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_123=tail;
        tail=head;
        head=tmp_123;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result97__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_126=self->head;
        i_127=0;
        while(it_126!=((void*)0)) {
            if(            i_127<tail) {
                prev_it_128=it_126;
                it_126=it_126->next;
                i_127++;
                /*i*/come_call_finalizer3(prev_it_128,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_127==tail) {
                self->head=it_126;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_126=it_126->next;
                i_127++;
            }
        }
    }
    else if(    tail==self->len) {
        it_129=self->head;
        i_130=0;
        while(it_129!=((void*)0)) {
            if(            i_130==head) {
                self->tail=it_129->prev;
                self->tail->next=((void*)0);
            }
            if(            i_130>=head) {
                prev_it_131=it_129;
                it_129=it_129->next;
                i_130++;
                /*i*/come_call_finalizer3(prev_it_131,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_129=it_129->next;
                i_130++;
            }
        }
    }
    else {
        it_132=self->head;
        head_prev_it_133=((void*)0);
        tail_it_134=((void*)0);
        i_135=0;
        while(it_132!=((void*)0)) {
            if(            i_135==head) {
                head_prev_it_133=it_132->prev;
            }
            if(            i_135==tail) {
                tail_it_134=it_132;
            }
            if(            i_135>=head&&i_135<tail) {
                prev_it_136=it_132;
                it_132=it_132->next;
                i_135++;
                /*i*/come_call_finalizer3(prev_it_136,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_132=it_132->next;
                i_135++;
            }
        }
        if(        head_prev_it_133!=((void*)0)) {
            head_prev_it_133->next=tail_it_134;
        }
        if(        tail_it_134!=((void*)0)) {
            tail_it_134->prev=head_prev_it_133;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_124;
struct list_item$1sNodeph* prev_it_125;
struct list$1sNodeph* __result98__;
    it_124=self->head;
    while(it_124!=((void*)0)) {
        prev_it_125=it_124;
        it_124=it_124->next;
        /*i*/come_call_finalizer3(prev_it_125,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj118=self->sname;
            /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result100__;
void* __right_value197 = (void*)0;
struct sSemicolonNode* result_143;
void* __right_value198 = (void*)0;
char* __dec_obj119;
struct sSemicolonNode* __result101__;
    if(    self==(void*)0) {
        __result100__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_143=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_143->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_143->sname;
        result_143->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = result_143;
    /*i*/come_call_finalizer3(result_143,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void list$1int_pop_front(struct list$1int* self){
struct list_item$1int* litem_149;
struct list_item$1int* litem_150;
struct list_item$1int* litem_151;
    if(    self->len==1) {
        litem_149=self->head;
        self->head=((void*)0);
        self->tail=((void*)0);
        /*i*/come_call_finalizer3(litem_149,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
    else if(    self->len==2) {
        litem_150=self->head;
        self->head=self->head->next;
        self->head->prev=((void*)0);
        self->head->next=((void*)0);
        self->tail=self->head;
        /*i*/come_call_finalizer3(litem_150,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
    else if(    self->len>=3) {
        litem_151=self->head;
        self->head=litem_151->next;
        self->head->prev=((void*)0);
        /*i*/come_call_finalizer3(litem_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_152;
struct sVarTable* old_table_153;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sVarTable* __dec_obj122;
struct sVarTable* current_loop_vtable_154;
struct list$1sTypeph* param_types__155;
struct list$1charph* param_names__156;
int i_157;
struct list$1charph* o2_saved_158;
char* name_161;
void* __right_value205 = (void*)0;
struct sType* type_164;
void* __right_value206 = (void*)0;
int block_level_168;
int i_169;
struct list$1sNodeph* o2_saved_170;
struct sNode* node_173;
struct list$1sRightValueObjectph* right_value_objects_176;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
int stack_num_before_181;
int sline_182;
void* __right_value209 = (void*)0;
char* sname_183;
void* __right_value210 = (void*)0;
char* __dec_obj131;
void* __right_value211 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value216 = (void*)0;
struct CVALUE* come_value2_185;
void* __right_value217 = (void*)0;
char* __dec_obj135;
void* __right_value218 = (void*)0;
struct CVALUE* come_value2_187;
struct sVar* var__188;
void* __right_value219 = (void*)0;
struct CVALUE* come_value3_189;
void* __right_value220 = (void*)0;
_Bool _if_conditional1;
void* __right_value221 = (void*)0;
struct sType* __dec_obj136;
void* __right_value222 = (void*)0;
char* __dec_obj137;
void* __right_value223 = (void*)0;
char* __dec_obj138;
void* __right_value224 = (void*)0;
char* __dec_obj139;
void* __right_value225 = (void*)0;
char* __dec_obj140;
struct list$1sRightValueObjectph* __dec_obj141;
void* __if_result__0_208 = (void*)0;
struct list$1sVarph* o2_saved_209;
struct sVar* it_212;
struct list$1sVarph* __dec_obj147;
memset(&i_157, 0, sizeof(int));
memset(&i_169, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_152=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_153=info->lv_table;
    if(    !no_var_table) {
        __dec_obj122=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 350, "sVarTable")),(_Bool)0,old_table_153));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_154=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__155=info->param_types;
    param_names__156=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_158=(param_names),name_161=list$1charph_begin((o2_saved_158));        !list$1charph_end((o2_saved_158));        name_161=list$1charph_next((o2_saved_158))        ){
            type_164=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_157), "05function.c", 368, 0))));
            type_164->mFunctionParam=(_Bool)1;
            type_164->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_161,(struct sType*)come_increment_ref_count(sType_clone(type_164)),info);
            i_157++;
            /*i*/come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_168=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_170=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_173=list$1sNodeph_begin((o2_saved_170));        !list$1sNodeph_end((o2_saved_170));        node_173=list$1sNodeph_next((o2_saved_170))        ){
            right_value_objects_176=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj127=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 387, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj127,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj128=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_181=list$1CVALUEph_length(info->stack);
            sline_182=info->sline;
            sname_183=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_173->sline(node_173->_protocol_obj);
            __dec_obj131=info->sname;
            info->sname=(char*)come_increment_ref_count(node_173->sname(node_173->_protocol_obj));
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_169==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                if(                !node_compile(node_173,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_181+1) {
                    come_value_184=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_184->type->mClass->mName,"void")&&come_value_184->type->mPointerNum==0) {
                        come_value2_185=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_184));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_185));
                        __dec_obj135=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_185->c_value));
                        /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_187=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_184));
                        var__188=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__188) {
                            come_value3_189=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 424, "CVALUE"));
                            if(                            var__188->mType->mClass=="void"&&var__188->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__188->mType,((struct sType*)(__right_value220=sType_clone(come_value_184->type))),come_value3_189,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj136=var__188->mType;
                            var__188->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_184->type));
                            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_184->type->mHeap) {
                                __dec_obj137=come_value2_187->c_value;
                                come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(come_increment_ref_count(%s))",var__188->mCValueName,come_value_184->c_value));
                                /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj138=come_value2_187->c_value;
                                come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__188->mCValueName,come_value_184->c_value));
                                /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_187));
                        __dec_obj139=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_187->c_value));
                        /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(                !node_compile(node_173,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
            }
            info->sline=sline_182;
            __dec_obj140=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_183));
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_181);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj141=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_176);
            come_call_finalizer3(__dec_obj141,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_169++;
            /*i*/come_call_finalizer3(right_value_objects_176,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */sname_183 = come_decrement_ref_count2(sname_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_170,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_168==0) {
            for(            o2_saved_209=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_212=list$1sVarph_begin((o2_saved_209));            !list$1sVarph_end((o2_saved_209));            it_212=list$1sVarph_next((o2_saved_209))            ){
                free_object(it_212->mType,it_212->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_209,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj147=info->match_it_var;
            __if_result__0_208=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj147,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_208,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_153;
    info->block_level=block_level_168;
    info->param_types=param_types__155;
    info->param_names=param_names__156;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_154;
    info->inhibits_output_code=inhibits_output_code_152;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_159;
char* __result103__;
char* __result104__;
char* result_160;
char* __result105__;
result_159 = (void*)0;
result_160 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_159,0,sizeof(char*));
        __result103__ = gComeFunResultObject = __result_obj__ = result_159;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    self->it=self->head;
    if(    self->it) {
        __result104__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    memset(&result_160,0,sizeof(char*));
    __result105__ = gComeFunResultObject = __result_obj__ = result_160;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_162;
char* __result106__;
char* __result107__;
char* result_163;
char* __result108__;
result_162 = (void*)0;
result_163 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_162,0,sizeof(char*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_162;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_163,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_165;
int i_166;
struct sType* __result109__;
struct sType* default_value_167;
struct sType* __result110__;
default_value_167 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_165=self->head;
    i_166=0;
    while(it_165!=((void*)0)) {
        if(        position==i_166) {
            __result109__ = gComeFunResultObject = __result_obj__ = it_165->item;
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
        it_165=it_165->next;
        i_166++;
    }
    memset(&default_value_167,0,sizeof(struct sType*));
    __result110__ = gComeFunResultObject = __result_obj__ = default_value_167;
    /*i*/come_call_finalizer3(default_value_167,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_171;
struct sNode* __result111__;
struct sNode* __result112__;
struct sNode* result_172;
struct sNode* __result113__;
result_171 = (void*)0;
result_172 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_171,0,sizeof(struct sNode*));
        __result111__ = gComeFunResultObject = __result_obj__ = result_171;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    self->it=self->head;
    if(    self->it) {
        __result112__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    memset(&result_172,0,sizeof(struct sNode*));
    __result113__ = gComeFunResultObject = __result_obj__ = result_172;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_174;
struct sNode* __result114__;
struct sNode* __result115__;
struct sNode* result_175;
struct sNode* __result116__;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_174,0,sizeof(struct sNode*));
        __result114__ = gComeFunResultObject = __result_obj__ = result_174;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result115__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    memset(&result_175,0,sizeof(struct sNode*));
    __result116__ = gComeFunResultObject = __result_obj__ = result_175;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result117__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_177;
struct list_item$1sRightValueObjectph* prev_it_178;
    it_177=self->head;
    while(it_177!=((void*)0)) {
        prev_it_178=it_177;
        it_177=it_177->next;
        /*i*/come_call_finalizer3(prev_it_178,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj123;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj123=self->item;
            come_call_finalizer3(__dec_obj123,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj124=self->mType;
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj125=self->mVarName;
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj126=self->mFunName;
            /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_179;
struct list_item$1sRightValueObjectph* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*i*/come_call_finalizer3(prev_it_180,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result118__;
void* __right_value212 = (void*)0;
struct CVALUE* result_186;
void* __right_value213 = (void*)0;
char* __dec_obj132;
void* __right_value214 = (void*)0;
struct sType* __dec_obj133;
void* __right_value215 = (void*)0;
char* __dec_obj134;
struct CVALUE* __result119__;
    if(    self==(void*)0) {
        __result118__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    result_186=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj132=result_186->c_value;
        result_186->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj133=result_186->type;
        result_186->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_186->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_186->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj134=result_186->c_value_without_right_value_objects;
        result_186->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_186;
    /*i*/come_call_finalizer3(result_186,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_190;
struct list_item$1tuple2$2charphsTypephph* it2_191;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_190=left->head;
    it2_191=right->head;
    while(it_190!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_190->item,it2_191->item)) {
            return (_Bool)0;
        }
        it_190=it_190->next;
        it2_191=it2_191->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_192;
struct list_item$1sTypeph* it2_193;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_192=left->head;
    it2_193=right->head;
    while(it_192!=((void*)0)) {
        if(        !sType_equals(it_192->item,it2_193->item)) {
            return (_Bool)0;
        }
        it_192=it_192->next;
        it2_193=it2_193->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_194;
struct list_item$1sNodeph* it2_195;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_194=left->head;
    it2_195=right->head;
    while(it_194!=((void*)0)) {
        if(        !sNode_equals(it_194->item,it2_195->item)) {
            return (_Bool)0;
        }
        it_194=it_194->next;
        it2_195=it2_195->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_196;
struct list_item$1charph* it2_197;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_196=left->head;
    it2_197=right->head;
    while(it_196!=((void*)0)) {
        if(        !string_equals(it_196->item,it2_197->item)) {
            return (_Bool)0;
        }
        it_196=it_196->next;
        it2_197=it2_197->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2charphsTypephphp_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
    return !list$1tuple2$2charphsTypephph_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_198;
struct list_item$1tuple2$2charphsTypephph* it2_199;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_198=left->head;
    it2_199=right->head;
    while(it_198!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_198->item,it2_199->item))) {
            return (_Bool)0;
        }
        it_198=it_198->next;
        it2_199=it2_199->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mNoExceptionType,right->mNoExceptionType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodeph_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDummyHeap,right->mDummyHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDelegate,right->mDelegate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShare,right->mShare)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mClone,right->mClone)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mComeMemCore,right->mComeMemCore)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoNumberArray,right->mNoNumberArray)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mNoExceptionType,right->mNoExceptionType)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    list$1sNodeph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1charph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDummyHeap,right->mDummyHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDelegate,right->mDelegate)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShare,right->mShare)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mClone,right->mClone)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mComeMemCore,right->mComeMemCore)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoNumberArray,right->mNoNumberArray)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&string_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&string_equals(left->mParentClassName,right->mParentClassName));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))));
}

static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right){
    return !tuple1$1sTypeph_operator_equals(left,right);
}

static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !(sType_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypeph_operator_equals(left,right);
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_200;
struct list_item$1sTypeph* it2_201;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_200=left->head;
    it2_201=right->head;
    while(it_200!=((void*)0)) {
        if(        !(sType_operator_equals(it_200->item,it2_201->item))) {
            return (_Bool)0;
        }
        it_200=it_200->next;
        it2_201=it2_201->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_202;
struct list_item$1sNodeph* it2_203;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_202=left->head;
    it2_203=right->head;
    while(it_202!=((void*)0)) {
        if(        !(sNode_operator_equals(it_202->item,it2_203->item))) {
            return (_Bool)0;
        }
        it_202=it_202->next;
        it2_203=it2_203->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charph_operator_equals(left,right);
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_204;
struct list_item$1charph* it2_205;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_204=left->head;
    it2_205=right->head;
    while(it_204!=((void*)0)) {
        if(        !(string_operator_equals(it_204->item,it2_205->item))) {
            return (_Bool)0;
        }
        it_204=it_204->next;
        it2_205=it2_205->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_206;
struct list_item$1sRightValueObjectph* prev_it_207;
struct list$1sRightValueObjectph* __result120__;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        /*i*/come_call_finalizer3(prev_it_207,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_210;
struct sVar* __result121__;
struct sVar* __result122__;
struct sVar* result_211;
struct sVar* __result123__;
result_210 = (void*)0;
result_211 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_210,0,sizeof(struct sVar*));
        __result121__ = gComeFunResultObject = __result_obj__ = result_210;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    self->it=self->head;
    if(    self->it) {
        __result122__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    memset(&result_211,0,sizeof(struct sVar*));
    __result123__ = gComeFunResultObject = __result_obj__ = result_211;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_213;
struct sVar* __result124__;
struct sVar* __result125__;
struct sVar* result_214;
struct sVar* __result126__;
result_213 = (void*)0;
result_214 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_213,0,sizeof(struct sVar*));
        __result124__ = gComeFunResultObject = __result_obj__ = result_213;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result125__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    memset(&result_214,0,sizeof(struct sVar*));
    __result126__ = gComeFunResultObject = __result_obj__ = result_214;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_215;
struct list_item$1sVarph* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        /*i*/come_call_finalizer3(prev_it_216,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj142;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj142=self->item;
            come_call_finalizer3(__dec_obj142,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj143;
char* __dec_obj144;
struct sType* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj143=self->mName;
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj144=self->mCValueName;
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj145=self->mType;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj146=self->mFunName;
            /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_217;
struct list_item$1sVarph* prev_it_218;
    it_217=self->head;
    while(it_217!=((void*)0)) {
        prev_it_218=it_217;
        it_217=it_217->next;
        /*i*/come_call_finalizer3(prev_it_218,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(    list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
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
char* head_219;
_Bool dquort_220;
_Bool squort_221;
int sline_222;
int nest_223;
char* tail_224;
void* __right_value226 = (void*)0;
char* buf_225;
void* __right_value227 = (void*)0;
char* __result127__;
    head_219=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_220=(_Bool)0;
        squort_221=(_Bool)0;
        sline_222=0;
        nest_223=0;
        while(1) {
            if(            dquort_220) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_220=!dquort_220;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
            }
            else if(            squort_221) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_221=!squort_221;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_222=info->sline;
                info->p++;
                squort_221=!squort_221;
            }
            else if(            *info->p==34) {
                sline_222=info->sline;
                info->p++;
                dquort_220=!dquort_220;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_223++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_223==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_223--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_224=info->p;
    buf_225=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_224-head_219+1)), "05function.c", 655, "char"));
    memcpy(buf_225,head_219,tail_224-head_219);
    buf_225[tail_224-head_219]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(buf_225)));
    /* U13 */buf_225 = come_decrement_ref_count2(buf_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_226;
char* p3_227;
int i_228;
    terminated_226=(_Bool)0;
    p3_227=p;
    for(    i_228=0;    i_228<strlen(p2);    i_228++    ){
        if(        *p3_227==0) {
            terminated_226=(_Bool)1;
            break;
        }
        p3_227++;
    }
    return !terminated_226&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct buffer* asm_fun_name_229;
int brace_num_230;
int len_231;
_Bool in_dquort_232;
int brace_num_233;
int brace_num_234;
void* __right_value230 = (void*)0;
char* __result128__;
    asm_fun_name_229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 678, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            brace_num_230=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_230++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_230--;
                    if(                    brace_num_230==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            len_231=0;
            in_dquort_232=(_Bool)0;
            brace_num_233=0;
            while(*info->p) {
                if(                *info->p==34) {
                    info->p++;
                    in_dquort_232=!in_dquort_232;
                }
                else if(                in_dquort_232) {
                    buffer_append_char(asm_fun_name_229,*info->p);
                    info->p++;
                }
                else if(                *info->p==40) {
                    info->p++;
                    brace_num_233++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_233--;
                    if(                    brace_num_233==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            brace_num_234=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_234++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_234--;
                    if(                    brace_num_234==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=buffer_to_string(asm_fun_name_229)));
    /*i*/come_call_finalizer3(asm_fun_name_229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_235;
int head_sline_236;
void* __right_value231 = (void*)0;
char* buf_237;
void* __right_value232 = (void*)0;
struct sNode* node_238;
    while(*info->p) {
        parse_sharp_v5(info);
        head_235=info->p;
        head_sline_236=info->sline;
        buf_237=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_237 = come_decrement_ref_count2(buf_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_238=(struct sNode*)come_increment_ref_count(top_level_v99(buf_237,head_235,head_sline_236,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_238!=((void*)0)) {
            if(            !node_compile(node_238,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_237 = come_decrement_ref_count2(buf_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */buf_237 = come_decrement_ref_count2(buf_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value233 = (void*)0;
char* name_239;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* result_type_240;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* __list_values1___241[5];
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sTypeph* param_types_246;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* __list_values2___247[5];
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charph* param_names_252;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1charph* param_default_parametors_253;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sFun* main_fun_254;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* name_296;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sType* result_type_297;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __list_values3___298[1];
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1sTypeph* param_types_299;
void* __right_value281 = (void*)0;
char* __list_values4___300[1];
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* param_names_301;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* param_default_parametors_302;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sFun* main_fun_303;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* name_304;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* result_type_305;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __list_values5___306[7];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1sTypeph* param_types_307;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* __list_values6___308[7];
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* param_names_309;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* param_default_parametors_310;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sFun* main_fun_311;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* name_312;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* result_type_313;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* __list_values7___314[5];
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1sTypeph* param_types_315;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __list_values8___316[5];
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct list$1charph* param_names_317;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1charph* param_default_parametors_318;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sFun* main_fun_319;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* name_320;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* result_type_321;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __list_values9___322[1];
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1sTypeph* param_types_323;
void* __right_value362 = (void*)0;
char* __list_values10___324[1];
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct list$1charph* param_names_325;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charph* param_default_parametors_326;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sFun* main_fun_327;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* name_328;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* result_type_329;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* __list_values11___330[4];
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1sTypeph* param_types_331;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* __list_values12___332[4];
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1charph* param_names_333;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charph* param_default_parametors_334;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sFun* main_fun_335;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
char* name_336;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* result_type_337;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __list_values13___338[3];
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1sTypeph* param_types_339;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __list_values14___340[3];
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1charph* param_names_341;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1charph* param_default_parametors_342;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sFun* main_fun_343;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
char* name_344;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* result_type_345;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __list_values15___346[1];
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1sTypeph* param_types_347;
void* __right_value431 = (void*)0;
char* __list_values16___348[1];
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1charph* param_names_349;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1charph* param_default_parametors_350;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* main_fun_351;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* name_352;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* result_type_353;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* __list_values17___354[3];
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1sTypeph* param_types_355;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
char* __list_values18___356[3];
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1charph* param_names_357;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1charph* param_default_parametors_358;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sFun* main_fun_359;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* name_360;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* result_type_361;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1sTypeph* param_types_362;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1charph* param_names_363;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1charph* param_default_parametors_364;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sFun* main_fun_365;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* name_366;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* result_type_367;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __list_values19___368[4];
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1sTypeph* param_types_369;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* __list_values20___370[4];
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1charph* param_names_371;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1charph* param_default_parametors_372;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sFun* main_fun_373;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
char* name_374;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* result_type_375;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct list$1sTypeph* param_types_376;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct list$1charph* param_names_377;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1charph* param_default_parametors_378;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sFun* fun_379;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* name_380;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* result_type_381;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1sTypeph* param_types_382;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1charph* param_names_383;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1charph* param_default_parametors_384;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sFun* fun_385;
void* __right_value531 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_239=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_240=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 847, "sType")),"void*",(_Bool)0,info));
        param_types_246=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___241[0]=come_increment_ref_count(((struct sType*)(__right_value237=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info)))),
__list_values1___241[1]=come_increment_ref_count(((struct sType*)(__right_value239=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info)))),
__list_values1___241[2]=come_increment_ref_count(((struct sType*)(__right_value241=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"char*",(_Bool)0,info)))),
__list_values1___241[3]=come_increment_ref_count(((struct sType*)(__right_value243=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info)))),
__list_values1___241[4]=come_increment_ref_count(((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 848, "struct list$1sTypeph")),5,__list_values1___241)));
        /*g*/come_call_finalizer3(__right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value245,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_252=(struct list$1charph*)come_increment_ref_count((__list_values2___247[0]=come_increment_ref_count(((char*)(__right_value251=__builtin_string("count")))),
__list_values2___247[1]=come_increment_ref_count(((char*)(__right_value252=__builtin_string("size")))),
__list_values2___247[2]=come_increment_ref_count(((char*)(__right_value253=__builtin_string("sname")))),
__list_values2___247[3]=come_increment_ref_count(((char*)(__right_value254=__builtin_string("sline")))),
__list_values2___247[4]=come_increment_ref_count(((char*)(__right_value255=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 849, "struct list$1charph")),5,__list_values2___247)));
        /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_253=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 850, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_253,((void*)0));
        list$1charph_push_back(param_default_parametors_253,((void*)0));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_254=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 856, "sFun")),(char*)come_increment_ref_count(name_239),(struct sType*)come_increment_ref_count(result_type_240),(struct list$1sTypeph*)come_increment_ref_count(param_types_246),(struct list$1charph*)come_increment_ref_count(param_names_252),(struct list$1charph*)come_increment_ref_count(param_default_parametors_253),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_239)),(struct sFun*)come_increment_ref_count(main_fun_254));
        /* U13 */name_239 = come_decrement_ref_count2(name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_252,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_253,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_254,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_296=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_297=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 867, "sType")),"void*",(_Bool)0,info));
        param_types_299=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___298[0]=come_increment_ref_count(((struct sType*)(__right_value278=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 868, "struct list$1sTypeph")),1,__list_values3___298)));
        /*g*/come_call_finalizer3(__right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_301=(struct list$1charph*)come_increment_ref_count((__list_values4___300[0]=come_increment_ref_count(((char*)(__right_value281=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 869, "struct list$1charph")),1,__list_values4___300)));
        /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_302=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))));
        main_fun_303=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 871, "sFun")),(char*)come_increment_ref_count(name_296),(struct sType*)come_increment_ref_count(result_type_297),(struct list$1sTypeph*)come_increment_ref_count(param_types_299),(struct list$1charph*)come_increment_ref_count(param_names_301),(struct list$1charph*)come_increment_ref_count(param_default_parametors_302),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_296)),(struct sFun*)come_increment_ref_count(main_fun_303));
        /* U13 */name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_299,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_302,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_303,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_304=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 882, "sType")),"void",(_Bool)0,info));
        param_types_307=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___306[0]=come_increment_ref_count(((struct sType*)(__right_value295=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[1]=come_increment_ref_count(((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[2]=come_increment_ref_count(((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[3]=come_increment_ref_count(((struct sType*)(__right_value301=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[4]=come_increment_ref_count(((struct sType*)(__right_value303=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info)))),
__list_values5___306[5]=come_increment_ref_count(((struct sType*)(__right_value305=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info)))),
__list_values5___306[6]=come_increment_ref_count(((struct sType*)(__right_value307=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 883, "struct list$1sTypeph")),7,__list_values5___306)));
        /*g*/come_call_finalizer3(__right_value295,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value303,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value307,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_309=(struct list$1charph*)come_increment_ref_count((__list_values6___308[0]=come_increment_ref_count(((char*)(__right_value310=__builtin_string("fun")))),
__list_values6___308[1]=come_increment_ref_count(((char*)(__right_value311=__builtin_string("mem")))),
__list_values6___308[2]=come_increment_ref_count(((char*)(__right_value312=__builtin_string("protocol_fun")))),
__list_values6___308[3]=come_increment_ref_count(((char*)(__right_value313=__builtin_string("protocol_obj")))),
__list_values6___308[4]=come_increment_ref_count(((char*)(__right_value314=__builtin_string("call_finalizer_only")))),
__list_values6___308[5]=come_increment_ref_count(((char*)(__right_value315=__builtin_string("no_decrement")))),
__list_values6___308[6]=come_increment_ref_count(((char*)(__right_value316=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 884, "struct list$1charph")),7,__list_values6___308)));
        /* U11 */__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "list$1charph"))));
        main_fun_311=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 886, "sFun")),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(result_type_305),(struct list$1sTypeph*)come_increment_ref_count(param_types_307),(struct list$1charph*)come_increment_ref_count(param_names_309),(struct list$1charph*)come_increment_ref_count(param_default_parametors_310),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_304)),(struct sFun*)come_increment_ref_count(main_fun_311));
        /* U13 */name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_307,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_309,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_310,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_311,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_312=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_313=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 897, "sType")),"void*",(_Bool)0,info));
        param_types_315=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___314[0]=come_increment_ref_count(((struct sType*)(__right_value330=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info)))),
__list_values7___314[1]=come_increment_ref_count(((struct sType*)(__right_value332=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info)))),
__list_values7___314[2]=come_increment_ref_count(((struct sType*)(__right_value334=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info)))),
__list_values7___314[3]=come_increment_ref_count(((struct sType*)(__right_value336=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"bool",(_Bool)0,info)))),
__list_values7___314[4]=come_increment_ref_count(((struct sType*)(__right_value338=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 898, "struct list$1sTypeph")),5,__list_values7___314)));
        /*g*/come_call_finalizer3(__right_value330,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value332,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value336,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value338,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_317=(struct list$1charph*)come_increment_ref_count((__list_values8___316[0]=come_increment_ref_count(((char*)(__right_value341=__builtin_string("mem")))),
__list_values8___316[1]=come_increment_ref_count(((char*)(__right_value342=__builtin_string("protocol_fun")))),
__list_values8___316[2]=come_increment_ref_count(((char*)(__right_value343=__builtin_string("protocol_obj")))),
__list_values8___316[3]=come_increment_ref_count(((char*)(__right_value344=__builtin_string("no_decrement")))),
__list_values8___316[4]=come_increment_ref_count(((char*)(__right_value345=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 899, "struct list$1charph")),5,__list_values8___316)));
        /* U11 */__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))));
        main_fun_319=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 901, "sFun")),(char*)come_increment_ref_count(name_312),(struct sType*)come_increment_ref_count(result_type_313),(struct list$1sTypeph*)come_increment_ref_count(param_types_315),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_312)),(struct sFun*)come_increment_ref_count(main_fun_319));
        /* U13 */name_312 = come_decrement_ref_count2(name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_315,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_319,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_320=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_321=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 912, "sType")),"void",(_Bool)0,info));
        param_types_323=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___322[0]=come_increment_ref_count(((struct sType*)(__right_value359=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 913, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 913, "struct list$1sTypeph")),1,__list_values9___322)));
        /*g*/come_call_finalizer3(__right_value359,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_325=(struct list$1charph*)come_increment_ref_count((__list_values10___324[0]=come_increment_ref_count(((char*)(__right_value362=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 914, "struct list$1charph")),1,__list_values10___324)));
        /* U11 */__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_326=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 915, "list$1charph"))));
        main_fun_327=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 916, "sFun")),(char*)come_increment_ref_count(name_320),(struct sType*)come_increment_ref_count(result_type_321),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_325),(struct list$1charph*)come_increment_ref_count(param_default_parametors_326),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_320)),(struct sFun*)come_increment_ref_count(main_fun_327));
        /* U13 */name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_323,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_325,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_326,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_327,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_328=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_329=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 927, "sType")),"void*",(_Bool)0,info));
        param_types_331=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___330[0]=come_increment_ref_count(((struct sType*)(__right_value376=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"void*",(_Bool)0,info)))),
__list_values11___330[1]=come_increment_ref_count(((struct sType*)(__right_value378=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"char*",(_Bool)0,info)))),
__list_values11___330[2]=come_increment_ref_count(((struct sType*)(__right_value380=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"int",(_Bool)0,info)))),
__list_values11___330[3]=come_increment_ref_count(((struct sType*)(__right_value382=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 928, "struct list$1sTypeph")),4,__list_values11___330)));
        /*g*/come_call_finalizer3(__right_value376,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_333=(struct list$1charph*)come_increment_ref_count((__list_values12___332[0]=come_increment_ref_count(((char*)(__right_value385=__builtin_string("block")))),
__list_values12___332[1]=come_increment_ref_count(((char*)(__right_value386=__builtin_string("sname")))),
__list_values12___332[2]=come_increment_ref_count(((char*)(__right_value387=__builtin_string("sline")))),
__list_values12___332[3]=come_increment_ref_count(((char*)(__right_value388=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 929, "struct list$1charph")),4,__list_values12___332)));
        /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 930, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_334,((void*)0));
        list$1charph_push_back(param_default_parametors_334,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_334,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_334,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_335=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 935, "sFun")),(char*)come_increment_ref_count(name_328),(struct sType*)come_increment_ref_count(result_type_329),(struct list$1sTypeph*)come_increment_ref_count(param_types_331),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_328)),(struct sFun*)come_increment_ref_count(main_fun_335));
        /* U13 */name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_331,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_333,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_334,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_335,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_336=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 946, "sType")),"void*",(_Bool)0,info));
        param_types_339=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___338[0]=come_increment_ref_count(((struct sType*)(__right_value405=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"void*",(_Bool)0,info)))),
__list_values13___338[1]=come_increment_ref_count(((struct sType*)(__right_value407=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"int",(_Bool)0,info)))),
__list_values13___338[2]=come_increment_ref_count(((struct sType*)(__right_value409=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 947, "struct list$1sTypeph")),3,__list_values13___338)));
        /*g*/come_call_finalizer3(__right_value405,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value407,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value409,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_341=(struct list$1charph*)come_increment_ref_count((__list_values14___340[0]=come_increment_ref_count(((char*)(__right_value412=__builtin_string("b")))),
__list_values14___340[1]=come_increment_ref_count(((char*)(__right_value413=__builtin_string("c")))),
__list_values14___340[2]=come_increment_ref_count(((char*)(__right_value414=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 948, "struct list$1charph")),3,__list_values14___340)));
        /* U11 */__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_342=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 949, "list$1charph"))));
        main_fun_343=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 950, "sFun")),(char*)come_increment_ref_count(name_336),(struct sType*)come_increment_ref_count(result_type_337),(struct list$1sTypeph*)come_increment_ref_count(param_types_339),(struct list$1charph*)come_increment_ref_count(param_names_341),(struct list$1charph*)come_increment_ref_count(param_default_parametors_342),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_336)),(struct sFun*)come_increment_ref_count(main_fun_343));
        /* U13 */name_336 = come_decrement_ref_count2(name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_339,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_343,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_344=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_345=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 961, "sType")),"char*",(_Bool)0,info));
        param_types_347=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___346[0]=come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 962, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 962, "struct list$1sTypeph")),1,__list_values15___346)));
        /*g*/come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_349=(struct list$1charph*)come_increment_ref_count((__list_values16___348[0]=come_increment_ref_count(((char*)(__right_value431=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 963, "struct list$1charph")),1,__list_values16___348)));
        /* U11 */__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_350=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 964, "list$1charph"))));
        main_fun_351=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 965, "sFun")),(char*)come_increment_ref_count(name_344),(struct sType*)come_increment_ref_count(result_type_345),(struct list$1sTypeph*)come_increment_ref_count(param_types_347),(struct list$1charph*)come_increment_ref_count(param_names_349),(struct list$1charph*)come_increment_ref_count(param_default_parametors_350),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_344)),(struct sFun*)come_increment_ref_count(main_fun_351));
        /* U13 */name_344 = come_decrement_ref_count2(name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_349,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_351,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_352=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_353=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 976, "sType")),"void",(_Bool)0,info));
        param_types_355=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___354[0]=come_increment_ref_count(((struct sType*)(__right_value445=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info)))),
__list_values17___354[1]=come_increment_ref_count(((struct sType*)(__right_value447=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info)))),
__list_values17___354[2]=come_increment_ref_count(((struct sType*)(__right_value449=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 977, "struct list$1sTypeph")),3,__list_values17___354)));
        /*g*/come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_357=(struct list$1charph*)come_increment_ref_count((__list_values18___356[0]=come_increment_ref_count(((char*)(__right_value452=xsprintf("come_malloc")))),
__list_values18___356[1]=come_increment_ref_count(((char*)(__right_value453=xsprintf("come_debug")))),
__list_values18___356[2]=come_increment_ref_count(((char*)(__right_value454=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 978, "struct list$1charph")),3,__list_values18___356)));
        /* U11 */__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_358=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 979, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_358,((void*)0));
        main_fun_359=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 981, "sFun")),(char*)come_increment_ref_count(name_352),(struct sType*)come_increment_ref_count(result_type_353),(struct list$1sTypeph*)come_increment_ref_count(param_types_355),(struct list$1charph*)come_increment_ref_count(param_names_357),(struct list$1charph*)come_increment_ref_count(param_default_parametors_358),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_352)),(struct sFun*)come_increment_ref_count(main_fun_359));
        /* U13 */name_352 = come_decrement_ref_count2(name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_353,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_355,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_358,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_359,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_360=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_361=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 992, "sType")),"void",(_Bool)0,info));
        param_types_362=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 993, "list$1sTypeph"))));
        param_names_363=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 994, "list$1charph"))));
        param_default_parametors_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 995, "list$1charph"))));
        main_fun_365=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 996, "sFun")),(char*)come_increment_ref_count(name_360),(struct sType*)come_increment_ref_count(result_type_361),(struct list$1sTypeph*)come_increment_ref_count(param_types_362),(struct list$1charph*)come_increment_ref_count(param_names_363),(struct list$1charph*)come_increment_ref_count(param_default_parametors_364),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_360)),(struct sFun*)come_increment_ref_count(main_fun_365));
        /* U13 */name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_363,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_364,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_365,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_366=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_367=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1007, "sType")),"void*",(_Bool)0,info));
        param_types_369=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___368[0]=come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"void*",(_Bool)0,info)))),
__list_values19___368[1]=come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"char*",(_Bool)0,info)))),
__list_values19___368[2]=come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"int",(_Bool)0,info)))),
__list_values19___368[3]=come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1008, "struct list$1sTypeph")),4,__list_values19___368)));
        /*g*/come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_371=(struct list$1charph*)come_increment_ref_count((__list_values20___370[0]=come_increment_ref_count(((char*)(__right_value491=__builtin_string("mem")))),
__list_values20___370[1]=come_increment_ref_count(((char*)(__right_value492=__builtin_string("sname")))),
__list_values20___370[2]=come_increment_ref_count(((char*)(__right_value493=__builtin_string("sline")))),
__list_values20___370[3]=come_increment_ref_count(((char*)(__right_value494=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1009, "struct list$1charph")),4,__list_values20___370)));
        /* U11 */__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_372=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1010, "list$1charph"))));
        main_fun_373=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1011, "sFun")),(char*)come_increment_ref_count(name_366),(struct sType*)come_increment_ref_count(result_type_367),(struct list$1sTypeph*)come_increment_ref_count(param_types_369),(struct list$1charph*)come_increment_ref_count(param_names_371),(struct list$1charph*)come_increment_ref_count(param_default_parametors_372),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_366)),(struct sFun*)come_increment_ref_count(main_fun_373));
        /* U13 */name_366 = come_decrement_ref_count2(name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_369,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_371,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_373,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_374=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_375=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1022, "sType")),"void",(_Bool)0,info));
        param_types_376=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1023, "list$1sTypeph"))));
        param_names_377=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1024, "list$1charph"))));
        param_default_parametors_378=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1025, "list$1charph"))));
        fun_379=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1026, "sFun")),(char*)come_increment_ref_count(name_374),(struct sType*)come_increment_ref_count(result_type_375),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_374)),(struct sFun*)come_increment_ref_count(fun_379));
        /* U13 */name_374 = come_decrement_ref_count2(name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_376,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_378,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_379,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_380=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_381=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1037, "sType")),"void",(_Bool)0,info));
        param_types_382=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1038, "list$1sTypeph"))));
        param_names_383=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1039, "list$1charph"))));
        param_default_parametors_384=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1040, "list$1charph"))));
        fun_385=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1041, "sFun")),(char*)come_increment_ref_count(name_380),(struct sType*)come_increment_ref_count(result_type_381),(struct list$1sTypeph*)come_increment_ref_count(param_types_382),(struct list$1charph*)come_increment_ref_count(param_names_383),(struct list$1charph*)come_increment_ref_count(param_default_parametors_384),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_380)),(struct sFun*)come_increment_ref_count(fun_385));
        /* U13 */name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_382,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_383,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_384,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_385,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_242;
struct list$1sTypeph* __result130__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        list$1sTypeph_push_back(self,values[i_242]);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
struct list_item$1sTypeph* litem_243;
struct sType* __dec_obj148;
void* __right_value247 = (void*)0;
struct list_item$1sTypeph* litem_244;
struct sType* __dec_obj149;
void* __right_value248 = (void*)0;
struct list_item$1sTypeph* litem_245;
struct sType* __dec_obj150;
struct list$1sTypeph* __result129__;
    if(    self->len==0) {
        litem_243=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value246=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1sTypeph"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        __dec_obj148=litem_243->item;
        litem_243->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1) {
        litem_244=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value247=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1sTypeph"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        __dec_obj149=litem_244->item;
        litem_244->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value248=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1sTypeph"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        __dec_obj150=litem_245->item;
        litem_245->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_248;
struct list$1charph* __result132__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_248=0;    i_248<num_value;    i_248++    ){
        list$1charph_push_back(self,values[i_248]);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1charph* litem_249;
char* __dec_obj151;
void* __right_value257 = (void*)0;
struct list_item$1charph* litem_250;
char* __dec_obj152;
void* __right_value258 = (void*)0;
struct list_item$1charph* litem_251;
char* __dec_obj153;
struct list$1charph* __result131__;
    if(    self->len==0) {
        litem_249=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value256=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1charph"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        __dec_obj151=litem_249->item;
        litem_249->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1) {
        litem_250=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value257=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1charph"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        __dec_obj152=litem_250->item;
        litem_250->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value258=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1charph"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        __dec_obj153=litem_251->item;
        litem_251->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_272;
unsigned int it_273;
_Bool same_key_exist_290;
char* it2_293;
struct map$2charphsFunph* __result153__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_272=string_get_hash_key(key)%self->size;
    it_273=hash_272;
    while((_Bool)1) {
        if(        self->item_existance[it_273]) {
            if(            string_equals(self->keys[it_273],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_273]);
                    /* U13 */self->keys[it_273] = come_decrement_ref_count2(self->keys[it_273], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_273]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_273]);
                    self->keys[it_273]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_273],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_273]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_273]=item;
                }
                break;
            }
            it_273++;
            if(            it_273>=self->size) {
                it_273=0;
            }
            else if(            it_273==hash_272) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_273]=(_Bool)1;
            if(            1) {
                self->keys[it_273]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_273]=key;
            }
            if(            1) {
                self->items[it_273]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_273]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_290=(_Bool)0;
    for(    it2_293=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_293=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_293,key)) {
            same_key_exist_290=(_Bool)1;
        }
    }
    if(    !same_key_exist_290) {
        list$1charp_push_back(self->key_list,key);
    }
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_255;
void* __right_value270 = (void*)0;
char** keys_256;
void* __right_value271 = (void*)0;
struct sFun** items_257;
void* __right_value272 = (void*)0;
_Bool* item_existance_258;
int len_259;
char* it_262;
struct sFun* default_value_265;
struct sFun* it2_266;
unsigned int hash_269;
int n_270;
struct sFun* default_value_271;
default_value_265 = (void*)0;
default_value_271 = (void*)0;
    size_255=self->size*10;
    keys_256=(char**)come_increment_ref_count(((char**)(__right_value270=(char**)come_calloc(1, sizeof(char*)*(1*(size_255)), "/usr/local/include/comelang.h", 1651, "char*%"))));
    items_257=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value271=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_255)), "/usr/local/include/comelang.h", 1652, "sFun*%"))));
    item_existance_258=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value272=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_255)), "/usr/local/include/comelang.h", 1653, "bool"))));
    len_259=0;
    for(    it_262=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_262=map$2charphsFunph_next(self)    ){
        memset(&default_value_265,0,sizeof(struct sFun*));
        it2_266=map$2charphsFunph_at(self,it_262,default_value_265);
        hash_269=string_get_hash_key(it_262)%size_255;
        n_270=hash_269;
        while((_Bool)1) {
            if(            item_existance_258[n_270]) {
                n_270++;
                if(                n_270>=size_255) {
                    n_270=0;
                }
                else if(                n_270==hash_269) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_258[n_270]=(_Bool)1;
                keys_256[n_270]=it_262;
                items_257[n_270]=map$2charphsFunph_at(self,it_262,default_value_271);
                len_259++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_256;
    self->items=items_257;
    self->item_existance=item_existance_258;
    self->size=size_255;
    self->len=len_259;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_260;
char* __result133__;
char* __result134__;
char* result_261;
char* __result135__;
result_260 = (void*)0;
result_261 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_260,0,sizeof(char*));
        __result133__ = gComeFunResultObject = __result_obj__ = result_260;
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result134__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    memset(&result_261,0,sizeof(char*));
    __result135__ = gComeFunResultObject = __result_obj__ = result_261;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_263;
char* __result136__;
char* __result137__;
char* result_264;
char* __result138__;
result_263 = (void*)0;
result_264 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_263,0,sizeof(char*));
        __result136__ = gComeFunResultObject = __result_obj__ = result_263;
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result137__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    memset(&result_264,0,sizeof(char*));
    __result138__ = gComeFunResultObject = __result_obj__ = result_264;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_267;
unsigned int it_268;
struct sFun* __result139__;
struct sFun* __result140__;
struct sFun* __result141__;
struct sFun* __result142__;
    hash_267=string_get_hash_key(((char*)key))%self->size;
    it_268=hash_267;
    while((_Bool)1) {
        if(        self->item_existance[it_268]) {
            if(            string_equals(self->keys[it_268],key)) {
                __result139__ = gComeFunResultObject = __result_obj__ = self->items[it_268];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result139__;
            }
            it_268++;
            if(            it_268>=self->size) {
                it_268=0;
            }
            else if(            it_268==hash_267) {
                __result140__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result140__;
            }
        }
        else {
            __result141__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result141__;
        }
    }
    __result142__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_274;
struct list_item$1charp* it_275;
struct list$1charp* __result146__;
    it2_274=0;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        if(        charp_equals(it_275->item,item)) {
            list$1charp_delete(self,it2_274,it2_274+1);
            break;
        }
        it2_274++;
        it_275=it_275->next;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result146__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_276;
struct list$1charp* __result143__;
struct list_item$1charp* it_279;
int i_280;
struct list_item$1charp* prev_it_281;
struct list_item$1charp* it_282;
int i_283;
struct list_item$1charp* prev_it_284;
struct list_item$1charp* it_285;
struct list_item$1charp* head_prev_it_286;
struct list_item$1charp* tail_it_287;
int i_288;
struct list_item$1charp* prev_it_289;
struct list$1charp* __result145__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_276=tail;
        tail=head;
        head=tmp_276;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result143__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_279=self->head;
        i_280=0;
        while(it_279!=((void*)0)) {
            if(            i_280<tail) {
                prev_it_281=it_279;
                it_279=it_279->next;
                i_280++;
                /*i*/come_call_finalizer3(prev_it_281,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_280==tail) {
                self->head=it_279;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_279=it_279->next;
                i_280++;
            }
        }
    }
    else if(    tail==self->len) {
        it_282=self->head;
        i_283=0;
        while(it_282!=((void*)0)) {
            if(            i_283==head) {
                self->tail=it_282->prev;
                self->tail->next=((void*)0);
            }
            if(            i_283>=head) {
                prev_it_284=it_282;
                it_282=it_282->next;
                i_283++;
                /*i*/come_call_finalizer3(prev_it_284,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_282=it_282->next;
                i_283++;
            }
        }
    }
    else {
        it_285=self->head;
        head_prev_it_286=((void*)0);
        tail_it_287=((void*)0);
        i_288=0;
        while(it_285!=((void*)0)) {
            if(            i_288==head) {
                head_prev_it_286=it_285->prev;
            }
            if(            i_288==tail) {
                tail_it_287=it_285;
            }
            if(            i_288>=head&&i_288<tail) {
                prev_it_289=it_285;
                it_285=it_285->next;
                i_288++;
                /*i*/come_call_finalizer3(prev_it_289,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_285=it_285->next;
                i_288++;
            }
        }
        if(        head_prev_it_286!=((void*)0)) {
            head_prev_it_286->next=tail_it_287;
        }
        if(        tail_it_287!=((void*)0)) {
            tail_it_287->prev=head_prev_it_286;
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_277;
struct list_item$1charp* prev_it_278;
struct list$1charp* __result144__;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*i*/come_call_finalizer3(prev_it_278,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_291;
char* __result147__;
char* __result148__;
char* result_292;
char* __result149__;
result_291 = (void*)0;
result_292 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_291,0,sizeof(char*));
        __result147__ = gComeFunResultObject = __result_obj__ = result_291;
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    self->it=self->head;
    if(    self->it) {
        __result148__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    memset(&result_292,0,sizeof(char*));
    __result149__ = gComeFunResultObject = __result_obj__ = result_292;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_294;
char* __result150__;
char* __result151__;
char* result_295;
char* __result152__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result150__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result151__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    memset(&result_295,0,sizeof(char*));
    __result152__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_386;
_Bool is_type_name_flag_387;
int sline_388;
_Bool define_struct_nobody_389;
char* p_390;
int sline_391;
void* __right_value532 = (void*)0;
char* word_392;
_Bool define_function_pointer_result_function_393;
_Bool define_variable_between_brace_394;
char* p_395;
void* __right_value533 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_396=0;
char* fun_name_397=0;
_Bool err_398=0;
void* __right_value534 = (void*)0;
char* word_399;
_Bool define_function_flag_400;
char* p_401;
void* __right_value535 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_402=0;
char* fun_name_403=0;
_Bool err_404=0;
char* word_405;
void* __right_value536 = (void*)0;
char* __dec_obj156;
void* __right_value537 = (void*)0;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value538 = (void*)0;
char* __dec_obj159;
_Bool define_variable_406;
char* p_407;
void* __right_value539 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_408=0;
char* fun_name_409=0;
_Bool err_410=0;
void* __right_value540 = (void*)0;
char* word_411;
void* __right_value541 = (void*)0;
char* word_412;
char* p_413;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* word_414;
void* __right_value544 = (void*)0;
char* __dec_obj160;
void* __right_value545 = (void*)0;
char* word_415;
void* __right_value546 = (void*)0;
char* word_418;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* node_419;
struct sNode* __result155__;
void* __right_value549 = (void*)0;
struct sNode* __result156__;
char* header_head_420;
void* __right_value550 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_421=0;
char* fun_name_422=0;
_Bool err_423=0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1sTypeph* param_types_424;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_names_425;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_426=0;
char* param_name_427=0;
_Bool err_428=0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1sTypeph* param_types2_430;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1charph* param_names2_431;
void* __right_value562 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_432=0;
char* param_name_433=0;
_Bool err_434=0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* header_tail_436;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type2_437;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct tuple1$1sTypeph* __dec_obj162;
void* __right_value569 = (void*)0;
struct list$1sTypeph* __dec_obj163;
void* __right_value570 = (void*)0;
struct list$1charph* __dec_obj164;
_Bool var_args_438;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* header_buf_439;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_default_parametors_440;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sFun* fun_441;
void* __right_value580 = (void*)0;
struct sFun* fun2_445;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value618 = (void*)0;
struct sNode* __result185__;
void* __right_value619 = (void*)0;
struct sNode* node_480;
struct sNode* __result186__;
void* __right_value620 = (void*)0;
struct sNode* node_481;
char* source_tail_482;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct buffer* header_483;
struct sNode* __result187__;
void* __right_value623 = (void*)0;
char* buf2_484;
void* __right_value624 = (void*)0;
struct sNode* __result188__;
    source_head_386=info->p;
    is_type_name_flag_387=is_type_name(buf,info);
    sline_388=info->sline;
    define_struct_nobody_389=(_Bool)0;
    {
        p_390=info->p;
        sline_391=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_392=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_389=(_Bool)1;
                }
                /* U13 */word_392 = come_decrement_ref_count2(word_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_391;
    }
    define_function_pointer_result_function_393=(_Bool)0;
    define_variable_between_brace_394=(_Bool)0;
    if(    is_type_name_flag_387) {
        p_395=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value533=backtrace_parse_type((_Bool)0,info)));
            result_type_396=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_397=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_398=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value533,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_393=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_399=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_399,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_394=(_Bool)1;
                            }
                        }
                        /* U13 */word_399 = come_decrement_ref_count2(word_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_396,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_397 = come_decrement_ref_count2(fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_388;
    }
    define_function_flag_400=(_Bool)0;
    if(    is_type_name_flag_387&&!define_function_pointer_result_function_393&&charp_operator_not_equals(buf,"__typeof__")) {
        p_401=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value535=backtrace_parse_type((_Bool)0,info)));
            result_type_402=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_403=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_404=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value535,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_403 = come_decrement_ref_count2(fun_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_405=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj156=word_405;
                word_405=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_405,"extern")) {
                    __dec_obj157=word_405;
                    word_405=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj158=word_405;
                word_405=((void*)0);
                /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_405) {
                if(                is_type_name(word_405,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj159=word_405;
                        word_405=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_405)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_387) {
                        define_function_flag_400=(_Bool)1;
                    }
                }
            }
            /* U13 */word_405 = come_decrement_ref_count2(word_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_401;
        info->sline=sline_388;
    }
    define_variable_406=(_Bool)1;
    if(    is_type_name_flag_387&&!define_function_pointer_result_function_393) {
        p_407=info->p;
        info->p=head;
        if(        !is_type_name_flag_387) {
            define_variable_406=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value539=backtrace_parse_type((_Bool)0,info)));
            result_type_408=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_409=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_410=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value539,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_411=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_406=(_Bool)1;
                            }
                        }
                        /* U13 */word_411 = come_decrement_ref_count2(word_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_412=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_412,info)&&*info->p!=40) {
                            define_variable_406=(_Bool)1;
                        }
                    }
                    /* U13 */word_412 = come_decrement_ref_count2(word_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_409 = come_decrement_ref_count2(fun_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_406=(_Bool)0;
        }
        else if(        define_variable_406) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_406=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_406=(_Bool)0;
            }
        }
        info->p=p_407;
        info->sline=sline_388;
    }
    else {
        define_variable_406=(_Bool)0;
    }
    {
        p_413=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value542=parse_word(info)));
                /* U11 */__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_414=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj160=word_414;
                        word_414=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_414,"extends")) {
                            define_variable_406=(_Bool)0;
                        }
                    }
                    /* U13 */word_414 = come_decrement_ref_count2(word_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_406=(_Bool)0;
        }
        else if(        define_variable_406) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_406=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_406=(_Bool)0;
            }
        }
        info->p=p_413;
        info->sline=sline_388;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_415=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_418=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_418)));
                    /* U13 */word_418 = come_decrement_ref_count2(word_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_419=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result155__ = gComeFunResultObject = __result_obj__ = node_419;
            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */word_415 = come_decrement_ref_count2(word_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result155__;
            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */word_415 = come_decrement_ref_count2(word_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_struct_nobody_389) {
    }
    else if(    define_variable_between_brace_394) {
        info->p=head;
        info->sline=sline_388;
        __result156__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value549=parse_global_variable(info)));
        if(__right_value549) { __right_value549 = come_decrement_ref_count2(__right_value549, ((struct sNode*)__right_value549)->finalize, ((struct sNode*)__right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    else if(    define_function_pointer_result_function_393) {
        header_head_420=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value550=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_421=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_422=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_423=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value550,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_424=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1365, "list$1sTypeph"))));
            param_names_425=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1366, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_426=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_427=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_428=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_428) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_424,(struct sType*)come_increment_ref_count(param_type_426));
                    static int num_function_pointer_result_var_name_a_429=0;
                    list$1charph_push_back(param_names_425,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_429)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value557=parse_word(info)));
                        /* U11 */__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_427 = come_decrement_ref_count2(param_name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_427 = come_decrement_ref_count2(param_name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_430=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1412, "list$1sTypeph"))));
                param_names2_431=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1413, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value562=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_432=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_433=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_434=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value562,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_434) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_430,(struct sType*)come_increment_ref_count(param_type_432));
                        static int num_function_pointer_result_var_name_b_435=0;
                        list$1charph_push_back(param_names2_431,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_435)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value564=parse_word(info)));
                            /* U11 */__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */param_name_433 = come_decrement_ref_count2(param_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_433 = come_decrement_ref_count2(param_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_436=info->p;
                result_type2_437=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "sType")),"lambda",(_Bool)0,info));
                __dec_obj162=result_type2_437->mResultType;
                result_type2_437->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1457, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_421)));
                come_call_finalizer3(__dec_obj162,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj163=result_type2_437->mParamTypes;
                result_type2_437->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_430));
                come_call_finalizer3(__dec_obj163,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj164=result_type2_437->mParamNames;
                result_type2_437->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_431));
                come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_437->mVarArgs=(_Bool)0;
                result_type2_437->mStatic=(_Bool)0;
                var_args_438=(_Bool)0;
                header_buf_439=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1465, "buffer"))));
                buffer_append(header_buf_439,header_head_420,header_tail_436-header_head_420);
                buffer_append_char(header_buf_439,0);
                param_default_parametors_440=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1469, "list$1charph"))));
                fun_441=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1471, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_422)),(struct sType*)come_increment_ref_count(result_type2_437),(struct list$1sTypeph*)come_increment_ref_count(param_types_424),(struct list$1charph*)come_increment_ref_count(param_names_425),(struct list$1charph*)come_increment_ref_count(param_default_parametors_440),(_Bool)1,var_args_438,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_439)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                fun2_445=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value580=__builtin_string(fun_name_422))));
                /* U11 */__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_445==((void*)0)||fun2_445->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_422)),(struct sFun*)come_increment_ref_count(fun_441));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1483, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1483, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_441),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result185__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_430,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_440,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_441,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_425,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_422 = come_decrement_ref_count2(fun_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value583,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result185__;
                /*i*/come_call_finalizer3(param_types2_430,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_440,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_441,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_425,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_422 = come_decrement_ref_count2(fun_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_400) {
        info->p=head;
        info->sline=sline_388;
        node_480=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result186__ = gComeFunResultObject = __result_obj__ = node_480;
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result186__;
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_406) {
        info->p=head;
        info->sline=sline_388;
        node_481=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_482=info->p;
        header_483=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1507, "buffer"))));
        buffer_append(header_483,source_head_386,source_tail_482-source_head_386);
        __result187__ = gComeFunResultObject = __result_obj__ = node_481;
        if(node_481) { node_481 = come_decrement_ref_count2(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result187__;
        if(node_481) { node_481 = come_decrement_ref_count2(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_388;
    buf2_484=(char*)come_increment_ref_count(parse_word(info));
    __result188__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value624=top_level_v98(buf2_484,head,head_sline,info)));
    /* U13 */buf2_484 = come_decrement_ref_count2(buf2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value624) { __right_value624 = come_decrement_ref_count2(__right_value624, ((struct sNode*)__right_value624)->finalize, ((struct sNode*)__right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj154;
char* __dec_obj155;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj154=self->v1;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj155=self->v2;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_416;
struct list_item$1charph* prev_it_417;
struct list$1charph* __result154__;
    it_416=self->head;
    while(it_416!=((void*)0)) {
        prev_it_417=it_416;
        it_416=it_416->next;
        /*i*/come_call_finalizer3(prev_it_417,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj161;
struct tuple1$1sTypeph* __result157__;
    __dec_obj161=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_442;
unsigned int hash_443;
unsigned int it_444;
struct sFun* __result158__;
struct sFun* __result159__;
struct sFun* __result160__;
struct sFun* __result161__;
default_value_442 = (void*)0;
    memset(&default_value_442,0,sizeof(struct sFun*));
    hash_443=string_get_hash_key(((char*)key))%self->size;
    it_444=hash_443;
    while((_Bool)1) {
        if(        self->item_existance[it_444]) {
            if(            string_equals(self->keys[it_444],key)) {
                __result158__ = gComeFunResultObject = __result_obj__ = self->items[it_444];
                /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result158__;
            }
            it_444++;
            if(            it_444>=self->size) {
                it_444=0;
            }
            else if(            it_444==hash_443) {
                __result159__ = gComeFunResultObject = __result_obj__ = default_value_442;
                /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result159__;
            }
        }
        else {
            __result160__ = gComeFunResultObject = __result_obj__ = default_value_442;
            /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result160__;
        }
    }
    __result161__ = gComeFunResultObject = __result_obj__ = default_value_442;
    /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result163__;
void* __right_value586 = (void*)0;
struct sFun* result_447;
void* __right_value587 = (void*)0;
char* __dec_obj168;
void* __right_value588 = (void*)0;
struct sType* __dec_obj169;
void* __right_value589 = (void*)0;
struct list$1sTypeph* __dec_obj170;
void* __right_value590 = (void*)0;
struct list$1charph* __dec_obj171;
void* __right_value591 = (void*)0;
struct list$1charph* __dec_obj172;
void* __right_value592 = (void*)0;
struct sType* __dec_obj173;
void* __right_value610 = (void*)0;
struct sBlock* __dec_obj179;
void* __right_value611 = (void*)0;
struct buffer* __dec_obj180;
void* __right_value612 = (void*)0;
struct buffer* __dec_obj181;
void* __right_value613 = (void*)0;
struct buffer* __dec_obj182;
void* __right_value614 = (void*)0;
struct buffer* __dec_obj183;
void* __right_value615 = (void*)0;
char* __dec_obj184;
void* __right_value616 = (void*)0;
char* __dec_obj185;
struct sFun* __result183__;
    if(    self==(void*)0) {
        __result163__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_447=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj168=result_447->mName;
        result_447->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj169=result_447->mResultType;
        result_447->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj170=result_447->mParamTypes;
        result_447->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj170,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj171=result_447->mParamNames;
        result_447->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj171,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj172=result_447->mParamDefaultParametors;
        result_447->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj173=result_447->mLambdaType;
        result_447->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj179=result_447->mBlock;
        result_447->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_447->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj180=result_447->mSource;
        result_447->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj181=result_447->mSourceHead;
        result_447->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj182=result_447->mSourceHead2;
        result_447->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj183=result_447->mSourceDefer;
        result_447->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj184=result_447->mComeHeader;
        result_447->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj185=result_447->mDeclareSName;
        result_447->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_447->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result183__ = gComeFunResultObject = __result_obj__ = result_447;
    /*i*/come_call_finalizer3(result_447,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result164__;
void* __right_value593 = (void*)0;
struct sBlock* result_448;
void* __right_value594 = (void*)0;
struct list$1sNodeph* __dec_obj174;
void* __right_value609 = (void*)0;
struct sVarTable* __dec_obj178;
struct sBlock* __result182__;
    if(    self==(void*)0) {
        __result164__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_448=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj174=result_448->mNodes;
        result_448->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj174,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj178=result_448->mVarTable;
        result_448->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj178,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_448->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result182__ = gComeFunResultObject = __result_obj__ = result_448;
    /*i*/come_call_finalizer3(result_448,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result165__;
void* __right_value595 = (void*)0;
struct sVarTable* result_449;
void* __right_value608 = (void*)0;
struct map$2charphsVarph* __dec_obj177;
struct sVarTable* __result181__;
    if(    self==(void*)0) {
        __result165__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    result_449=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj177=result_449->mVars;
        result_449->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj177,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_449->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_449->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_449->mID=self->mID;
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_449;
    /*i*/come_call_finalizer3(result_449,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result166__;
void* __right_value596 = (void*)0;
void* __right_value602 = (void*)0;
struct map$2charphsVarph* result_453;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1charp* __dec_obj176;
char* it_456;
struct sVar* default_value_459;
struct sVar* it2_462;
struct map$2charphsVarph* __result180__;
default_value_459 = (void*)0;
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    result_453=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1494, "map$2charphsVarph"))));
    __dec_obj176=result_453->key_list;
    result_453->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1496, "list$1charp"))));
    come_call_finalizer3(__dec_obj176,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_456=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_456=map$2charphsVarph_next(self)    ){
        memset(&default_value_459,0,sizeof(struct sVar*));
        it2_462=map$2charphsVarph_at(self,it_456,default_value_459);
        map$2charphsVarph_put(result_453,it_456,it2_462);
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_453;
    /*i*/come_call_finalizer3(result_453,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
int i_450;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1charp* __dec_obj175;
struct map$2charphsVarph* __result168__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value597=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1400, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value598=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1401, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value599=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1402, "bool"))));
    for(    i_450=0;    i_450<128;    i_450++    ){
        self->item_existance[i_450]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj175=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1412, "list$1charp"))));
    come_call_finalizer3(__dec_obj175,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result168__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result167__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_451;
int i_452;
    for(    i_451=0;    i_451<self->size;    i_451++    ){
        if(        self->item_existance[i_451]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_451],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_452=0;    i_452<self->size;    i_452++    ){
        if(        self->item_existance[i_452]) {
            if(            1) {
                /* U13 */self->keys[i_452] = come_decrement_ref_count2(self->keys[i_452], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_454;
char* __result169__;
char* __result170__;
char* result_455;
char* __result171__;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_454,0,sizeof(char*));
        __result169__ = gComeFunResultObject = __result_obj__ = result_454;
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result170__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    memset(&result_455,0,sizeof(char*));
    __result171__ = gComeFunResultObject = __result_obj__ = result_455;
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_457;
char* __result172__;
char* __result173__;
char* result_458;
char* __result174__;
result_457 = (void*)0;
result_458 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_457,0,sizeof(char*));
        __result172__ = gComeFunResultObject = __result_obj__ = result_457;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result173__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    memset(&result_458,0,sizeof(char*));
    __result174__ = gComeFunResultObject = __result_obj__ = result_458;
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_460;
unsigned int it_461;
struct sVar* __result175__;
struct sVar* __result176__;
struct sVar* __result177__;
struct sVar* __result178__;
    hash_460=string_get_hash_key(((char*)key))%self->size;
    it_461=hash_460;
    while((_Bool)1) {
        if(        self->item_existance[it_461]) {
            if(            string_equals(self->keys[it_461],key)) {
                __result175__ = gComeFunResultObject = __result_obj__ = self->items[it_461];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result175__;
            }
            it_461++;
            if(            it_461>=self->size) {
                it_461=0;
            }
            else if(            it_461==hash_460) {
                __result176__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result176__;
            }
        }
        else {
            __result177__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result177__;
        }
    }
    __result178__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_474;
int it_475;
_Bool same_key_exist_476;
char* it2_477;
struct map$2charphsVarph* __result179__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_474=string_get_hash_key(key)%self->size;
    it_475=hash_474;
    while((_Bool)1) {
        if(        self->item_existance[it_475]) {
            if(            string_equals(self->keys[it_475],key)) {
                if(                1) {
                    /* U13 */self->keys[it_475] = come_decrement_ref_count2(self->keys[it_475], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_475]);
                    self->keys[it_475]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_475]);
                    self->keys[it_475]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_475],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_475]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_475]=item;
                }
                break;
            }
            it_475++;
            if(            it_475>=self->size) {
                it_475=0;
            }
            else if(            it_475==hash_474) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_475]=(_Bool)1;
            if(            1) {
                self->keys[it_475]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_475]=key;
            }
            if(            1) {
                self->items[it_475]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_475]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_476=(_Bool)0;
    for(    it2_477=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_477=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_477,key)) {
            same_key_exist_476=(_Bool)1;
        }
    }
    if(    !same_key_exist_476) {
        list$1charp_push_back(self->key_list,key);
    }
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_463;
void* __right_value605 = (void*)0;
char** keys_464;
void* __right_value606 = (void*)0;
struct sVar** items_465;
void* __right_value607 = (void*)0;
_Bool* item_existance_466;
int len_467;
char* it_468;
struct sVar* default_value_469;
struct sVar* it2_470;
unsigned int hash_471;
int n_472;
struct sVar* default_value_473;
default_value_469 = (void*)0;
default_value_473 = (void*)0;
    size_463=self->size*10;
    keys_464=(char**)come_increment_ref_count(((char**)(__right_value605=(char**)come_calloc(1, sizeof(char*)*(1*(size_463)), "/usr/local/include/comelang.h", 1651, "char*%"))));
    items_465=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value606=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_463)), "/usr/local/include/comelang.h", 1652, "sVar*%"))));
    item_existance_466=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value607=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_463)), "/usr/local/include/comelang.h", 1653, "bool"))));
    len_467=0;
    for(    it_468=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_468=map$2charphsVarph_next(self)    ){
        memset(&default_value_469,0,sizeof(struct sVar*));
        it2_470=map$2charphsVarph_at(self,it_468,default_value_469);
        hash_471=string_get_hash_key(it_468)%size_463;
        n_472=hash_471;
        while((_Bool)1) {
            if(            item_existance_466[n_472]) {
                n_472++;
                if(                n_472>=size_463) {
                    n_472=0;
                }
                else if(                n_472==hash_471) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_466[n_472]=(_Bool)1;
                keys_464[n_472]=it_468;
                items_465[n_472]=map$2charphsVarph_at(self,it_468,default_value_473);
                len_467++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_464;
    self->items=items_465;
    self->item_existance=item_existance_466;
    self->size=size_463;
    self->len=len_467;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_478;
int i_479;
    for(    i_478=0;    i_478<self->size;    i_478++    ){
        if(        self->item_existance[i_478]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_478],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_479=0;    i_479<self->size;    i_479++    ){
        if(        self->item_existance[i_479]) {
            if(            1) {
                /* U13 */self->keys[i_479] = come_decrement_ref_count2(self->keys[i_479], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_485;
int caller_line_486;
char* caller_sname_487;
_Bool comma_instead_of_semicolon_488;
char* last_code_489;
char* __dec_obj187;
char* last_code2_490;
char* __dec_obj188;
char* last_code3_491;
char* __dec_obj189;
void* __right_value625 = (void*)0;
char* sname_top_492;
int sline_top_493;
struct sFun* funX_494;
_Bool __result189__;
void* __right_value626 = (void*)0;
struct sType* result_type_495;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1sTypeph* param_types_496;
struct list$1sTypeph* o2_saved_497;
struct sType* it_500;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sType* param_type_503;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charph* param_names_504;
void* __right_value633 = (void*)0;
struct list$1charph* param_default_parametors_505;
char* p_506;
int sline_507;
char* sname_508;
char* head_509;
struct buffer* source_510;
void* __right_value634 = (void*)0;
struct buffer* __dec_obj190;
struct sType* generics_type_saved_511;
void* __right_value635 = (void*)0;
struct sType* __dec_obj191;
struct list$1charph* method_generics_type_names_512;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1charph* __dec_obj192;
struct list$1charph* o2_saved_513;
char* it_514;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1charph* __dec_obj193;
char* __dec_obj194;
void* __right_value640 = (void*)0;
struct sBlock* block_515;
struct buffer* __dec_obj195;
char* __dec_obj196;
_Bool var_args_516;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sFun* fun_517;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value652 = (void*)0;
struct sNode* node_518;
_Bool in_generics_fun_520;
void* __if_result__1_521 = (void*)0;
_Bool __result198__;
struct sType* __dec_obj201;
struct list$1charph* __dec_obj202;
void* __right_value653 = (void*)0;
char* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
_Bool __result199__;
    caller_fun_485=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_486=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_487=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_488=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_489=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj187=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_490=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj188=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_491=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj189=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_492=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_493=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_494=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_494) {
        __result189__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_489 = come_decrement_ref_count2(last_code_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_490 = come_decrement_ref_count2(last_code2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_491 = come_decrement_ref_count2(last_code3_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_492 = come_decrement_ref_count2(sname_top_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result189__;
    }
    result_type_495=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_496=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1555, "list$1sTypeph"))));
    for(    o2_saved_497=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_500=list$1sTypeph_begin((o2_saved_497));    !list$1sTypeph_end((o2_saved_497));    it_500=list$1sTypeph_next((o2_saved_497))    ){
        param_type_503=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value629=sType_clone(it_500))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_503->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_496,(struct sType*)come_increment_ref_count(sType_clone(param_type_503)));
        /*i*/come_call_finalizer3(param_type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_504=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_505=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_506=info->p;
    sline_507=info->sline;
    sname_508=(char*)come_increment_ref_count(info->sname);
    head_509=info->head;
    source_510=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj190=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_511=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj191=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_512=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj192=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1582, "list$1charph"))));
    come_call_finalizer3(__dec_obj192,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_513=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_514=list$1charph_begin((o2_saved_513));    !list$1charph_end((o2_saved_513));    it_514=list$1charph_next((o2_saved_513))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_514)));
    }
    /*i*/come_call_finalizer3(o2_saved_513,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj193=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj193,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj194=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_515=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_509;
    __dec_obj195=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_510);
    come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_506;
    info->sline=sline_507;
    __dec_obj196=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_508);
    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_495->mInline=(_Bool)0;
    var_args_516=generics_fun->mVarArgs;
    fun_517=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_495),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_496)),(struct list$1charph*)come_increment_ref_count(param_names_504),(struct list$1charph*)come_increment_ref_count(param_default_parametors_505),(_Bool)0,var_args_516,(struct sBlock*)come_increment_ref_count(block_515),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_517));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1611, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value648=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1611, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_517),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_518=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value648,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_520=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(    !node_compile(node_518,info)) {
        __result198__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_489 = come_decrement_ref_count2(last_code_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_490 = come_decrement_ref_count2(last_code2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_491 = come_decrement_ref_count2(last_code3_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_492 = come_decrement_ref_count2(sname_top_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_508 = come_decrement_ref_count2(sname_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_511,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_512,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_515,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_517,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result198__;
    }
    info->in_generics_fun=in_generics_fun_520;
    __dec_obj201=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_511);
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj202=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_512);
    come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj203=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_492));
    /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_493;
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_489);
    /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_490);
    /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_491);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_485;
    info->caller_line=caller_line_486;
    info->caller_sname=caller_sname_487;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_488;
    __result199__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_489 = come_decrement_ref_count2(last_code_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_490 = come_decrement_ref_count2(last_code2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_491 = come_decrement_ref_count2(last_code3_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_492 = come_decrement_ref_count2(sname_top_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_508 = come_decrement_ref_count2(sname_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_511,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_512,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_515,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_517,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result199__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_498;
struct sType* __result190__;
struct sType* __result191__;
struct sType* result_499;
struct sType* __result192__;
result_498 = (void*)0;
result_499 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_498,0,sizeof(struct sType*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_498;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->head;
    if(    self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_499,0,sizeof(struct sType*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_499;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_501;
struct sType* __result193__;
struct sType* __result194__;
struct sType* result_502;
struct sType* __result195__;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_501,0,sizeof(struct sType*));
        __result193__ = gComeFunResultObject = __result_obj__ = result_501;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result194__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    memset(&result_502,0,sizeof(struct sType*));
    __result195__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result195__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_522;
int caller_line_523;
char* caller_sname_524;
_Bool comma_instead_of_semicolon_525;
char* last_code_526;
char* __dec_obj207;
char* last_code2_527;
char* __dec_obj208;
char* last_code3_528;
char* __dec_obj209;
void* __right_value654 = (void*)0;
char* sname_top_529;
int sline_top_530;
struct sFun* funX_531;
_Bool __result200__;
void* __right_value655 = (void*)0;
struct sType* result_type_532;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1sTypeph* param_types_533;
struct list$1sTypeph* o2_saved_534;
struct sType* it_535;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* param_type_536;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* param_names_537;
void* __right_value662 = (void*)0;
struct list$1charph* param_default_parametors_538;
char* p_539;
int sline_540;
char* sname_541;
char* head_542;
struct buffer* source_543;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj210;
struct list$1charph* method_generics_type_names_544;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1charph* __dec_obj211;
struct list$1charph* o2_saved_545;
char* it_546;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1charph* __dec_obj212;
char* __dec_obj213;
void* __right_value668 = (void*)0;
struct sBlock* block_547;
struct buffer* __dec_obj214;
char* __dec_obj215;
_Bool var_args_548;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sFun* fun_549;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value680 = (void*)0;
struct sNode* node_550;
void* __if_result__2_552 = (void*)0;
_Bool __result203__;
struct list$1charph* __dec_obj220;
void* __right_value681 = (void*)0;
char* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
_Bool __result204__;
    caller_fun_522=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_523=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_524=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_525=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_526=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj207=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_527=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj208=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_528=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj209=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_529=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_530=info->sline;
    funX_531=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_531) {
        __result200__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_526 = come_decrement_ref_count2(last_code_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_527 = come_decrement_ref_count2(last_code2_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_528 = come_decrement_ref_count2(last_code3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result200__;
    }
    result_type_532=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_533=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1668, "list$1sTypeph"))));
    for(    o2_saved_534=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_535=list$1sTypeph_begin((o2_saved_534));    !list$1sTypeph_end((o2_saved_534));    it_535=list$1sTypeph_next((o2_saved_534))    ){
        param_type_536=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value658=sType_clone(it_535))),info));
        /*g*/come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_536->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_533,(struct sType*)come_increment_ref_count(sType_clone(param_type_536)));
        /*i*/come_call_finalizer3(param_type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_534,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_537=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_538=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_539=info->p;
    sline_540=info->sline;
    sname_541=(char*)come_increment_ref_count(info->sname);
    head_542=info->head;
    source_543=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj210=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_544=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj211=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1692, "list$1charph"))));
    come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_545=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_546=list$1charph_begin((o2_saved_545));    !list$1charph_end((o2_saved_545));    it_546=list$1charph_next((o2_saved_545))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_546)));
    }
    /*i*/come_call_finalizer3(o2_saved_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj212=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj213=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_547=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_542;
    __dec_obj214=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_543);
    come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_539;
    info->sline=sline_540;
    __dec_obj215=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_541);
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_532->mInline=(_Bool)0;
    var_args_548=generics_fun->mVarArgs;
    fun_549=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1714, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_532),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_533)),(struct list$1charph*)come_increment_ref_count(param_names_537),(struct list$1charph*)come_increment_ref_count(param_default_parametors_538),(_Bool)0,var_args_548,(struct sBlock*)come_increment_ref_count(block_547),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_549));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1721, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value676=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1721, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_549),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_550=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value676,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(    !node_compile(node_550,info)) {
        __result203__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_526 = come_decrement_ref_count2(last_code_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_527 = come_decrement_ref_count2(last_code2_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_528 = come_decrement_ref_count2(last_code3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_537,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_541 = come_decrement_ref_count2(sname_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_547,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_549,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_550) { node_550 = come_decrement_ref_count2(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result203__;
    }
    __dec_obj220=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_544);
    come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj221=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_529));
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_530;
    __dec_obj222=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_526);
    /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj223=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_527);
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj224=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_528);
    /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_522;
    info->caller_line=caller_line_523;
    info->caller_sname=caller_sname_524;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_525;
    __result204__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_526 = come_decrement_ref_count2(last_code_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_527 = come_decrement_ref_count2(last_code2_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_528 = come_decrement_ref_count2(last_code3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_537,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_541 = come_decrement_ref_count2(sname_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_547,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_549,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_550) { node_550 = come_decrement_ref_count2(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result204__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_553;
char* source_head_554;
struct sType* result_type_555;
char* var_name_556;
_Bool constructor__557;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sType* __dec_obj225;
void* __right_value684 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_558=0;
char* var_name2_559=0;
_Bool err_560=0;
struct sType* __dec_obj226;
char* __dec_obj227;
_Bool method_definition_561;
char* p_562;
int sline_563;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct buffer* buf2_564;
char* fun_name_565;
char* base_fun_name_566;
void* __right_value687 = (void*)0;
char* __dec_obj228;
void* __right_value688 = (void*)0;
char* __dec_obj229;
void* __right_value689 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_567=0;
char* name_568=0;
_Bool err_569=0;
void* __right_value690 = (void*)0;
char* __dec_obj230;
void* __right_value691 = (void*)0;
char* __dec_obj231;
void* __right_value692 = (void*)0;
char* __dec_obj232;
void* __right_value693 = (void*)0;
char* __dec_obj233;
void* __right_value694 = (void*)0;
char* __dec_obj234;
void* __right_value695 = (void*)0;
char* __dec_obj235;
void* __right_value696 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_570=0;
struct list$1charph* param_names_571=0;
struct list$1charph* param_default_parametors_572=0;
_Bool var_args_573=0;
char* header_tail_574;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct buffer* header_buf_575;
int version_576;
int n_577;
void* __right_value699 = (void*)0;
struct sBlock* block_578;
void* __right_value700 = (void*)0;
char* fun_name_580;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sFun* fun_581;
void* __right_value706 = (void*)0;
struct sFun* fun2_582;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value712 = (void*)0;
struct sNode* __result207__;
void* __right_value713 = (void*)0;
char* none_generics_name_584;
void* __right_value714 = (void*)0;
char* generics_sname_585;
int generics_sline_586;
void* __right_value715 = (void*)0;
char* block_587;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sGenericsFun* fun_588;
void* __right_value722 = (void*)0;
char* fun_name3_589;
void* __right_value726 = (void*)0;
struct sNode* __result219__;
void* __right_value727 = (void*)0;
char* generics_sname_611;
int generics_sline_612;
void* __right_value728 = (void*)0;
char* block_613;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sGenericsFun* fun_614;
void* __right_value735 = (void*)0;
char* fun_name3_615;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* __result220__;
char* source_tail_616;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct buffer* header_617;
void* __right_value740 = (void*)0;
char* name_618;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
char* name_619;
void* __right_value743 = (void*)0;
int i_620;
struct sType* param_type_621;
char* param_name_625;
char* default_parametor_626;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
char* impl_name_627;
void* __right_value749 = (void*)0;
char* result_type_name_628;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
char* impl_name_629;
void* __right_value752 = (void*)0;
char* result_type_name_630;
void* __right_value753 = (void*)0;
int i_631;
struct sType* param_type_632;
char* param_name_633;
char* default_parametor_634;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sBlock* block_635;
_Bool static__636;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
char* new_fun_name_637;
void* __right_value762 = (void*)0;
char* __dec_obj241;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sFun* fun_638;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sFun* fun2_639;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value777 = (void*)0;
struct sNode* __result225__;
void* __right_value778 = (void*)0;
char* new_fun_name_641;
void* __right_value779 = (void*)0;
char* __dec_obj246;
_Bool result_type_static_642;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun_643;
void* __right_value785 = (void*)0;
struct sFun* fun2_644;
void* __right_value786 = (void*)0;
char* source_tail_645;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct buffer* header_646;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value795 = (void*)0;
struct sNode* __result228__;
void* __right_value796 = (void*)0;
char* asm_fun_648;
void* __right_value797 = (void*)0;
char* __dec_obj251;
_Bool result_type_static_649;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sFun* fun_650;
void* __right_value803 = (void*)0;
struct sFun* fun2_651;
void* __right_value804 = (void*)0;
char* source_tail_652;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* header_653;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct sNode* __result231__;
struct sNode* __result232__;
fun_name_565 = (void*)0;
    header_head_553=info->p;
    source_head_554=info->p;
    result_type_555=((void*)0);
    var_name_556=((void*)0);
    constructor__557=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value682=parse_word(info)));
        /* U11 */__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj225=result_type_555;
        result_type_555=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_555->mHeap=(_Bool)1;
        constructor__557=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value684=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_558=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_559=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_560=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value684,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj226=result_type_555;
        result_type_555=(struct sType*)come_increment_ref_count(result_type2_558);
        come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj227=var_name_556;
        var_name_556=(char*)come_increment_ref_count(var_name2_559);
        /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_560) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_558,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name2_559 = come_decrement_ref_count2(var_name2_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_561=(_Bool)0;
    {
        p_562=info->p;
        sline_563=info->sline;
        buf2_564=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1786, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_564,*info->p);
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
        if(        buffer_length(buf2_564)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_561=(_Bool)1;
        }
        info->p=p_562;
        info->sline=sline_563;
        /*i*/come_call_finalizer3(buf2_564,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_566=((void*)0);
    if(    constructor__557) {
        __dec_obj228=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj229=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_566,info,(_Bool)1));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_561) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value689=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_567=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_568=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_569=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value689,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_569) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj230=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(create_method_name(obj_type_567,(_Bool)0,base_fun_name_566,info,(_Bool)1));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_568 = come_decrement_ref_count2(name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj232=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj233=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_566,info,(_Bool)1));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj234=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj235=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(__builtin_string(fun_name_565));
        /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_566,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value696=parse_params(info,constructor__557)));
    param_types_570=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_571=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_572=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_573=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value696,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_574=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_566,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1853, "buffer"))));
    buffer_append(header_buf_575,header_head_553,header_tail_574-header_head_553);
    buffer_append_char(header_buf_575,0);
    version_576=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_577=0;
        while(xisdigit(*info->p)) {
            n_577=n_577*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_576=n_577;
    }
    if(    charp_operator_equals(base_fun_name_566,"lambda")) {
        block_578=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_579=0;
        lambda_num_579++;
        fun_name_580=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_579));
        result_type_555->mStatic=(_Bool)0;
        fun_581=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1883, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_580)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)0,var_args_573,(struct sBlock*)come_increment_ref_count(block_578),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_582=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value706=__builtin_string(fun_name_580))));
        /* U11 */__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_582==((void*)0)||fun2_582->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_580)),(struct sFun*)come_increment_ref_count(fun_581));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1893, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value709=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1893, "sLambdaNode")),fun_581,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result207__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value712=_inf_value5));
        /*i*/come_call_finalizer3(block_578,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_580 = come_decrement_ref_count2(fun_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_581,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value709,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value712) { __right_value712 = come_decrement_ref_count2(__right_value712, ((struct sNode*)__right_value712)->finalize, ((struct sNode*)__right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result207__;
        /*i*/come_call_finalizer3(block_578,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_580 = come_decrement_ref_count2(fun_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_581,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_584=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_585=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_586=info->sline;
        block_587=(char*)come_increment_ref_count(skip_block(info));
        fun_588=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1903, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value717=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value718=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),var_args_573,(char*)come_increment_ref_count(block_587),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_585)),generics_sline_586));
        /*g*/come_call_finalizer3(__right_value717,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value718,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_589=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_584,base_fun_name_566));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_589)),(struct sGenericsFun*)come_increment_ref_count(fun_588));
        __result219__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */none_generics_name_584 = come_decrement_ref_count2(none_generics_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_585 = come_decrement_ref_count2(generics_sname_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_587 = come_decrement_ref_count2(block_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_588,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_589 = come_decrement_ref_count2(fun_name3_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result219__;
        /* U13 */none_generics_name_584 = come_decrement_ref_count2(none_generics_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_585 = come_decrement_ref_count2(generics_sname_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_587 = come_decrement_ref_count2(block_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_588,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_589 = come_decrement_ref_count2(fun_name3_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_611=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_612=info->sline;
        block_613=(char*)come_increment_ref_count(skip_block(info));
        fun_614=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1917, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value730=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value731=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),var_args_573,(char*)come_increment_ref_count(block_613),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_611)),generics_sline_612));
        /*g*/come_call_finalizer3(__right_value730,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value731,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_615=(char*)come_increment_ref_count(charp_clone(base_fun_name_566));
        if(        method_definition_561) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sGenericsFun*)come_increment_ref_count(fun_614));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_615)),(struct sGenericsFun*)come_increment_ref_count(fun_614));
        }
        __result220__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */generics_sname_611 = come_decrement_ref_count2(generics_sname_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_613 = come_decrement_ref_count2(block_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_614,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_615 = come_decrement_ref_count2(fun_name3_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
        /* U13 */generics_sname_611 = come_decrement_ref_count2(generics_sname_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_613 = come_decrement_ref_count2(block_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_614,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_615 = come_decrement_ref_count2(fun_name3_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_616=info->p-1;
        header_617=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1933, "buffer"))));
        if(        constructor__557) {
            if(            list$1sTypeph_length(param_types_570)==1) {
                name_618=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_617,((char*)(__right_value741=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_618,name_618,name_618))));
                /* U11 */__right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                /* U13 */name_618 = come_decrement_ref_count2(name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_619=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_617,((char*)(__right_value743=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_619,name_619,name_619))));
                /* U11 */__right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_620=1;                i_620<list$1sTypeph_length(param_types_570);                i_620++                ){
                    param_type_621=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_570,i_620), "05function.c", 1945, 1));
                    param_name_625=((char*)come_null_check(list$1charphp_operator_load_element(param_names_571,i_620), "05function.c", 1946, 2));
                    default_parametor_626=list$1charphp_operator_load_element(param_default_parametors_572,i_620);
                    if(                    default_parametor_626) {
                        buffer_append_str(header_617,((char*)(__right_value745=xsprintf("extern %s %s=%s",((char*)(__right_value744=make_come_type_name_string_no_solved(param_type_621,(_Bool)0,info))),param_name_625,default_parametor_626))));
                        /* U11 */__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        /* U11 */__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_617,((char*)(__right_value747=xsprintf("extern %s %s",((char*)(__right_value746=make_come_type_name_string_no_solved(param_type_621,(_Bool)0,info))),param_name_625))));
                        /* U11 */__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        /* U11 */__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_620!=list$1sTypeph_length(param_types_570)-1) {
                        buffer_append_str(header_617,",");
                    }
                }
                buffer_append_str(header_617,");\n");
                /* U13 */name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_570)==1) {
                impl_name_627=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_628=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_555,(_Bool)0,info));
                buffer_append_str(header_617,((char*)(__right_value750=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_628,impl_name_627,base_fun_name_566,impl_name_627))));
                /* U11 */__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                /* U13 */impl_name_627 = come_decrement_ref_count2(impl_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_628 = come_decrement_ref_count2(result_type_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_629=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_630=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_555,(_Bool)0,info));
                buffer_append_str(header_617,((char*)(__right_value753=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_630,impl_name_629,base_fun_name_566,impl_name_629))));
                /* U11 */__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_631=1;                i_631<list$1sTypeph_length(param_types_570);                i_631++                ){
                    param_type_632=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_570,i_631), "05function.c", 1976, 3));
                    param_name_633=((char*)come_null_check(list$1charphp_operator_load_element(param_names_571,i_631), "05function.c", 1977, 4));
                    default_parametor_634=list$1charphp_operator_load_element(param_default_parametors_572,i_631);
                    if(                    default_parametor_634) {
                        buffer_append_str(header_617,((char*)(__right_value755=xsprintf("extern %s %s=%s",((char*)(__right_value754=make_come_type_name_string_no_solved(param_type_632,(_Bool)0,info))),param_name_633,default_parametor_634))));
                        /* U11 */__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        /* U11 */__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_617,((char*)(__right_value757=xsprintf("extern %s %s",((char*)(__right_value756=make_come_type_name_string_no_solved(param_type_632,(_Bool)0,info))),param_name_633))));
                        /* U11 */__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        /* U11 */__right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_631!=list$1sTypeph_length(param_types_570)-1) {
                        buffer_append_str(header_617,",");
                    }
                }
                buffer_append_str(header_617,");\n");
                /* U13 */impl_name_629 = come_decrement_ref_count2(impl_name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_630 = come_decrement_ref_count2(result_type_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_617,source_head_554,source_tail_616-source_head_554);
            buffer_append_str(header_617,";\n");
        }
        if(        !result_type_555->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value758=buffer_to_string(header_617))));
                /* U11 */__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_635=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__557,(_Bool)1));
        static__636=(_Bool)0;
        if(        result_type_555->mStatic) {
            result_type_555->mStatic=(_Bool)0;
            static__636=(_Bool)1;
        }
        if(        version_576>0) {
            new_fun_name_637=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value760=__builtin_string(fun_name_565))),version_576));
            /* U11 */__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj241=fun_name_565;
            fun_name_565=(char*)come_increment_ref_count(__builtin_string(new_fun_name_637));
            /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_637 = come_decrement_ref_count2(new_fun_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_638=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2019, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)0,var_args_573,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_635)),static__636,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_638));
        }
        else {
            fun2_639=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value770=__builtin_string(fun_name_565))));
            /* U11 */__right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_639==((void*)0)||fun2_639->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_638));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2039, "struct sNode");
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value773=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2039, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_638),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value6));
        /*i*/come_call_finalizer3(header_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_635,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_638,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value773,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        /*i*/come_call_finalizer3(header_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_635,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_638,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_576>0) {
            new_fun_name_641=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_565,version_576));
            __dec_obj246=fun_name_565;
            fun_name_565=(char*)come_increment_ref_count(__builtin_string(new_fun_name_641));
            /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_641 = come_decrement_ref_count2(new_fun_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_642=result_type_555->mStatic;
            result_type_555->mStatic=(_Bool)0;
            fun_643=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2054, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)1,var_args_573,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_644=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value785=__builtin_string(fun_name_565))));
            /* U11 */__right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_644==((void*)0)||fun2_644->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_643));
            }
            source_tail_645=info->p;
            header_646=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2068, "buffer"))));
            buffer_append(header_646,source_head_554,source_tail_645-source_head_554);
            if(            !result_type_static_642) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value789=buffer_to_string(header_646))));
                    /* U11 */__right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2077, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value791=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2077, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_643),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result228__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value7));
            /*i*/come_call_finalizer3(fun_643,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value791,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value795) { __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result228__;
            /*i*/come_call_finalizer3(fun_643,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_648=(char*)come_increment_ref_count(parse_attribute(info));
            if(            string_operator_not_equals(asm_fun_648,"")) {
                __dec_obj251=fun_name_565;
                fun_name_565=(char*)come_increment_ref_count(__builtin_string(asm_fun_648));
                /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_649=result_type_555->mStatic;
            result_type_555->mStatic=(_Bool)0;
            fun_650=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2091, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)1,var_args_573,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_651=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value803=__builtin_string(fun_name_565))));
            /* U11 */__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_651==((void*)0)||fun2_651->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_650));
            }
            source_tail_652=info->p;
            header_653=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2105, "buffer"))));
            buffer_append(header_653,source_head_554,source_tail_652-source_head_554);
            if(            !result_type_static_649) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value807=buffer_to_string(header_653))));
                    /* U11 */__right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2114, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value809=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2114, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_650),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result231__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=_inf_value8));
            /* U13 */asm_fun_648 = come_decrement_ref_count2(asm_fun_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_650,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_653,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value809,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result231__;
            /* U13 */asm_fun_648 = come_decrement_ref_count2(asm_fun_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_650,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_653,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    __result232__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj236;
struct list$1charph* __dec_obj237;
struct list$1charph* __dec_obj238;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj236=self->v1;
            come_call_finalizer3(__dec_obj236,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj237=self->v2;
            come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj238=self->v3;
            come_call_finalizer3(__dec_obj238,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj239;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj239=self->sname;
            /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result205__;
void* __right_value710 = (void*)0;
struct sLambdaNode* result_583;
void* __right_value711 = (void*)0;
char* __dec_obj240;
struct sLambdaNode* __result206__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_583=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_583->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_583->sname;
        result_583->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_583->mFun=self->mFun;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_583;
    /*i*/come_call_finalizer3(result_583,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_607;
unsigned int it_608;
_Bool same_key_exist_609;
char* it2_610;
struct map$2charphsGenericsFunph* __result218__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_607=string_get_hash_key(key)%self->size;
    it_608=hash_607;
    while((_Bool)1) {
        if(        self->item_existance[it_608]) {
            if(            string_equals(self->keys[it_608],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_608]);
                    /* U13 */self->keys[it_608] = come_decrement_ref_count2(self->keys[it_608], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_608]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_608]);
                    self->keys[it_608]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_608],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_608]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_608]=item;
                }
                break;
            }
            it_608++;
            if(            it_608>=self->size) {
                it_608=0;
            }
            else if(            it_608==hash_607) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_608]=(_Bool)1;
            if(            1) {
                self->keys[it_608]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_608]=key;
            }
            if(            1) {
                self->items[it_608]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_608]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_609=(_Bool)0;
    for(    it2_610=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_610=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_610,key)) {
            same_key_exist_609=(_Bool)1;
        }
    }
    if(    !same_key_exist_609) {
        list$1charp_push_back(self->key_list,key);
    }
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_590;
void* __right_value723 = (void*)0;
char** keys_591;
void* __right_value724 = (void*)0;
struct sGenericsFun** items_592;
void* __right_value725 = (void*)0;
_Bool* item_existance_593;
int len_594;
char* it_597;
struct sGenericsFun* default_value_600;
struct sGenericsFun* it2_601;
unsigned int hash_604;
int n_605;
struct sGenericsFun* default_value_606;
default_value_600 = (void*)0;
default_value_606 = (void*)0;
    size_590=self->size*10;
    keys_591=(char**)come_increment_ref_count(((char**)(__right_value723=(char**)come_calloc(1, sizeof(char*)*(1*(size_590)), "/usr/local/include/comelang.h", 1651, "char*%"))));
    items_592=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value724=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_590)), "/usr/local/include/comelang.h", 1652, "sGenericsFun*%"))));
    item_existance_593=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value725=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_590)), "/usr/local/include/comelang.h", 1653, "bool"))));
    len_594=0;
    for(    it_597=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_597=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_600,0,sizeof(struct sGenericsFun*));
        it2_601=map$2charphsGenericsFunph_at(self,it_597,default_value_600);
        hash_604=string_get_hash_key(it_597)%size_590;
        n_605=hash_604;
        while((_Bool)1) {
            if(            item_existance_593[n_605]) {
                n_605++;
                if(                n_605>=size_590) {
                    n_605=0;
                }
                else if(                n_605==hash_604) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_593[n_605]=(_Bool)1;
                keys_591[n_605]=it_597;
                items_592[n_605]=map$2charphsGenericsFunph_at(self,it_597,default_value_606);
                len_594++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_591;
    self->items=items_592;
    self->item_existance=item_existance_593;
    self->size=size_590;
    self->len=len_594;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_595;
char* __result208__;
char* __result209__;
char* result_596;
char* __result210__;
result_595 = (void*)0;
result_596 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_595,0,sizeof(char*));
        __result208__ = gComeFunResultObject = __result_obj__ = result_595;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result209__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    memset(&result_596,0,sizeof(char*));
    __result210__ = gComeFunResultObject = __result_obj__ = result_596;
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_598;
char* __result211__;
char* __result212__;
char* result_599;
char* __result213__;
result_598 = (void*)0;
result_599 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_598,0,sizeof(char*));
        __result211__ = gComeFunResultObject = __result_obj__ = result_598;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result212__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    memset(&result_599,0,sizeof(char*));
    __result213__ = gComeFunResultObject = __result_obj__ = result_599;
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_602;
unsigned int it_603;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
    hash_602=string_get_hash_key(((char*)key))%self->size;
    it_603=hash_602;
    while((_Bool)1) {
        if(        self->item_existance[it_603]) {
            if(            string_equals(self->keys[it_603],key)) {
                __result214__ = gComeFunResultObject = __result_obj__ = self->items[it_603];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result214__;
            }
            it_603++;
            if(            it_603>=self->size) {
                it_603=0;
            }
            else if(            it_603==hash_602) {
                __result215__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
        }
        else {
            __result216__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result216__;
        }
    }
    __result217__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_622;
int i_623;
char* __result221__;
char* default_value_624;
char* __result222__;
default_value_624 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_622=self->head;
    i_623=0;
    while(it_622!=((void*)0)) {
        if(        position==i_623) {
            __result221__ = gComeFunResultObject = __result_obj__ = it_622->item;
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
        it_622=it_622->next;
        i_623++;
    }
    memset(&default_value_624,0,sizeof(char*));
    __result222__ = gComeFunResultObject = __result_obj__ = default_value_624;
    /* U13 */default_value_624 = come_decrement_ref_count2(default_value_624, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_655;
char* __dec_obj256;
char* last_code2_656;
char* __dec_obj257;
char* last_code3_657;
_Bool comma_instead_of_semicolon_658;
char* __dec_obj258;
struct sClass* current_stack_frame_struct_659;
struct sFun* finalizer_660;
void* __right_value814 = (void*)0;
char* real_fun_name_661;
void* __right_value815 = (void*)0;
char* user_real_fun_name_662;
struct sFun* user_finalizer_663;
void* __right_value816 = (void*)0;
struct sType* type2_664;
struct sClass* klass_665;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* source_666;
struct list$1tuple2$2charphsTypephph* o2_saved_675;
struct tuple2$2charphsTypeph* it_678;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_681=0;
struct sType* field_type_682=0;
char* p_684;
int sline_685;
char* sname_686;
char* head_687;
struct buffer* source3_688;
struct buffer* __dec_obj266;
void* __right_value819 = (void*)0;
char* __dec_obj267;
void* __right_value820 = (void*)0;
struct sBlock* block_689;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sType* result_type_690;
void* __right_value823 = (void*)0;
char* name_691;
void* __right_value824 = (void*)0;
struct sType* self_type_692;
struct sType* __list_values21___693[1];
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1sTypeph* param_types_694;
void* __right_value827 = (void*)0;
char* __list_values22___695[1];
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct list$1charph* param_names_696;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct list$1charph* param_default_parametors_697;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* header_buf_698;
void* __right_value834 = (void*)0;
int i_699;
struct sType* param_type_700;
char* param_name_701;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sFun* fun_702;
void* __right_value840 = (void*)0;
struct sFun* fun2_703;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value847 = (void*)0;
struct sNode* node_704;
struct buffer* __dec_obj272;
char* __dec_obj273;
char* __dec_obj274;
char* __dec_obj275;
char* __dec_obj276;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct tuple2$2sFunpcharph* __result246__;
    last_code_655=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj256=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_656=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj257=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_657=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_658=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj258=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_659=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_660=((void*)0);
    real_fun_name_661=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_662=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_663=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_662);
    type2_664=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_664;
    klass_665=type->mClass;
    if(    type->mPointerNum>0&&klass_665->mStruct) {
        source_666=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2156, "buffer"))));
        buffer_append_char(source_666,123);
        if(        user_finalizer_663) {
            char source2_667[1024];
            memset(&source2_667, 0, sizeof(char)            *(1024)            );
            snprintf(source2_667,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_662);
            buffer_append_str(source_666,source2_667);
        }
        klass_665=map$2charphsClassphp_operator_load_element(info->classes,klass_665->mName);
        for(        o2_saved_675=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_665->mFields)),it_678=list$1tuple2$2charphsTypephph_begin((o2_saved_675));        !list$1tuple2$2charphsTypephph_end((o2_saved_675));        it_678=list$1tuple2$2charphsTypephph_next((o2_saved_675))        ){
            multiple_assign_var10=it_678;
            name_681=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_682=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_682->mClass->mName)&&type->mPointerNum==field_type_682->mPointerNum&&field_type_682->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_682->mHeap) {
                char source2_683[1024];
                memset(&source2_683, 0, sizeof(char)                *(1024)                );
                snprintf(source2_683,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_681,name_681,name_681,name_681);
                buffer_append_str(source_666,source2_683);
            }
            /* U13 */name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_675,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_666,125);
        p_684=info->p;
        sline_685=info->sline;
        sname_686=(char*)come_increment_ref_count(info->sname);
        head_687=info->head;
        source3_688=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj266=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_666);
        come_call_finalizer3(__dec_obj266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_666->buf;
        info->head=source_666->buf;
        __dec_obj267=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_661));
        /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_689=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_690=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2202, "sType")),"void",(_Bool)0,info));
        name_691=(char*)come_increment_ref_count(string_clone(real_fun_name_661));
        self_type_692=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_692->mHeap=(_Bool)0;
        if(        self_type_692->mPointerNum>1) {
            self_type_692->mPointerNum=1;
        }
        param_types_694=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___693[0]=come_increment_ref_count(self_type_692),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2209, "struct list$1sTypeph")),1,__list_values21___693)));
        param_names_696=(struct list$1charph*)come_increment_ref_count((__list_values22___695[0]=come_increment_ref_count(((char*)(__right_value827=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2210, "struct list$1charph")),1,__list_values22___695)));
        /* U11 */__right_value827 = come_decrement_ref_count2(__right_value827, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_697=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2211, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_697,((void*)0));
        header_buf_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2214, "buffer"))));
        buffer_append_str(header_buf_698,((char*)(__right_value834=make_come_type_name_string(result_type_690,info))));
        /* U11 */__right_value834 = come_decrement_ref_count2(__right_value834, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_698," ");
        buffer_append_str(header_buf_698,real_fun_name_661);
        buffer_append_str(header_buf_698,"(");
        for(        i_699=0;        i_699<list$1sTypeph_length(param_types_694);        i_699++        ){
            param_type_700=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_694,i_699), "05function.c", 2222, 5));
            param_name_701=((char*)come_null_check(list$1charphp_operator_load_element(param_names_696,i_699), "05function.c", 2223, 6));
            buffer_append_str(header_buf_698,((char*)(__right_value835=make_come_type_name_string(param_type_700,info))));
            /* U11 */__right_value835 = come_decrement_ref_count2(__right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_698," ");
            buffer_append_str(header_buf_698,param_name_701);
            if(            i_699!=list$1sTypeph_length(param_types_694)-1) {
                buffer_append_str(header_buf_698,",");
            }
        }
        buffer_append_str(header_buf_698,")");
        result_type_690->mStatic=(_Bool)0;
        fun_702=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2237, "sFun")),(char*)come_increment_ref_count(name_691),(struct sType*)come_increment_ref_count(result_type_690),(struct list$1sTypeph*)come_increment_ref_count(param_types_694),(struct list$1charph*)come_increment_ref_count(param_names_696),(struct list$1charph*)come_increment_ref_count(param_default_parametors_697),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_689),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_698)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_703=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value840=__builtin_string(fun_name))));
        /* U11 */__right_value840 = come_decrement_ref_count2(__right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_703==((void*)0)||fun2_703->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_691)),(struct sFun*)come_increment_ref_count(fun_702));
        }
        finalizer_660=fun_702;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2253, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value843=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2253, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_702),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_704=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value843,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_704,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj272=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_688);
        come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_684;
        info->head=head_687;
        info->sline=sline_685;
        __dec_obj273=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_686);
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_686 = come_decrement_ref_count2(sname_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_689,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_690,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_691 = come_decrement_ref_count2(name_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_694,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_697,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_702,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_704) { node_704 = come_decrement_ref_count2(node_704, ((struct sNode*)node_704)->finalize, ((struct sNode*)node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_659;
    __dec_obj274=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_655);
    /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_656);
    /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_657);
    /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_658;
    __result246__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value849=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2274, "struct tuple2$2sFunpcharph")),finalizer_660,(char*)come_increment_ref_count(real_fun_name_661))));
    /* U13 */last_code_655 = come_decrement_ref_count2(last_code_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_656 = come_decrement_ref_count2(last_code2_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_657 = come_decrement_ref_count2(last_code3_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */user_real_fun_name_662 = come_decrement_ref_count2(user_real_fun_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value849,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_668;
unsigned int hash_669;
unsigned int it_670;
struct sClass* __result233__;
struct sClass* __result234__;
struct sClass* __result235__;
struct sClass* __result236__;
default_value_668 = (void*)0;
    memset(&default_value_668,0,sizeof(struct sClass*));
    hash_669=string_get_hash_key(((char*)key))%self->size;
    it_670=hash_669;
    while((_Bool)1) {
        if(        self->item_existance[it_670]) {
            if(            string_equals(self->keys[it_670],key)) {
                __result233__ = gComeFunResultObject = __result_obj__ = self->items[it_670];
                /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result233__;
            }
            it_670++;
            if(            it_670>=self->size) {
                it_670=0;
            }
            else if(            it_670==hash_669) {
                __result234__ = gComeFunResultObject = __result_obj__ = default_value_668;
                /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
        }
        else {
            __result235__ = gComeFunResultObject = __result_obj__ = default_value_668;
            /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result235__;
        }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = default_value_668;
    /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj259;
struct list$1tuple2$2charphsTypephph* __dec_obj260;
char* __dec_obj264;
char* __dec_obj265;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj259=self->mName;
            /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj260=self->mFields;
            come_call_finalizer3(__dec_obj260,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj264=self->mDeclareSName;
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj265=self->mParentClassName;
            /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_671;
struct list_item$1tuple2$2charphsTypephph* prev_it_672;
    it_671=self->head;
    while(it_671!=((void*)0)) {
        prev_it_672=it_671;
        it_671=it_671->next;
        /*i*/come_call_finalizer3(prev_it_672,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj261;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj261=self->item;
            come_call_finalizer3(__dec_obj261,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj262;
struct sType* __dec_obj263;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj262=self->v1;
            /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj263=self->v2;
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_673;
struct list_item$1tuple2$2charphsTypephph* prev_it_674;
    it_673=self->head;
    while(it_673!=((void*)0)) {
        prev_it_674=it_673;
        it_673=it_673->next;
        /*i*/come_call_finalizer3(prev_it_674,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_676;
struct tuple2$2charphsTypeph* __result237__;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* result_677;
struct tuple2$2charphsTypeph* __result239__;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_676,0,sizeof(struct tuple2$2charphsTypeph*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_676;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_677,0,sizeof(struct tuple2$2charphsTypeph*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_677;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_679;
struct tuple2$2charphsTypeph* __result240__;
struct tuple2$2charphsTypeph* __result241__;
struct tuple2$2charphsTypeph* result_680;
struct tuple2$2charphsTypeph* __result242__;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_679,0,sizeof(struct tuple2$2charphsTypeph*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_679;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_680,0,sizeof(struct tuple2$2charphsTypeph*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_680;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj277;
struct tuple2$2sFunpcharph* __result245__;
    self->v1=v1;
    __dec_obj277=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj278;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj278=self->v2;
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_706;
char* __dec_obj279;
char* last_code2_707;
char* __dec_obj280;
char* last_code3_708;
_Bool comma_instead_of_semicolon_709;
char* __dec_obj281;
struct sClass* current_stack_frame_struct_710;
struct sFun* finalizer_711;
void* __right_value850 = (void*)0;
char* real_fun_name_712;
void* __right_value851 = (void*)0;
struct sType* type2_713;
struct sClass* klass_714;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct buffer* source_715;
struct list$1tuple2$2charphsTypephph* o2_saved_716;
struct tuple2$2charphsTypeph* it_717;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_718=0;
struct sType* field_type_719=0;
char* p_721;
int sline_722;
char* sname_723;
char* head_724;
struct buffer* source3_725;
struct buffer* __dec_obj282;
void* __right_value854 = (void*)0;
char* __dec_obj283;
void* __right_value855 = (void*)0;
struct sBlock* block_726;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sType* result_type_727;
void* __right_value858 = (void*)0;
char* name_728;
void* __right_value859 = (void*)0;
struct sType* self_type_729;
struct sType* __list_values23___730[1];
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct list$1sTypeph* param_types_731;
void* __right_value862 = (void*)0;
char* __list_values24___732[1];
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1charph* param_names_733;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct list$1charph* param_default_parametors_734;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct buffer* header_buf_735;
void* __right_value869 = (void*)0;
int i_736;
struct sType* param_type_737;
char* param_name_738;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sFun* fun_739;
void* __right_value875 = (void*)0;
struct sFun* fun2_740;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value882 = (void*)0;
struct sNode* node_741;
struct buffer* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct tuple2$2sFunpcharph* __result249__;
    last_code_706=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_707=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_708=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_709=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj281=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_710=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_711=((void*)0);
    real_fun_name_712=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_713=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_713;
    klass_714=type->mClass;
    if(    type->mPointerNum>0&&klass_714->mStruct) {
        source_715=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2303, "buffer"))));
        buffer_append_char(source_715,123);
        klass_714=map$2charphsClassphp_operator_load_element(info->classes,klass_714->mName);
        for(        o2_saved_716=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_714->mFields)),it_717=list$1tuple2$2charphsTypephph_begin((o2_saved_716));        !list$1tuple2$2charphsTypephph_end((o2_saved_716));        it_717=list$1tuple2$2charphsTypephph_next((o2_saved_716))        ){
            multiple_assign_var11=it_717;
            name_718=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_719=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_719->mClass->mName)&&type->mPointerNum==field_type_719->mPointerNum&&field_type_719->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_719->mHeap) {
                char source2_720[1024];
                memset(&source2_720, 0, sizeof(char)                *(1024)                );
                snprintf(source2_720,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_718,name_718,name_718,name_718);
                buffer_append_str(source_715,source2_720);
            }
            /* U13 */name_718 = come_decrement_ref_count2(name_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_716,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_715,125);
        p_721=info->p;
        sline_722=info->sline;
        sname_723=(char*)come_increment_ref_count(info->sname);
        head_724=info->head;
        source3_725=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_715);
        come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_715->buf;
        info->head=source_715->buf;
        __dec_obj283=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_712));
        /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_726=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_727=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2342, "sType")),"void",(_Bool)0,info));
        name_728=(char*)come_increment_ref_count(string_clone(real_fun_name_712));
        self_type_729=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_729->mHeap=(_Bool)0;
        if(        self_type_729->mPointerNum>1) {
            self_type_729->mPointerNum=1;
        }
        param_types_731=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___730[0]=come_increment_ref_count(self_type_729),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2349, "struct list$1sTypeph")),1,__list_values23___730)));
        param_names_733=(struct list$1charph*)come_increment_ref_count((__list_values24___732[0]=come_increment_ref_count(((char*)(__right_value862=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2350, "struct list$1charph")),1,__list_values24___732)));
        /* U11 */__right_value862 = come_decrement_ref_count2(__right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_734=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2351, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_734,((void*)0));
        header_buf_735=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2354, "buffer"))));
        buffer_append_str(header_buf_735,((char*)(__right_value869=make_come_type_name_string(result_type_727,info))));
        /* U11 */__right_value869 = come_decrement_ref_count2(__right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_735," ");
        buffer_append_str(header_buf_735,real_fun_name_712);
        buffer_append_str(header_buf_735,"(");
        for(        i_736=0;        i_736<list$1sTypeph_length(param_types_731);        i_736++        ){
            param_type_737=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_731,i_736), "05function.c", 2362, 7));
            param_name_738=((char*)come_null_check(list$1charphp_operator_load_element(param_names_733,i_736), "05function.c", 2363, 8));
            buffer_append_str(header_buf_735,((char*)(__right_value870=make_come_type_name_string(param_type_737,info))));
            /* U11 */__right_value870 = come_decrement_ref_count2(__right_value870, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_735," ");
            buffer_append_str(header_buf_735,param_name_738);
            if(            i_736!=list$1sTypeph_length(param_types_731)-1) {
                buffer_append_str(header_buf_735,",");
            }
        }
        buffer_append_str(header_buf_735,")");
        result_type_727->mStatic=(_Bool)0;
        fun_739=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2377, "sFun")),(char*)come_increment_ref_count(name_728),(struct sType*)come_increment_ref_count(result_type_727),(struct list$1sTypeph*)come_increment_ref_count(param_types_731),(struct list$1charph*)come_increment_ref_count(param_names_733),(struct list$1charph*)come_increment_ref_count(param_default_parametors_734),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_726),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_735)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_740=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value875=__builtin_string(fun_name))));
        /* U11 */__right_value875 = come_decrement_ref_count2(__right_value875, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_740==((void*)0)||fun2_740->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_728)),(struct sFun*)come_increment_ref_count(fun_739));
        }
        finalizer_711=fun_739;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2393, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value878=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2393, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_739),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_741=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value878,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_741,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_725);
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_721;
        info->head=head_724;
        info->sline=sline_722;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_723);
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_715,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_723 = come_decrement_ref_count2(sname_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_725,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_726,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_728 = come_decrement_ref_count2(name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_731,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_733,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_734,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_735,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_739,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_710;
    __dec_obj290=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_706);
    /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_707);
    /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_708);
    /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_709;
    __result249__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value884=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2414, "struct tuple2$2sFunpcharph")),finalizer_711,(char*)come_increment_ref_count(real_fun_name_712))));
    /* U13 */last_code_706 = come_decrement_ref_count2(last_code_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_707 = come_decrement_ref_count2(last_code2_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_708 = come_decrement_ref_count2(last_code3_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_712 = come_decrement_ref_count2(real_fun_name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_713,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value884,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_743;
char* __dec_obj293;
char* last_code2_744;
char* __dec_obj294;
char* last_code3_745;
char* __dec_obj295;
_Bool comma_instead_of_semicolon_746;
struct sClass* current_stack_frame_struct_747;
struct sFun* equaler_748;
void* __right_value885 = (void*)0;
char* real_fun_name_749;
void* __right_value886 = (void*)0;
struct sType* type2_750;
struct sClass* klass_751;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct buffer* source_752;
char* name_753;
struct list$1tuple2$2charphsTypephph* o2_saved_755;
struct tuple2$2charphsTypeph* it_756;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_757=0;
struct sType* field_type_758=0;
char* p_760;
int sline_761;
char* sname_762;
char* head_763;
struct buffer* source3_764;
struct buffer* __dec_obj296;
void* __right_value889 = (void*)0;
char* __dec_obj297;
void* __right_value890 = (void*)0;
struct sBlock* block_765;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sType* result_type_766;
void* __right_value893 = (void*)0;
char* name_767;
void* __right_value894 = (void*)0;
struct sType* left_type_768;
void* __right_value895 = (void*)0;
struct sType* right_type_769;
struct sType* __list_values25___770[2];
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1sTypeph* param_types_771;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
char* __list_values26___772[2];
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1charph* param_names_773;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1charph* param_default_parametors_774;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* header_buf_775;
void* __right_value906 = (void*)0;
int i_776;
struct sType* param_type_777;
char* param_name_778;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun_779;
void* __right_value912 = (void*)0;
struct sFun* fun2_780;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value919 = (void*)0;
struct sNode* node_781;
struct buffer* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct tuple2$2sFunpcharph* __result252__;
    last_code_743=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj293=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_744=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj294=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_745=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj295=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_746=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_747=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_748=((void*)0);
    real_fun_name_749=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_750=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_750;
    klass_751=type->mClass;
    if(    type->mPointerNum>0&&!klass_751->mNumber) {
        source_752=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2441, "buffer"))));
        buffer_append_char(source_752,123);
        if(        klass_751->mProtocol) {
            name_753="_protocol_obj";
            char source2_754[1024];
            memset(&source2_754, 0, sizeof(char)            *(1024)            );
            snprintf(source2_754,1024,"return left.%s.equals(right.%s);\n",name_753,name_753);
            buffer_append_str(source_752,source2_754);
        }
        else {
            klass_751=map$2charphsClassphp_operator_load_element(info->classes,klass_751->mName);
            for(            o2_saved_755=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_751->mFields)),it_756=list$1tuple2$2charphsTypephph_begin((o2_saved_755));            !list$1tuple2$2charphsTypephph_end((o2_saved_755));            it_756=list$1tuple2$2charphsTypephph_next((o2_saved_755))            ){
                multiple_assign_var12=it_756;
                name_757=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_758=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_758->mClass->mName)&&type->mPointerNum==field_type_758->mPointerNum&&field_type_758->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_759[1024];
                memset(&source2_759, 0, sizeof(char)                *(1024)                );
                snprintf(source2_759,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_757,name_757,name_757);
                buffer_append_str(source_752,source2_759);
                /* U13 */name_757 = come_decrement_ref_count2(name_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_758,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_755,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_752,"return true;");
        buffer_append_char(source_752,125);
        p_760=info->p;
        sline_761=info->sline;
        sname_762=(char*)come_increment_ref_count(info->sname);
        head_763=info->head;
        source3_764=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj296=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_752);
        come_call_finalizer3(__dec_obj296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_752->buf;
        info->head=source_752->buf;
        __dec_obj297=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_749));
        /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_765=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_766=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2487, "sType")),"bool",(_Bool)0,info));
        name_767=(char*)come_increment_ref_count(string_clone(real_fun_name_749));
        left_type_768=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_768->mHeap=(_Bool)0;
        right_type_769=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_769->mHeap=(_Bool)0;
        param_types_771=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___770[0]=come_increment_ref_count(left_type_768),
__list_values25___770[1]=come_increment_ref_count(right_type_769),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2493, "struct list$1sTypeph")),2,__list_values25___770)));
        param_names_773=(struct list$1charph*)come_increment_ref_count((__list_values26___772[0]=come_increment_ref_count(((char*)(__right_value898=__builtin_string("left")))),
__list_values26___772[1]=come_increment_ref_count(((char*)(__right_value899=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2494, "struct list$1charph")),2,__list_values26___772)));
        /* U11 */__right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_774=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2495, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_774,((void*)0));
        list$1charph_push_back(param_default_parametors_774,((void*)0));
        header_buf_775=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2499, "buffer"))));
        buffer_append_str(header_buf_775,((char*)(__right_value906=make_come_type_name_string(result_type_766,info))));
        /* U11 */__right_value906 = come_decrement_ref_count2(__right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_775," ");
        buffer_append_str(header_buf_775,real_fun_name_749);
        buffer_append_str(header_buf_775,"(");
        for(        i_776=0;        i_776<list$1sTypeph_length(param_types_771);        i_776++        ){
            param_type_777=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_771,i_776), "05function.c", 2507, 9));
            param_name_778=((char*)come_null_check(list$1charphp_operator_load_element(param_names_773,i_776), "05function.c", 2508, 10));
            buffer_append_str(header_buf_775,((char*)(__right_value907=make_come_type_name_string(param_type_777,info))));
            /* U11 */__right_value907 = come_decrement_ref_count2(__right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_775," ");
            buffer_append_str(header_buf_775,param_name_778);
            if(            i_776!=list$1sTypeph_length(param_types_771)-1) {
                buffer_append_str(header_buf_775,",");
            }
        }
        buffer_append_str(header_buf_775,")");
        result_type_766->mStatic=(_Bool)0;
        fun_779=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2522, "sFun")),(char*)come_increment_ref_count(name_767),(struct sType*)come_increment_ref_count(result_type_766),(struct list$1sTypeph*)come_increment_ref_count(param_types_771),(struct list$1charph*)come_increment_ref_count(param_names_773),(struct list$1charph*)come_increment_ref_count(param_default_parametors_774),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_765),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_775)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_780=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value912=__builtin_string(fun_name))));
        /* U11 */__right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_780==((void*)0)||fun2_780->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_767)),(struct sFun*)come_increment_ref_count(fun_779));
        }
        equaler_748=fun_779;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2538, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value915=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2538, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_779),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_781=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value915,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_781,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_764);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_760;
        info->head=head_763;
        info->sline=sline_761;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_762);
        /*G*/ __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_752,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_762 = come_decrement_ref_count2(sname_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_764,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_765,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_767 = come_decrement_ref_count2(name_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_771,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_774,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_779,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_781) { node_781 = come_decrement_ref_count2(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_747;
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_743);
    /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_744);
    /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj306=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_745);
    /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_746;
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value921=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2559, "struct tuple2$2sFunpcharph")),equaler_748,(char*)come_increment_ref_count(real_fun_name_749))));
    /* U13 */last_code_743 = come_decrement_ref_count2(last_code_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_744 = come_decrement_ref_count2(last_code2_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_745 = come_decrement_ref_count2(last_code3_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_749 = come_decrement_ref_count2(real_fun_name_749, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_750,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value921,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_783;
char* __dec_obj307;
char* last_code2_784;
char* __dec_obj308;
char* last_code3_785;
char* __dec_obj309;
_Bool comma_instead_of_semicolon_786;
struct sClass* current_stack_frame_struct_787;
struct sFun* equaler_788;
void* __right_value922 = (void*)0;
char* real_fun_name_789;
void* __right_value923 = (void*)0;
struct sType* type2_790;
struct sClass* klass_791;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct buffer* source_792;
char* name_793;
int i_796;
struct list$1tuple2$2charphsTypephph* o2_saved_797;
struct tuple2$2charphsTypeph* it_798;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_799=0;
struct sType* field_type_800=0;
char* p_804;
int sline_805;
char* sname_806;
char* head_807;
struct buffer* source3_808;
struct buffer* __dec_obj310;
void* __right_value926 = (void*)0;
char* __dec_obj311;
void* __right_value927 = (void*)0;
struct sBlock* block_809;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sType* result_type_810;
void* __right_value930 = (void*)0;
char* name_811;
void* __right_value931 = (void*)0;
struct sType* left_type_812;
void* __right_value932 = (void*)0;
struct sType* right_type_813;
struct sType* __list_values27___814[2];
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct list$1sTypeph* param_types_815;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
char* __list_values28___816[2];
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1charph* param_names_817;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct list$1charph* param_default_parametors_818;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct buffer* header_buf_819;
void* __right_value943 = (void*)0;
int i_820;
struct sType* param_type_821;
char* param_name_822;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sFun* fun_823;
void* __right_value949 = (void*)0;
struct sFun* fun2_824;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value956 = (void*)0;
struct sNode* node_825;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct tuple2$2sFunpcharph* __result255__;
    last_code_783=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj307=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_784=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj308=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_785=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj309=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_786=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_787=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_788=((void*)0);
    real_fun_name_789=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_790=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_790;
    klass_791=type->mClass;
    if(    type->mPointerNum>0&&!klass_791->mNumber) {
        source_792=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2586, "buffer"))));
        buffer_append_char(source_792,123);
        if(        klass_791->mProtocol) {
            name_793="_protocol_obj";
            char source2_794[1024];
            memset(&source2_794, 0, sizeof(char)            *(1024)            );
            snprintf(source2_794,1024,"return left.%s !== right.%s;\n",name_793,name_793);
            buffer_append_str(source_792,source2_794);
        }
        else {
            char source2_795[1024];
            memset(&source2_795, 0, sizeof(char)            *(1024)            );
            snprintf(source2_795,1024,"return !(");
            buffer_append_str(source_792,source2_795);
            snprintf(source2_795,1024,"( ");
            buffer_append_str(source_792,source2_795);
            i_796=0;
            klass_791=map$2charphsClassphp_operator_load_element(info->classes,klass_791->mName);
            for(            o2_saved_797=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_791->mFields)),it_798=list$1tuple2$2charphsTypephph_begin((o2_saved_797));            !list$1tuple2$2charphsTypephph_end((o2_saved_797));            it_798=list$1tuple2$2charphsTypephph_next((o2_saved_797))            ){
                multiple_assign_var13=it_798;
                name_799=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_800=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_800->mClass->mName)&&type->mPointerNum==field_type_800->mPointerNum&&field_type_800->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_801[1024];
                memset(&source2_801, 0, sizeof(char)                *(1024)                );
                snprintf(source2_801,1024,"(left.%s === right.%s)",name_799,name_799,name_799);
                buffer_append_str(source_792,source2_801);
                if(                i_796==list$1tuple2$2charphsTypephph_length(klass_791->mFields)-1) {
                    char source2_802[1024];
                    memset(&source2_802, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_802,1024,"));");
                    buffer_append_str(source_792,source2_802);
                }
                else {
                    char source2_803[1024];
                    memset(&source2_803, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_803,1024," && ");
                    buffer_append_str(source_792,source2_803);
                }
                i_796++;
                /* U13 */name_799 = come_decrement_ref_count2(name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_797,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_792,125);
        p_804=info->p;
        sline_805=info->sline;
        sname_806=(char*)come_increment_ref_count(info->sname);
        head_807=info->head;
        source3_808=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_792);
        come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_792->buf;
        info->head=source_792->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_789));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_809=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_810=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2652, "sType")),"bool",(_Bool)0,info));
        name_811=(char*)come_increment_ref_count(string_clone(real_fun_name_789));
        left_type_812=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_812->mHeap=(_Bool)0;
        right_type_813=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_813->mHeap=(_Bool)0;
        param_types_815=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___814[0]=come_increment_ref_count(left_type_812),
__list_values27___814[1]=come_increment_ref_count(right_type_813),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2658, "struct list$1sTypeph")),2,__list_values27___814)));
        param_names_817=(struct list$1charph*)come_increment_ref_count((__list_values28___816[0]=come_increment_ref_count(((char*)(__right_value935=__builtin_string("left")))),
__list_values28___816[1]=come_increment_ref_count(((char*)(__right_value936=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2659, "struct list$1charph")),2,__list_values28___816)));
        /* U11 */__right_value935 = come_decrement_ref_count2(__right_value935, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value936 = come_decrement_ref_count2(__right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_818=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2660, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_818,((void*)0));
        list$1charph_push_back(param_default_parametors_818,((void*)0));
        header_buf_819=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2664, "buffer"))));
        buffer_append_str(header_buf_819,((char*)(__right_value943=make_come_type_name_string(result_type_810,info))));
        /* U11 */__right_value943 = come_decrement_ref_count2(__right_value943, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_819," ");
        buffer_append_str(header_buf_819,real_fun_name_789);
        buffer_append_str(header_buf_819,"(");
        for(        i_820=0;        i_820<list$1sTypeph_length(param_types_815);        i_820++        ){
            param_type_821=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_815,i_820), "05function.c", 2672, 11));
            param_name_822=((char*)come_null_check(list$1charphp_operator_load_element(param_names_817,i_820), "05function.c", 2673, 12));
            buffer_append_str(header_buf_819,((char*)(__right_value944=make_come_type_name_string(param_type_821,info))));
            /* U11 */__right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_819," ");
            buffer_append_str(header_buf_819,param_name_822);
            if(            i_820!=list$1sTypeph_length(param_types_815)-1) {
                buffer_append_str(header_buf_819,",");
            }
        }
        buffer_append_str(header_buf_819,")");
        result_type_810->mStatic=(_Bool)0;
        fun_823=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2687, "sFun")),(char*)come_increment_ref_count(name_811),(struct sType*)come_increment_ref_count(result_type_810),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_817),(struct list$1charph*)come_increment_ref_count(param_default_parametors_818),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_809),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_819)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_824=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value949=__builtin_string(fun_name))));
        /* U11 */__right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_824==((void*)0)||fun2_824->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_811)),(struct sFun*)come_increment_ref_count(fun_823));
        }
        equaler_788=fun_823;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2703, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value952=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2703, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_823),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_825=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value952,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_825,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_808);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_804;
        info->head=head_807;
        info->sline=sline_805;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_806);
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_792,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_806 = come_decrement_ref_count2(sname_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_808,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_809,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_810,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_811 = come_decrement_ref_count2(name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_813,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_819,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_823,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_825) { node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_787;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_783);
    /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_784);
    /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_785);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_786;
    __result255__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value958=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2724, "struct tuple2$2sFunpcharph")),equaler_788,(char*)come_increment_ref_count(real_fun_name_789))));
    /* U13 */last_code_783 = come_decrement_ref_count2(last_code_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_784 = come_decrement_ref_count2(last_code2_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_785 = come_decrement_ref_count2(last_code3_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_789 = come_decrement_ref_count2(real_fun_name_789, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_790,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value958,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_827;
char* __dec_obj321;
char* last_code2_828;
char* __dec_obj322;
char* last_code3_829;
char* __dec_obj323;
_Bool comma_instead_of_semicolon_830;
struct sClass* current_stack_frame_struct_831;
struct sFun* equaler_832;
void* __right_value959 = (void*)0;
char* real_fun_name_833;
void* __right_value960 = (void*)0;
struct sType* type2_834;
struct sClass* klass_835;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* source_836;
char* name_837;
int i_840;
struct list$1tuple2$2charphsTypephph* o2_saved_841;
struct tuple2$2charphsTypeph* it_842;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_843=0;
struct sType* field_type_844=0;
char* p_848;
int sline_849;
char* sname_850;
char* head_851;
struct buffer* source3_852;
struct buffer* __dec_obj324;
void* __right_value963 = (void*)0;
char* __dec_obj325;
void* __right_value964 = (void*)0;
struct sBlock* block_853;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sType* result_type_854;
void* __right_value967 = (void*)0;
char* name_855;
void* __right_value968 = (void*)0;
struct sType* left_type_856;
void* __right_value969 = (void*)0;
struct sType* right_type_857;
struct sType* __list_values29___858[2];
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct list$1sTypeph* param_types_859;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
char* __list_values30___860[2];
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct list$1charph* param_names_861;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct list$1charph* param_default_parametors_862;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct buffer* header_buf_863;
void* __right_value980 = (void*)0;
int i_864;
struct sType* param_type_865;
char* param_name_866;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sFun* fun_867;
void* __right_value986 = (void*)0;
struct sFun* fun2_868;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value993 = (void*)0;
struct sNode* node_869;
struct buffer* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct tuple2$2sFunpcharph* __result258__;
    last_code_827=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_828=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_829=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj323=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_830=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_831=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_832=((void*)0);
    real_fun_name_833=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_834=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_834;
    klass_835=type->mClass;
    if(    type->mPointerNum>0&&!klass_835->mNumber) {
        source_836=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2751, "buffer"))));
        buffer_append_char(source_836,123);
        if(        klass_835->mProtocol) {
            name_837="_protocol_obj";
            char source2_838[1024];
            memset(&source2_838, 0, sizeof(char)            *(1024)            );
            snprintf(source2_838,1024,"return !left.%s.equals(right.%s);\n",name_837,name_837);
            buffer_append_str(source_836,source2_838);
        }
        else {
            char source2_839[1024];
            memset(&source2_839, 0, sizeof(char)            *(1024)            );
            snprintf(source2_839,1024,"return !(");
            buffer_append_str(source_836,source2_839);
            i_840=0;
            klass_835=map$2charphsClassphp_operator_load_element(info->classes,klass_835->mName);
            for(            o2_saved_841=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_835->mFields)),it_842=list$1tuple2$2charphsTypephph_begin((o2_saved_841));            !list$1tuple2$2charphsTypephph_end((o2_saved_841));            it_842=list$1tuple2$2charphsTypephph_next((o2_saved_841))            ){
                multiple_assign_var14=it_842;
                name_843=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_844=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_844->mClass->mName)&&type->mPointerNum==field_type_844->mPointerNum&&field_type_844->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_845[1024];
                memset(&source2_845, 0, sizeof(char)                *(1024)                );
                snprintf(source2_845,1024,"left.%s.equals(right.%s)",name_843,name_843);
                buffer_append_str(source_836,source2_845);
                if(                i_840==list$1tuple2$2charphsTypephph_length(klass_835->mFields)-1) {
                    char source2_846[1024];
                    memset(&source2_846, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_846,1024,");");
                    buffer_append_str(source_836,source2_846);
                }
                else {
                    char source2_847[1024];
                    memset(&source2_847, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_847,1024," && ");
                    buffer_append_str(source_836,source2_847);
                }
                i_840++;
                /* U13 */name_843 = come_decrement_ref_count2(name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_844,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_841,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_836,125);
        p_848=info->p;
        sline_849=info->sline;
        sname_850=(char*)come_increment_ref_count(info->sname);
        head_851=info->head;
        source3_852=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_836);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_836->buf;
        info->head=source_836->buf;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_833));
        /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_853=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_854=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2814, "sType")),"bool",(_Bool)0,info));
        name_855=(char*)come_increment_ref_count(string_clone(real_fun_name_833));
        left_type_856=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_856->mHeap=(_Bool)0;
        right_type_857=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_857->mHeap=(_Bool)0;
        param_types_859=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___858[0]=come_increment_ref_count(left_type_856),
__list_values29___858[1]=come_increment_ref_count(right_type_857),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2820, "struct list$1sTypeph")),2,__list_values29___858)));
        param_names_861=(struct list$1charph*)come_increment_ref_count((__list_values30___860[0]=come_increment_ref_count(((char*)(__right_value972=__builtin_string("left")))),
__list_values30___860[1]=come_increment_ref_count(((char*)(__right_value973=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2821, "struct list$1charph")),2,__list_values30___860)));
        /* U11 */__right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_862=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2822, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_862,((void*)0));
        list$1charph_push_back(param_default_parametors_862,((void*)0));
        header_buf_863=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2826, "buffer"))));
        buffer_append_str(header_buf_863,((char*)(__right_value980=make_come_type_name_string(result_type_854,info))));
        /* U11 */__right_value980 = come_decrement_ref_count2(__right_value980, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_863," ");
        buffer_append_str(header_buf_863,real_fun_name_833);
        buffer_append_str(header_buf_863,"(");
        for(        i_864=0;        i_864<list$1sTypeph_length(param_types_859);        i_864++        ){
            param_type_865=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_859,i_864), "05function.c", 2834, 13));
            param_name_866=((char*)come_null_check(list$1charphp_operator_load_element(param_names_861,i_864), "05function.c", 2835, 14));
            buffer_append_str(header_buf_863,((char*)(__right_value981=make_come_type_name_string(param_type_865,info))));
            /* U11 */__right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_863," ");
            buffer_append_str(header_buf_863,param_name_866);
            if(            i_864!=list$1sTypeph_length(param_types_859)-1) {
                buffer_append_str(header_buf_863,",");
            }
        }
        buffer_append_str(header_buf_863,")");
        result_type_854->mStatic=(_Bool)0;
        fun_867=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2849, "sFun")),(char*)come_increment_ref_count(name_855),(struct sType*)come_increment_ref_count(result_type_854),(struct list$1sTypeph*)come_increment_ref_count(param_types_859),(struct list$1charph*)come_increment_ref_count(param_names_861),(struct list$1charph*)come_increment_ref_count(param_default_parametors_862),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_853),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_863)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_868=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value986=__builtin_string(fun_name))));
        /* U11 */__right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_868==((void*)0)||fun2_868->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_855)),(struct sFun*)come_increment_ref_count(fun_867));
        }
        equaler_832=fun_867;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2865, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value989=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2865, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_867),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_869=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value989,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_869,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj330=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_852);
        come_call_finalizer3(__dec_obj330,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_848;
        info->head=head_851;
        info->sline=sline_849;
        __dec_obj331=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_850);
        /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_850 = come_decrement_ref_count2(sname_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_852,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_853,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_854,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_855 = come_decrement_ref_count2(name_855, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_856,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_859,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_861,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_862,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_867,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_869) { node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_831;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_827);
    /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_828);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj334=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_829);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_830;
    __result258__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value995=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2886, "struct tuple2$2sFunpcharph")),equaler_832,(char*)come_increment_ref_count(real_fun_name_833))));
    /* U13 */last_code_827 = come_decrement_ref_count2(last_code_827, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_828 = come_decrement_ref_count2(last_code2_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_829 = come_decrement_ref_count2(last_code3_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_833 = come_decrement_ref_count2(real_fun_name_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_834,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value995,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_871;
char* __dec_obj335;
char* last_code2_872;
char* __dec_obj336;
char* last_code3_873;
char* __dec_obj337;
_Bool comma_instead_of_semicolon_874;
struct sClass* current_stack_frame_struct_875;
struct sFun* equaler_876;
void* __right_value996 = (void*)0;
char* real_fun_name_877;
void* __right_value997 = (void*)0;
struct sType* type2_878;
struct sClass* klass_879;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct buffer* source_880;
char* name_881;
struct list$1tuple2$2charphsTypephph* o2_saved_884;
struct tuple2$2charphsTypeph* it_885;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_886=0;
struct sType* field_type_887=0;
char* p_889;
int sline_890;
char* sname_891;
char* head_892;
struct buffer* source3_893;
struct buffer* __dec_obj338;
void* __right_value1000 = (void*)0;
char* __dec_obj339;
void* __right_value1001 = (void*)0;
struct sBlock* block_894;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sType* result_type_895;
void* __right_value1004 = (void*)0;
char* name_896;
void* __right_value1005 = (void*)0;
struct sType* left_type_897;
void* __right_value1006 = (void*)0;
struct sType* right_type_898;
struct sType* __list_values31___899[2];
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct list$1sTypeph* param_types_900;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
char* __list_values32___901[2];
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct list$1charph* param_names_902;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct list$1charph* param_default_parametors_903;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct buffer* header_buf_904;
void* __right_value1017 = (void*)0;
int i_905;
struct sType* param_type_906;
char* param_name_907;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sFun* fun_908;
void* __right_value1023 = (void*)0;
struct sFun* fun2_909;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1030 = (void*)0;
struct sNode* node_910;
struct buffer* __dec_obj344;
char* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct tuple2$2sFunpcharph* __result261__;
    last_code_871=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_872=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_873=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj337=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_874=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_875=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_876=((void*)0);
    real_fun_name_877=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_878=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_878;
    klass_879=type->mClass;
    if(    type->mPointerNum>0&&!klass_879->mNumber) {
        source_880=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2913, "buffer"))));
        buffer_append_char(source_880,123);
        if(        klass_879->mProtocol) {
            name_881="_protocol_obj";
            char source2_882[1024];
            memset(&source2_882, 0, sizeof(char)            *(1024)            );
            snprintf(source2_882,1024,"return left.%s === right.%s;\n",name_881,name_881);
            buffer_append_str(source_880,source2_882);
        }
        else {
            char source2_883[1024];
            memset(&source2_883, 0, sizeof(char)            *(1024)            );
            klass_879=map$2charphsClassphp_operator_load_element(info->classes,klass_879->mName);
            for(            o2_saved_884=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_879->mFields)),it_885=list$1tuple2$2charphsTypephph_begin((o2_saved_884));            !list$1tuple2$2charphsTypephph_end((o2_saved_884));            it_885=list$1tuple2$2charphsTypephph_next((o2_saved_884))            ){
                multiple_assign_var15=it_885;
                name_886=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_887=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_887->mClass->mName)&&type->mPointerNum==field_type_887->mPointerNum&&field_type_887->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_888[1024];
                memset(&source2_888, 0, sizeof(char)                *(1024)                );
                snprintf(source2_888,1024,"if(left.%s !== right.%s) { return false; }\n",name_886,name_886,name_886);
                buffer_append_str(source_880,source2_888);
                /* U13 */name_886 = come_decrement_ref_count2(name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_887,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_884,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_880,"return true;\n");
        buffer_append_char(source_880,125);
        p_889=info->p;
        sline_890=info->sline;
        sname_891=(char*)come_increment_ref_count(info->sname);
        head_892=info->head;
        source3_893=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_880);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_880->buf;
        info->head=source_880->buf;
        __dec_obj339=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_877));
        /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_894=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_895=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2961, "sType")),"bool",(_Bool)0,info));
        name_896=(char*)come_increment_ref_count(string_clone(real_fun_name_877));
        left_type_897=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_897->mHeap=(_Bool)0;
        right_type_898=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_898->mHeap=(_Bool)0;
        param_types_900=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___899[0]=come_increment_ref_count(left_type_897),
__list_values31___899[1]=come_increment_ref_count(right_type_898),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2967, "struct list$1sTypeph")),2,__list_values31___899)));
        param_names_902=(struct list$1charph*)come_increment_ref_count((__list_values32___901[0]=come_increment_ref_count(((char*)(__right_value1009=__builtin_string("left")))),
__list_values32___901[1]=come_increment_ref_count(((char*)(__right_value1010=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2968, "struct list$1charph")),2,__list_values32___901)));
        /* U11 */__right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_903=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2969, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_903,((void*)0));
        list$1charph_push_back(param_default_parametors_903,((void*)0));
        header_buf_904=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2973, "buffer"))));
        buffer_append_str(header_buf_904,((char*)(__right_value1017=make_come_type_name_string(result_type_895,info))));
        /* U11 */__right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_904," ");
        buffer_append_str(header_buf_904,real_fun_name_877);
        buffer_append_str(header_buf_904,"(");
        for(        i_905=0;        i_905<list$1sTypeph_length(param_types_900);        i_905++        ){
            param_type_906=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_900,i_905), "05function.c", 2981, 15));
            param_name_907=((char*)come_null_check(list$1charphp_operator_load_element(param_names_902,i_905), "05function.c", 2982, 16));
            buffer_append_str(header_buf_904,((char*)(__right_value1018=make_come_type_name_string(param_type_906,info))));
            /* U11 */__right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_904," ");
            buffer_append_str(header_buf_904,param_name_907);
            if(            i_905!=list$1sTypeph_length(param_types_900)-1) {
                buffer_append_str(header_buf_904,",");
            }
        }
        buffer_append_str(header_buf_904,")");
        result_type_895->mStatic=(_Bool)0;
        fun_908=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2996, "sFun")),(char*)come_increment_ref_count(name_896),(struct sType*)come_increment_ref_count(result_type_895),(struct list$1sTypeph*)come_increment_ref_count(param_types_900),(struct list$1charph*)come_increment_ref_count(param_names_902),(struct list$1charph*)come_increment_ref_count(param_default_parametors_903),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_894),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_904)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_909=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1023=__builtin_string(fun_name))));
        /* U11 */__right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_909==((void*)0)||fun2_909->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_896)),(struct sFun*)come_increment_ref_count(fun_908));
        }
        equaler_876=fun_908;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3012, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1026=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3012, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_908),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_910=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1026,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_910,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_893);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_889;
        info->head=head_892;
        info->sline=sline_890;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_891);
        /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_891 = come_decrement_ref_count2(sname_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_893,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_894,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_895,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_896 = come_decrement_ref_count2(name_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_897,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_900,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_902,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_903,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_904,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_908,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_910) { node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_875;
    __dec_obj346=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_871);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj347=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_872);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_873);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_874;
    __result261__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1032=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3033, "struct tuple2$2sFunpcharph")),equaler_876,(char*)come_increment_ref_count(real_fun_name_877))));
    /* U13 */last_code_871 = come_decrement_ref_count2(last_code_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_872 = come_decrement_ref_count2(last_code2_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_873 = come_decrement_ref_count2(last_code3_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_877 = come_decrement_ref_count2(real_fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_878,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1032,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_912;
char* __dec_obj349;
char* last_code2_913;
char* __dec_obj350;
char* last_code3_914;
char* __dec_obj351;
_Bool comma_instead_of_semicolon_915;
struct sClass* current_stack_frame_struct_916;
struct sFun* cloner_917;
void* __right_value1033 = (void*)0;
char* real_fun_name_918;
void* __right_value1034 = (void*)0;
struct sType* type2_919;
struct sClass* klass_920;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct buffer* source_921;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
char* name_922;
struct list$1tuple2$2charphsTypephph* o2_saved_924;
struct tuple2$2charphsTypeph* it_925;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_926=0;
struct sType* field_type_927=0;
struct list$1tuple2$2charphsTypephph* o2_saved_930;
struct tuple2$2charphsTypeph* it_931;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_932=0;
struct sType* field_type_933=0;
void* __right_value1039 = (void*)0;
char* p_937;
int sline_938;
char* sname_939;
struct buffer* source3_940;
char* head_941;
struct buffer* __dec_obj352;
void* __right_value1040 = (void*)0;
char* __dec_obj353;
void* __right_value1041 = (void*)0;
struct sBlock* block_942;
void* __right_value1042 = (void*)0;
struct sType* result_type_943;
void* __right_value1043 = (void*)0;
char* name_944;
void* __right_value1044 = (void*)0;
struct sType* self_type_945;
struct sType* __list_values33___946[1];
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct list$1sTypeph* param_types_947;
void* __right_value1047 = (void*)0;
char* __list_values34___948[1];
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1charph* param_names_949;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct list$1charph* param_default_parametors_950;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct buffer* header_buf_951;
void* __right_value1054 = (void*)0;
int i_952;
struct sType* param_type_953;
char* param_name_954;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct sFun* fun_955;
void* __right_value1060 = (void*)0;
struct sFun* fun2_956;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1067 = (void*)0;
struct sNode* node_957;
char* __dec_obj358;
struct buffer* __dec_obj359;
char* __dec_obj360;
char* __dec_obj361;
char* __dec_obj362;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
struct tuple2$2sFunpcharph* __result264__;
    last_code_912=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj349=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_913=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj350=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_914=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj351=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_915=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_916=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_917=((void*)0);
    real_fun_name_918=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_919=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_919;
    klass_920=type->mClass;
    if(    type->mPointerNum>0&&!klass_920->mNumber) {
        source_921=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3060, "buffer"))));
        buffer_append_str(source_921,"{\n");
        buffer_append_str(source_921,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_921,((char*)(__right_value1038=xsprintf("var result = new %s;\n",((char*)(__right_value1037=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        /* U11 */__right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1038 = come_decrement_ref_count2(__right_value1038, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_920->mProtocol) {
            name_922="_protocol_obj";
            char source2_923[1024];
            memset(&source2_923, 0, sizeof(char)            *(1024)            );
            snprintf(source2_923,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_921,source2_923);
            klass_920=map$2charphsClassphp_operator_load_element(info->classes,klass_920->mName);
            for(            o2_saved_924=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_920->mFields)),it_925=list$1tuple2$2charphsTypephph_begin((o2_saved_924));            !list$1tuple2$2charphsTypephph_end((o2_saved_924));            it_925=list$1tuple2$2charphsTypephph_next((o2_saved_924))            ){
                multiple_assign_var16=it_925;
                name_926=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_927=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_927->mClass->mName)&&type->mPointerNum==field_type_927->mPointerNum&&field_type_927->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_926,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_927->mArrayNum)>0) {
                    char source2_928[1024];
                    memset(&source2_928, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_928,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_926,name_926,name_926);
                    buffer_append_str(source_921,source2_928);
                }
                else {
                    char source2_929[1024];
                    memset(&source2_929, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_929,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_926,name_926);
                    buffer_append_str(source_921,source2_929);
                }
                /* U13 */name_926 = come_decrement_ref_count2(name_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_927,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_924,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_920=map$2charphsClassphp_operator_load_element(info->classes,klass_920->mName);
            for(            o2_saved_930=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_920->mFields)),it_931=list$1tuple2$2charphsTypephph_begin((o2_saved_930));            !list$1tuple2$2charphsTypephph_end((o2_saved_930));            it_931=list$1tuple2$2charphsTypephph_next((o2_saved_930))            ){
                multiple_assign_var17=it_931;
                name_932=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_933=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_933->mClass->mName)&&type->mPointerNum==field_type_933->mPointerNum&&field_type_933->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_933->mHeap) {
                    char source2_934[1024];
                    memset(&source2_934, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_934,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_932,name_932,name_932);
                    buffer_append_str(source_921,source2_934);
                }
                else if(                list$1sNodeph_length(field_type_933->mArrayNum)>0) {
                    char source2_935[1024];
                    memset(&source2_935, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_935,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_932,name_932,name_932);
                    buffer_append_str(source_921,source2_935);
                }
                else {
                    char source2_936[1024];
                    memset(&source2_936, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_936,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_932,name_932);
                    buffer_append_str(source_921,source2_936);
                }
                /* U13 */name_932 = come_decrement_ref_count2(name_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_933,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_930,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_921,((char*)(__right_value1039=xsprintf("return result;"))));
        /* U11 */__right_value1039 = come_decrement_ref_count2(__right_value1039, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_921,125);
        p_937=info->p;
        sline_938=info->sline;
        sname_939=(char*)come_increment_ref_count(info->sname);
        source3_940=(struct buffer*)come_increment_ref_count(info->source);
        head_941=info->head;
        __dec_obj352=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_921);
        come_call_finalizer3(__dec_obj352,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj353=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_918));
        /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_942=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_943=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_944=(char*)come_increment_ref_count(string_clone(real_fun_name_918));
        self_type_945=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_945->mHeap=(_Bool)0;
        param_types_947=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___946[0]=come_increment_ref_count(self_type_945),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3154, "struct list$1sTypeph")),1,__list_values33___946)));
        param_names_949=(struct list$1charph*)come_increment_ref_count((__list_values34___948[0]=come_increment_ref_count(((char*)(__right_value1047=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3155, "struct list$1charph")),1,__list_values34___948)));
        /* U11 */__right_value1047 = come_decrement_ref_count2(__right_value1047, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_950=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3156, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_950,((void*)0));
        header_buf_951=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3159, "buffer"))));
        buffer_append_str(header_buf_951,((char*)(__right_value1054=make_come_type_name_string(result_type_943,info))));
        /* U11 */__right_value1054 = come_decrement_ref_count2(__right_value1054, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_951," ");
        buffer_append_str(header_buf_951,real_fun_name_918);
        buffer_append_str(header_buf_951,"(");
        for(        i_952=0;        i_952<list$1sTypeph_length(param_types_947);        i_952++        ){
            param_type_953=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_947,i_952), "05function.c", 3167, 17));
            param_name_954=((char*)come_null_check(list$1charphp_operator_load_element(param_names_949,i_952), "05function.c", 3168, 18));
            buffer_append_str(header_buf_951,((char*)(__right_value1055=make_come_type_name_string(param_type_953,info))));
            /* U11 */__right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_951," ");
            buffer_append_str(header_buf_951,param_name_954);
            if(            i_952!=list$1sTypeph_length(param_types_947)-1) {
                buffer_append_str(header_buf_951,",");
            }
        }
        buffer_append_str(header_buf_951,")");
        result_type_943->mStatic=(_Bool)0;
        fun_955=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3182, "sFun")),(char*)come_increment_ref_count(name_944),(struct sType*)come_increment_ref_count(result_type_943),(struct list$1sTypeph*)come_increment_ref_count(param_types_947),(struct list$1charph*)come_increment_ref_count(param_names_949),(struct list$1charph*)come_increment_ref_count(param_default_parametors_950),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_942),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_951)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_955->mCloner=(_Bool)1;
        fun2_956=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1060=__builtin_string(fun_name))));
        /* U11 */__right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_956==((void*)0)||fun2_956->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_944)),(struct sFun*)come_increment_ref_count(fun_955));
        }
        cloner_917=fun_955;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3199, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sFunNode*)(__right_value1063=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3199, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_955),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_957=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1063,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_957,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj358=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_939);
        /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_938;
        __dec_obj359=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_940);
        come_call_finalizer3(__dec_obj359,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_937;
        info->head=head_941;
        info->sline=sline_938;
        /*i*/come_call_finalizer3(source_921,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_939 = come_decrement_ref_count2(sname_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_940,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_942,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_943,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_944 = come_decrement_ref_count2(name_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_945,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_947,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_949,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_950,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_951,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_955,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_957) { node_957 = come_decrement_ref_count2(node_957, ((struct sNode*)node_957)->finalize, ((struct sNode*)node_957)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_916;
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_912);
    /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_913);
    /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj362=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_914);
    /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_915;
    __result264__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1069=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3222, "struct tuple2$2sFunpcharph")),cloner_917,(char*)come_increment_ref_count(real_fun_name_918))));
    /* U13 */last_code_912 = come_decrement_ref_count2(last_code_912, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_913 = come_decrement_ref_count2(last_code2_913, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_914 = come_decrement_ref_count2(last_code3_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_918 = come_decrement_ref_count2(real_fun_name_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_919,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1069,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_959;
char* __dec_obj363;
char* last_code2_960;
char* __dec_obj364;
char* last_code3_961;
char* __dec_obj365;
_Bool comma_instead_of_semicolon_962;
struct sClass* current_stack_frame_struct_963;
struct sFun* cloner_964;
void* __right_value1070 = (void*)0;
char* real_fun_name_965;
void* __right_value1071 = (void*)0;
struct sType* type2_966;
struct sClass* klass_967;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct buffer* source_968;
void* __right_value1074 = (void*)0;
int i_969;
struct list$1tuple2$2charphsTypephph* o2_saved_970;
struct tuple2$2charphsTypeph* it_971;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_972=0;
struct sType* field_type_973=0;
void* __right_value1075 = (void*)0;
char* p_976;
int sline_977;
char* sname_978;
struct buffer* source3_979;
char* head_980;
struct buffer* __dec_obj366;
void* __right_value1076 = (void*)0;
char* __dec_obj367;
void* __right_value1077 = (void*)0;
struct sBlock* block_981;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct sType* result_type_982;
void* __right_value1080 = (void*)0;
char* name_983;
void* __right_value1081 = (void*)0;
struct sType* self_type_984;
struct sType* __list_values35___985[1];
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct list$1sTypeph* param_types_986;
void* __right_value1084 = (void*)0;
char* __list_values36___987[1];
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct list$1charph* param_names_988;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1charph* param_default_parametors_989;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct buffer* header_buf_990;
void* __right_value1091 = (void*)0;
int i_991;
struct sType* param_type_992;
char* param_name_993;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sFun* fun_994;
void* __right_value1097 = (void*)0;
struct sFun* fun2_995;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value1104 = (void*)0;
struct sNode* node_996;
char* __dec_obj372;
struct buffer* __dec_obj373;
char* __dec_obj374;
char* __dec_obj375;
char* __dec_obj376;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct tuple2$2sFunpcharph* __result267__;
    last_code_959=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj363=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_960=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj364=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_961=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj365=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_962=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_963=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_964=((void*)0);
    real_fun_name_965=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_966=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_966;
    klass_967=type->mClass;
    if(    type->mPointerNum>0&&!klass_967->mNumber) {
        source_968=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3249, "buffer"))));
        buffer_append_str(source_968,"{\n");
        buffer_append_str(source_968,"var result = new buffer();\n");
        buffer_append_str(source_968,((char*)(__right_value1074=xsprintf("result.append_str(\"%s {\");\n",klass_967->mName))));
        /* U11 */__right_value1074 = come_decrement_ref_count2(__right_value1074, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_969=0;
        klass_967=map$2charphsClassphp_operator_load_element(info->classes,klass_967->mName);
        for(        o2_saved_970=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_967->mFields)),it_971=list$1tuple2$2charphsTypephph_begin((o2_saved_970));        !list$1tuple2$2charphsTypephph_end((o2_saved_970));        it_971=list$1tuple2$2charphsTypephph_next((o2_saved_970))        ){
            multiple_assign_var18=it_971;
            name_972=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_973=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_973->mClass->mName)&&type->mPointerNum==field_type_973->mPointerNum&&field_type_973->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_969==list$1tuple2$2charphsTypephph_length(klass_967->mFields)-1) {
                char source2_974[1024];
                memset(&source2_974, 0, sizeof(char)                *(1024)                );
                snprintf(source2_974,1024,"result.append_str(\"%s:\");\n",name_972);
                buffer_append_str(source_968,source2_974);
                snprintf(source2_974,1024,"result.append_str(self.%s.to_string());\n",name_972);
                buffer_append_str(source_968,source2_974);
            }
            else {
                char source2_975[1024];
                memset(&source2_975, 0, sizeof(char)                *(1024)                );
                snprintf(source2_975,1024,"result.append_str(\"%s:\");\n",name_972);
                buffer_append_str(source_968,source2_975);
                snprintf(source2_975,1024,"result.append_str(self.%s.to_string());\n",name_972);
                buffer_append_str(source_968,source2_975);
                snprintf(source2_975,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_968,source2_975);
            }
            i_969++;
            /* U13 */name_972 = come_decrement_ref_count2(name_972, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_973,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_970,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_968,"result.append_str(\"}\");\n");
        buffer_append_str(source_968,((char*)(__right_value1075=xsprintf("return result.to_string();\n"))));
        /* U11 */__right_value1075 = come_decrement_ref_count2(__right_value1075, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_968,125);
        p_976=info->p;
        sline_977=info->sline;
        sname_978=(char*)come_increment_ref_count(info->sname);
        source3_979=(struct buffer*)come_increment_ref_count(info->source);
        head_980=info->head;
        __dec_obj366=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_968);
        come_call_finalizer3(__dec_obj366,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj367=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_965));
        /*G*/ __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_981=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_982=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3316, "sType")),"char*",(_Bool)0,info));
        result_type_982->mHeap=(_Bool)1;
        name_983=(char*)come_increment_ref_count(string_clone(real_fun_name_965));
        self_type_984=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_984->mHeap=(_Bool)0;
        param_types_986=(struct list$1sTypeph*)come_increment_ref_count((__list_values35___985[0]=come_increment_ref_count(self_type_984),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3321, "struct list$1sTypeph")),1,__list_values35___985)));
        param_names_988=(struct list$1charph*)come_increment_ref_count((__list_values36___987[0]=come_increment_ref_count(((char*)(__right_value1084=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3322, "struct list$1charph")),1,__list_values36___987)));
        /* U11 */__right_value1084 = come_decrement_ref_count2(__right_value1084, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_989=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3323, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_989,((void*)0));
        header_buf_990=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3326, "buffer"))));
        buffer_append_str(header_buf_990,((char*)(__right_value1091=make_come_type_name_string(result_type_982,info))));
        /* U11 */__right_value1091 = come_decrement_ref_count2(__right_value1091, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_990," ");
        buffer_append_str(header_buf_990,real_fun_name_965);
        buffer_append_str(header_buf_990,"(");
        for(        i_991=0;        i_991<list$1sTypeph_length(param_types_986);        i_991++        ){
            param_type_992=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_986,i_991), "05function.c", 3334, 19));
            param_name_993=((char*)come_null_check(list$1charphp_operator_load_element(param_names_988,i_991), "05function.c", 3335, 20));
            buffer_append_str(header_buf_990,((char*)(__right_value1092=make_come_type_name_string(param_type_992,info))));
            /* U11 */__right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_990," ");
            buffer_append_str(header_buf_990,param_name_993);
            if(            i_991!=list$1sTypeph_length(param_types_986)-1) {
                buffer_append_str(header_buf_990,",");
            }
        }
        buffer_append_str(header_buf_990,")");
        result_type_982->mStatic=(_Bool)0;
        fun_994=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3349, "sFun")),(char*)come_increment_ref_count(name_983),(struct sType*)come_increment_ref_count(result_type_982),(struct list$1sTypeph*)come_increment_ref_count(param_types_986),(struct list$1charph*)come_increment_ref_count(param_names_988),(struct list$1charph*)come_increment_ref_count(param_default_parametors_989),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_981),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_990)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_994->mCloner=(_Bool)1;
        fun2_995=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1097=__builtin_string(fun_name))));
        /* U11 */__right_value1097 = come_decrement_ref_count2(__right_value1097, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_995==((void*)0)||fun2_995->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_983)),(struct sFun*)come_increment_ref_count(fun_994));
        }
        cloner_964=fun_994;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3366, "struct sNode");
        _inf_obj_value16=come_increment_ref_count(((struct sFunNode*)(__right_value1100=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3366, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_994),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFunNode_finalize;
        _inf_value16->clone=(void*)sFunNode_clone;
        _inf_value16->compile=(void*)sFunNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFunNode_kind;
        node_996=(struct sNode*)come_increment_ref_count(_inf_value16);
        /*g*/come_call_finalizer3(__right_value1100,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_996,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj372=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_978);
        /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_977;
        __dec_obj373=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_979);
        come_call_finalizer3(__dec_obj373,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_976;
        info->head=head_980;
        info->sline=sline_977;
        /*i*/come_call_finalizer3(source_968,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_978 = come_decrement_ref_count2(sname_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_979,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_981,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_982,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_983 = come_decrement_ref_count2(name_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_984,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_986,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_988,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_989,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_990,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_994,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_996) { node_996 = come_decrement_ref_count2(node_996, ((struct sNode*)node_996)->finalize, ((struct sNode*)node_996)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_963;
    __dec_obj374=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_959);
    /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj375=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_960);
    /*G*/ __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj376=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_961);
    /*G*/ __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_962;
    __result267__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1106=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3389, "struct tuple2$2sFunpcharph")),cloner_964,(char*)come_increment_ref_count(real_fun_name_965))));
    /* U13 */last_code_959 = come_decrement_ref_count2(last_code_959, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_960 = come_decrement_ref_count2(last_code2_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_961 = come_decrement_ref_count2(last_code3_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_965 = come_decrement_ref_count2(real_fun_name_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_966,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1106,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj368;
struct sFun* __dec_obj369;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj368=self->sname;
            /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj369=self->mFun;
            come_call_finalizer3(__dec_obj369,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result265__;
void* __right_value1101 = (void*)0;
struct sFunNode* result_997;
void* __right_value1102 = (void*)0;
char* __dec_obj370;
void* __right_value1103 = (void*)0;
struct sFun* __dec_obj371;
struct sFunNode* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_997=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_997->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj370=result_997->sname;
        result_997->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj371=result_997->mFun;
        result_997->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj371,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_997;
    /*i*/come_call_finalizer3(result_997,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

